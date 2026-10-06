// Mac Keyboard

#pragma once

#define XXX &none
#define ___ &trans

// Apple "Globe" key
// https://github.com/zmkfirmware/zmk/issues/947
// #define GLOBE CAPSLOCK

// clang-format off


// Super key on Mac: Option+Command+Ctrl
#define SUPER (LA(LG(LCTRL)))

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
 * │ ^ │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ ß │ ´ │     │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
 * │     │ Q │ W │ E │ R │ T │ Z │ U │ I │ O │ P │ Ü │ + │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐  │
 * │      │ A │ S │ D │ F │ G │ H │ J │ K │ L │ Ö │ Ä │ # │  │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴──┤
 * │    │ < │ Y │ X │ C │ V │ B │ N │ M │ , │ . │ - │        │
 * ├────┴┬──┴─┬─┴───┼───┴───┴───┴───┴───┴───┼───┴─┬─┴──┬─────┤
 * │     │    │     │                       │     │    │     │
 * └─────┴────┴─────┴───────────────────────┴─────┴────┴─────┘
 */

// Row 1
#define DE_CARET LS(RA(N6)) // ^
#define DE_CIRC GRAVE // ^ (dead)
#define DE_1 N1       // 1
#define DE_2 N2       // 2
#define DE_3 N3       // 3
#define DE_4 N4       // 4
#define DE_5 N5       // 5
#define DE_6 N6       // 6
#define DE_7 N7       // 7
#define DE_8 N8       // 8
#define DE_9 N9       // 9
#define DE_0 N0       // 0
#define DE_SS MINUS   // ß
#define DE_ACUT EQUAL // ´ (dead)

// Row 2
#define DE_Q Q       // Q
#define DE_W W       // W
#define DE_E E       // E
#define DE_R R       // R
#define DE_T T       // T
#define DE_Z Y       // Z
#define DE_U U       // U
#define DE_I I       // I
#define DE_O O       // O
#define DE_P P       // P
#define DE_UDIA LBKT // Ü
#define DE_PLUS RBKT // +

// Row 3
#define DE_A A            // A
#define DE_S S            // S
#define DE_D D            // D
#define DE_F F            // F
#define DE_G G            // G
#define DE_H H            // H
#define DE_J J            // J
#define DE_K K            // K
#define DE_L L            // L
#define DE_ODIA SEMICOLON // Ö
#define DE_ADIA APOS      // Ä
#define DE_HASH BSLH      // #

// Row 4
#define DE_LABK GRAVE // <
#define DE_Y Z        // Y
#define DE_X X        // X
#define DE_C C        // C
#define DE_V V        // V
#define DE_B B        // B
#define DE_N N        // N
#define DE_M M        // M
#define DE_COMM COMMA // ,
#define DE_DOT DOT    // .
#define DE_MINS SLASH // -

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
 * │ ° │ ! │ " │ § │ $ │ % │ & │ / │ ( │ ) │ = │ ? │ ` │     │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │ * │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐  │
 * │      │   │   │   │   │   │   │   │   │   │   │   │ ' │  │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴──┤
 * │    │ > │   │   │   │   │   │   │   │ ; │ : │ _ │        │
 * ├────┴┬──┴─┬─┴───┼───┴───┴───┴───┴───┴───┼───┴─┬─┴──┬─────┤
 * │     │    │     │                       │     │    │     │
 * └─────┴────┴─────┴───────────────────────┴─────┴────┴─────┘
 */

// Row 1
#define DE_DEG  LS(GRAVE) // °
#define DE_EXCL LS(N1)    // !
#define DE_DQUO LS(N2)    // "
#define DE_SECT LS(N3)    // §
#define DE_DLR  LS(N4)    // $
#define DE_PERC LS(N5)    // %
#define DE_AMPR LS(N6)    // &
#define DE_SLSH LS(N7)    // /
#define DE_LPRN LS(N8)    // (
#define DE_RPRN LS(N9)    // )
#define DE_EQL  LS(N0)    // =
#define DE_QUES LS(MINUS)   // ?
#define DE_GRV  LS(EQUAL) // ` (dead)

// Row 2
#define DE_ASTR LS(RBKT) // *
// #define DE_STAR RBRC // "*" DE_ASTR

// Row 3
#define DE_QUOT LS(BSLH) // '

// Row 4
#define DE_RABK LS(GRAVE) // >
#define DE_SCLN LS(COMMA) // ;
#define DE_COLN LS(DOT)  // :
#define DE_UNDS LS(SLASH) // _

/* Alted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
 * │ „ │ ¡ │ “ │ ¶ │ ¢ │ [ │ ] │ | │ { │ } │ ≠ │ ¿ │   │     │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
 * │     │ « │ ∑ │ € │ ® │ † │ Ω │ ¨ │ ⁄ │ Ø │ π │ • │ ± │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐  │
 * │      │ Å │ ‚ │ ∂ │ ƒ │ © │ ª │ º │ ∆ │ @ │ Œ │ Æ │ ‘ │  │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴──┤
 * │    │ ≤ │ ¥ │ ≈ │ Ç │ √ │ ∫ │ ~ │ µ │ ∞ │ … │ – │        │
 * ├────┴┬──┴─┬─┴───┼───┴───┴───┴───┴───┴───┼───┴─┬─┴──┬─────┤
 * │     │    │     │                       │     │    │     │
 * └─────┴────┴─────┴───────────────────────┴─────┴────┴─────┘
 */

// Row 1
#define DE_DLQU RA(GRAVE)   // „
#define DE_IEXL RA(N1)    // ¡
#define DE_LDQU RA(N2)    // “
#define DE_PILC RA(N3)    // ¶
#define DE_CENT RA(N4)    // ¢
#define DE_LBRC RA(N5)    // [
#define DE_RBRC RA(N6)    // ]
#define DE_PIPE RA(N7)    // |
#define DE_LCBR RA(N8)    // {
#define DE_RCBR RA(N9)    // }
#define DE_NEQL RA(N0)    // ≠
#define DE_IQUE RA(MINUS)   // ¿

// Row 2
#define DE_LDAQ RA(Q)    // «
#define DE_NARS RA(W)    // ∑
#define DE_EURO RA(E)    // €
#define DE_REGD RA(R)    // ®
#define DE_DAGG RA(T)    // †
#define DE_OMEG RA(Z)    // Ω
#define DE_DIAE RA(U)    // ¨ (dead)
#define DE_FRSL RA(I)    // ⁄
#define DE_OSTR RA(O)    // Ø
#define DE_PI   RA(P)    // π
#define DE_BULT RA(LBKT) // •
#define DE_PLMN RA(RBKT) // ±

// Row 3
#define DE_ARNG RA(A)    // Å
#define DE_SLQU RA(S)    // ‚
#define DE_PDIF RA(D)    // ∂
#define DE_FHK  RA(F)    // ƒ
#define DE_COPY RA(G)    // ©
#define DE_FORD RA(H)    // ª
#define DE_MORD RA(J)    // º
#define DE_INCR RA(K)    // ∆
#define DE_AT   RA(L)    // @
#define DE_OE   RA(SEMICOLON) // Œ
#define DE_AE   RA(APOS) // Æ
#define DE_LSQU RA(BSLH) // ‘

// Row 4
#define DE_LTEQ RA(GRAVE) // ≤
#define DE_YEN  RA(Y)    // ¥
#define DE_AEQL RA(X)    // ≈
#define DE_CCCE RA(C)    // Ç
#define DE_SQRT RA(V)    // √
#define DE_INTG RA(B)    // ∫
#define DE_TILD RA(N)    // ~ (dead)
#define DE_MICR RA(M)    // µ
#define DE_INFN RA(COMMA) // ∞
#define DE_ELLP RA(DOT)  // …
#define DE_NDSH RA(MINUS) // –

/* Shift+Alted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
 * │   │ ¬ │ ” │   │ £ │ ﬁ │   │ \ │ ˜ │ · │ ¯ │ ˙ │ ˚ │     │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
 * │     │ » │   │ ‰ │ ¸ │ ˝ │ ˇ │ Á │ Û │   │ ∏ │   │  │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐  │
 * │      │   │ Í │ ™ │ Ï │ Ì │ Ó │ ı │   │ ﬂ │   │   │   │  │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴──┤
 * │    │ ≥ │ ‡ │ Ù │   │ ◊ │ ‹ │ › │ ˘ │ ˛ │ ÷ │ — │        │
 * ├────┴┬──┴─┬─┴───┼───┴───┴───┴───┴───┴───┼───┴─┬─┴──┬─────┤
 * │     │    │     │                       │     │    │     │
 * └─────┴────┴─────┴───────────────────────┴─────┴────┴─────┘
 */

// Row 1
#define DE_NOT  LS(RA(N1))    // ¬
#define DE_RDQU LS(RA(N2))    // ”
#define DE_PND  LS(RA(N4))    // £
#define DE_FI   LS(RA(N5))    // ﬁ
#define DE_BSLS LS(RA(N7))    // (backslash)
#define DE_STIL LS(RA(N8))    // ˜
#define DE_MDDT LS(RA(N9))    // ·
#define DE_MACR LS(RA(N0))    // ¯
#define DE_DOTA LS(RA(MINUS))   // ˙
#define DE_RNGA LS(RA(EQUAL)) // ˚

// Row 2
#define DE_RDAQ LS(RA(Q))    // »
#define DE_PERM LS(RA(E))    // ‰
#define DE_CEDL LS(RA(R))    // ¸
#define DE_DACU LS(RA(T))    // ˝
#define DE_CARN LS(RA(Z))    // ˇ
#define DE_AACU LS(RA(U))    // Á
#define DE_UCIR LS(RA(I))    // Û
#define DE_NARP LS(RA(P))    // ∏
#define DE_APPL LS(RA(RPAR)) //  (Apple logo)

// Row 3
#define DE_IACU LS(RA(S))    // Í
#define DE_TM   LS(RA(D))    // ™
#define DE_IDIA LS(RA(F))    // Ï
#define DE_IGRV LS(RA(G))    // Ì
#define DE_OACU LS(RA(H))    // Ó
#define DE_DLSI LS(RA(J))    // ı
#define DE_FL   LS(RA(L))    // ﬂ

// Row 4
#define DE_GTEQ LS(RA(GRAVE)) // ≥
#define DE_DDAG LS(RA(Y))    // ‡
#define DE_UGRV LS(RA(X))    // Ù
#define DE_LOZN LS(RA(V))    // ◊
#define DE_LSAQ LS(RA(B))    // ‹
#define DE_RSAQ LS(RA(N))    // ›
#define DE_BREV LS(RA(M))    // ˘
#define DE_OGON LS(RA(COMMA)) // ˛
#define DE_DIV  LS(RA(DOT))  // ÷
#define DE_MDSH LS(RA(MINUS)) // —

// DE_W_XXX for Windows
#define DE_W_TILDE RA(RBKT)
#define DE_W_HASH BSLH
#define DE_W_QUOT LS(BSLH)
#define DE_W_ACUT EQUAL
#define DE_W_BSLS RA(MINUS)
#define DE_W_PLUS RBKT
#define DE_W_EQL LS(N0)
#define DE_W_AT RA(Q)
#define DE_W_CARET GRAVE
#define DE_W_LABK NUBS
#define DE_W_RABK LS(NUBS)
#define DE_W_PIPE RA(NUBS)
#define DE_W_LBRC RA(N8)
#define DE_W_RBRC RA(N9)
#define DE_W_LPRN RS(N8)
#define DE_W_RPRN RS(N9)
#define DE_W_EURO RA(E)
#define DE_W_LCBR RA(N7)
#define DE_W_RCBR RA(N0)

// DE_LN_XXX for linux and windows
#define DE_LN_LABK NUBS // <
#define DE_LN_RABK LS(NUBS) // >
#define DE_LN_LBRC RA(N5) // [
#define DE_LN_RBRC RA(N6) // ]
#define DE_LN_LPRN LS(N8) // (
#define DE_LN_RPRN LS(N9) // )
#define DE_LN_LCBR RA(N8) // {
#define DE_LN_RCBR RA(N9) // }
#define DE_LN_FSLH LS(N7) // slash
#define DE_LN_BSLH LS(RA(N7)) // backslash
#define DE_LN_PIPE RA(NUBS) // pipe
#define DE_LN_AT LS(RA(Q)) // @
#define DE_LN_AMPS LS(N6) // &
#define DE_LN_TILDE LS(RA(N8)) // ~
#define DE_LN_CARET RA(APOS) // ^
#define DE_LN_DQUO LS(N2) // "

// ###############
// #define DE_FSLH AMPS  // "/" DE_SLSH
// #define DE_STAR RBRC  // "*" DE_ASTR
// #define DE_EQUAL RPAR // = DE_EQL
// #define DE_GRAVE PLUS         // ` DE_GRV
// #define DE_HASH BSLH          // #
// #define DE_TILDE RA(RBKT)     // ~
// #define DE_PIPE RA(GRAVE)     // "|"
// #define DE_AMPS CARET         // "&" DE_AMPR
// #define DE_BSLH RA(MINUS)     // "\" DE_BSLS
// #define DE_QUESTION LS(MINUS) // ? DE_QUES
// #define DE_AT RA(Q)           // "@"
// #define DE_LPAR LS(N8)        // ( DE_LPRN
// #define DE_RPAR LS(N9)        // ) DE_RPRN
// #define DE_LBKT RA(N8)        // [ DE_LBRC
// #define DE_RBKT RA(N9)        // ] DE_RBRC
// #define DE_LBRC RA(N7)        // { DE_LCBR
// #define DE_RBRC RA(N0)        // } DE_RCBR
// #define DE_APOS PIPE      // ' DE_QUOT



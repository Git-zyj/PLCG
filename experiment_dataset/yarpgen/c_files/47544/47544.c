/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((((-((var_15 ? var_9 : var_6))))), 35747322042253312));
    var_17 = var_5;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_18 = -2;
        arr_2 [i_0] = var_5;
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 2; i_2 < 10;i_2 += 1) /* same iter space */
        {
            var_19 = var_8;
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 11;i_4 += 1)
                {
                    {

                        for (int i_5 = 2; i_5 < 10;i_5 += 1)
                        {
                            arr_18 [i_1] [i_3] [i_4] [i_3] = (arr_1 [i_1]);
                            var_20 |= -17462798469715925321;
                        }
                        for (int i_6 = 2; i_6 < 10;i_6 += 1)
                        {
                            arr_22 [i_2 - 2] [i_1] [i_2 - 2] [i_2 - 2] [i_6 - 2] [i_6 - 2] [i_2 - 2] = (arr_5 [i_2 + 2]);
                            arr_23 [i_1] = var_15;
                            arr_24 [1] [i_2] [1] [i_4] [i_1] [i_6] = ((35747322042253312 ? 18410996751667298304 : -531817836));
                            var_21 = ((!((((arr_13 [i_1] [i_1] [i_1] [i_2]) ? (((!(arr_1 [i_6])))) : ((var_10 ? var_1 : var_13)))))));
                        }
                        arr_25 [i_1] = (((arr_19 [i_3] [i_3 - 2] [i_3] [i_3] [i_3 + 1] [i_3] [i_3]) * var_12));
                        var_22 = -var_13;
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_7 = 2; i_7 < 10;i_7 += 1) /* same iter space */
        {
            var_23 += 35747322042253311;
            arr_29 [i_1] [i_1] [i_1] = (!124);
            var_24 = (461003314 || 18410996751667298313);
            var_25 = (arr_20 [i_1]);
        }

        /* vectorizable */
        for (int i_8 = 2; i_8 < 11;i_8 += 1)
        {

            for (int i_9 = 2; i_9 < 11;i_9 += 1)
            {
                arr_34 [i_1] [i_8] [i_1] = var_14;
                arr_35 [i_1] [i_1] [i_1] = 2147483621;
                arr_36 [i_1] = (!var_11);

                for (int i_10 = 1; i_10 < 9;i_10 += 1) /* same iter space */
                {
                    var_26 = -1011671739;
                    arr_40 [i_1 - 2] [i_9] |= ((((18410996751667298304 ? 35747322042253311 : 18410996751667298287)) < (((-977469377 ? -65 : -9223372036854775786)))));
                }
                for (int i_11 = 1; i_11 < 9;i_11 += 1) /* same iter space */
                {

                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        arr_48 [i_12] [i_1 - 2] [i_8] [i_9] [i_11] [i_12] [i_9] |= ((((18410996751667298313 ? (arr_12 [i_1] [i_1] [i_1] [i_1]) : (arr_9 [i_1] [i_8] [i_1] [7])))) ? (var_14 || var_4) : var_4);
                        var_27 ^= 64;
                        var_28 = var_3;
                        var_29 = (((~var_10) ? 1863721786 : (~var_4)));
                        arr_49 [i_12] [i_1] [i_1] [i_1] [i_1] [i_1] = (!var_9);
                    }
                    var_30 += ((18410996751667298313 ? (arr_9 [i_1 - 2] [i_8] [i_9] [i_11]) : 0));
                }
                for (int i_13 = 0; i_13 < 12;i_13 += 1)
                {
                    var_31 = var_13;
                    arr_53 [i_1] [8] [6] [i_1] [i_8] = arr_32 [i_9 + 1] [i_8] [i_1];
                }
                arr_54 [i_9] [i_9] [i_9] [i_9] |= ((2147483621 > (~-13335)));
            }
            for (int i_14 = 1; i_14 < 10;i_14 += 1)
            {
                arr_57 [i_1] = (arr_1 [i_8 - 2]);
                var_32 = -var_7;
            }
            arr_58 [i_1] [i_8] = var_8;
            arr_59 [i_1] [i_8] [i_1] = (arr_50 [i_1]);
        }
    }
    for (int i_15 = 2; i_15 < 9;i_15 += 1)
    {
        arr_62 [i_15 + 1] = (arr_60 [i_15 + 3]);
        arr_63 [i_15] [11] = (min(var_9, ((var_10 ? var_3 : var_9))));

        for (int i_16 = 0; i_16 < 13;i_16 += 1)
        {
            arr_66 [i_15] [i_15] = var_4;
            var_33 = (min(var_33, var_15));
            arr_67 [i_15] [i_15] = 13334;

            for (int i_17 = 1; i_17 < 12;i_17 += 1)
            {
                arr_71 [i_17] [i_17] [i_17] = (arr_68 [i_15] [i_15] [i_15]);
                var_34 *= (var_14 ? (max(var_0, 14645949090675461551)) : var_9);
                arr_72 [i_15] [i_16] [i_17] = (arr_61 [i_16] [i_16]);
            }
        }
        for (int i_18 = 2; i_18 < 11;i_18 += 1)
        {
            var_35 = 18446744073709551360;
            var_36 = (min(var_36, ((var_5 ? (!0) : (!4294967295)))));
        }
        for (int i_19 = 0; i_19 < 13;i_19 += 1)
        {
            arr_77 [i_15] = (max(((((140017285 ? 32256 : var_9)))), (arr_65 [i_19])));
            var_37 += (max((((-(max(-278429580, var_6))))), (!-1011671739)));
            arr_78 [i_19] [i_15] = ((((((arr_61 [i_15 + 2] [i_15 - 1]) - 13))) ? var_6 : var_10));
            arr_79 [i_15 - 2] = var_5;
        }
    }
    for (int i_20 = 0; i_20 < 13;i_20 += 1)
    {
        arr_84 [i_20] = ((!((((~255) ? 260 : (arr_74 [i_20]))))));
        arr_85 [i_20] [i_20] = (874226038 | -37);
        var_38 = 2147483622;

        for (int i_21 = 1; i_21 < 12;i_21 += 1) /* same iter space */
        {
            arr_90 [i_20] [i_20] [i_20] = 140737488355324;
            /* LoopNest 2 */
            for (int i_22 = 1; i_22 < 11;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 13;i_23 += 1)
                {
                    {
                        var_39 = (max(var_39, (arr_81 [i_21] [11])));
                        var_40 = (max(var_40, ((max((((-2147483623 ? -11132 : (arr_73 [i_21 - 1] [i_22] [i_22 - 1])))), ((((!(arr_75 [6] [i_22] [i_23]))) ? var_15 : (((241 ? var_10 : var_0))))))))));
                    }
                }
            }
            var_41 = var_6;
            /* LoopNest 2 */
            for (int i_24 = 0; i_24 < 13;i_24 += 1)
            {
                for (int i_25 = 0; i_25 < 13;i_25 += 1)
                {
                    {
                        arr_100 [i_25] [i_20] [i_20] [i_20] = -1298379787;
                        var_42 = (max(var_42, 1194214439506261237));
                        arr_101 [i_25] [i_25] = var_8;
                        var_43 ^= ((((!(arr_61 [i_21 - 1] [i_21]))) ? (((var_10 ? (arr_61 [i_21 - 1] [i_21 - 1]) : -1298379787))) : (min(2147483646, var_12))));
                    }
                }
            }
        }
        for (int i_26 = 1; i_26 < 12;i_26 += 1) /* same iter space */
        {
            arr_104 [i_20] [i_20] [i_26] = 103;
            /* LoopNest 3 */
            for (int i_27 = 0; i_27 < 13;i_27 += 1)
            {
                for (int i_28 = 0; i_28 < 13;i_28 += 1)
                {
                    for (int i_29 = 4; i_29 < 11;i_29 += 1)
                    {
                        {
                            arr_111 [i_20] [0] [i_20] [0] |= (4126473764 ? -99 : 244);
                            var_44 += (arr_95 [i_29 - 1] [i_29] [i_27]);
                            var_45 = max(var_12, var_12);
                            var_46 = (max(var_46, ((max(((var_11 ? -13329 : (arr_81 [i_29 - 4] [i_26 - 1]))), ((((((var_8 ? 2147483626 : (arr_99 [2] [i_27] [2] [8] [i_27] [i_27])))) ? 13335 : (!var_11)))))))));
                        }
                    }
                }
            }
        }
        for (int i_30 = 1; i_30 < 12;i_30 += 1) /* same iter space */
        {
            arr_114 [i_20] [i_30] [i_30] |= (max((arr_60 [i_20]), (arr_89 [i_20] [i_30] [i_30])));
            var_47 = ((!(((var_14 ? var_7 : (arr_64 [i_30 + 1]))))));

            /* vectorizable */
            for (int i_31 = 0; i_31 < 13;i_31 += 1)
            {
                var_48 = var_11;
                arr_118 [i_30] [i_30] = var_12;
            }
            var_49 = (((18446744073709551615 * var_10) ? ((var_9 ? ((min((arr_81 [i_20] [i_30]), (arr_88 [i_20] [i_30] [i_20])))) : (max((arr_92 [i_20] [i_20] [i_20]), 35747322042253311)))) : var_9));
        }
    }
    #pragma endscop
}

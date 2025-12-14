/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = max(((((((max(53492, 1)))) > -4))), var_7);
        var_13 |= (max(((((arr_1 [i_0 + 3] [i_0 + 1]) ? 46 : (arr_1 [i_0 + 1] [i_0 + 3])))), 0));
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_14 += 2147483632;

        for (int i_2 = 1; i_2 < 18;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 4; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    {
                        arr_19 [i_1] [i_1] [i_3] [i_1] = (arr_11 [i_1]);
                        arr_20 [i_4] |= ((min(1993562090, ((9223372036854775807 ? -3438154009663033463 : -2147483631)))));
                    }
                }
            }
            var_15 = (max(var_15, -var_8));
            arr_21 [i_1] [i_2] [i_1] = ((((min(var_3, ((var_1 ? 23133 : var_8))))) ? 1 : ((~(var_9 == -118)))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 20;i_6 += 1)
                {
                    {
                        arr_28 [i_1] [i_2 + 1] [3] [i_1] = min(((37822 ? var_6 : (arr_11 [i_6]))), var_11);

                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            var_16 = (max(var_16, ((min(-22732, var_4)))));
                            var_17 = (max(var_17, var_2));
                            arr_31 [i_7] [i_1] [i_5] [i_1] [i_1] [i_1] [i_1] = (min((arr_30 [i_1]), (((18 ? -5252892271670767102 : var_12)))));
                            var_18 ^= (min(var_9, (((arr_3 [i_5]) ? ((max(var_2, 12376))) : var_4))));
                        }
                        for (int i_8 = 3; i_8 < 18;i_8 += 1)
                        {
                            var_19 = (max(var_19, var_8));
                            arr_34 [i_1] [0] [i_1] [0] [i_8 - 2] = (((35900 + var_10) ? ((((var_8 && (arr_16 [14] [i_1] [i_1] [i_1]))) ? (((min(var_7, 0)))) : ((var_9 ? var_8 : var_8)))) : (((var_2 ? ((40720 ? var_10 : var_1)) : (~1))))));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_9 = 1; i_9 < 18;i_9 += 1) /* same iter space */
        {
            arr_37 [i_1] [i_1] [i_1 + 1] = 1;
            var_20 += (~121);
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 19;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 19;i_12 += 1)
                    {
                        {
                            var_21 = (max(var_21, 2063028643));
                            var_22 += ((!(27719 ^ 127)));
                            var_23 = var_8;
                            arr_46 [i_1] [i_1] [i_1] [i_1 + 1] [i_1] [i_1] = arr_3 [i_1];
                            var_24 -= (arr_40 [i_12 - 1] [i_11] [i_11 + 2] [i_1 + 1]);
                        }
                    }
                }
            }
        }
        for (int i_13 = 1; i_13 < 18;i_13 += 1) /* same iter space */
        {
            arr_51 [i_1] = 18446744073709551615;
            var_25 = (max(var_25, var_7));
        }
        /* LoopNest 3 */
        for (int i_14 = 1; i_14 < 19;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                for (int i_16 = 2; i_16 < 20;i_16 += 1)
                {
                    {

                        for (int i_17 = 1; i_17 < 20;i_17 += 1)
                        {
                            arr_60 [i_1] = 56;
                            var_26 = var_10;
                            var_27 = 24815;
                        }
                        for (int i_18 = 0; i_18 < 21;i_18 += 1)
                        {
                            var_28 = (max((max((arr_42 [i_14 - 1] [i_14 - 1] [i_14 - 1]), var_10)), ((var_12 ? var_10 : var_11))));
                            var_29 = ((((min((var_7 / var_9), 128))) ? (max((max(var_1, var_2)), 0)) : var_12));
                        }
                        for (int i_19 = 0; i_19 < 21;i_19 += 1)
                        {
                            arr_65 [i_15] [i_1] = (~(((((var_3 ? var_0 : var_5)) > (((arr_56 [i_1 - 1] [i_1] [i_16] [i_16] [i_16] [i_19]) ? 45974 : var_0))))));
                            var_30 = ((((var_0 > (arr_6 [i_1]))) ? -27320 : (arr_42 [i_1 + 2] [i_14 - 1] [i_16 + 1])));
                            arr_66 [i_1] [i_15] [i_19] = (-821995262 || 56683);
                            arr_67 [i_19] [i_16 - 1] [i_15] [i_14] [i_19] |= ((((min(234881024, 14667))) ? (((var_5 * (4029180697 < 1)))) : (((~var_7) ? (min(41643, -4071645774740402160)) : (~var_6)))));
                        }
                        var_31 = (max(var_31, var_10));
                    }
                }
            }
        }
        arr_68 [6] |= (((((min(var_10, 7962881141756711012))) ? var_1 : var_6)) & (min(var_6, var_1)));
        var_32 = (min(var_32, (((253 ? 0 : 234881024)))));
    }
    for (int i_20 = 0; i_20 < 1;i_20 += 1)
    {
        var_33 = (max(var_33, (max((arr_49 [i_20] [i_20]), var_7))));

        for (int i_21 = 0; i_21 < 15;i_21 += 1)
        {
            arr_76 [i_20] [i_20] = (max(var_10, (min(((-52 ? 262143 : (-2147483647 - 1))), (arr_5 [20])))));
            /* LoopNest 2 */
            for (int i_22 = 1; i_22 < 11;i_22 += 1)
            {
                for (int i_23 = 1; i_23 < 11;i_23 += 1)
                {
                    {
                        var_34 = 764945845;
                        var_35 = (max(var_35, var_12));
                        arr_82 [i_20] [i_20] [i_20] [i_20] = min((max((arr_26 [i_23 + 2] [i_23 + 2] [i_23 - 1] [i_23 + 2] [i_23 + 4] [i_22 + 1]), 1)), (-27715 || var_9));
                        var_36 -= var_5;
                    }
                }
            }
        }
        for (int i_24 = 1; i_24 < 12;i_24 += 1) /* same iter space */
        {
            var_37 = -101;
            arr_85 [i_20] [i_20] = (((((var_8 ? ((9223372036854775807 ? -6130736481120690176 : var_7)) : ((var_6 ? var_6 : (arr_63 [i_20] [i_20] [i_20] [i_20] [i_20])))))) ? ((((((-5291197390279050812 ? 31682 : 2147483613))) ? (arr_61 [i_20]) : 35890))) : (max(var_0, ((20 ? 4457390093483160522 : 9223372036854775799))))));
        }
        for (int i_25 = 1; i_25 < 12;i_25 += 1) /* same iter space */
        {
            arr_88 [i_20] [i_20] [i_20] = var_4;
            var_38 = var_3;
        }
        for (int i_26 = 0; i_26 < 15;i_26 += 1)
        {
            arr_93 [i_20] [i_20] [i_26] = ((!((((arr_79 [i_20] [i_20] [i_20] [i_26]) ? (arr_79 [13] [i_26] [13] [i_26]) : (arr_79 [i_26] [i_26] [i_20] [i_20]))))));
            /* LoopNest 3 */
            for (int i_27 = 0; i_27 < 15;i_27 += 1)
            {
                for (int i_28 = 0; i_28 < 15;i_28 += 1)
                {
                    for (int i_29 = 0; i_29 < 15;i_29 += 1)
                    {
                        {
                            var_39 -= (min(var_6, ((var_8 ? var_2 : (min(var_3, var_2))))));
                            var_40 = (max(var_40, ((((((-8368979040734566664 ? -27716 : 27723))) ? (max(((1 ? -18 : var_10)), (arr_9 [i_20] [i_26]))) : ((var_3 ? ((10541136076938132697 ? var_5 : 18)) : ((var_3 ? (arr_11 [i_29]) : 1)))))))));
                            var_41 = (((max(var_12, var_6)) + (((var_4 ? 255 : (arr_101 [i_20] [i_20] [i_27]))))));
                        }
                    }
                }
            }
        }
    }
    var_42 = 0;
    #pragma endscop
}

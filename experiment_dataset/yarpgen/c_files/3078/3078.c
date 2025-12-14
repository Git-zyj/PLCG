/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((!((((!var_14) ? 4003759473 : ((var_0 ? var_13 : var_14)))))));

    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        arr_3 [i_0] = -67;
        arr_4 [i_0] = (var_15 != 2265577875);
        arr_5 [i_0] = 5942628975570703743;
        var_21 -= (((((max(var_9, 0)) >> (291207821 - 291207810))) | (((((min(-805867627, -5942628975570703744))) ? (((max(1252, 1)))) : var_9)))));
        arr_6 [i_0] = (max((max(var_19, (arr_1 [i_0 - 2] [i_0 - 3]))), var_8));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_22 *= ((var_14 ? (((max((arr_2 [i_1]), (arr_2 [i_1]))))) : (min(1004374872565718471, 3589426873))));
        var_23 = 50;
    }
    for (int i_2 = 1; i_2 < 8;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 8;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 9;i_6 += 1)
                        {
                            {
                                var_24 = (arr_0 [i_2]);
                                var_25 = var_6;
                            }
                        }
                    }
                    var_26 = (min((arr_2 [i_4]), 68));
                }
            }
        }
        var_27 = 35893;
    }
    for (int i_7 = 1; i_7 < 1;i_7 += 1)
    {

        for (int i_8 = 1; i_8 < 20;i_8 += 1)
        {
            arr_29 [i_8] = (((((max(63, -5942628975570703747)))) ? (arr_26 [i_7 - 1] [i_7 - 1]) : (((var_18 ? (32752 || -7278300548958511672) : ((max(var_10, 35893))))))));
            var_28 &= var_16;
        }
        for (int i_9 = 3; i_9 < 18;i_9 += 1)
        {
            var_29 = (var_1 - (arr_25 [i_7]));
            var_30 = (max(var_30, var_5));

            for (int i_10 = 1; i_10 < 20;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 18;i_12 += 1)
                    {
                        {
                            arr_39 [i_7] [i_7] [i_7] [i_7 - 1] [i_7] = (((-8125701114320805217 || 29643) ? ((((((1 || (arr_30 [14] [14] [2]))) && (((-5942628975570703744 ? 18446744073709551602 : var_5))))))) : (min((arr_26 [i_11] [i_7 - 1]), (arr_26 [i_10 + 1] [i_12 + 2])))));
                            var_31 = var_1;
                            arr_40 [i_9] [i_11] [i_10] [i_9] [i_7] = (+((var_3 ? ((var_9 ? (arr_23 [13]) : (arr_27 [i_12] [14]))) : var_9)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_13 = 1; i_13 < 20;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 1;i_14 += 1)
                    {
                        {
                            var_32 = (-32766 || 35893);
                            var_33 = (((((-(arr_34 [i_9 + 3] [i_10 + 1] [i_13 + 1])))) ? (((arr_36 [i_7] [i_10] [i_10 + 1] [5] [i_10 - 1]) ? var_18 : var_19)) : var_17));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_15 = 2; i_15 < 18;i_15 += 1)
            {
                for (int i_16 = 3; i_16 < 18;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 21;i_17 += 1)
                    {
                        {
                            var_34 = ((116 ? 13085 : 21920));
                            var_35 = ((var_3 ? -5262451701175795480 : ((var_15 >> (32743 - 32683)))));
                            arr_54 [i_7] [i_16] [i_15] [i_16 - 3] [i_17] = (((((arr_26 [14] [i_16]) - 342852998))));
                            var_36 = (((~var_18) * (((arr_44 [i_9 - 2] [i_15 - 2] [i_9 - 2] [i_15] [i_16 + 2]) ? var_6 : (arr_44 [i_9 - 1] [i_15 + 2] [i_15 - 2] [1] [i_16 + 1])))));
                            var_37 -= (arr_24 [i_17]);
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_18 = 0; i_18 < 1;i_18 += 1)
        {
            /* LoopNest 3 */
            for (int i_19 = 1; i_19 < 20;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 21;i_20 += 1)
                {
                    for (int i_21 = 2; i_21 < 19;i_21 += 1)
                    {
                        {
                            var_38 = (5942628975570703743 / 21907);
                            var_39 -= 21940;
                            var_40 = (((((var_10 ? 291207822 : var_18))) ? var_8 : 1580239266025884860));
                            var_41 = ((~116) ? (((237 ? 58801 : 0))) : (arr_55 [i_7 - 1]));
                        }
                    }
                }
            }
            arr_64 [i_7 - 1] [i_18] = (var_8 || 0);
        }
        var_42 |= ((+((((arr_36 [i_7] [11] [6] [i_7 - 1] [4]) || ((min(36, 28094))))))));
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] = 1231074330950532398;

                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        var_19 = min(19336, 2163119136);
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_2] = (arr_6 [i_3 + 3]);
                    }
                    arr_15 [i_0] [i_0] [i_0] = (arr_5 [i_0] [i_1] [i_0]);
                }
            }
        }
    }

    for (int i_4 = 1; i_4 < 12;i_4 += 1)
    {
        var_20 = 3154184625;
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            {
                                var_21 *= ((+(max((arr_1 [i_5] [i_4 + 2]), (arr_0 [i_5] [i_7])))));
                                var_22 = ((~(min(var_6, var_10))));
                            }
                        }
                    }

                    for (int i_9 = 2; i_9 < 10;i_9 += 1)
                    {

                        for (int i_10 = 3; i_10 < 11;i_10 += 1)
                        {
                            arr_33 [i_4 + 2] [i_4 + 2] [i_5] [i_4] [i_9] [i_4 + 2] [i_10 - 2] = (((arr_31 [i_4] [i_4] [i_9] [i_9] [i_9 - 2]) ? 7 : (!5966823172395640078)));
                            arr_34 [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4] [i_4] [i_4] = var_0;
                        }
                        arr_35 [i_4] [i_6] [i_4] = (max(((-19332 ? -19347 : 31703)), (arr_2 [i_4])));
                    }
                    /* vectorizable */
                    for (int i_11 = 2; i_11 < 13;i_11 += 1)
                    {
                        var_23 = (((var_14 >= var_11) ? ((5966823172395640051 ? 19336 : 12479920901313911559)) : (arr_36 [i_4 - 1] [i_11 - 1] [i_4 + 2] [i_4 - 1])));
                        var_24 = ((-19337 ? (arr_2 [i_4]) : var_3));
                        var_25 = (arr_28 [i_6] [i_5] [i_6] [i_11 + 1]);
                    }
                    for (int i_12 = 0; i_12 < 14;i_12 += 1)
                    {
                        var_26 = ((var_0 ? (((((~var_14) + 2147483647)) >> (((~var_9) + 2574473754065503713)))) : (arr_28 [i_4] [i_5] [i_4] [i_6])));
                        var_27 = var_6;
                    }
                    arr_43 [i_4] [i_4] [i_6] = var_13;
                    var_28 = ((var_7 ? (~7726040445342871542) : (~var_1)));

                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {

                        for (int i_14 = 0; i_14 < 14;i_14 += 1)
                        {
                            var_29 = (max((arr_46 [i_4 - 1] [i_5] [i_6] [i_4 + 1]), (max(var_5, (arr_19 [i_4 + 2] [i_4])))));
                            var_30 = ((!(((((min(var_0, var_18))) ? ((((arr_44 [i_4] [i_5] [i_4] [i_14]) * var_2))) : ((18446744073709551615 ? var_4 : 0)))))));
                            var_31 = var_8;
                            var_32 = -4075;
                            var_33 = ((var_18 ? ((var_15 ? (arr_37 [i_4] [i_4 - 1] [i_4] [i_4 - 1]) : var_4)) : (max(9, ((min((arr_18 [i_6] [i_13] [i_6]), (arr_9 [i_5] [i_6] [i_6]))))))));
                        }
                        arr_49 [i_4] [i_4] [i_6] [i_5] = (~(var_4 ^ var_17));
                        arr_50 [i_4] [i_4] [i_5] [i_6] [i_4] [i_4] = var_5;
                    }
                    for (int i_15 = 1; i_15 < 13;i_15 += 1)
                    {
                        var_34 = var_5;
                        arr_53 [i_4] [i_4] [i_6] [i_15 + 1] [i_4] [i_15 - 1] = ((-(arr_52 [i_15 + 1] [i_6] [i_6] [i_4 - 1])));
                    }
                    /* vectorizable */
                    for (int i_16 = 3; i_16 < 13;i_16 += 1)
                    {
                        var_35 = 2147221504;
                        var_36 = (((arr_23 [i_4] [i_4 + 2] [i_4] [i_16 - 3] [i_4 + 2]) ? var_18 : var_14));
                    }
                }
            }
        }
    }
    var_37 = var_9;
    var_38 = ((-((-var_10 ? 7 : ((var_5 ? var_7 : var_2))))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = min((~var_15), ((~(var_10 << var_2))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [i_1] = var_11;
                arr_6 [i_1] = var_2;

                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            var_17 = -var_8;
                            arr_15 [i_1] [i_1] = -var_6;
                            arr_16 [i_0] [i_0] [i_1] [i_0] = var_6;
                            var_18 = var_4;
                        }
                        for (int i_5 = 2; i_5 < 24;i_5 += 1)
                        {
                            arr_21 [i_0] [i_1] [i_2] [i_3] [i_5 - 2] = (((!1324095929) ? ((1324095929 ? var_11 : (arr_7 [i_1]))) : var_8));
                            var_19 = 0;
                            arr_22 [i_1] = (~var_7);
                            var_20 = (((arr_14 [16] [17] [i_2 + 2] [i_1] [i_0]) < -1324095922));
                        }

                        for (int i_6 = 4; i_6 < 21;i_6 += 1)
                        {
                            arr_26 [i_2] [0] [i_2] [i_1] [i_1] [0] = var_13;
                            var_21 &= var_9;
                        }
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            var_22 *= 4823184257032854420;
                            var_23 = var_7;
                        }
                        arr_29 [i_1] [i_1] = var_9;
                    }
                    var_24 -= ((-(var_10 << var_7)));
                }

                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        arr_34 [i_1] = var_11;
                        arr_35 [i_1] [i_0] [2] [i_1] [i_1] [i_9] = (arr_30 [i_8] [19]);
                        arr_36 [i_0] [5] [i_8] [i_1] = ((-42 ? 0 : 0));
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        arr_39 [9] [i_1] [i_8] [23] = -var_2;
                        var_25 = var_13;
                        var_26 = 2771717811;
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {

                        for (int i_12 = 1; i_12 < 24;i_12 += 1)
                        {
                            var_27 &= -var_6;
                            var_28 = ((var_5 ? var_14 : var_8));
                        }
                        for (int i_13 = 0; i_13 < 25;i_13 += 1)
                        {
                            arr_49 [i_1] [i_1] [i_8] [i_11] [i_13] = var_14;
                            var_29 = var_1;
                            arr_50 [i_1] [i_1] [4] [i_1] [i_0] = (arr_1 [i_0]);
                        }
                        for (int i_14 = 0; i_14 < 25;i_14 += 1)
                        {
                            var_30 = ((var_8 ? var_0 : var_10));
                            var_31 = 0;
                            var_32 = (min(var_32, (~var_8)));
                        }
                        for (int i_15 = 0; i_15 < 25;i_15 += 1)
                        {
                            arr_56 [i_1] [i_1] [i_1] [i_1] [i_1] = 0;
                            var_33 = var_13;
                        }
                        var_34 = (((~758992244) ? (arr_9 [i_0 + 1] [i_1] [i_0 + 1] [i_11]) : ((~(arr_11 [i_1] [i_1])))));
                        arr_57 [i_0] [i_1] [i_8] [i_11] = var_11;
                        arr_58 [1] [1] [i_1] [i_8] [i_0 + 1] = 11773727505688489534;
                    }
                    var_35 = (min(-var_10, (max(((var_6 ? var_4 : (arr_25 [i_8] [i_1] [i_0]))), (0 * -42)))));
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 25;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 25;i_17 += 1)
                        {
                            {
                                var_36 = (min(var_36, ((max(-var_7, var_5)))));
                                var_37 = var_12;
                                var_38 &= (min(18844, (max((max(0, 16917264944514641684)), var_6))));
                            }
                        }
                    }
                    var_39 = ((var_1 ? (max(((var_5 ? var_2 : 42)), (var_3 ^ var_9))) : (((!(((var_8 ? var_7 : var_4))))))));
                }
            }
        }
    }
    #pragma endscop
}

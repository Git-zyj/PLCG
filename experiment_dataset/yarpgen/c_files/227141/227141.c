/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= (((((min(var_6, var_7))) ? var_6 : (max(17179869183, 20)))) ^ (((-var_4 ? var_4 : (((max(-56, 255))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] = (~var_7);
                arr_7 [i_1] &= ((-(min(((20 ^ (arr_4 [i_0] [i_1]))), (arr_4 [i_1 - 2] [i_0 + 1])))));
                var_13 = (min(var_13, ((((((arr_5 [i_1] [i_1 + 2]) ? var_11 : (arr_2 [i_1]))) < (arr_0 [i_0 - 1] [i_1]))))));

                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    var_14 = ((~((~(arr_5 [i_0] [i_1 + 2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [i_0] [4] [4] [i_4] [i_4] = arr_5 [i_0] [i_3];
                                var_15 = (min(var_15, 11130591749924267717));
                                arr_16 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0] = (!0);
                                arr_17 [i_3] [i_3] [i_0] [i_3] = ((-(~var_11)));
                                var_16 *= ((-(min(-var_11, -42))));
                            }
                        }
                    }
                    var_17 = ((7316152323785283926 & (((var_2 >> (18446744073709551580 - 18446744073709551557))))));

                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        var_18 = (max(var_18, var_9));
                        var_19 = max((((-(((var_2 < (arr_19 [i_1] [i_0]))))))), ((var_3 ? (((5117138216504994911 ? var_11 : var_0))) : 7316152323785283912)));
                        var_20 &= (arr_12 [i_1] [i_1]);
                        arr_21 [i_0] = (+((31 ? (var_8 / var_8) : ((0 ? var_2 : (arr_19 [i_5] [i_1]))))));
                    }
                    for (int i_6 = 3; i_6 < 16;i_6 += 1)
                    {
                        arr_25 [i_1] [i_1] [i_2] [i_2] [i_2 + 1] |= (!11130591749924267706);
                        var_21 = var_0;
                    }
                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 14;i_7 += 1)
                    {
                        var_22 = ((-39 ? (210 - 127) : (!255)));
                        var_23 = ((~((var_2 >> (var_7 + 1049600864)))));
                        arr_28 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0] = ((~(arr_4 [i_2 + 1] [i_2 + 1])));
                        var_24 = (((18446744073709551580 + var_0) ^ 18446744073709551580));
                    }
                }
                for (int i_8 = 1; i_8 < 14;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 16;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 17;i_10 += 1)
                        {
                            {
                                var_25 = (max(-var_7, var_8));
                                var_26 = 5117138216504994894;
                                arr_35 [i_0] [i_1] [i_8 + 4] [i_9] [10] = (min((arr_9 [i_0] [i_9 - 1]), (~var_1)));
                            }
                        }
                    }
                    var_27 = (arr_20 [i_0 + 1] [i_1] [8] [i_0 + 1] [i_8]);
                    var_28 = (((min(((~(arr_4 [i_0] [i_1]))), var_4)) < ((max(167, 2514622088)))));
                    var_29 = -92;
                    var_30 = (min(var_30, ((((min((arr_31 [5] [i_1 + 1] [i_8 + 4] [i_0 + 1]), 4294967287)) | var_3)))));
                }
                for (int i_11 = 0; i_11 < 18;i_11 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 18;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 18;i_13 += 1)
                        {
                            {
                                var_31 = 6;
                                var_32 &= ((var_2 ? ((((arr_37 [i_0 - 1] [i_0 - 1] [i_0 - 1]) ? var_5 : ((var_6 % (arr_41 [i_0] [i_0] [i_11] [i_13])))))) : (min((min(9433316389383850910, var_6)), ((min(var_7, var_6)))))));
                            }
                        }
                    }
                    var_33 = (min(var_33, ((((max(var_3, var_6)))))));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 18;i_14 += 1)
                    {
                        for (int i_15 = 2; i_15 < 17;i_15 += 1)
                        {
                            {
                                var_34 = ((-(((-127 - 1) ? (arr_44 [i_0] [i_1 + 2] [i_1 - 1] [i_1 + 2] [i_0]) : 0))));
                                var_35 = (max(var_35, var_2));
                            }
                        }
                    }
                    var_36 = ((((min(var_11, (min(47, 0))))) | var_1));
                }
            }
        }
    }
    #pragma endscop
}

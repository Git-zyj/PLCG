/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_12 = ((var_1 < (min((min(245209024, var_5)), (!var_10)))));
                var_13 |= ((-((((min(var_10, var_8))) ? (min(var_11, var_2)) : (min(4294967295, 3323118110))))));

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_14 = (((min(var_4, var_7))) ? var_0 : var_11);
                                var_15 = ((~((min(var_8, var_2)))));
                                var_16 = max((((var_11 > var_8) ? (min(var_9, var_3)) : (var_10 < var_11))), ((((min(var_0, var_9))) ? (max(var_6, var_1)) : ((min(var_0, var_1))))));
                            }
                        }
                    }
                    var_17 = (max(((var_2 / (~var_0))), var_0));
                    arr_13 [i_0] [i_1] [i_0] [i_0] = var_0;

                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        var_18 = (min(((((var_0 ? var_5 : var_7)))), (((var_4 ? var_3 : var_3)))));
                        var_19 |= min(((var_3 ? (max(var_7, var_4)) : (var_10 >= var_0))), ((max((min(var_5, var_0)), ((max(var_2, var_7)))))));
                    }

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        var_20 = (~var_9);
                        arr_21 [12] [12] [i_0] [i_6] = (var_3 + var_2);
                    }
                    /* vectorizable */
                    for (int i_7 = 2; i_7 < 13;i_7 += 1)
                    {
                        var_21 = 58863;
                        arr_24 [i_0] [i_1] [i_0] [i_7] = ((((var_10 >> (var_2 - 92))) | var_2));
                        arr_25 [2] [i_1] [i_2] [i_0] = (((var_11 >= var_4) ? var_4 : var_11));
                    }
                    for (int i_8 = 1; i_8 < 11;i_8 += 1)
                    {

                        for (int i_9 = 3; i_9 < 13;i_9 += 1)
                        {
                            var_22 = (((((var_5 + var_2) ? (min(var_7, var_6)) : (332789124 == 12288))) % (min((((var_10 ? var_7 : var_2))), ((var_3 ? var_1 : var_11))))));
                            var_23 = ((min(((min(var_5, var_0)), ((var_6 ? var_2 : var_6))))));
                            var_24 = ((((max((var_7 | var_0), ((3323118110 ? 58863 : 58863))))) ? ((-(max(var_9, var_10)))) : var_4));
                            var_25 -= (((-(min(var_10, var_2)))));
                        }
                        arr_32 [i_0] [i_0] = (max(((((min(var_9, var_6))) && var_6)), (((4294967275 / 3052144908) || -var_8))));
                        arr_33 [i_0] [i_0] [i_0] [i_8 - 1] = var_11;
                    }
                }
                /* vectorizable */
                for (int i_10 = 1; i_10 < 14;i_10 += 1)
                {
                    var_26 = var_8;

                    for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
                    {
                        arr_40 [i_0] [i_0] [i_10] [7] [i_0] [i_11] = var_9;
                        arr_41 [i_0] [i_1] [i_10] [i_11] = var_9;
                    }
                    for (int i_12 = 0; i_12 < 15;i_12 += 1) /* same iter space */
                    {
                        arr_44 [i_0] [3] [i_10] [5] = (((((var_6 ? var_7 : var_7))) ? ((var_7 ? var_6 : var_0)) : var_11));
                        arr_45 [i_0] = (var_0 / var_8);
                        arr_46 [i_1] [2] [i_10] [i_12] |= (((var_1 >> (var_11 - 3510408506))));
                    }
                }
            }
        }
    }
    var_27 ^= var_6;
    var_28 = ((((min(((var_0 ? var_3 : var_11)), (min(var_2, var_11))))) == (max((var_0 - var_11), (var_0 ^ var_10)))));
    /* LoopNest 2 */
    for (int i_13 = 3; i_13 < 16;i_13 += 1)
    {
        for (int i_14 = 2; i_14 < 16;i_14 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 17;i_15 += 1)
                {
                    for (int i_16 = 3; i_16 < 13;i_16 += 1)
                    {
                        {
                            var_29 = ((var_3 ? (max(((min(var_6, var_6))), ((var_6 ? var_4 : var_10)))) : (min(var_10, ((max(var_2, var_5)))))));
                            var_30 = (min((min((min(var_3, var_11)), (((var_5 ? var_8 : var_2))))), (max(-var_6, (min(var_6, var_1))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_17 = 4; i_17 < 13;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 17;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 17;i_19 += 1)
                        {
                            {
                                arr_70 [i_13] [i_13] [i_13] [i_17 + 1] [i_17 + 4] [i_14] [i_19] = min((min((max(var_8, var_3)), (min(var_11, var_3)))), ((((var_10 << (var_7 - 25868))))));
                                var_31 ^= ((((!(~var_4))) ? ((((var_11 ? var_0 : var_9)) >> ((min(169, 1))))) : var_11));
                                var_32 = (((((max(58863, var_0))) ? ((var_2 ? var_3 : var_3)) : var_4)) / ((((var_7 || ((min(var_7, var_6))))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_20 = 4; i_20 < 15;i_20 += 1)
                {
                    for (int i_21 = 2; i_21 < 14;i_21 += 1)
                    {
                        for (int i_22 = 1; i_22 < 14;i_22 += 1)
                        {
                            {
                                arr_79 [i_13] [i_14] [i_20] [i_21] [i_14] = max(var_9, (max((min(var_10, var_8)), (min(var_10, var_7)))));
                                arr_80 [i_14] [9] [6] [i_20] [i_21] [i_22] = var_1;
                            }
                        }
                    }
                }
                arr_81 [i_13] [i_14] = (((21 / 86) ? (169 >> 1) : ((max((min(16, 181)), 187)))));
            }
        }
    }
    var_33 = (((var_9 > var_4) ^ 167));
    #pragma endscop
}

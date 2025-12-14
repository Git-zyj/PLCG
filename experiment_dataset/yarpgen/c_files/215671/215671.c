/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_18 = arr_4 [i_1];
                            arr_11 [16] [i_1] [i_2] [16] = ((0 ? var_10 : (max((arr_7 [i_0] [i_0 + 1] [i_0 + 3] [1] [i_0 + 1]), (arr_7 [i_0] [i_0] [i_0 + 4] [i_0] [i_0 + 1])))));
                        }
                    }
                }

                for (int i_4 = 3; i_4 < 19;i_4 += 1)
                {
                    var_19 |= ((var_1 ? (((arr_10 [i_4 + 1] [i_4] [i_4 - 1]) / (arr_10 [i_4 + 1] [i_4] [i_4 - 1]))) : (max((arr_10 [i_4 + 1] [i_4 - 3] [i_4 - 1]), (arr_10 [i_4 + 1] [21] [i_4 - 1])))));
                    arr_14 [i_0 + 2] [1] [i_1] [i_4] = (min(((var_0 ? ((6127 ? 4740259815440426533 : (arr_3 [2]))) : 0)), (~var_0)));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = (((((!1610336511) || ((!(arr_12 [i_0] [i_0 + 2] [i_0 - 1] [i_0]))))) && ((min(1, var_3)))));
                                var_20 = ((+((max((arr_1 [i_0 + 4]), (arr_1 [i_0 + 3]))))));
                                var_21 -= ((((-(arr_10 [i_0 + 1] [i_1] [i_4 - 1])))) ? (((!((((arr_6 [6] [7]) - -37)))))) : var_13);
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            {
                                arr_30 [i_0] [i_0 + 1] [i_1] [i_1] [17] [i_8 + 1] [i_7] = 4740259815440426533;
                                var_22 = (min((((((min(var_1, (arr_3 [i_8 + 1])))) / ((max((arr_3 [i_1]), -62)))))), ((+(max((arr_25 [i_0 - 1] [i_0 + 2]), var_1))))));
                                arr_31 [i_7] [i_1] [i_7] [i_8] [i_8] = ((((~(arr_19 [i_0] [i_0] [i_7] [i_7] [i_0] [i_8] [i_9]))) >> var_0));
                            }
                        }
                    }
                    var_23 ^= var_4;
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 22;i_11 += 1)
                        {
                            {
                                var_24 = ((-(max((max(var_3, var_5)), (arr_33 [i_0 + 1] [i_7])))));
                                arr_39 [i_0] [i_7] = (arr_29 [i_10] [i_10] [i_1]);
                                var_25 = ((4740259815440426533 - (min((arr_0 [i_10]), var_17))));
                            }
                        }
                    }
                }
                for (int i_12 = 1; i_12 < 20;i_12 += 1) /* same iter space */
                {
                    var_26 ^= (arr_1 [i_0]);
                    var_27 = (max(var_27, (arr_13 [1] [i_0] [11] [i_12])));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 22;i_14 += 1)
                        {
                            {
                                arr_49 [i_0 + 1] [18] [i_12] [i_13] [12] [i_14] = (max(((max(0, 40))), (((12424543560710134420 | -2845387867743123038) | (~12537044877011961456)))));
                                var_28 = (min((arr_12 [i_12 + 2] [i_0 + 1] [i_0] [i_0]), ((((arr_12 [i_12 + 2] [i_0 + 1] [15] [7]) | (arr_1 [i_0]))))));
                            }
                        }
                    }
                }
                for (int i_15 = 1; i_15 < 20;i_15 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_16 = 1; i_16 < 20;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 22;i_17 += 1)
                        {
                            {
                                arr_56 [13] [21] = ((-(((max(var_14, var_6))))));
                                arr_57 [i_0] [i_16 + 1] = -41;
                            }
                        }
                    }
                    var_29 = (min(var_29, (!18446744073709551610)));
                }
                arr_58 [i_1] [9] [i_0 + 2] = ((-(arr_18 [3] [i_0] [i_1] [i_1] [i_1] [i_1] [18])));
            }
        }
    }
    var_30 = ((1492484510 * ((-(~8378753086284413649)))));
    #pragma endscop
}

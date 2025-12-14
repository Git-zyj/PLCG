/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min((max((~134217727), ((max(var_4, var_0))))), ((var_5 ? ((var_15 ? var_2 : var_18)) : var_12))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, (((((((min((arr_6 [i_2] [i_2] [i_2]), var_18)) + (((-13530 ? (arr_3 [i_0] [i_1 + 3]) : var_11)))))) ? (((((var_8 ? (arr_3 [9] [1]) : var_16))) ? (arr_7 [i_0] [i_1 - 1] [i_0]) : (((arr_2 [i_0] [i_0]) - (arr_0 [4]))))) : (max(var_10, (arr_7 [i_1 - 1] [i_1 + 2] [i_1 + 3]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_4] [i_0] [0] [i_4] [i_0] = ((max((max((arr_12 [i_4] [i_1]), var_5)), (((var_8 - (arr_10 [i_1 + 3] [7] [i_3] [i_4 - 1])))))));
                                var_21 = (((arr_10 [i_1] [i_1] [i_1 + 1] [i_1]) && ((((((var_5 & (arr_5 [i_0] [i_0] [i_2])))) ? var_11 : (var_15 * var_4))))));
                                var_22 = ((!(arr_7 [i_0] [i_1 + 3] [i_4 + 1])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [i_0] [i_2] [i_6] [2] = (arr_18 [i_0] [i_6] [i_1] [i_1 + 2] [i_2] [i_5] [i_1]);
                                var_23 = (arr_2 [i_6] [i_2]);
                                var_24 += max((((arr_0 [i_1 - 1]) - (arr_0 [i_1 + 1]))), (((arr_0 [i_1 - 1]) ? 1 : (arr_0 [i_1 + 1]))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            {
                arr_27 [i_8] = (arr_10 [i_7] [i_7] [i_7] [i_7]);
                var_25 = (arr_3 [i_7] [i_8]);
                arr_28 [i_8] [i_8] = (max((~var_6), ((min((arr_13 [i_7] [i_7] [i_7] [i_8] [i_7]), (arr_13 [7] [i_8] [7] [i_8] [i_7]))))));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        {
                            var_26 = (((((-(arr_8 [i_10] [i_8] [i_8])))) ? (arr_12 [i_8] [i_8]) : -14178));
                            var_27 = (max(var_27, ((min((max((arr_22 [5] [5]), (arr_12 [i_9] [i_10]))), (arr_12 [i_10] [i_8]))))));
                            var_28 = (max((((65428 ? (arr_30 [i_10]) : ((var_1 ? 1 : var_4))))), (min((19 + var_1), -var_3))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_11 = 0; i_11 < 10;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 10;i_12 += 1)
                    {
                        for (int i_13 = 2; i_13 < 9;i_13 += 1)
                        {
                            {
                                var_29 ^= ((+(((arr_19 [i_8] [i_12] [i_13 - 2] [5] [i_13 + 1]) - (arr_19 [i_13] [0] [i_13 - 1] [i_13 + 1] [i_13 - 1])))));
                                arr_41 [i_7] [i_8] [i_13] [i_8] [i_8] [i_8] = (((((arr_21 [i_13 + 1]) > (arr_21 [i_13 - 1]))) ? (((arr_21 [i_13 + 1]) ? (arr_21 [i_13 + 1]) : (arr_21 [i_13 - 2]))) : (~19)));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_14 = 4; i_14 < 8;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 10;i_15 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_16 = 2; i_16 < 8;i_16 += 1)
                {
                    for (int i_17 = 4; i_17 < 8;i_17 += 1)
                    {
                        {
                            var_30 = ((((((arr_13 [3] [i_16 + 1] [i_14 - 2] [i_15] [i_14 - 2]) / var_0))) ? ((-(arr_13 [2] [i_17 - 3] [i_16 - 1] [i_15] [i_14 + 2]))) : (arr_13 [i_14 - 2] [i_14] [i_14 + 1] [i_14] [i_14 - 3])));
                            var_31 = (max((((arr_5 [1] [i_15] [i_16 + 2]) & (arr_5 [i_14 - 4] [i_15] [i_16 + 1]))), (((arr_5 [i_14 - 3] [i_16 - 2] [i_17 + 2]) ? (arr_5 [i_14] [i_14] [i_14 - 3]) : var_2))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 10;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 10;i_19 += 1)
                    {
                        {
                            var_32 = 1;
                            var_33 = (max(var_33, (((var_1 ? (((max((arr_23 [i_14] [i_14 + 2]), (arr_23 [i_14 - 3] [i_14 - 3]))))) : (((arr_35 [i_14 + 1]) / (arr_35 [i_14 + 2]))))))));
                            var_34 = (min(var_34, var_14));
                        }
                    }
                }
                var_35 = (((((arr_18 [0] [i_15] [i_14 - 2] [i_14] [i_15] [i_15] [0]) * 1)) ^ (arr_48 [i_14 - 1] [i_14 - 1] [i_15])));
                arr_61 [i_14 - 3] [3] [i_15] = (arr_9 [i_14] [i_14]);
            }
        }
    }
    #pragma endscop
}

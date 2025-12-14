/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_14 = (arr_12 [i_0] [i_0] [i_2] [i_2] [i_2] [i_2 + 3]);
                                var_15 = (((-(arr_10 [i_1 - 1] [i_2] [i_2 + 1] [i_2 - 2] [i_2 - 1]))));
                                var_16 = max(((min((arr_5 [i_1 - 1] [i_1]), 1))), (((arr_14 [i_0] [i_1] [i_1 - 1] [i_1] [i_2 + 1] [i_2] [i_2 + 2]) ? var_8 : 29177)));
                                arr_15 [i_0] [i_0] [i_2] [i_3] [i_4] = (min((((!((max(var_3, (arr_6 [i_0] [i_0] [i_2]))))))), var_2));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                arr_24 [i_0] [i_0] [i_5] [i_0] [i_7] = (((((max(((((arr_13 [i_0] [i_1] [i_0] [i_6] [i_7] [i_7]) != var_6))), var_12)))) & ((var_0 ? var_3 : (arr_14 [i_0] [i_1] [i_7] [i_6] [i_7] [i_7] [i_5])))));
                                arr_25 [i_0] [i_1] [1] [i_5] [i_6] [i_7] |= (arr_16 [i_1 - 1] [12] [i_1 - 1] [i_1 - 1]);
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            {
                                arr_33 [i_0] [11] [i_8] [i_8] [i_0] [i_8] [i_8] = (max(1, (min(0, 1))));
                                var_17 += ((((max((((arr_30 [i_0] [i_0] [i_0] [i_0]) ? var_4 : (arr_3 [i_9] [i_9] [8]))), -4243))) ? var_3 : (min(((-(arr_28 [i_1] [i_9]))), (arr_0 [i_0])))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 22;i_12 += 1)
                    {
                        {
                            var_18 += (max(7126, (min(((var_6 ? var_13 : var_1)), (arr_34 [i_0] [i_1 - 1] [i_11])))));
                            arr_39 [i_0] [i_1 - 1] [i_11] [i_11] [18] = ((((((((var_6 ? -1487775659 : var_4))) ? (((29189 ? 36364 : 63053))) : (arr_22 [i_0])))) ? (((((arr_26 [i_0] [i_1] [i_0]) && (arr_37 [i_0] [i_1] [i_11] [i_1]))) ? ((var_5 ? var_1 : 762521966)) : (arr_1 [i_0]))) : var_3));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_13 = 2; i_13 < 13;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 17;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 0;i_15 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_16 = 1; i_16 < 16;i_16 += 1)
                    {
                        for (int i_17 = 4; i_17 < 14;i_17 += 1)
                        {
                            {
                                arr_52 [i_13] [i_14] [i_14] [i_14] [i_14] = ((!((min(-36350, (65516 - 58419))))));
                                var_19 = (((arr_6 [i_13 + 1] [i_13] [i_13]) ? (arr_38 [i_13] [i_14] [i_16] [i_13]) : var_5));
                                var_20 = (max(-var_3, (-1412299561 ^ 14950261118728804321)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 17;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 17;i_19 += 1)
                        {
                            {
                                arr_57 [9] [i_14] [5] [i_13] [i_19] = (arr_22 [i_13]);
                                arr_58 [i_18] [i_14] [i_19] [i_13 + 4] [i_19] [i_15 + 1] &= (min((arr_35 [i_19] [i_18] [i_15] [i_13]), (min(222, var_7))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

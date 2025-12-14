/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_14 [5] [0] [i_2] [i_3] = (min(var_10, 126));
                            arr_15 [i_0] [i_1] [1] [i_2] [i_2] [i_3] = 17592118935552;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        {
                            arr_23 [14] [i_4] [i_4] [i_5] = (((((-(arr_4 [i_5])))) ? ((min(var_9, (arr_22 [i_0] [9] [i_4] [i_5])))) : var_6));
                            var_11 = ((-(min((arr_20 [i_0] [16] [i_0] [i_0] [i_0] [i_0]), (arr_20 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0])))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            {
                                arr_33 [i_7] [i_6] [i_7] [i_8] = (arr_1 [i_1]);
                                var_12 = (max(var_12, (((!(!90))))));
                                var_13 = (~((~(arr_32 [i_0] [i_0] [i_6] [i_7] [i_8]))));
                                var_14 = var_9;
                                var_15 = ((((((max(45, (arr_8 [4] [i_6] [i_1] [i_0])))) >= var_9)) ? (max(((((arr_26 [i_0] [i_1] [i_8]) ? 0 : (arr_25 [16] [i_7] [8])))), (min((arr_27 [i_0] [i_1] [i_1] [i_6] [i_7] [i_8]), (arr_6 [i_1] [12]))))) : (max(var_2, (arr_30 [i_0] [i_1] [i_6] [i_0] [i_8])))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 22;i_11 += 1)
                        {
                            {
                                var_16 = (!var_7);
                                var_17 = var_10;
                                var_18 -= (min(((((max((arr_28 [11] [i_1] [15] [i_10]), var_1))) || (arr_18 [i_0] [i_0] [i_11]))), (((arr_24 [i_1] [i_9]) > (arr_10 [i_0] [20] [i_11] [i_10] [i_9] [i_0])))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_12 = 0; i_12 < 14;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 14;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 1;i_14 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 14;i_15 += 1)
                    {
                        for (int i_16 = 4; i_16 < 10;i_16 += 1)
                        {
                            {
                                arr_53 [i_12] [i_13] [i_14] [i_15] [i_16] = var_0;
                                var_19 = var_0;
                                var_20 = (min(var_20, (~107)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 14;i_17 += 1)
                    {
                        for (int i_18 = 2; i_18 < 11;i_18 += 1)
                        {
                            {
                                var_21 *= ((((min(-107, (max(var_2, (arr_21 [i_12] [i_12] [i_18] [i_17])))))) || (((((arr_56 [i_18 + 3]) ? -107 : var_10))))));
                                var_22 = (max(((~(arr_21 [i_14 - 1] [i_14] [i_18 + 2] [i_18 - 2]))), ((((arr_21 [i_14 - 1] [i_14] [i_18 - 2] [i_18 - 2]) != (arr_40 [i_14 - 1] [i_14] [i_18 + 2] [i_18 + 2] [i_14]))))));
                                arr_60 [6] [0] [i_12] [i_12] [0] [i_12] |= ((45 ? (max(var_3, var_6)) : ((((((arr_7 [i_12]) << (81 - 58))) & ((max((arr_46 [i_12]), -27478))))))));
                                arr_61 [i_14] [i_13] [i_14 - 1] [3] [i_18 + 2] [i_18] = (!var_10);
                                arr_62 [4] [i_14] [5] [i_17] [i_18] = var_10;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

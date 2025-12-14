/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_12 = (min(var_12, (((((max(854, 13275753260973769027))) ? var_4 : (max(0, 21308)))))));
                                var_13 = (((4222304603569233460 ? -4222304603569233435 : 127)));
                                var_14 = (((arr_12 [i_3]) <= ((((min(4222304603569233429, -4222304603569233429))) ? 110 : var_6))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                arr_19 [i_5] = var_11;
                                var_15 = ((((((!var_8) ? var_5 : ((~(arr_11 [i_0] [i_0] [i_0] [i_0])))))) ? (max(11638, 16428107282711059146)) : (arr_10 [i_0])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_16 = -4222304603569233451;
                                var_17 = var_2;
                                var_18 = (max((max(var_1, ((var_0 ? (arr_14 [i_0] [i_0]) : var_2)))), (((~(var_10 || var_0))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 23;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 22;i_10 += 1)
                        {
                            {
                                var_19 = (arr_13 [i_0] [i_0] [i_0] [i_10 + 2] [i_0]);
                                arr_29 [i_1] = var_8;
                                arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] = var_2;
                                arr_31 [i_1] [i_1] [i_1] [i_1] = -6276356801498716071;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_11 = 1; i_11 < 17;i_11 += 1)
    {
        for (int i_12 = 2; i_12 < 17;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 18;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 18;i_14 += 1)
                    {
                        for (int i_15 = 2; i_15 < 15;i_15 += 1)
                        {
                            {
                                var_20 = ((!(arr_21 [i_14] [i_14] [i_14] [i_14])));
                                var_21 = ((!((((arr_39 [i_11] [i_11] [i_11]) ? (arr_15 [i_11] [i_11]) : (!var_4))))));
                                arr_47 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] = ((~(arr_15 [i_11] [i_11])));
                                var_22 = (((arr_36 [i_15 - 2]) == (arr_22 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 2; i_16 < 14;i_16 += 1)
                    {
                        for (int i_17 = 2; i_17 < 17;i_17 += 1)
                        {
                            {
                                arr_52 [i_11] [i_11] [i_11] [i_11] [i_11] = (max(((((max(var_7, 4222304603569233454))) ? (arr_24 [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11 + 1]) : var_2)), var_1));
                                var_23 = (min(var_23, (~-29423)));
                                arr_53 [i_12] [i_11] [i_11] [i_12] &= ((-(max((((4204743317 ? var_11 : var_4))), 2953282773005970340))));
                                var_24 = (arr_33 [i_11]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 1;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 18;i_19 += 1)
                        {
                            {
                                arr_59 [i_11] [i_11] [i_11] [i_11] [i_11] = 0;
                                arr_60 [i_11] [i_11] [i_11] [i_11] [i_11] = -var_6;
                                arr_61 [i_11] [i_11] [i_11] [i_11] [i_11] = (max((!0), var_3));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

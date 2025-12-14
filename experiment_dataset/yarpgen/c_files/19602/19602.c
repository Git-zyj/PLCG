/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_16 [1] [i_0] [i_1 + 1] [i_2] [i_3] [6] [i_4] |= -2144908159492617248;
                                var_19 = (max(var_19, ((((((((arr_7 [i_0] [i_3]) ? 2578864786138228395 : (arr_4 [i_3] [i_0]))))) ? 1 : var_16)))));
                            }
                        }
                    }
                }
                arr_17 [i_0] |= var_6;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            {
                                var_20 ^= (!-7070580897103171819);
                                var_21 = (~var_11);
                                arr_30 [i_5] = (~(((arr_26 [1] [i_6] [i_8 - 1] [i_8 - 2] [i_8] [i_5]) ? 1 : var_12)));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        {
                            var_22 ^= 2144908159492617247;
                            arr_35 [i_5] [i_6] [i_5] [i_11] = (((((55865 << ((((var_11 ? var_3 : (arr_33 [i_5] [i_6] [i_10] [i_10] [i_11]))) - 93))))) & (~var_9)));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        for (int i_14 = 1; i_14 < 11;i_14 += 1)
                        {
                            {
                                arr_44 [i_5] [i_13] [i_12] [i_6] [i_5] = ((-2144908159492617248 ? (min((max(var_0, var_16)), ((1 ? (arr_14 [i_5] [i_5] [i_12] [i_13] [i_14]) : -2144908159492617272)))) : var_9));
                                arr_45 [i_5] [i_5] [i_5] [2] [i_5] [i_5] = (!var_3);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 14;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        {
                            var_23 = (arr_52 [i_5] [i_6] [i_5]);
                            var_24 = var_16;
                            var_25 ^= var_3;
                        }
                    }
                }
                arr_53 [i_5] [i_6] = (~var_15);
            }
        }
    }
    #pragma endscop
}

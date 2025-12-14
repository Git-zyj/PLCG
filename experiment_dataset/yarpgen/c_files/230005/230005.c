/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_7 [7] [7] = (arr_3 [i_0]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_17 = (((((-(arr_8 [i_0] [0])))) ? (((~((var_16 ? -1 : (arr_12 [i_4] [i_1] [i_1] [i_2])))))) : var_3));
                                var_18 = 72057319160020992;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        {
                            var_19 *= (max((((~(var_11 / 118)))), ((var_13 ? var_1 : var_13))));
                            var_20 ^= (~164590965);
                        }
                    }
                }
                var_21 = ((+(((((arr_14 [i_0] [i_1 + 1] [i_1 - 2] [i_1 - 1] [i_0]) + 2147483647)) >> (((var_8 & var_13) - 134513173))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            {
                                var_22 = var_6;
                                var_23 = max((((var_6 ? (arr_30 [8] [i_9] [i_10]) : var_4))), (!var_0));
                                var_24 |= ((((((!(arr_20 [i_8]))))) & (min(var_12, (arr_8 [i_7] [i_7])))));
                                arr_33 [i_8] [8] = (arr_15 [i_7] [i_7] [i_8] [i_9] [i_9] [i_9] [i_11]);
                            }
                        }
                    }
                }
                var_25 |= (-var_6 <= 0);
                arr_34 [i_8] [1] [i_7] = (arr_3 [6]);
            }
        }
    }
    #pragma endscop
}

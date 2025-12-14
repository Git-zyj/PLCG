/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_15 = (((((((arr_2 [i_0]) ? -1273 : (arr_2 [i_0]))) > (arr_1 [i_0] [i_0]))) ? (arr_1 [i_0] [i_0]) : (min(((max((arr_0 [i_0] [i_0]), var_10))), (((arr_1 [i_0] [i_0]) ? var_11 : -3372))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_16 = (((((arr_4 [10] [i_1] [i_0]) ? (((arr_7 [i_0] [i_1] [10] [i_2]) ? (arr_1 [i_0] [i_0]) : var_9)) : (((arr_3 [14] [13] [13]) ? 2925596659 : 17844))))) ? (((((((arr_5 [7] [i_2]) ? (arr_6 [11] [i_0] [i_0] [i_0]) : -3378)) < (((arr_3 [i_0] [i_1] [i_2]) ? var_4 : (arr_3 [i_0] [6] [6]))))))) : ((((((arr_5 [i_1] [i_1]) / 13684))) | (arr_6 [14] [i_1] [i_2] [i_0]))));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        var_17 = (max(var_17, -var_10));
                        var_18 = 3877392982;
                    }
                    for (int i_4 = 1; i_4 < 13;i_4 += 1)
                    {
                        var_19 -= ((((min(var_0, var_10)))));
                        var_20 = (arr_13 [i_0] [13] [i_2] [7]);
                        var_21 ^= var_1;
                        var_22 = (arr_13 [i_0] [i_0] [8] [i_0]);
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_23 ^= (arr_19 [7] [i_6 + 4] [i_6] [i_6 - 1] [i_6 - 1]);
                                var_24 = ((-(((arr_10 [0] [i_6 + 3] [i_6 - 3] [i_6 - 1] [i_6 - 3]) ? (arr_10 [i_0] [i_6 + 4] [i_6 - 2] [i_6 - 1] [i_6 + 2]) : (arr_10 [i_2] [i_6 - 3] [i_6 - 2] [i_6 - 3] [i_6 - 2])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 11;i_8 += 1)
                        {
                            {
                                var_25 |= (min(-3372, var_12));
                                var_26 = max(var_1, ((max((arr_18 [i_7] [i_8 + 1] [1] [i_8 + 2] [i_8 + 1] [i_8 - 2]), (arr_19 [i_8] [i_8] [i_8] [i_8] [i_8 + 1])))));
                                var_27 = var_13;
                                var_28 -= arr_16 [i_0] [7] [i_0] [i_8 + 2];
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_1] = ((23 ^ (arr_3 [i_1] [i_1] [i_1])));
                                var_17 = (max(var_17, (arr_4 [i_0] [i_0])));
                                arr_16 [10] [i_3] [i_4] = var_14;
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        var_18 *= (((((32767 ? (arr_3 [i_1] [i_1] [i_5]) : 0))) ? ((0 ? (arr_1 [i_1]) : (arr_6 [0]))) : (((arr_10 [i_0]) ? (arr_6 [1]) : -85))));
                        var_19 -= (((arr_8 [11] [i_2]) ? var_2 : (arr_11 [i_5] [i_2] [i_1] [i_0])));
                        var_20 = var_13;
                        var_21 = (((var_13 + 32764) ? 16 : (((arr_6 [i_1]) | (arr_6 [i_5])))));
                        var_22 = arr_0 [i_1] [i_2];
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        var_23 |= (((arr_1 [i_6]) >= (arr_4 [i_1] [i_6])));
                        var_24 = (max(var_24, (((arr_19 [i_0] [i_2] [i_2] [i_6]) ? (arr_9 [i_0] [i_0] [9] [i_0]) : (((-(arr_21 [i_0] [i_0] [i_0]))))))));
                    }
                    arr_22 [i_0] [i_1] [i_2] |= 13;
                }
            }
        }
    }
    var_25 = var_11;
    #pragma endscop
}

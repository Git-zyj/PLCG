/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_18 = arr_2 [i_0] [i_0];
                                arr_13 [i_2] [i_1 - 1] [i_2 - 3] [i_2] [i_2] [i_4] = (((arr_0 [i_2]) ? (((arr_4 [i_3] [i_1 + 2] [i_2]) ? (arr_1 [i_0]) : (arr_5 [i_0] [13] [4]))) : (((arr_2 [i_0] [i_0]) ? (arr_10 [i_3]) : (((arr_11 [i_0]) ? (arr_10 [i_0]) : (arr_6 [i_3] [i_3] [11] [i_0])))))));
                                arr_14 [i_0] [i_0] [i_2] [15] [15] [15] [i_0] = arr_11 [i_2 + 3];
                            }
                        }
                    }
                    var_19 = (min(var_19, ((((arr_10 [i_0]) ? (arr_3 [i_0]) : ((61571 ? 2999 : 61571)))))));
                    arr_15 [i_2 + 3] [i_2] [i_2] [i_2] = (((arr_12 [i_0] [16] [13] [i_0] [i_0]) ? (((arr_1 [i_1]) ? (arr_4 [i_1] [i_1] [i_2]) : (arr_2 [i_0] [i_2]))) : (arr_11 [i_2])));
                }
            }
        }
    }
    var_20 &= ((var_3 ? ((var_17 ? ((20969 ? 93 : 18096)) : ((var_9 ? var_2 : var_5)))) : var_16));
    #pragma endscop
}

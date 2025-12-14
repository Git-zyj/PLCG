/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206529
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((var_12 / ((var_6 ? var_9 : var_12)))) + (((var_7 ? ((var_11 ? var_0 : var_8)) : (var_11 - var_4)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_14 = (arr_6 [i_0] [i_1] [i_2]);
                            var_15 = ((+(((((arr_8 [i_1]) / (arr_3 [15] [15]))) & var_10))));
                            var_16 = ((var_4 ? (((((arr_3 [6] [i_1]) ^ var_3)) ^ (arr_4 [i_0]))) : (arr_1 [14])));
                        }
                    }
                }
                var_17 = ((~var_11) ? (((((arr_5 [5] [i_1 + 1]) ? var_12 : var_10)) << ((((var_12 ? (arr_10 [i_0] [i_0] [i_0] [7]) : (arr_4 [i_0]))) - 2556547136)))) : (arr_6 [10] [11] [i_1]));
            }
        }
    }
    #pragma endscop
}

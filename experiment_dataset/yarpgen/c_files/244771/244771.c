/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= min(var_6, var_4);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_15 = ((((((var_13 - (arr_10 [i_0] [i_1] [i_3] [i_1] [i_1] [i_0]))))) * ((((var_1 ? (arr_6 [i_0] [i_0] [i_0]) : var_12)) - (min((arr_1 [i_0]), var_12))))));
                                var_16 = (min(var_16, ((((((((((arr_5 [i_0] [13]) * var_1))) ? (arr_7 [i_0] [i_1] [i_2]) : ((var_0 ? var_11 : var_9))))) ? (((arr_5 [i_0 + 1] [i_0 + 1]) ? (arr_9 [i_0 - 4] [i_0] [i_2 + 1] [4]) : (arr_5 [i_0 - 3] [i_1]))) : (min(((var_3 * (arr_10 [i_4] [i_3] [i_2] [i_1] [i_0] [i_4]))), (((arr_11 [i_4] [i_3] [i_1] [i_2] [i_1] [i_0 - 3] [i_4]) ? (arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4]) : (arr_11 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_1] [i_4] [i_0] [i_2]))))))))));
                                arr_14 [1] [i_1] [i_1] [i_1] |= (min((((arr_10 [i_0 - 4] [i_2] [8] [i_2] [8] [i_4]) ? (arr_4 [i_0 - 2] [i_4] [i_0]) : (arr_10 [i_0 - 2] [0] [i_0 - 3] [0] [i_3] [i_4]))), (arr_10 [i_1] [i_1] [i_2 + 4] [i_2] [i_4] [i_2])));
                                var_17 = (((arr_8 [i_0]) / ((-(max(-1519109454, (arr_1 [7])))))));
                            }
                        }
                    }
                }
                var_18 ^= (min((((arr_8 [i_1]) - (arr_4 [i_0 - 4] [i_1] [i_0 + 1]))), (arr_0 [i_0] [i_0])));
            }
        }
    }
    var_19 = (((((((var_0 ? var_5 : var_4)) << (var_8 && var_0)))) ? (~var_5) : (((var_10 - var_6) * var_1))));
    #pragma endscop
}

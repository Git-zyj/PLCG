/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;
    var_14 = var_9;
    var_15 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_16 = var_2;
                                var_17 = (max((~var_12), (max(var_5, ((max(var_1, var_0)))))));
                                arr_13 [i_2] [i_0] [i_2] [1] [i_0] = ((min(1, -1662456392)));
                                arr_14 [i_2] = (var_7 - (((var_12 > ((var_7 << (var_11 + 103)))))));
                            }
                        }
                    }
                }
                var_18 = (((max(var_8, var_9)) ^ ((max(var_5, var_11)))));
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] [5] [i_1] = var_11;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_14 = var_4;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [i_2] [i_4] [i_4] [i_4] [i_0 + 3] [4] = var_0;
                                var_15 = (min(var_15, (((var_12 >> (var_8 + 6009011959287025190))))));
                                var_16 = (var_0 && var_3);
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 ^= var_0;
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_18 = (var_11 & (var_0 < var_9));
                    arr_22 [i_5] [i_6] [i_7] = var_12;
                    var_19 = (11526053687874281437 ? var_7 : 362415469);
                }
            }
        }
    }
    #pragma endscop
}

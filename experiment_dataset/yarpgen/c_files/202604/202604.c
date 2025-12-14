/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (max(var_3, var_1));
                var_15 = (min(var_15, (((var_12 - var_3) ? ((0 ? -1718755505 : -4657536474620424625)) : (10 + 1073725440)))));
            }
        }
    }
    var_16 = var_7;

    /* vectorizable */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_17 = var_8;
                                var_18 = (var_12 | var_7);
                            }
                        }
                    }
                    arr_21 [i_2] [i_2] [i_4] = ((594348610 ? 4657536474620424624 : 1));
                    arr_22 [i_4] [i_2] = (var_2 / var_13);
                }
            }
        }
        var_19 = (var_2 | var_13);
        var_20 = (max(var_20, (((var_12 ? var_9 : var_11)))));
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 = (max(var_20, ((((arr_2 [i_0]) ? (arr_2 [i_0]) : var_4)))));
        var_21 = (arr_2 [i_0]);
    }
    var_22 = var_15;
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            {
                arr_9 [i_2] [i_1] |= (min(((min((~11551), -17))), 16777216));
                var_23 = (min((((38307 ? 11551 : 38307))), 17017507585959102886));
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            {
                                var_24 = var_12;
                                arr_20 [i_1 - 2] [i_1 - 2] = (arr_17 [i_1] [i_1] [i_3] [2] [i_5]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = ((-(min(var_17, ((var_7 ? var_5 : 1))))));
    #pragma endscop
}

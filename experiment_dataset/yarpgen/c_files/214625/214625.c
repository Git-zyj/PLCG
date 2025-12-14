/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_18 = var_9;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4 - 3] [i_4 + 1] = (min((((~var_12) & (~var_5))), (((((min(var_6, var_14))) ? var_9 : var_9)))));
                                var_19 ^= var_7;
                            }
                        }
                    }
                    arr_14 [3] = (((((var_15 ? var_0 : var_9))) && var_15));
                }
            }
        }
    }
    var_20 = (min((((min(var_10, var_0)) / (var_8 | var_6))), -var_13));
    var_21 -= max(((((var_5 ? var_8 : var_1)) / (var_10 && var_7))), (!var_16));
    #pragma endscop
}

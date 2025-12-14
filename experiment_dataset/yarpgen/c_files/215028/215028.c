/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1 + 2] = (((((min(7277441180970713088, 0)))) ? (max((~-340670685), (~var_1))) : var_16));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_15 [i_3] [i_3] [i_2] [i_1] [i_3] = ((!(((var_3 ? (!0) : 14870)))));
                                var_18 = var_11;
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = ((-(min((14870 - var_12), var_6))));
    #pragma endscop
}

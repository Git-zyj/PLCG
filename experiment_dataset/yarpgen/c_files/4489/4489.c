/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_19 = ((var_4 ? 46545 : var_9));
                                arr_11 [15] [i_1] [i_2] [i_3] [i_4] = 65535;
                                arr_12 [i_2] = ((-var_5 ? ((-32084 & (arr_2 [i_2] [11]))) : (33451 / 57065)));
                                arr_13 [i_2] [i_1] [i_2] [i_2] [16] [i_4] = arr_6 [i_0] [i_1 - 1] [i_3] [i_4];
                            }
                        }
                    }
                }
                var_20 = (min((~var_1), ((0 ? (arr_3 [i_1 - 1] [i_1 + 1]) : var_14))));
            }
        }
    }
    var_21 *= (!var_4);
    var_22 += (max(16256, (~9506)));
    #pragma endscop
}

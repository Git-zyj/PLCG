/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40699
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_15 -= -231;
                arr_4 [14] &= (~var_14);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_0] = var_6;
                                var_16 = ((min((max((arr_11 [i_0] [i_1] [i_2] [i_0] [i_4]), 5649185756223389371)), -102)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = ((var_13 * (((!((min(var_11, var_2))))))));
    var_18 = var_14;
    #pragma endscop
}

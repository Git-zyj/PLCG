/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_11;
    var_21 = ((~((~(~var_19)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_22 -= ((((((arr_2 [i_0] [i_2]) != -4))) >= (((((41081 ? 65535 : 0))) ? ((var_3 >> (var_3 - 15366))) : -var_16))));
                            arr_10 [i_0] [i_1] [12] [i_3] = var_12;
                        }
                    }
                }
                arr_11 [i_1] [i_0] = ((((((arr_9 [i_0] [10] [0] [i_0] [i_1]) != 5667599141926810361))) & ((((arr_4 [i_0] [i_1]) <= 14372059619881944705)))));
                var_23 = ((!((max((!1587132656), 2707834629)))));
                arr_12 [i_1] [i_1] = var_9;
                arr_13 [i_0] [i_1] [i_0] = (arr_1 [i_0]);
            }
        }
    }
    #pragma endscop
}

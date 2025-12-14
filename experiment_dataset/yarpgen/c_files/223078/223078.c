/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, 1));
    var_17 = var_1;
    var_18 = (max(25921, 0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_3] [2] = (min((!var_6), ((~((1 ? var_15 : var_3))))));
                                var_19 ^= (max(((max((max(1, 0)), 0))), (min((min(3329, 15048)), (max(var_7, 8361))))));
                            }
                        }
                    }
                }
                arr_16 [i_0] [i_0] [i_0] = (((var_5 ? var_7 : var_2)));
                var_20 &= (((max(((max(27977, var_3))), ((3323 ? 7 : 0)))) | (((max(var_13, (-3329 > 1)))))));
                var_21 -= (((((var_1 ? -8375 : 1))) <= ((1 - (max(var_6, -1645869639703034797))))));
            }
        }
    }
    #pragma endscop
}

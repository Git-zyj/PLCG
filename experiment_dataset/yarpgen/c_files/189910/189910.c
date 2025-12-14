/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_10 [i_1] [i_1 - 2] [i_1] [i_2] = ((((min(22177, 800443605765419117))) ? (((min(1, -53)))) : var_15));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_18 [i_0] [i_1 - 4] [i_2] [i_2] [i_2] = ((+((((max((arr_16 [i_2] [i_3]), 1))) ? var_1 : -1854393428))));
                                arr_19 [i_0] [i_1 - 4] [i_2] [i_3] [i_3] = (((-41 ? 1931383343 : (arr_13 [i_0] [i_0 + 3] [i_2]))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = var_7;
    var_20 = ((var_18 & ((var_7 ^ (!var_9)))));
    #pragma endscop
}

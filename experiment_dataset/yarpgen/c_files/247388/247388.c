/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                var_18 *= arr_13 [16] [i_1] [1] [i_3] [i_4];
                                var_19 *= (max(((((arr_12 [i_1] [i_1 + 2] [16] [i_3 - 1] [i_4]) ? (min(24751, -26)) : (min(1, 26))))), (min((arr_11 [i_0 + 1] [0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 1]), var_4))));
                            }
                        }
                    }
                    var_20 = (min(var_20, (((((((arr_14 [i_0] [i_1] [i_0] [i_2] [i_2]) ? var_14 : -35)) << (((arr_8 [i_1 + 1] [i_1 + 2] [i_1 + 2] [i_1 - 1] [i_1 - 1] [0]) + 467100783))))))));
                    var_21 = ((arr_6 [4] [i_0] [i_1] [i_2]) ^ ((-35 ^ (~var_6))));
                }
            }
        }
    }
    var_22 |= var_13;
    var_23 = (!35);
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += var_9;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_19 ^= -8136;
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_20 = (max(((var_11 ? var_0 : ((var_10 ? var_9 : var_11)))), 2077680873));
                                var_21 = var_5;
                                var_22 = (((((arr_4 [i_4 + 1]) ? (arr_4 [i_4 + 1]) : (arr_4 [i_4 + 2])))) % ((1 ? 16069825420341464926 : 4611686018427387903)));
                                var_23 = ((!((max((arr_1 [i_3 - 1]), var_4)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

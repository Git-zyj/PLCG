/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 35414;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_16 = (max((var_4 | var_3), (((((62112 | (-127 - 1))) % 468903601)))));
                                var_17 = (max(var_17, ((((var_4 || 0) || -30622)))));
                                var_18 = (min((~0), (~1165427670)));
                                var_19 = (min(var_19, var_8));
                            }
                        }
                    }
                }
                var_20 = ((21739 ? (1165427669 / -1) : ((var_7 ? (-32767 - 1) : var_12))));
            }
        }
    }
    #pragma endscop
}

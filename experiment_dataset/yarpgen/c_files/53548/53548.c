/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -1468992824;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_17 = var_12;
                                arr_13 [i_2] [i_1] [i_2] [i_2] [i_4] [i_4] [i_2] = (~-1468992804);
                            }
                        }
                    }
                    var_18 = var_1;
                    var_19 = ((var_13 ? var_11 : (arr_0 [i_2])));
                    arr_14 [i_0] = (max((((max(var_9, -1468992823)))), -1468992823));
                }
            }
        }
    }
    var_20 = (var_15 ? ((((var_9 ? var_1 : 53)) >> (((~1468992823) + 1468992837)))) : ((min(var_9, ((var_10 ? -1761207849 : -100))))));
    #pragma endscop
}

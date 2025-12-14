/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-(((min(var_4, var_12)) / -104))));
    var_16 = ((var_2 ? var_0 : (min(((-57 ? var_1 : var_10)), var_6))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_17 = (!-49);
                                var_18 = (((((min(var_2, var_11)))) ? (min(((15 ? -8138120482272711982 : 1)), (-74 * -32745))) : (((min((arr_6 [i_2 - 1] [i_3 + 1]), (arr_6 [i_2 - 3] [i_3 - 1])))))));
                                var_19 = ((var_9 ? 10416552328919942093 : -8138120482272711977));
                                var_20 = (((((32763 ? 5078418278351862490 : 1))) ? -var_14 : -62));
                            }
                        }
                    }
                    var_21 = -32763;
                }
            }
        }
    }
    var_22 = (max(var_22, (((((max(((var_3 ? var_11 : var_12)), var_6))) ? var_10 : (8138120482272711981 - var_14))))));
    var_23 = 7207608077549149503;
    #pragma endscop
}

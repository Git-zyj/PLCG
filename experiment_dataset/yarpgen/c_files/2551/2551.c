/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_16 = (max(var_16, (((((min(var_4, var_4))) ? (var_7 > var_11) : var_14)))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_17 = (((!var_4) ? ((max(var_11, var_3))) : ((var_4 ? var_6 : var_14))));
                                arr_14 [0] [i_1] [i_1] [i_1] [i_1] [i_0] [i_0] = (((max((var_9 / var_14), var_6)) / ((((var_9 ? var_3 : var_1))))));
                                var_18 = (((min(var_11, var_5))));
                                arr_15 [i_0] = ((((var_1 * var_12) / var_3)));
                                var_19 = (max(var_19, ((max((((((max(var_7, var_0))) > (~var_3)))), var_8)))));
                            }
                        }
                    }
                }
                var_20 |= (max((min((min(var_4, var_13)), -var_1)), (~var_1)));
            }
        }
    }
    var_21 = var_2;
    #pragma endscop
}

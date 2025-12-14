/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = var_0;

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_17 -= (((((-(!1)))) ? -var_7 : var_16));
                        var_18 = (max(var_18, (((65535 ? 0 : (~1))))));
                        var_19 = (min(var_19, var_15));
                        var_20 -= -1;
                        arr_11 [i_3] = (((!-43) ? 65520 : ((var_9 ? var_2 : ((var_15 ? var_11 : 1))))));
                    }
                }
            }
        }
    }
    var_21 = var_12;
    var_22 = (!1);
    var_23 = ((var_9 ? var_7 : var_1));
    #pragma endscop
}

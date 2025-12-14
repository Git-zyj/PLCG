/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, ((min((((var_9 ? ((var_8 ? var_4 : var_15)) : ((var_0 << (var_12 - 13382)))))), (min(6579744730357226886, 162)))))));
    var_19 += (((((((min(var_8, var_8))) ? (((var_5 ? var_4 : var_3))) : (max(var_11, var_9))))) ? (((var_6 / var_15) ? ((var_2 ? var_6 : var_16)) : var_13)) : ((var_16 & (((var_16 ? var_15 : var_2)))))));
    var_20 = ((var_6 ? var_1 : ((var_0 ? var_0 : -var_17))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_21 = ((177 ? 268435456 : 2909452349));
                    arr_7 [i_0] [i_0] [i_0] [i_0] = var_5;
                    var_22 += ((((var_4 ? ((var_2 ? var_5 : var_11)) : var_15)) % var_1));
                    arr_8 [i_2] = ((var_0 ? (((var_3 | var_14) ? var_6 : ((var_4 ? var_17 : var_10)))) : (!-13357)));
                    arr_9 [i_0] [i_1] [i_1] [i_2 - 1] = (((min(var_9, var_6))));
                }
            }
        }
    }
    #pragma endscop
}

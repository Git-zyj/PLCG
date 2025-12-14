/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_2;

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_1] [i_2] &= (((!var_8) ? (min(((var_11 ? var_5 : var_4)), (((var_3 ? var_6 : var_13))))) : (!var_2)));
                    var_18 = (max(var_18, var_2));
                    var_19 &= var_9;
                }
            }
        }
        var_20 &= (((((((min(var_7, var_13))) ? (min(var_5, var_4)) : (((var_16 ? var_1 : var_13)))))) ? (((-9223372036854775807 - 1) ? 1073737728 : 22700)) : ((((((var_1 ? var_15 : var_5))) ? ((var_10 ? var_15 : var_5)) : (min(var_3, var_1)))))));
        arr_11 [i_0] = ((((min(var_15, -var_15))) ? ((min(var_4, var_13))) : ((var_15 ? ((var_2 ? var_15 : var_4)) : -var_14))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        var_21 = var_1;
        var_22 = ((var_9 ? var_7 : var_10));
        var_23 += var_3;
    }
    #pragma endscop
}

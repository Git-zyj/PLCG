/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_18 = ((~((var_4 ? 2188636423935924335 : -1971744351))));
                var_19 = (((((var_7 ? ((var_16 ? 6666 : var_10)) : var_15))) ? (((((var_4 ? var_13 : var_2))) ? ((min(var_6, var_14))) : var_17)) : ((((((var_17 ? var_15 : var_17))) ? ((var_1 ? var_7 : var_14)) : var_13)))));
            }
        }
    }
    var_20 = -1139386548;
    var_21 = 556851452;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_5 ? (((((var_13 ? var_0 : var_5)) < (var_17 && var_12)))) : var_2));
    var_20 += var_13;
    var_21 += ((-var_16 ? ((15 & ((var_15 ? 2873898921173819271 : 2873898921173819271)))) : var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_22 = var_2;
                arr_6 [i_1] = ((var_14 ? (arr_2 [i_1]) : var_13));
                arr_7 [i_0] [i_1] [i_1] = ((-2873898921173819271 ? 2873898921173819256 : -16520));
            }
        }
    }
    var_23 = ((var_15 ? (((((var_3 ? var_8 : var_16))) ? var_16 : var_2)) : var_1));
    #pragma endscop
}

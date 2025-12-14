/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_1 ? var_14 : ((var_12 ? ((var_0 ? var_0 : 2147483647)) : ((7 ? var_0 : var_0))))));

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_16 = (((((var_14 ? var_8 : (arr_0 [i_0 - 1])))) ? ((var_10 ? (arr_0 [i_0 + 2]) : var_5)) : (((-13879 ? 1 : 3840)))));
        var_17 -= ((((((arr_2 [16]) ? var_1 : var_2))) ? (((arr_3 [i_0 + 2]) ? (arr_1 [i_0 - 1] [i_0 + 1]) : ((var_7 ? (-9223372036854775807 - 1) : var_2)))) : (((var_1 ? (arr_2 [2]) : (arr_2 [20]))))));
    }
    #pragma endscop
}

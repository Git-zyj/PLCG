/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_1;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_21 = (!var_10);
        var_22 = (max(var_22, ((((arr_0 [2]) ? (arr_0 [4]) : (arr_0 [10]))))));
        arr_2 [i_0] = (((arr_1 [i_0 - 1]) >> (((arr_1 [i_0 - 1]) - 63341))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_5 [i_1] = ((((55 << (((arr_3 [i_1]) - 2663090294))))) - (arr_4 [i_1]));
        var_23 = (min(var_23, (((((((arr_3 [i_1]) ? (arr_4 [i_1]) : 33472))) ? (((arr_3 [i_1]) ? 32073 : 4333757231132920914)) : var_1)))));
    }
    var_24 = ((var_17 + ((32068 ? ((4294967295 ? var_12 : var_15)) : var_19))));
    var_25 = ((var_17 >> (var_14 + 28072)));
    #pragma endscop
}

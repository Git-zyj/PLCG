/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_13 = (min(var_13, 1));
        var_14 += arr_0 [i_0 - 1];
    }
    var_15 = (min(var_8, var_7));
    var_16 = (min(((((var_3 ? var_6 : var_6)))), 1));
    var_17 = (min(var_6, var_3));
    #pragma endscop
}

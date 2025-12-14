/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_11;
    var_17 = (((!var_1) / ((var_14 ? ((var_6 ? var_7 : 27)) : var_14))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_18 = (min((((max(var_15, (arr_0 [i_0]))) ? (arr_1 [i_0]) : (10470970098205366364 | var_8))), var_3));
        var_19 ^= ((4 ? -127 : 7975773975504185246));
    }
    #pragma endscop
}

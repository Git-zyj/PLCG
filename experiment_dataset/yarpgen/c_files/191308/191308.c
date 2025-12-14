/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_14 % ((27 ? ((48259 ? var_0 : var_8)) : var_14)));

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_17 = (min((((arr_2 [i_0 + 1]) | (arr_2 [i_0 - 1]))), ((var_2 ? (arr_1 [i_0]) : (!var_1)))));
        var_18 &= ((~((max(var_8, var_4)))));
        var_19 = var_13;
    }
    #pragma endscop
}

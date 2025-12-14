/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_16 = (((var_6 ^ var_6) ^ ((max(var_10, var_0)))));
        var_17 = (min((var_10 ^ var_12), ((var_13 ? var_13 : var_1))));
    }
    var_18 = var_14;
    var_19 = var_6;
    #pragma endscop
}

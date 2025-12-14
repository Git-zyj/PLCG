/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_17;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_20 = var_7;
        var_21 -= ((((((9487851343087312849 ? -95 : 95)))) <= var_9));
        var_22 = (((((-var_2 ? -var_1 : (var_9 * var_4)))) ? ((var_16 ? (((var_10 ? var_14 : var_10))) : ((var_2 ? var_11 : var_8)))) : ((min((max(var_6, var_0)), var_7)))));
    }
    var_23 = (var_7 ? (min(((var_10 ? var_7 : var_0)), var_18)) : ((((((var_14 ? var_17 : var_18))) ? var_12 : ((var_8 ? var_12 : var_18))))));
    #pragma endscop
}

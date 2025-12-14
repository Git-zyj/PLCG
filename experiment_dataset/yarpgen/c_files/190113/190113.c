/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_13;

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_3 [i_0] = (-((min(-4227116253402563490, var_15))));
        var_18 = (((((((max(var_9, var_4))) ? ((var_0 ? -389609769888026959 : 1)) : var_7))) ? (min(var_4, 1)) : ((min(var_5, var_3)))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_19 = (((~var_10) ? ((4227116253402563489 ? 1 : var_13)) : var_4));
        var_20 = ((((min(var_1, var_9))) ? (((min(1, 1)))) : var_14));
        var_21 += (min((~var_16), -2940991855645754426));
    }
    #pragma endscop
}

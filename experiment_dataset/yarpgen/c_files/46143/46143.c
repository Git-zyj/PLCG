/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 0;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_16 = (arr_1 [1]);
        var_17 *= var_2;
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_5 [i_1] = var_5;
        var_18 = ((!((min(((5120921033238064534 ? 661120731 : 973488165)), 2880)))));
    }
    var_19 = ((!((((~var_7) ? ((1765910891354187501 ? 741825880 : var_11)) : var_13)))));
    var_20 = ((var_0 * ((var_10 / (var_9 * 1)))));
    var_21 = (min((min((((var_8 ? var_7 : var_10))), (var_9 - 32767))), var_0));
    #pragma endscop
}

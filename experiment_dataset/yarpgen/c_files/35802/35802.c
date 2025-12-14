/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max((((!((min(var_3, var_5)))))), var_0));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_14 &= var_0;
        arr_2 [i_0] = (~var_12);
        var_15 = (min(var_15, ((((13363 ? var_10 : var_12))))));
        arr_3 [i_0] = (((-9223372036854775807 - 1) / 6796517812744195216));
    }

    for (int i_1 = 1; i_1 < 24;i_1 += 1)
    {
        arr_6 [i_1] = ((-((((var_8 ? var_8 : var_11)) >> (min(var_6, var_5))))));
        arr_7 [i_1] = (((var_3 ? -9223372036854775797 : var_4)));
        var_16 = (-9223372036854775807 - 1);
    }
    #pragma endscop
}

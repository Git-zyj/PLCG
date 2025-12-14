/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((var_1 ? -211 : -4248747895851546317)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = (max(var_20, var_11));
        var_21 = ((var_7 ? var_8 : -2147483619));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (((~15) ? -24 : ((var_16 ? var_2 : var_17))));
        arr_7 [i_1] [i_1] = (((((var_15 ? var_8 : (~var_13)))) ? 32512 : var_5));
        var_22 = (max(var_22, ((((((3 ? (((1451333136 ? var_5 : var_14))) : var_18))) ? (max(var_6, ((var_13 ? 133520151 : var_15)))) : var_16)))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        var_23 = (((((var_18 ? var_13 : var_2))) ? var_1 : var_2));
        var_24 = (((((var_18 ? var_10 : var_11))) ? -0 : var_7));
    }
    #pragma endscop
}

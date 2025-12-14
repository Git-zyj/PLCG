/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 3952203568613844970;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_21 = ((122880 ? 30720 : 1459));
        var_22 = ((((var_17 ? var_12 : 122880))) ? (((var_5 ? 107 : 1273821727))) : var_11);
        arr_3 [i_0] &= ((var_5 ? var_8 : (((var_18 ? var_6 : var_11)))));
        var_23 = 2217753540793409648;
    }
    #pragma endscop
}

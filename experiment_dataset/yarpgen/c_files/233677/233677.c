/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += ((+(((0 < 99) / ((var_8 ? var_7 : var_9))))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0 - 2]);
        arr_3 [i_0] = (((1 ? 106 : 7)));
    }
    var_19 = (((min((((var_11 ? var_8 : var_10))), (max(var_7, var_6)))) - ((((((2761541699156349019 ? var_11 : var_8))) ? var_6 : var_10)))));
    #pragma endscop
}

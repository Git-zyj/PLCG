/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_7 ? var_17 : (min(((var_1 ? var_0 : var_17)), ((var_16 ? var_15 : var_13))))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        var_21 = (min(var_21, var_12));
        var_22 = var_15;
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        arr_6 [0] = ((((((-33 ? 1 : -300139703))) ? ((max(var_1, var_19))) : ((var_3 ? var_2 : var_8)))));
        var_23 -= (max(((min((min(var_10, var_17)), var_19))), (min(var_2, var_14))));
        var_24 = var_16;
    }
    #pragma endscop
}

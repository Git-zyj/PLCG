/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [9] [i_0] = (var_6 < var_17);
        var_20 = (min(var_20, (var_11 != var_18)));
        arr_5 [i_0] [i_0] = 39659;
    }

    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_21 = (max(var_19, ((((var_0 ? var_11 : var_14))))));
        var_22 = ((var_4 % (((var_15 ? var_11 : var_1)))));
    }
    var_23 = ((min(var_3, var_9)));
    var_24 = var_17;
    #pragma endscop
}

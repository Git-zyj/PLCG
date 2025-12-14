/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= ((var_5 ? (var_4 & var_4) : ((((((var_2 ? var_9 : var_9))) ? (!var_8) : var_9)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_11 = (min(var_11, (!720)));
        var_12 = var_7;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_13 = ((!(var_6 ^ var_6)));
        var_14 = ((var_3 ? var_6 : (!var_5)));
    }
    var_15 = var_6;
    var_16 = var_7;
    #pragma endscop
}

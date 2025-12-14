/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_10 = var_4;
        var_11 = (max(var_11, (((var_5 ? var_7 : var_6)))));
        var_12 = ((var_2 ? ((17646 ? 32305 : 32285)) : ((var_6 ? var_8 : var_6))));
    }
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        var_13 = (((((26 ? 8191 : var_7))) ? ((var_8 ? ((var_6 ? var_9 : var_4)) : var_3)) : var_3));
        var_14 = var_3;
    }
    var_15 = (max(var_15, var_2));
    #pragma endscop
}

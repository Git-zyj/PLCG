/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((-(var_13 ^ var_7)))) ? ((var_9 ? ((max(var_13, var_16))) : (var_13 / var_1))) : (((-var_14 || (var_13 * var_17))))));
    var_21 = var_15;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_22 = (max(var_22, var_7));
        var_23 = var_9;
    }
    var_24 ^= var_2;
    var_25 = (max(-var_7, (max((min(var_5, var_6)), -54002))));
    #pragma endscop
}

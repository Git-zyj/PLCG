/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_9;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_17 = (((arr_0 [i_0] [i_0]) || -2147483637));
        var_18 = 28;
    }
    var_19 = (max(((min(var_13, var_3))), -3734));
    var_20 = (((!var_9) >= ((max(var_13, var_2)))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_15;
    var_19 = (max(var_19, ((((max(var_11, 844424930131968)) >= var_6)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 = var_16;
        var_21 = (min(var_21, 95));
    }
    #pragma endscop
}

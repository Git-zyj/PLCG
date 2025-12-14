/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_9, var_0));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_14 = -25590;
        var_15 = 6;
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        var_16 = (max((max(-25590, -25602)), (max(-25620, var_6))));
        var_17 = (max((max(25589, -33)), (max((arr_2 [i_1 + 3]), 25423))));
    }
    #pragma endscop
}

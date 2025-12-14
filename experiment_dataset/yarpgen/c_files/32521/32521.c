/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_8 | var_2);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_18 -= 61697;
        var_19 = var_5;
    }
    var_20 = var_9;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_15 = ((var_0 + (!var_3)));
        arr_3 [i_0] = (~70931694131085312);
    }
    var_16 = ((~((~(~244130426)))));
    #pragma endscop
}

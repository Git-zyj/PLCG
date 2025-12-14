/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_17 = var_14;
        var_18 = (min(var_18, var_6));
    }
    var_19 ^= var_6;
    var_20 = (min(((max(var_13, var_0))), -var_14));
    #pragma endscop
}

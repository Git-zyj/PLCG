/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= var_3;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_17 ^= 1;
        var_18 = var_5;
    }
    #pragma endscop
}

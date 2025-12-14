/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_15 ^= (min(127, (min(var_0, 85))));
        var_16 = 18;
    }
    var_17 ^= (max(((((var_0 ? var_3 : var_14)) - var_13)), ((max(0, (var_10 != 96))))));
    #pragma endscop
}

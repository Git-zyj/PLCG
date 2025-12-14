/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_10 -= (((-(max(var_0, var_9)))));
        var_11 -= ((((max(var_9, var_1))) >= -var_0));
    }

    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        var_12 = (max((var_0 ^ 2792371296), (7505805624492907883 - var_8)));
        var_13 += var_5;
        var_14 ^= var_0;
        var_15 -= (((max((max(var_4, var_1)), 53601)) / 113));
    }
    var_16 ^= -var_1;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_13 |= ((-101 / ((max(65472, 65472)))));
        var_14 = (((-9223372036854775807 - 1) ? ((9223372036854775803 ? (65470 / 9223372036854775803) : var_4)) : -1));
    }
    var_15 = 1;
    var_16 = -1;
    #pragma endscop
}

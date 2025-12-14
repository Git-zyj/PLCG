/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= 0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 = ((15726479820304153357 && (((arr_1 [i_0] [i_0]) < 127))));
        var_22 = ((arr_1 [i_0] [i_0]) * (24 & 24));
    }
    #pragma endscop
}

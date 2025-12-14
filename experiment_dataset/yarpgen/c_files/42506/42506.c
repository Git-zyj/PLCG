/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_15 = (~4189234694);
        var_16 = ((-((~(-2147483647 - 1)))));
        var_17 ^= ((8970762374610599450 ? (arr_3 [i_0] [i_0]) : 1));
        arr_4 [i_0] = -0;
        arr_5 [i_0] = ((~var_9) <= 126100789566373888);
    }
    var_18 = var_8;
    #pragma endscop
}

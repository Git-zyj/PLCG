/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_0;

    /* vectorizable */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        var_14 = 166;
        var_15 ^= ((!(arr_0 [i_0 - 1])));
        var_16 = (~var_1);
        var_17 = ((16057200872842605314 ? (0 & 27827) : -32214));
    }
    #pragma endscop
}

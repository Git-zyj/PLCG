/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_13 = ((-10708 && (~var_11)));
        var_14 = (~((0 ? var_9 : 524284)));
    }
    var_15 -= var_3;
    #pragma endscop
}

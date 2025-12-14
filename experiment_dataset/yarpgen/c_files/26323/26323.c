/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= var_4;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_18 = var_12;
        var_19 ^= (arr_0 [i_0 + 1]);
        var_20 = ((-117 ? -99 : -87));
    }
    var_21 ^= var_9;
    var_22 = var_8;
    var_23 = var_3;
    #pragma endscop
}

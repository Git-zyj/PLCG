/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;
    var_15 = var_13;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_16 = (max(var_16, -1));
        var_17 ^= (~var_9);
        var_18 = var_7;
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = var_11;
        var_19 = (min(var_19, (~4170627259)));
    }
    var_20 = var_13;
    var_21 = var_0;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= var_12;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_19 = var_5;
        arr_3 [12] &= (arr_0 [i_0]);
        var_20 = var_1;
        var_21 ^= ((-((2443581719 ? var_9 : (arr_2 [i_0] [i_0])))));
        var_22 = (max(var_22, var_9));
    }
    var_23 = (((((min(var_15, var_13)))) < (min(((max(var_0, 12))), (var_1 - 1959295728)))));
    #pragma endscop
}

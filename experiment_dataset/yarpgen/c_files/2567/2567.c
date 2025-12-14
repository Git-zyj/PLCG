/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((max(((max(240, var_8))), -var_9)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_14 = (!35255);
        var_15 = ((-9297 ? var_2 : (arr_0 [i_0])));
        arr_2 [i_0] [i_0] = 236;
        var_16 -= (((arr_0 [i_0]) ? (arr_0 [i_0]) : var_10));
    }
    #pragma endscop
}

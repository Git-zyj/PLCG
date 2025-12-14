/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23116
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_10 - (((((3584 ? 1 : 0))) ? 1 : (var_9 != var_2)))));
    var_13 = var_10;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_14 = (((arr_1 [i_0]) | (arr_0 [i_0])));
        var_15 = ((((arr_1 [i_0]) + 9223372036854775807)) >> (((arr_2 [i_0]) - 1248190025)));
    }
    #pragma endscop
}

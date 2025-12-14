/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 5401618688118432823;

    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        var_12 = min((~1), ((var_6 ? ((var_5 + (arr_0 [i_0 + 1] [i_0]))) : var_1)));
        var_13 = (((var_6 ? (arr_1 [i_0]) : (arr_1 [1]))));
        var_14 &= (arr_1 [i_0]);
    }

    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_15 = (var_0 * var_9);
        var_16 ^= (min((arr_3 [i_1] [i_1]), (max(var_2, (((arr_2 [i_1]) ? var_8 : (arr_3 [i_1] [i_1])))))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        var_17 = (((-127 - 1) ? -126 : -1));
        var_18 = var_2;
    }
    var_19 = ((((max(var_2, 8)))) + var_10);
    #pragma endscop
}

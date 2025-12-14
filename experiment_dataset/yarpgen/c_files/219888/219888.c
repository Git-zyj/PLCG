/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_16 ^= (((var_12 && var_5) ? var_1 : (arr_2 [i_0])));
        var_17 = (((((var_14 ? (arr_2 [10]) : (arr_3 [i_0 - 1])))) ? (arr_3 [i_0 + 2]) : -3974313422498517092));
        var_18 = (((var_4 ^ (arr_2 [i_0]))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_19 = var_1;
        arr_7 [i_1] = (((((~(arr_5 [i_1])))) ? (1 & var_14) : (arr_5 [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_20 = ((3974313422498517091 % (2596780226294347691 ^ var_12)));
        var_21 = (var_13 < var_5);
        var_22 = var_14;
    }
    var_23 = var_11;
    #pragma endscop
}

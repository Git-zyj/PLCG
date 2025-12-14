/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= var_12;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [1] [i_0] = (~1);
        var_17 = (min(var_17, (arr_0 [i_0])));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        arr_8 [i_1] = (((((1 ? var_7 : var_5)) << (((~1) + 8)))) > (var_14 || 1));
        arr_9 [i_1] [i_1] = var_15;
    }
    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        arr_14 [i_2] = (var_0 != var_5);
        arr_15 [1] = ((((((arr_2 [i_2 + 1]) - (arr_0 [i_2 + 1])))) ? (arr_11 [i_2] [i_2]) : (((((arr_1 [i_2] [i_2]) ? (arr_1 [i_2] [i_2]) : (arr_12 [i_2 + 1]))) * (arr_13 [i_2])))));
        var_18 = (((arr_1 [i_2] [i_2]) ? 1 : (!var_3)));
    }
    #pragma endscop
}

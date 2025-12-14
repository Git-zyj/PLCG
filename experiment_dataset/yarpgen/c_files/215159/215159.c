/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((~((var_8 ? 40119 : -1870907044)))));
    var_11 = (!var_1);
    var_12 = ((~(~4294967295)));
    var_13 = ((((((var_4 ? var_1 : 2266822908)))) ? var_2 : (--1361640340)));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0] = (((((var_3 ? 47415 : var_1))) ? var_9 : ((var_5 ? (arr_1 [i_0]) : var_6))));
        var_14 = (((!(arr_1 [i_0]))) ? ((918130248 ? (arr_1 [i_0 + 2]) : (arr_0 [i_0] [1]))) : (arr_0 [i_0] [i_0 - 2]));
    }
    #pragma endscop
}

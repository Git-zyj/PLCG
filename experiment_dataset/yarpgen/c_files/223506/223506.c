/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_17 = (((((((((arr_0 [i_0]) < 550842236)))) < (1911638964524763630 ^ 0))) ? (((((var_6 + (arr_0 [i_0])))) ? (((arr_1 [i_0]) ? var_15 : (arr_0 [i_0]))) : ((var_10 / (arr_1 [i_0]))))) : (((((var_11 ? 0 : (arr_1 [i_0])))) ^ ((var_13 ? 134217728 : (arr_1 [i_0])))))));
        var_18 = (min(var_18, (((0 ? 1 : 216)))));
    }
    var_19 = (((((var_15 ^ 1) ^ ((var_4 ? 1911638964524763630 : var_4)))) < (((((var_15 ? var_3 : -121))) ? ((1 ? var_2 : var_4)) : (((1 ? -107 : var_12)))))));
    #pragma endscop
}

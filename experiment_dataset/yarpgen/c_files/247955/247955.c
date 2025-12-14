/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_13 = (min(var_13, ((((arr_0 [i_0 + 1] [i_0 - 1]) < (arr_0 [i_0 - 1] [i_0 + 1]))))));
        arr_2 [i_0] [i_0] &= arr_0 [i_0] [i_0 + 1];
        arr_3 [i_0 + 1] |= (((arr_1 [i_0] [i_0 + 1]) / (arr_1 [i_0 + 1] [i_0 - 1])));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_6 [1] |= var_3;
        arr_7 [i_1] = (((arr_5 [i_1]) ? (arr_5 [i_1]) : (arr_5 [i_1])));
        arr_8 [i_1] = ((!(((var_0 ? 0 : var_9)))));
    }
    var_14 = ((((((2901391036 ? 17732923532771328 : -32647)))) ? ((var_4 ? ((var_4 ? var_4 : var_3)) : (74 >> var_1))) : var_4));
    var_15 = var_3;
    var_16 = ((((var_4 >> (33553408 == var_11))) != var_1));
    var_17 = ((var_5 ? var_12 : var_12));
    #pragma endscop
}

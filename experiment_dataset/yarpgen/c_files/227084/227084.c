/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((var_8 ? (arr_0 [i_0] [i_0]) : (((var_3 ? -71 : var_9)))));
        var_11 = (((((51 ? (arr_1 [i_0]) : (arr_0 [i_0] [6])))) ? (((arr_0 [7] [7]) / var_2)) : ((120 ? var_7 : var_2))));
        var_12 *= (((((arr_0 [i_0] [i_0]) && 2048)) ? var_1 : 152));
        var_13 = (min(var_13, var_2));
    }
    var_14 = 4;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_15;
    var_21 = (((2147483647 && ((max(11055035251504066012, var_1))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 2147483647;
        arr_3 [i_0] [i_0 - 1] = (var_2 + var_10);
        arr_4 [i_0] = (((((2147483647 ? (arr_0 [i_0] [i_0]) : var_11))) ? var_16 : var_17));
    }
    for (int i_1 = 3; i_1 < 19;i_1 += 1)
    {
        arr_8 [i_1] = max((arr_7 [i_1 - 3]), -2147483647);
        arr_9 [i_1] = ((((((-1 % 11423213311138629831) ? (max((arr_5 [i_1]), 2147483643)) : (min((arr_7 [8]), 2147483647))))) || var_2));
        var_22 = (min(var_22, ((min((arr_0 [i_1] [i_1]), var_16)))));
        var_23 = arr_7 [i_1];
    }
    var_24 = var_16;
    #pragma endscop
}

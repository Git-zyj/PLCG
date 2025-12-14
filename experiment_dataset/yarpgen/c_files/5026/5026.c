/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] = ((var_9 ? ((-(arr_1 [i_0]))) : ((4096 ? var_13 : var_4))));
        var_19 = var_12;
        var_20 += ((!(arr_1 [i_0])));
    }

    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_21 = ((((((arr_7 [5]) ? var_8 : (((arr_6 [i_1] [9]) ? (arr_5 [i_1] [i_1]) : var_13))))) ? (((arr_7 [i_1]) | (arr_7 [i_1]))) : ((~((2147483647 ? var_3 : var_3))))));
        var_22 = (((((var_11 ? 2147483641 : (arr_7 [i_1])))) ? (arr_7 [i_1]) : ((((min((arr_5 [i_1] [i_1]), 7048914266208536390))) ? (arr_7 [i_1]) : (arr_7 [i_1])))));
        arr_8 [i_1] [i_1] = -3;
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 23;i_2 += 1)
    {
        var_23 = (max(var_23, (!var_7)));
        arr_12 [i_2] = (arr_10 [i_2] [23]);
        arr_13 [i_2] [i_2] = ((var_3 ? ((14509913939267115622 ? 5641 : var_13)) : var_3));
    }
    var_24 = (min(var_2, var_12));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_15;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_19 = (max(var_19, var_7));
        var_20 = ((((arr_1 [i_0] [i_0]) ? var_2 : (arr_2 [i_0]))));
        arr_3 [i_0] [i_0] = (((arr_2 [i_0]) > var_12));
        arr_4 [i_0] = (((((1 ? var_13 : var_1))) ? (((var_9 ? 1 : var_16))) : (var_2 | -12)));
        arr_5 [i_0] = 1;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_21 = (arr_6 [i_1]);
        var_22 = arr_7 [i_1];
        arr_8 [i_1] [i_1] = (min((((arr_2 [8]) ? var_3 : (arr_2 [18]))), (arr_7 [i_1])));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        arr_12 [i_2] = (var_16 > var_15);
        arr_13 [i_2] = (((min((arr_11 [i_2]), 1)) * (((((!var_0) != (arr_9 [i_2] [i_2])))))));
        var_23 = ((var_12 >> (61440 >= var_16)));
    }
    #pragma endscop
}

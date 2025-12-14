/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_9;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = ((var_14 > (arr_0 [i_0])));
        var_19 = (((-(arr_1 [2]))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_20 = (min(var_20, (arr_6 [11] [i_1])));
        var_21 = ((((28659 ? var_0 : var_12)) - (arr_5 [i_1] [i_1])));
        var_22 = (max(var_22, (arr_5 [i_1] [i_1])));
    }
    var_23 = var_2;
    #pragma endscop
}

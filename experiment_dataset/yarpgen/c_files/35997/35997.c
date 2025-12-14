/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_17 = (max(-21, 1));
        arr_3 [i_0 + 1] = ((var_8 ? (((min(38770, (arr_2 [i_0 + 1]))))) : (((arr_1 [i_0 + 1]) ? ((((arr_1 [i_0]) ? var_6 : var_14))) : (((arr_1 [i_0]) * var_1))))));
        arr_4 [i_0] = ((+((((arr_2 [i_0 + 2]) && (arr_2 [i_0 + 1]))))));
    }
    var_18 -= ((var_0 ? var_5 : var_4));
    var_19 = (min(((var_3 ? var_9 : var_1)), ((((-1 ? var_10 : var_9))))));
    var_20 = ((var_16 ? var_12 : (((115 ? -40 : 10657)))));
    #pragma endscop
}

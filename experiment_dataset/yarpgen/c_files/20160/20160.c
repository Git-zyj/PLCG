/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_19 = (arr_1 [i_0]);
        var_20 = (arr_1 [2]);
        arr_2 [6] [i_0] = (((arr_0 [i_0]) ? (((arr_1 [16]) ? (arr_0 [i_0]) : (((arr_0 [i_0]) ? (arr_1 [5]) : (arr_1 [i_0]))))) : (arr_1 [i_0])));
    }
    var_21 = (max(var_21, var_11));
    var_22 = var_1;
    var_23 = (max(var_23, ((((((var_0 ? ((var_12 ? var_2 : var_6)) : (((var_14 ? var_15 : var_15)))))) ? var_17 : ((var_13 ? ((var_16 ? var_10 : var_8)) : var_12)))))));
    #pragma endscop
}

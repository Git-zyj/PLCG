/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197991
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (!var_8);
    var_15 = ((((4092 ? 15299 : 209)) != (((((var_8 ? var_6 : var_4)) < ((36018 ? var_7 : var_9)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = -30028;
        var_16 &= -var_8;
        var_17 = (var_6 ? (arr_0 [i_0]) : ((1032192 ? (arr_1 [i_0] [8]) : (arr_0 [7]))));
    }
    var_18 = (max(var_18, var_12));
    #pragma endscop
}

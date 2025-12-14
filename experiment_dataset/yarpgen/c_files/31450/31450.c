/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((var_15 ? ((var_12 ? var_7 : var_15)) : var_9)) >= var_2);

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_18 = (~((((max(27, var_9))) ? (arr_0 [i_0 + 2] [8]) : (max(var_11, -3116076046371172001)))));
        arr_2 [i_0] = (i_0 % 2 == 0) ? ((((((var_11 ? (arr_0 [i_0] [i_0]) : var_7))) ? (((((141 ? (arr_0 [3] [i_0]) : (arr_1 [0] [i_0])))) ? (((var_11 << (((arr_0 [i_0] [i_0]) - 7599899669702472797))))) : (max(var_1, (arr_0 [i_0 - 2] [i_0]))))) : (((-var_4 ? 0 : ((var_13 ? var_5 : 10)))))))) : ((((((var_11 ? (arr_0 [i_0] [i_0]) : var_7))) ? (((((141 ? (arr_0 [3] [i_0]) : (arr_1 [0] [i_0])))) ? (((var_11 << (((((arr_0 [i_0] [i_0]) - 7599899669702472797)) + 124401077903609808))))) : (max(var_1, (arr_0 [i_0 - 2] [i_0]))))) : (((-var_4 ? 0 : ((var_13 ? var_5 : 10))))))));
        var_19 = (max((((((min(var_3, (arr_1 [i_0] [i_0])))) || (((-(arr_1 [i_0] [i_0]))))))), (((((var_16 ? var_2 : var_13))) ? (arr_0 [i_0] [i_0]) : (((618236809 ? (arr_1 [i_0] [i_0]) : var_8)))))));
    }
    #pragma endscop
}

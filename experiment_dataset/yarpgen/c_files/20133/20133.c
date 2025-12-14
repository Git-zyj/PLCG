/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((!((min(var_5, (241 / var_6))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_16 = (((((~(((arr_0 [i_0]) * var_1))))) ? (((arr_1 [7]) ? (((arr_1 [i_0]) + (arr_2 [i_0] [i_0]))) : (arr_0 [i_0]))) : ((max((-114 - var_10), (arr_2 [i_0] [i_0]))))));
        var_17 = (arr_0 [i_0]);
        var_18 = (min(var_18, ((min((((min(65535, (arr_1 [i_0]))) >> (((9161072772055557801 | 65528) - 9161072772055564227)))), (~7567710937010868494))))));
        arr_3 [i_0] = (max((((arr_1 [3]) ? (arr_2 [i_0] [i_0]) : (arr_1 [i_0]))), (((((min((arr_2 [i_0] [i_0]), 1454))) * 2272772504963738018)))));
        var_19 *= ((57085 & ((~(arr_2 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_20 += ((((max(7074595435362864534, ((((arr_1 [i_1]) ? 36145 : 34661)))))) ? (((arr_4 [i_1]) + (arr_5 [i_1]))) : ((max(30890, (-4 + 15))))));
        var_21 = arr_4 [i_1];
        var_22 = ((!((!(1 >> 1)))));
        arr_7 [i_1] [i_1] = ((!(((-(arr_2 [i_1] [i_1]))))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        var_23 &= 9;
        var_24 = ((-(arr_10 [i_2 + 2] [i_2])));
        var_25 += ((((arr_9 [i_2]) || (arr_9 [i_2 + 2]))));
    }
    #pragma endscop
}

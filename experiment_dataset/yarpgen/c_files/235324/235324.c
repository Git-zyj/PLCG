/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += 1533239002;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_2 [10] [i_0] &= 1533239002;
        var_13 = ((var_0 ? 1533239002 : (-1105616332 % 1)));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_14 += ((-696388390814980328 ? 15 : var_7));
        var_15 = (((((max(2761728293, 65521))) ? (max(1, 1533239002)) : (24576 + 1))) & (((((-1 ? -28 : 1748)) / var_11))));
        var_16 = ((((!(arr_0 [i_1]))) ? (((arr_6 [i_1]) ? (arr_5 [i_1]) : (((~(arr_4 [i_1])))))) : (((-((2761728316 ? 2761728293 : 1)))))));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_17 ^= ((var_6 & (((~-1105616332) ? 2761728293 : (((var_8 ? -2038613194 : var_4)))))));
        var_18 ^= 3;
        var_19 -= (((((arr_9 [2]) ? (var_3 << 1) : (arr_4 [i_2])))) | ((~(arr_9 [2]))));
        var_20 = 1105616332;
        var_21 = arr_6 [i_2];
    }
    for (int i_3 = 1; i_3 < 10;i_3 += 1)
    {
        var_22 = (((((-1 * ((-93 ? (arr_5 [0]) : var_5))))) ? ((2038613194 ? -2038613195 : (arr_11 [i_3]))) : (max(1366615893, ((min(var_1, -1)))))));
        var_23 &= (((1 ^ (arr_4 [i_3]))));
    }
    var_24 = var_11;
    var_25 = (max(var_0, ((((-1125563568 ? 1 : 22009)) - var_8))));
    #pragma endscop
}

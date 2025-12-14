/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_4 ? (var_0 && var_2) : var_8));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_17 = ((((var_5 ? 11550763485735154615 : 6895980587974396994)) >> ((var_6 ? var_5 : (arr_0 [i_0])))));
        var_18 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_19 = (((var_12 + (9 - var_6))));
        var_20 = var_2;
        var_21 = ((((-((var_2 ? var_1 : var_6))))) ? 11550763485735154608 : (((((-33554432 ? (arr_4 [12]) : (arr_2 [13])))) ? (arr_4 [21]) : 6895980587974396990)));
        var_22 = ((((min((arr_2 [i_1]), 6895980587974396971))) ? ((var_15 ? (((!(arr_3 [i_1] [20])))) : (((var_6 || (arr_2 [i_1])))))) : 17906));
    }
    for (int i_2 = 2; i_2 < 9;i_2 += 1)
    {
        var_23 = var_4;
        arr_7 [i_2] [i_2] = (min(var_4, (((var_4 ? (arr_6 [i_2] [10]) : (arr_6 [i_2] [i_2]))))));
    }
    var_24 = ((1428908295 + (var_9 + var_15)));
    #pragma endscop
}

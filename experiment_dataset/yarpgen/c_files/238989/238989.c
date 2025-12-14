/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [4] [21] |= var_1;
        arr_4 [8] = (min((((118 / var_1) ? 178 : 129)), (arr_1 [23])));
        arr_5 [8] = min((min(((~(arr_0 [13]))), 179)), (~var_0));
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        var_12 = ((123 | -828009500875088172) ? (((3879840526 ? 118 : 1))) : (((((-(arr_1 [12])))) ? (arr_8 [8] [1]) : 227858808)));
        var_13 = ((var_1 ? (min(var_7, var_8)) : ((((arr_0 [2]) << (((arr_1 [4]) - 30106)))))));
        arr_10 [i_1] = var_4;
        var_14 = (min(var_14, ((((118 | var_8) ? var_10 : (~4135478875))))));
    }
    /* vectorizable */
    for (int i_2 = 4; i_2 < 20;i_2 += 1)
    {
        arr_15 [1] = (((((var_3 >= (arr_12 [21])))) >= -11543));
        arr_16 [5] = 1227904609531603423;
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 20;i_3 += 1)
    {
        arr_19 [16] = (~var_0);
        var_15 |= (~811401401899292160);
        var_16 |= (arr_12 [i_3 - 2]);
        var_17 = -6922472250227714562;
    }
    var_18 = var_7;
    #pragma endscop
}

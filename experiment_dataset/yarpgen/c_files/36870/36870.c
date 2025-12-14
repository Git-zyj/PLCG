/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (max(-2135476820, ((5 | (arr_1 [i_0])))));
        var_10 = ((((!(arr_2 [i_0]))) ? (min((arr_1 [i_0]), -1907373242)) : 2893588716316882585));
        var_11 = ((((max((arr_1 [i_0]), -1))) + ((min((arr_1 [i_0]), (arr_1 [i_0]))))));
        arr_4 [i_0] [i_0] = (arr_2 [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = (((arr_7 [i_1]) ? ((max((arr_7 [i_1]), var_4))) : ((max((arr_7 [i_1]), (arr_5 [i_1] [i_1]))))));
        var_12 = ((+((((max((arr_7 [i_1]), 0))) ? (((-20 ? (arr_6 [i_1]) : 93))) : (2893588716316882585 / -22857)))));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_13 = var_0;
        var_14 = 0;
        var_15 = ((-1023 ? 0 : (((((var_0 ? (arr_5 [16] [i_2]) : var_3))) ? (((arr_6 [10]) ? 88 : (arr_9 [i_2]))) : 0))));
    }
    var_16 = var_2;
    var_17 = var_7;
    var_18 = ((0 - ((((max(0, var_9))) ? ((max(-94, -22857))) : ((max(var_8, var_0)))))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((var_8 ? ((var_10 ? var_9 : var_4)) : ((var_0 ? var_7 : var_10))))) ? var_0 : ((var_10 ? ((var_9 ? var_6 : var_6)) : ((max(var_3, 48)))))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_12 += (((((((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : var_0))) ? (((arr_1 [i_0] [i_0]) ? (arr_1 [11] [i_0]) : var_5)) : ((max((arr_0 [i_0] [i_0]), 86)))))) ? ((-((127 ? (arr_0 [i_0] [i_0]) : (arr_1 [16] [i_0]))))) : (((!(arr_0 [i_0] [i_0]))))));
        arr_2 [i_0] [i_0] = ((-(arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 4; i_1 < 19;i_1 += 1)
    {
        arr_5 [i_1 - 2] = ((((var_8 && (((-125 ? -47 : (arr_4 [i_1] [i_1])))))) ? ((max((arr_4 [i_1] [i_1 - 4]), var_2))) : (arr_4 [i_1] [i_1 - 1])));
        var_13 = (max(var_13, 30));
        var_14 *= ((-(((var_2 > (arr_1 [i_1] [i_1]))))));
        arr_6 [i_1 - 4] = 64;
        var_15 -= arr_3 [i_1];
    }
    var_16 = ((((((((var_4 ? var_0 : var_3))) ? ((min(var_8, var_1))) : var_3))) ? var_4 : (((((-127 ? var_7 : var_5))) ? 127 : ((var_4 ? var_7 : var_5))))));
    var_17 = ((-(((((var_3 ? var_0 : var_5)) <= var_2)))));
    #pragma endscop
}

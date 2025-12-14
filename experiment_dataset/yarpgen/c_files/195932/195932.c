/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, ((((((((((min(var_8, var_1)))) <= ((var_13 ? var_8 : var_9)))))) | var_9)))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_16 = (arr_0 [0]);
        var_17 = var_13;
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = var_3;
        var_18 = (((arr_2 [i_1]) ? ((max((arr_4 [5] [i_1]), (arr_4 [i_1] [i_1])))) : (min(var_0, (((arr_3 [i_1]) ? var_7 : var_14))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_19 *= var_5;
        var_20 = (((arr_1 [16] [i_2]) / (arr_7 [i_2] [i_2])));
        var_21 = (((arr_7 [4] [i_2]) >= (arr_9 [i_2])));
    }
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        arr_12 [i_3] [i_3] = (max(((var_8 ? ((var_6 ? (arr_10 [i_3]) : var_10)) : (arr_10 [i_3]))), ((max((arr_11 [i_3] [i_3]), (arr_10 [i_3]))))));
        arr_13 [i_3] = ((((var_6 == (arr_11 [i_3] [i_3]))) ? (arr_11 [i_3] [i_3]) : (((arr_11 [i_3] [i_3]) - (arr_11 [i_3] [i_3])))));
        var_22 = ((((((arr_10 [i_3]) ? (arr_10 [i_3]) : (arr_10 [i_3])))) ? (((arr_10 [i_3]) ? (arr_10 [i_3]) : (arr_10 [i_3]))) : ((max((arr_10 [i_3]), (arr_10 [i_3]))))));
        var_23 = (i_3 % 2 == 0) ? (((((((((arr_11 [i_3] [i_3]) << (((arr_10 [i_3]) - 32519)))) + ((var_8 * (arr_10 [i_3])))))) ? ((((arr_10 [i_3]) ? (arr_10 [i_3]) : (arr_10 [i_3])))) : (20763 + -1040670000588137884)))) : (((((((((arr_11 [i_3] [i_3]) << (((((arr_10 [i_3]) - 32519)) + 25686)))) + ((var_8 * (arr_10 [i_3])))))) ? ((((arr_10 [i_3]) ? (arr_10 [i_3]) : (arr_10 [i_3])))) : (20763 + -1040670000588137884))));
    }
    var_24 = var_1;
    #pragma endscop
}

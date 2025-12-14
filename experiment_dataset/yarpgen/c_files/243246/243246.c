/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_19 = (max(var_19, ((((min((var_16 / var_6), ((((arr_2 [1]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [9])))))) <= ((((arr_1 [i_0]) + (arr_1 [0])))))))));
        var_20 &= ((((((!(arr_1 [1]))))) % (max(var_16, (((var_4 ? 1 : var_11)))))));
        var_21 = (max(var_21, ((max((min((max(var_15, var_5)), (((var_18 || (arr_1 [i_0])))))), (min(((1122799460 ? var_8 : (arr_2 [9]))), ((var_11 ? (arr_1 [1]) : -8810)))))))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_22 = ((var_13 ? (min((((arr_4 [1]) % (arr_4 [i_1]))), ((((arr_4 [i_1]) != var_14))))) : (max((arr_4 [i_1]), var_9))));
        var_23 = (max(var_23, ((((((((max(var_12, var_7))) / ((min(-8810, -8785)))))) ? (max(var_14, (arr_4 [i_1]))) : ((((arr_4 [i_1]) & (arr_4 [1])))))))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_24 ^= (max(49366, (arr_7 [i_2] [12])));
        var_25 += (min(((~(arr_5 [16] [16]))), ((((arr_5 [2] [16]) > 2470931374444023099)))));
        var_26 = (max(var_26, ((((-(arr_7 [i_2] [16])))))));
    }
    var_27 = (max(var_27, (~var_10)));
    var_28 = (max(var_28, (((var_0 ? (min((var_6 & var_1), ((min(var_14, var_18))))) : (((var_7 ? var_13 : -1122799467))))))));
    var_29 = (!var_13);
    #pragma endscop
}

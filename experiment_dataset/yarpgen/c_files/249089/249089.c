/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= var_0;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_12 = (-(!var_3));
        arr_2 [i_0] = ((74 ? 51221 : (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_13 = (((((-(arr_5 [i_1])))) ? (arr_1 [i_1]) : (5779353592989158981 <= -121)));
        var_14 = (min((((43564 ? (((!(arr_5 [i_1])))) : ((min(var_0, (arr_4 [i_1] [i_1]))))))), (((((1291860301 ? 120 : (arr_3 [i_1])))) ? (((max(var_2, var_8)))) : (arr_0 [i_1])))));
    }
    for (int i_2 = 1; i_2 < 22;i_2 += 1)
    {
        var_15 -= (((((~((var_3 ? (arr_6 [i_2] [i_2]) : var_2))))) ? var_10 : (((((var_4 ? (arr_8 [i_2] [i_2 + 1]) : (arr_6 [13] [1])))) ? (arr_8 [i_2] [13]) : 1))));
        var_16 = ((((((!(arr_7 [i_2]))) || (!var_7))) && (arr_7 [0])));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_17 = var_7;
        var_18 = ((var_1 ? (max((arr_11 [8] [8]), (max(var_2, var_6)))) : ((max(120, (max(117, var_5)))))));
        var_19 &= (0 % var_8);
    }
    var_20 += var_3;
    #pragma endscop
}

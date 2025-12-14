/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_13 = ((-(arr_0 [i_0])));
        var_14 = (var_7 ? (min(var_10, 136)) : ((((!(!3481358347))))));
        var_15 &= var_9;
        var_16 = ((var_5 || (((min(var_2, var_0))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_17 = (~2778766069);
        var_18 = ((-((((((arr_3 [i_1]) | (arr_4 [i_1])))) ? (((var_4 ? (arr_4 [i_1]) : var_4))) : ((var_0 ? var_7 : (arr_3 [i_1])))))));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_19 = (max(var_19, ((((arr_2 [i_2]) ? ((var_1 ? var_11 : (min(var_4, var_0)))) : ((((arr_5 [i_2]) - (arr_5 [i_2])))))))));
        var_20 = ((!((((arr_6 [i_2] [i_2]) ? (arr_6 [i_2] [i_2]) : (arr_6 [i_2] [i_2]))))));
    }
    var_21 = -var_6;
    var_22 = (((((3 ? -19 : ((min(252, 90)))))) && (((var_3 && var_2) || var_1))));
    var_23 = 125;
    #pragma endscop
}

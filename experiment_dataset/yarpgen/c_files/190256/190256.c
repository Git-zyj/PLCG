/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = 3;
        arr_3 [i_0] = (max(((((max(var_12, 4))) ? ((var_14 ? var_14 : var_8)) : (var_12 / 356819080))), (((arr_1 [i_0] [i_0]) / (arr_1 [i_0] [i_0])))));
        arr_4 [i_0] |= (((arr_0 [i_0] [i_0]) * (arr_0 [i_0] [i_0])));
        arr_5 [i_0] = (((arr_0 [i_0] [i_0]) ? (((arr_0 [8] [i_0]) & var_10)) : ((max(var_6, (((!(arr_1 [1] [1])))))))));
        arr_6 [i_0] |= ((var_0 ? 32256 : ((((!(arr_1 [i_0] [i_0]))) ? (arr_1 [i_0] [i_0]) : ((3523 ? (arr_0 [i_0] [i_0]) : (arr_1 [6] [i_0])))))));
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        var_16 ^= (min(((var_9 & (arr_8 [i_1 + 1]))), ((((var_1 ^ (arr_7 [11]))) & ((~(arr_7 [i_1])))))));
        var_17 = ((min(var_8, var_11)));
    }
    var_18 |= ((((max((max(-3, var_9)), (!var_0)))) - (max((var_10 + var_5), ((var_6 ? var_3 : var_4))))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = ((~(arr_0 [i_0])));
        arr_4 [2] |= (arr_2 [6]);
        arr_5 [i_0] = (((((129 ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? (((arr_2 [i_0]) ? 57687 : ((var_3 ? var_0 : (arr_0 [i_0]))))) : (arr_2 [i_0])));
        var_15 = ((~(((arr_2 [i_0]) ? var_7 : (arr_2 [i_0])))));
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        var_16 = var_2;
        arr_8 [i_1 - 1] [i_1] = (((arr_7 [i_1 - 1] [i_1]) / ((var_8 ? (arr_6 [i_1 - 1]) : 863925613))));
        var_17 = (max(var_17, (arr_6 [i_1 + 1])));
        var_18 = ((-(((((var_11 ? 863925586 : (arr_7 [i_1 - 1] [i_1 + 1])))) | (~6423172037891286520)))));
    }
    var_19 = var_8;
    #pragma endscop
}

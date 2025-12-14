/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    var_11 = ((((~(min(var_2, var_7))))) ? ((((var_3 - var_0) ? 58 : var_4))) : ((var_2 ? var_6 : (max(var_2, 87)))));
    var_12 = (min(var_12, (var_8 & var_9)));

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = (((169 ? (((!(arr_1 [i_0])))) : var_7)));
        arr_4 [i_0] [i_0] = (arr_1 [i_0 - 2]);
        arr_5 [i_0] = ((~(arr_1 [i_0 - 1])));
        arr_6 [i_0] = (((((arr_1 [i_0 - 2]) / (arr_2 [i_0 - 2]))) - (((arr_1 [i_0 - 2]) - (arr_1 [i_0 - 2])))));
        arr_7 [i_0] = ((((min(168, (min(255, 1))))) << (((arr_1 [1]) + 300393792))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_13 = arr_8 [i_1];
        var_14 = (max(var_14, ((((arr_10 [i_1]) ? (min(((((arr_2 [i_1]) ? var_1 : 241))), (min(var_2, var_0)))) : (((min((arr_0 [i_1]), (arr_0 [i_1]))))))))));
        var_15 ^= (arr_1 [i_1]);
    }
    var_16 = ((((!(var_3 < var_7))) ? var_6 : var_4));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(((((((-9223372036854775807 - 1) ? -9223372036854775781 : 126976))) ? var_5 : (~var_13))), (!var_10)));
    var_17 = var_14;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 &= (max((!var_5), (arr_1 [i_0])));
        var_19 = (arr_1 [i_0]);
        var_20 = (max(var_20, (((((((~var_4) + (-9223372036854775802 == var_1)))) ? (((~(arr_1 [i_0])))) : (((arr_1 [i_0]) ? (((((arr_0 [i_0] [i_0]) + 9223372036854775807)) << (((-9223372036854775800 + 9223372036854775803) - 2)))) : -var_1)))))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_5 [i_1] = (((216 - var_6) ? (((((arr_3 [i_1]) && var_7)) ? (((!(arr_4 [1] [1])))) : (arr_3 [i_1]))) : (arr_4 [i_1] [i_1])));
        var_21 = (min(((((~118) ? ((~(arr_3 [i_1]))) : ((min((arr_3 [i_1]), (arr_3 [i_1]))))))), ((var_3 >> (var_6 - 2775990091)))));
        var_22 = (max(var_22, ((max((((!(var_12 | var_14)))), ((((((arr_3 [i_1]) ? var_7 : var_4))) ? (arr_3 [i_1]) : (var_13 == 138))))))));
    }
    #pragma endscop
}

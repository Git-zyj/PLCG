/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42883
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (78 | var_14);
    var_18 = var_2;
    var_19 = var_2;
    var_20 = 3226485121;

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        var_21 = ((~((min((arr_0 [i_0 - 3] [i_0]), (arr_0 [i_0 + 1] [i_0]))))));
        arr_4 [i_0] [i_0] = ((32148 ? ((-32137 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))) : (((arr_0 [i_0] [i_0]) * (arr_0 [i_0] [i_0])))));
        arr_5 [i_0] = (((((((((arr_3 [i_0 - 2] [i_0 - 2]) + 2147483647)) >> (193 - 179))))) ^ (arr_3 [i_0] [i_0 - 2])));
        var_22 = arr_1 [i_0 + 1];
    }
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        var_23 ^= ((!((min((min((arr_6 [6]), 32137)), (var_8 || 3537959801))))));
        var_24 -= (min(-78, (((((arr_7 [i_1]) <= 959643903)) ? (((arr_6 [10]) ? var_2 : -32135)) : (arr_6 [6])))));
        var_25 = ((((53 ? (arr_7 [i_1 - 1]) : 15))));
        var_26 -= (min((min((arr_6 [12]), var_0)), (((-32179 ? (arr_6 [12]) : (arr_6 [16]))))));
    }
    #pragma endscop
}

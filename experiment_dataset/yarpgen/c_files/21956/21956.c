/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((((var_18 ? var_0 : var_16))) ? var_16 : var_16))) ? ((var_18 | (!var_8))) : ((var_14 ? var_8 : var_8))));

    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        var_21 = (((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))) | (arr_1 [7] [i_0])));
        arr_2 [i_0] [i_0] = (min((((arr_0 [i_0]) ? (((arr_0 [i_0]) ^ (arr_0 [i_0]))) : ((35 ? 220 : 0)))), ((((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? (arr_1 [i_0 + 4] [i_0]) : (((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0 + 4] [i_0])))))));
        var_22 -= (((arr_0 [8]) ? (arr_0 [10]) : (arr_1 [i_0 + 4] [8])));
        var_23 *= (arr_0 [6]);
    }
    for (int i_1 = 2; i_1 < 17;i_1 += 1)
    {
        var_24 = (max(var_24, (((((!((max((arr_5 [i_1]), (arr_5 [i_1])))))) ? ((max((arr_3 [i_1 + 1]), (arr_3 [i_1 - 1])))) : (arr_3 [i_1 + 1]))))));
        arr_6 [i_1] [i_1 - 2] = (((((((arr_3 [i_1 - 1]) * (arr_5 [i_1 - 1]))))) ^ (((arr_5 [i_1 - 2]) ? (arr_4 [i_1]) : (((arr_5 [i_1 + 1]) ? (arr_3 [i_1]) : (arr_3 [i_1 + 2])))))));
        arr_7 [i_1 + 1] = ((((max((arr_5 [i_1 + 2]), (arr_3 [i_1 + 2])))) ? (arr_5 [i_1 - 1]) : ((((arr_5 [i_1 - 1]) >= (arr_5 [i_1 + 1]))))));
    }
    var_25 = var_9;
    #pragma endscop
}

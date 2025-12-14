/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_2;
    var_18 = ((var_12 ? (!var_10) : ((var_12 & ((min(var_10, var_13)))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_19 = (max((min(1097714049706690856, 151)), ((((arr_0 [i_0]) ? (arr_0 [i_0]) : var_16)))));
        var_20 = (((max((arr_2 [i_0]), (((39 ? (arr_1 [i_0]) : 252)))))) ? ((((var_10 - var_13) ? -var_4 : var_16))) : ((~(0 & var_12))));
        var_21 = (min((max((((arr_2 [i_0]) ? 184 : 1013192282)), ((((arr_2 [i_0]) && (arr_2 [i_0])))))), (((~(arr_0 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_22 = (((((var_5 & 50700) << (((((arr_6 [i_1] [i_1]) + 306326414)) - 23)))) < ((max((var_15 > 637381263), (arr_5 [i_1] [i_1]))))));
        arr_7 [i_1] [i_1] = 16;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_23 = -1097714049706690857;
        var_24 = (min(var_24, ((((arr_2 [i_2]) << (((arr_9 [i_2]) - 1)))))));
    }
    #pragma endscop
}

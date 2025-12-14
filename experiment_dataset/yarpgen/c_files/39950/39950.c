/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;
    var_17 = var_1;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = (((min((min((arr_0 [i_0]), var_2)), (var_15 + var_14)))) ? (arr_1 [i_0]) : (arr_1 [i_0]));
        var_19 = (((!var_4) && (((((arr_2 [16] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_0 [i_0]))) < (((((arr_1 [i_0]) == var_1))))))));
        arr_3 [i_0] [i_0] = (min(21454, (((arr_1 [i_0]) ? (arr_0 [i_0]) : var_6))));
        var_20 = (min(var_20, var_12));
    }
    #pragma endscop
}

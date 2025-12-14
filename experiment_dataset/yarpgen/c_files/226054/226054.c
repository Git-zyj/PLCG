/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_11;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_19 = (min(var_19, var_5));
        arr_3 [i_0] = ((((!(arr_0 [i_0] [i_0]))) ? ((-(min((arr_0 [i_0] [i_0]), 30953)))) : (((!((!(arr_0 [i_0] [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_7 [i_1] = (((((arr_1 [i_1] [i_1]) < var_14)) ? (var_2 || 247) : (((arr_5 [i_1] [i_1]) ? 8128 : var_10))));
        arr_8 [i_1] = ((((((var_6 ? var_0 : var_1)) + (((arr_0 [i_1] [i_1]) - (arr_5 [i_1] [i_1]))))) + (arr_5 [i_1] [i_1])));
        arr_9 [i_1] = (((max((arr_6 [i_1]), var_1)) != (((14553259094779050128 ? (((arr_0 [i_1] [i_1]) ? (arr_5 [i_1] [i_1]) : 26)) : (arr_1 [i_1] [i_1]))))));
    }
    var_20 = 8646;
    #pragma endscop
}

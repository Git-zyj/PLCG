/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 65535;

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_13 = (max(var_13, (((!(min(((-3460 || (arr_1 [i_0 - 1] [i_0 - 1]))), (!30492))))))));
        arr_2 [i_0] = ((((((9333 || ((1071644672 || (arr_1 [i_0] [i_0]))))))) - (((arr_1 [i_0 - 1] [i_0 - 2]) ? (arr_1 [i_0 - 1] [i_0 + 1]) : (min(var_1, var_2))))));
        arr_3 [1] = ((((min((arr_1 [i_0 + 2] [i_0 - 2]), (arr_1 [i_0 + 2] [i_0 - 2])))) ? (-8829945361204429309 - var_4) : ((min((((var_8 ? var_7 : (arr_1 [7] [1])))), var_5)))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        var_14 = var_3;
        var_15 = (4260607557632 / var_10);
        var_16 = (((((arr_4 [i_1]) + 232)) + 47904));
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;
    var_15 = ((var_1 ? (((min((!var_9), 1)))) : var_1));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_16 = (max((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : var_6)), (((arr_0 [i_0]) / (arr_0 [i_0])))));
        var_17 *= (min(1, var_6));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = var_7;
        arr_6 [i_1] [i_1] = var_6;
        var_18 |= (((arr_2 [i_1 + 1]) - -106));
        var_19 = (max(var_19, (((var_2 ? 616049294 : (arr_4 [i_1 + 1] [i_1]))))));
        arr_7 [6] [6] = (arr_3 [i_1 - 2]);
    }
    #pragma endscop
}

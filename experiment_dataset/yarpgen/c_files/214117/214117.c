/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_11 = (((((-((var_9 ? 1 : var_1))))) | (max(var_8, (((var_2 ? (arr_1 [i_0]) : 38)))))));
        var_12 += ((-8321961929375828813 ? ((((arr_2 [i_0]) && (!var_6)))) : (((var_0 || var_0) ? ((var_5 ? var_2 : (arr_1 [12]))) : (!43)))));
        arr_3 [i_0] = ((var_5 != (((((134086656 ? var_3 : (arr_2 [i_0]))) <= 1)))));
    }
    var_13 = var_4;
    var_14 = ((var_6 << ((((var_5 ? var_3 : var_4)) - 9178883738803332733))));
    #pragma endscop
}

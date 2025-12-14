/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += var_11;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [12] = ((min((((var_9 | (arr_0 [i_0])))), (var_18 % var_11))));
        var_20 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_21 = (max(var_21, ((((((max(var_5, 132120576)) % var_14)) <= (arr_0 [i_1]))))));
        var_22 = ((arr_3 [i_1]) ? (max((~4162846719), -65535)) : (((max((arr_0 [i_1]), 4162846721)) + ((min(var_0, (arr_1 [i_1])))))));
        var_23 = ((((max(((var_13 ? 4083508093 : var_5)), ((((arr_0 [i_1]) + (arr_3 [i_1]))))))) ? (arr_5 [i_1]) : (arr_1 [i_1])));
    }
    #pragma endscop
}

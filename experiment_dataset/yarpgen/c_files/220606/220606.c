/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220606
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_9;

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_18 = ((~((~(arr_1 [i_0 + 1])))));
        arr_2 [i_0] = (min((arr_0 [i_0]), (arr_0 [i_0 + 2])));
        var_19 = (((max((((arr_0 [i_0]) && var_12)), ((!(arr_1 [i_0]))))) ? ((var_15 ? (arr_1 [i_0]) : ((var_14 ? (arr_0 [i_0]) : (arr_1 [17]))))) : (((((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0 - 1]))) << ((((0 ? (arr_0 [i_0]) : (arr_0 [i_0]))) + 5065133725516209152))))));
    }
    #pragma endscop
}

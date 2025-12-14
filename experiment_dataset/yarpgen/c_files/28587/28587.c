/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (-18021 ? var_9 : var_4);

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_12 = (min((max((arr_0 [i_0]), 12890)), (((min((arr_0 [i_0]), (arr_0 [i_0])))))));
        var_13 *= ((((((((max((arr_0 [21]), (arr_1 [i_0])))) || (arr_0 [i_0]))))) ^ (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0])))));
        var_14 = ((~(max((arr_0 [i_0]), (arr_0 [i_0])))));
    }
    var_15 = (((((((min(12890, 10134239321665064312))) ? (var_9 & var_1) : (min(var_3, 4831))))) / var_5));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_20 &= (max((((arr_1 [8]) ? (arr_0 [1] [i_0]) : (arr_1 [18]))), (max(var_19, (arr_1 [10])))));
        arr_2 [i_0] = arr_0 [i_0] [15];
    }
    var_21 = (var_14 > 1);
    var_22 = (max(var_10, (max(((max(111, 121))), var_5))));

    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_6 [i_1] [i_1] &= ((((arr_1 [i_1]) & (arr_1 [i_1]))));
        var_23 = ((arr_0 [i_1] [i_1]) ? 232 : (max(-4740840140556418779, (~14499113806286124568))));
    }
    #pragma endscop
}

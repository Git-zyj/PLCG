/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= var_17;

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_21 = (min(var_21, (arr_2 [i_0])));
        arr_3 [i_0] [i_0] = max(var_4, (max((arr_2 [i_0]), (arr_1 [i_0] [i_0]))));
        arr_4 [i_0] = (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (((((arr_1 [i_0] [i_0]) ? 41652 : (arr_2 [i_0])))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_22 = (var_5 ? (arr_5 [i_1]) : (arr_5 [i_1]));
        var_23 = (max(var_23, (arr_6 [0] [0])));
        var_24 = (((((arr_5 [i_1]) ? var_18 : (arr_0 [i_1] [i_1]))) & (arr_0 [10] [i_1])));
        var_25 = var_6;
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_19 += (((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0 + 3])));
        var_20 *= (arr_0 [i_0 + 2]);
        arr_2 [i_0] = (((arr_1 [i_0 + 3]) - (arr_1 [i_0 - 1])));
        arr_3 [i_0] = (((((arr_0 [4]) | (arr_1 [i_0])))) ? (arr_0 [i_0 + 2]) : (((-(arr_1 [i_0])))));
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        var_21 = (min(var_21, (arr_5 [i_1])));
        arr_6 [1] [2] = (arr_5 [i_1 - 1]);
        var_22 = 4451543350643516754;
        var_23 = (min((((!((((arr_4 [3]) * (arr_4 [i_1]))))))), (arr_5 [i_1])));
    }
    var_24 = var_17;
    #pragma endscop
}

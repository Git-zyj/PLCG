/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_13 = ((var_6 ? ((0 ? ((-(arr_3 [i_0] [i_0]))) : (((arr_2 [i_0]) ? (arr_3 [i_0] [i_0]) : (arr_1 [i_0]))))) : var_4));
        arr_4 [i_0] = ((var_2 ? ((1 - (arr_2 [i_0]))) : (((arr_1 [i_0]) ? (arr_0 [i_0] [i_0]) : var_9))));
    }
    var_14 = ((var_7 - ((max(var_3, ((113 ? var_11 : var_2)))))));
    var_15 = (max(var_15, var_11));
    #pragma endscop
}

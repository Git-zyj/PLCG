/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_16 = (arr_1 [i_0 + 3]);
        arr_2 [i_0 + 2] [i_0] = (min(((((arr_0 [5] [2]) ? (((arr_0 [i_0 + 3] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [7] [7]))) : (((arr_1 [i_0]) - (arr_1 [i_0])))))), (((((-127 - 1) - 291320272240707013)) - ((((arr_0 [i_0 + 1] [i_0]) + (arr_1 [i_0 + 2]))))))));
    }
    var_17 = var_11;
    var_18 = ((var_11 ? var_1 : var_9));
    #pragma endscop
}

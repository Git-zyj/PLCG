/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += ((-var_3 ? ((~((1415548359 ? -1077635760 : 48)))) : var_4));
    var_11 = var_1;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = (arr_2 [i_0]);
        var_12 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_13 = ((-(arr_2 [i_1])));
        var_14 = (((((((((arr_5 [i_1]) ? (arr_1 [i_1] [i_1]) : (arr_0 [18])))) ? (((arr_6 [i_1]) ? (arr_2 [i_1]) : (arr_0 [i_1]))) : (arr_0 [i_1])))) ? (arr_4 [i_1] [i_1]) : (arr_4 [i_1] [i_1])));
    }
    var_15 = var_1;
    var_16 = (~((-var_2 ? var_6 : (~var_0))));
    #pragma endscop
}

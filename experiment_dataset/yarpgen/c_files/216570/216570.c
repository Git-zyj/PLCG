/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += (max(((~(~var_8))), (min((var_10 > var_12), (~var_0)))));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_15 += ((((min(0, 1) ? 38016 : (((arr_2 [i_0]) ? (arr_0 [i_0]) : -116))))));
        arr_3 [i_0] = (((~var_9) || ((((((arr_0 [i_0 + 1]) ? (arr_2 [i_0]) : (arr_2 [i_0]))) - ((max(var_1, (arr_0 [i_0])))))))));
        var_16 = ((-(max((arr_2 [i_0 - 1]), (arr_1 [i_0 - 1])))));
        var_17 = (((arr_0 [i_0]) + ((var_11 ? (min(2147483647, var_6)) : (arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_18 = (min(var_18, (((-(arr_4 [i_1]))))));
        var_19 += (((~((37997 ? var_2 : var_6)))));
        arr_6 [i_1] = ((-(((arr_5 [16]) / (arr_4 [i_1])))));
    }
    #pragma endscop
}

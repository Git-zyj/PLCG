/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= ((!((((var_4 && 2957243998) + var_16)))));
    var_18 = 1337723297;
    var_19 = (max(var_3, 2957244010));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        var_20 = (!var_0);
        var_21 = ((~(!1337723275)));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_22 = (min(0, (min((((arr_4 [i_1]) ? var_0 : var_10)), (arr_0 [i_1])))));
        var_23 *= 24456;
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_24 = ((((((arr_6 [i_2]) + 6))) + 2957243997));
        var_25 = ((((min((arr_6 [i_2]), 127))) ? (min(65506, 2957244010)) : (((-54 ? (arr_6 [i_2]) : 0)))));
    }
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        var_26 -= 6;
        var_27 -= ((-(min(1, (arr_9 [i_3 - 1] [i_3 - 1])))));
        var_28 = ((!((max(125, (min(2329157002, (arr_8 [i_3]))))))));
    }
    #pragma endscop
}

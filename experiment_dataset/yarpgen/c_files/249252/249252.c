/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((-((2 ? var_4 : var_7)))));

    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        var_15 = var_3;
        var_16 = (arr_2 [i_0] [i_0]);
        var_17 ^= ((((1 || (arr_2 [i_0] [i_0]))) ? 38867 : 5337));
        var_18 = ((!(((+((5325 ? (arr_1 [i_0]) : (arr_1 [i_0]))))))));
        var_19 = (max(-5348, 5331));
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_20 = arr_4 [i_1 + 1];
        var_21 |= ((((((arr_0 [i_1 + 1]) ? (arr_0 [i_1 - 1]) : (arr_0 [i_1 - 1])))) ? (((arr_0 [i_1 - 1]) ? (arr_0 [i_1 - 1]) : (arr_0 [i_1 + 1]))) : (((arr_0 [i_1 + 1]) ? (arr_0 [i_1 + 1]) : (arr_0 [i_1 - 1])))));
    }
    #pragma endscop
}

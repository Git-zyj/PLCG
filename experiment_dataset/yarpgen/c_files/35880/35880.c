/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= var_9;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = ((((193 + (arr_0 [i_0]))) % (arr_1 [i_0])));
        arr_3 [i_0] = (((arr_0 [i_0]) + var_3));
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = 1;
        var_12 = (min(var_12, (((((arr_5 [i_1 + 1]) & ((((1 || (arr_5 [i_1 + 1])))))))))));
        var_13 *= (1 & 1);
        arr_7 [i_1] = (((((-15412642500172249671 ? ((-(arr_4 [1] [i_1 + 1]))) : ((max((arr_5 [i_1]), 255)))))) ? (((arr_4 [i_1] [i_1 + 1]) + (arr_5 [i_1 + 1]))) : (max((((var_5 ? (arr_5 [i_1]) : 247))), (((arr_4 [i_1] [i_1]) ? (arr_5 [i_1]) : var_0))))));
        arr_8 [i_1] [i_1] = (((arr_4 [i_1] [i_1]) || ((((arr_4 [i_1] [i_1]) / ((2147483647 ? 14292219309001840238 : (arr_4 [i_1] [i_1]))))))));
    }
    for (int i_2 = 3; i_2 < 10;i_2 += 1)
    {
        var_14 = var_6;
        var_15 = (~161);
        arr_13 [i_2] = -254;
    }
    #pragma endscop
}

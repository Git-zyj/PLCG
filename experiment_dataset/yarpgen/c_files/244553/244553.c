/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244553
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, ((((((var_6 ? -25685 : (var_0 & var_2)))) & var_1)))));
    var_12 = (min(var_12, 16432704723228861820));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_13 = max(((min((arr_1 [i_0 + 2] [i_0 + 2]), (!var_8)))), ((~(arr_1 [i_0 + 1] [i_0 - 1]))));
        arr_3 [i_0 - 1] = ((min((arr_2 [i_0 + 2] [i_0 - 1]), -53)));
        arr_4 [i_0 + 2] = ((!((max((arr_0 [i_0 + 2]), (!-30))))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_14 ^= (!((min(((var_0 ? var_4 : var_5)), (var_7 ^ 16432704723228861824)))));
        var_15 = (min((min((((arr_7 [i_1]) ^ (arr_5 [i_1] [i_1]))), (arr_7 [i_1]))), (min((arr_5 [i_1] [i_1]), (arr_8 [i_1])))));
        arr_9 [i_1] [i_1] = var_3;
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_16 = (min(((min(((var_7 ? -1072401685 : 1072401684)), (min(-8, (arr_11 [i_2])))))), ((+(max((arr_5 [i_2] [i_2]), 7495))))));
        var_17 += (((((var_9 & (((arr_8 [i_2]) ? (arr_5 [1] [i_2]) : (arr_6 [16] [i_2])))))) || 55103));
    }
    #pragma endscop
}

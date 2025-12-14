/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_10 |= 18446744073709551596;
        var_11 = (min((((arr_0 [i_0] [i_0]) ? (((var_9 ? (arr_1 [i_0]) : var_1))) : -15)), ((((-4 - 0) ? ((min(65535, var_8))) : (!var_3))))));
        var_12 = (max(0, 2));
        arr_2 [i_0] = var_7;
        var_13 = (((((((arr_0 [i_0] [i_0]) > (arr_0 [i_0] [i_0]))))) != (((arr_0 [i_0] [i_0]) ? var_3 : var_4))));
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        var_14 += (min((max(1266008367012698732, (max(var_9, 231)))), (arr_4 [i_1] [i_1])));
        var_15 = (arr_4 [i_1 + 1] [i_1 - 1]);
        var_16 = (((((((var_7 ? var_8 : -27)) - var_0))) ? (max((((arr_3 [i_1 - 1]) ? var_5 : (arr_3 [i_1]))), ((max(-83, 0))))) : (arr_3 [i_1 + 1])));
        var_17 = max(18198777034762355339, ((((arr_4 [i_1 + 2] [i_1 + 2]) ? (0 ^ -1) : 1))));
        arr_5 [i_1] [i_1] = ((((max((arr_4 [i_1 + 2] [i_1 + 2]), var_3))) || (((var_5 ? (arr_3 [i_1 + 1]) : 9223372036854775796)))));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        arr_8 [i_2] = ((!((max((arr_7 [i_2] [i_2]), (!5367))))));
        var_18 = (max((~0), (((arr_7 [i_2] [i_2]) ? (arr_7 [i_2] [i_2]) : var_3))));
    }
    var_19 = ((((!(var_3 - var_4))) ? (min(var_1, (4294967295 ^ var_6))) : (min((((65535 ? var_2 : 0))), (min(var_2, var_7))))));
    var_20 = var_8;
    #pragma endscop
}

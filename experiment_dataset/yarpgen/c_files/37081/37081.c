/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;
    var_13 = var_9;
    var_14 &= (min(0, (max(var_5, ((var_0 ? var_5 : var_5))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [8] [8] |= min(((((arr_0 [0] [0]) > (arr_1 [i_0] [i_0])))), (((arr_1 [i_0] [i_0]) ? ((var_4 ? 2282 : var_11)) : (max(var_3, (arr_2 [i_0]))))));
        arr_4 [4] &= (arr_0 [12] [i_0]);
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        var_15 = ((+((var_7 - (((arr_7 [4]) ? (arr_6 [i_1]) : var_1))))));
        var_16 = ((((((var_1 ? (arr_7 [i_1]) : var_10)) > var_1)) ? (arr_5 [i_1]) : (((arr_5 [i_1]) ? var_4 : (((((arr_5 [i_1]) || (arr_6 [i_1])))))))));
    }
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        var_17 = ((((((1 == 66) ? (arr_8 [i_2]) : (arr_6 [i_2 + 1])))) ? 1 : var_9));
        var_18 ^= -var_10;
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22426
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((var_12 << (((var_4 + var_16) + 21061)))));
    var_21 = (min(var_21, ((((var_13 ? var_0 : var_19))))));
    var_22 &= var_8;
    var_23 = ((((var_12 / (var_0 - var_8))) ^ (((min(-4, (!var_3)))))));

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_24 = (arr_2 [i_0] [i_0]);
        var_25 = (((((((min(var_7, var_3))) ? ((var_9 ? var_1 : (arr_0 [i_0] [i_0]))) : (arr_2 [i_0] [i_0 + 1])))) ? (arr_1 [i_0]) : (max((((~(arr_0 [i_0 - 2] [i_0 - 2])))), ((~(arr_1 [i_0])))))));
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = ((((((arr_3 [i_1 - 1] [i_1]) ^ (arr_4 [i_1 - 2] [i_1])))) ? (((((arr_3 [i_1] [i_1]) + 2147483647)) >> (var_11 - 32510))) : var_4));
        arr_6 [i_1 + 2] = (((arr_3 [i_1] [i_1]) ? (((!((max((arr_4 [i_1] [i_1]), (arr_4 [i_1] [i_1]))))))) : (((arr_3 [i_1 + 2] [i_1 - 1]) ? (arr_3 [i_1 + 2] [i_1 - 1]) : (arr_3 [i_1 + 2] [i_1 - 1])))));
        var_26 = (max((((arr_3 [i_1] [i_1]) ? (arr_3 [i_1 - 1] [i_1]) : -var_5)), var_4));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        arr_10 [i_2] [i_2] = (max(((-2168282848263750990 | (((-(arr_9 [i_2])))))), ((((((var_4 ? (arr_9 [i_2]) : var_8))) ? (arr_7 [i_2]) : ((((arr_9 [i_2]) && (arr_9 [i_2])))))))));
        arr_11 [14] [14] = var_16;
    }
    #pragma endscop
}

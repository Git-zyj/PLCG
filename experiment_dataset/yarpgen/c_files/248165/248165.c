/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (((((((arr_0 [7] [7]) || 1)) && (arr_0 [i_0] [i_0]))) || ((min(((max((arr_0 [i_0] [i_0]), (arr_1 [i_0])))), var_13)))));
        arr_3 [i_0] = ((((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])))) || var_8));
    }
    var_15 = ((((((max(var_12, var_3))) ? (var_6 / var_5) : var_1)) * ((max(var_10, (var_1 * var_10))))));

    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_16 = var_0;
        arr_6 [i_1] |= ((~((var_4 ? (arr_5 [i_1] [i_1]) : (arr_5 [i_1] [i_1])))));
    }
    for (int i_2 = 3; i_2 < 19;i_2 += 1)
    {
        arr_10 [i_2] = ((+((((arr_4 [i_2 - 1] [i_2 + 2]) && (arr_4 [i_2 - 2] [i_2 - 1]))))));
        var_17 ^= arr_9 [i_2 + 1];
        arr_11 [i_2 - 2] |= ((((max((min((arr_9 [i_2]), (arr_4 [i_2] [i_2]))), ((max((arr_8 [i_2]), var_14)))))) == (min(((-691261257813712345 - (arr_7 [6] [i_2 - 2]))), (arr_4 [i_2] [i_2])))));
    }
    var_18 = var_9;
    #pragma endscop
}

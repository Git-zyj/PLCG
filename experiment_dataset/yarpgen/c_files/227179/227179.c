/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_19 = ((~(((!((((((arr_0 [i_0 - 1] [i_0]) + 2147483647)) >> (var_2 - 14674969166338452340)))))))));
        var_20 = var_14;
        var_21 = (((((107 ? (min(var_16, var_6)) : (((26217 ? (arr_1 [i_0] [6]) : 32764)))))) + (max(var_18, (((~(arr_2 [i_0]))))))));
        var_22 ^= (~var_10);
    }
    for (int i_1 = 3; i_1 < 17;i_1 += 1)
    {
        arr_6 [i_1] = (((min(var_14, (arr_5 [1] [i_1 - 3])))) ? (max((arr_1 [i_1 + 1] [i_1]), (((arr_0 [i_1] [i_1]) / 104)))) : ((-(arr_3 [i_1] [i_1]))));
        arr_7 [i_1] = ((var_5 != ((~(((arr_1 [i_1] [i_1]) | -17079))))));
        var_23 += max((((var_4 < (arr_0 [i_1 + 2] [i_1])))), (~var_13));
    }
    var_24 = var_15;
    var_25 = var_2;
    var_26 = var_6;
    #pragma endscop
}

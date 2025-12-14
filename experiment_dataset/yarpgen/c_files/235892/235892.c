/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 += (((arr_1 [i_0] [i_0]) ? (((((arr_0 [i_0]) || 6408776015039651944)))) : ((((((arr_0 [i_0]) + -8))) ? (((arr_0 [i_0]) ? var_12 : 127)) : (arr_0 [i_0])))));
        arr_2 [i_0] [i_0] = ((((((165 < 255) % 127))) ? ((2892030969 ? (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))) : (((arr_1 [i_0] [i_0]) - (arr_0 [i_0]))))) : ((~(arr_1 [i_0] [8])))));
        arr_3 [i_0] = 255;
        arr_4 [i_0] [i_0] = var_2;
        var_16 = (((arr_1 [i_0] [i_0]) - (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = ((var_2 ? ((2892030976 ? (((arr_5 [i_1]) ? 4294967295 : 221)) : (((arr_6 [i_1] [i_1]) ? (arr_6 [i_1] [i_1]) : var_14)))) : (arr_6 [i_1] [i_1])));
        arr_8 [i_1] [i_1] = (((((min((arr_6 [i_1] [i_1]), (arr_6 [10] [6])))))) / ((((255 ? (arr_6 [i_1] [i_1]) : 2892030976)) | -1)));
    }
    for (int i_2 = 1; i_2 < 8;i_2 += 1)
    {
        var_17 |= ((arr_10 [i_2]) ? (((arr_6 [i_2 + 2] [i_2]) ? 4294967295 : var_12)) : ((((arr_5 [i_2]) + (((var_6 >= (arr_10 [i_2]))))))));
        var_18 = (min(var_18, (((-(((1 == (((arr_1 [i_2 + 2] [7]) | (arr_10 [i_2])))))))))));
    }
    var_19 = max((((var_10 ^ 101) ? var_0 : ((var_12 ? 2892030969 : 4294967295)))), (((!var_8) + var_8)));
    #pragma endscop
}

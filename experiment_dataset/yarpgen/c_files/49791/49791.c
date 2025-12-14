/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= var_15;
    var_17 = var_11;

    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        var_18 = -2525332937892371058;
        arr_2 [i_0] = (arr_1 [i_0] [i_0 - 2]);
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_19 = ((((((((arr_3 [i_1]) - var_14))) ? (((var_6 ? var_4 : (arr_5 [i_1] [i_1])))) : (~-2525332937892371027)))) ? ((max((arr_3 [i_1]), ((((arr_4 [4]) * var_1)))))) : var_13);
        var_20 |= (~9223372036854775807);
        var_21 = (min(var_21, (((var_13 >> ((((~(arr_5 [i_1] [i_1]))) - 1882215407)))))));
        var_22 = ((((((((var_10 ? 100 : (arr_4 [i_1])))) ? (arr_3 [i_1]) : -2525332937892371058))) ? (max((((arr_6 [i_1]) ? (arr_6 [i_1]) : (arr_6 [i_1]))), (arr_5 [i_1] [i_1]))) : 53));
        var_23 = var_4;
    }
    var_24 = var_8;
    var_25 = var_6;
    #pragma endscop
}

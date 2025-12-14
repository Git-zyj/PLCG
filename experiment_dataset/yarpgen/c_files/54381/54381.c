/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        arr_3 [i_0] = -62196;
        arr_4 [i_0] [i_0] = ((((((arr_1 [i_0]) ? var_7 : (arr_1 [i_0])))) ? (min(((var_2 ? (arr_0 [i_0] [i_0]) : var_14)), ((3861 ? (arr_0 [i_0] [i_0]) : 90)))) : (((2876665825 ? 9223372036854775792 : 1418301471)))));
    }
    var_16 = ((var_5 ? (((var_1 == (var_5 <= var_15)))) : var_9));

    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (((((4170526294 || (arr_0 [i_1] [1])))) - var_13));
        var_17 = (arr_0 [i_1] [i_1]);
    }
    for (int i_2 = 1; i_2 < 11;i_2 += 1)
    {
        arr_10 [i_2] = ((((-(arr_9 [i_2] [i_2 - 1]))) * ((var_7 * (((arr_8 [i_2]) ? var_3 : var_8))))));
        arr_11 [i_2] = (min(((max(var_11, (arr_0 [i_2] [i_2])))), 6754249760953501675));
        var_18 = 971095802;
        var_19 = ((-1 ? (arr_1 [i_2 + 2]) : (((-var_10 <= ((-(arr_1 [i_2 + 2]))))))));
    }
    var_20 = ((var_14 ? 6524 : (~var_1)));
    var_21 += ((0 || (~87)));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, (((!((((58 * 0) ? (0 * var_6) : var_12))))))));
    var_18 = (min((var_6 != var_1), ((min(var_16, var_6)))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_19 = (max((arr_2 [i_0] [i_0]), -2140117816));
        var_20 = (min(var_20, ((max((arr_1 [i_0] [8]), (arr_1 [4] [4]))))));
        var_21 = (min(((max((arr_3 [i_0]), var_15))), (arr_3 [2])));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_7 [i_1] = ((((max((max((arr_4 [i_1]), var_13)), (arr_6 [i_1])))) ? var_11 : 1));
        arr_8 [i_1] = (arr_6 [i_1]);
        arr_9 [i_1] = 1;
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_22 = -82;
        var_23 = (((((((arr_5 [i_2] [i_2]) + var_7))) ? (((arr_5 [i_2] [i_2]) * var_10)) : (arr_13 [i_2]))) & ((max((arr_6 [i_2]), (arr_6 [i_2])))));
        arr_14 [i_2] [i_2] = (((arr_11 [i_2] [i_2]) ? ((~(arr_10 [i_2] [i_2]))) : (arr_11 [i_2] [i_2])));
        var_24 = var_0;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        var_25 = (max(var_25, (((!((!(arr_16 [1] [i_3]))))))));
        arr_17 [i_3] = (arr_5 [i_3] [4]);
        var_26 = (var_2 / var_14);
    }
    var_27 = (min(((var_15 ? (var_2 + var_11) : var_16)), var_13));
    #pragma endscop
}

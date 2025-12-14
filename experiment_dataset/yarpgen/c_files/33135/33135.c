/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = max((!-39), var_12);
    var_19 = (max(var_19, (((9223372036854775807 ? 201 : 38)))));

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        arr_2 [1] = (((((38 ? 4294967295 : 51914))) ? var_17 : (arr_1 [i_0 + 3])));
        arr_3 [i_0] = ((-(arr_0 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [13] = (288423132 * var_12);
        var_20 = ((((var_9 & (arr_4 [i_1] [i_1]))) >= (arr_6 [i_1] [i_1])));
        var_21 += (arr_6 [i_1] [i_1]);
        var_22 = (((arr_4 [i_1] [i_1]) & (arr_4 [i_1] [i_1])));
    }
    for (int i_2 = 3; i_2 < 11;i_2 += 1)
    {
        var_23 = arr_0 [i_2] [i_2];
        var_24 = (arr_0 [12] [i_2]);
        var_25 = (min(var_25, (((-(max(((var_10 ? var_6 : var_7)), (arr_1 [i_2 - 1]))))))));
    }
    for (int i_3 = 3; i_3 < 11;i_3 += 1)
    {
        arr_12 [i_3] [i_3] = var_3;
        var_26 = ((((((var_9 / (arr_1 [i_3]))))) ? ((max((arr_5 [i_3]), (arr_4 [i_3] [i_3])))) : (arr_0 [i_3] [i_3])));
        var_27 = (arr_5 [i_3]);
    }
    #pragma endscop
}

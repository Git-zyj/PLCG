/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0 - 3] [i_0]);
        var_13 = ((((((((arr_0 [i_0] [i_0]) ? (arr_1 [7] [6]) : (arr_0 [4] [6]))) ^ (arr_0 [i_0] [i_0])))) ? var_8 : ((((arr_0 [1] [i_0]) & (~23535))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = (((((var_6 ? (arr_3 [i_1]) : (arr_3 [i_1])))) ? (arr_4 [i_1] [i_1]) : (var_6 * var_0)));
        arr_6 [i_1] [6] = (((((arr_3 [i_1]) % 18446744073709551615)) | (arr_3 [i_1 - 1])));
        arr_7 [i_1] [i_1] = var_1;
    }
    var_14 = (min((((19177 ^ var_4) ? (var_2 - var_7) : ((min(var_1, var_9))))), (min((var_2 ^ var_12), ((var_2 ? -115 : var_7))))));
    var_15 = (var_10 | ((min(var_3, (46351 / var_5)))));
    var_16 |= (min((((var_11 ? (1 * 35) : (19177 != 19177)))), (max(var_10, (var_10 * 19177)))));
    var_17 = (((min(65535, var_10))));
    #pragma endscop
}

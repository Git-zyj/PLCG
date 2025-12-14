/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_13 = ((arr_0 [i_0]) ? var_3 : (-127 - 1));
        var_14 = var_10;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_15 = (1 ? 4194303 : 2697901736);
        var_16 = ((arr_2 [i_1]) ? ((var_7 ? var_10 : 4)) : (arr_2 [i_1]));
        var_17 = ((((-(arr_3 [i_1]))) != (arr_2 [i_1])));
        var_18 = ((737285155 ? 18446744073709551610 : 18446744073709551615));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            arr_11 [i_2] [i_2] = ((var_3 ? (arr_8 [i_2] [i_3]) : (arr_8 [i_2] [i_3])));
            var_19 = var_12;
            var_20 = (((arr_5 [i_2]) ? ((var_8 ? var_10 : 36028797018963952)) : (arr_5 [i_3])));
            var_21 = (((((-(arr_7 [i_2] [i_3])))) ? var_9 : (var_5 | 4)));
        }
        arr_12 [i_2] = (~29372);
    }
    var_22 = var_11;
    var_23 = (72057594037927935 - 0);
    var_24 = var_4;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((min(387, var_0))) > (((var_8 & ((min(387, -387))))))));
    var_13 = var_3;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (2147483647 > 24423);
        var_14 &= (arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        var_15 *= ((3637715533 ? 657251763 : 12199912131858273392));
        arr_6 [i_1] = ((((arr_3 [i_1 + 1]) ? 387 : (arr_3 [i_1]))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = (!-387);
        arr_10 [i_2] [i_2] = 13;
        arr_11 [7] = -4511832596422150471;
    }

    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        var_16 *= ((((min((arr_5 [i_3]), (arr_13 [i_3])))) & (((((var_9 ? 2926899703334271544 : (arr_12 [i_3])))) ? 173 : ((-(arr_3 [i_3])))))));
        var_17 = var_3;
        arr_14 [i_3] = ((((59215 - (arr_13 [i_3]))) << (((min(7346281885836438220, (arr_3 [i_3]))) - 23873))));
        var_18 = (min(var_18, ((((-(arr_12 [i_3])))))));
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        arr_17 [i_4] = (((min((arr_7 [i_4]), 114)) & (30062 & 48247)));
        var_19 = (min((((-(min((arr_0 [i_4]), -1743948012051893590))))), (((((232 + (arr_3 [i_4])))) - (min(8937478856392023318, -1636962424))))));
        arr_18 [i_4] [10] = (((((var_10 * (arr_4 [i_4])))) ? (arr_4 [i_4]) : ((((min(var_7, (arr_3 [i_4])))) ? 255 : (arr_7 [i_4])))));
    }
    var_20 *= ((var_0 ? ((~((65518 ? var_5 : var_2)))) : var_4));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_5 << ((32767 >> (7669548069687374119 - 7669548069687374090)))));
    var_11 = var_8;

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_12 += ((var_8 & (arr_1 [i_0] [i_0])));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_13 = 6841673921621873487;
            var_14 ^= ((-107 ? (arr_2 [i_0]) : -var_4));
            arr_4 [i_1] [i_1] = var_8;
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
        {
            var_15 = (min(var_15, (arr_0 [2])));
            var_16 = ((~((((((arr_3 [i_0] [i_0]) && (arr_2 [i_0])))) << ((((max((arr_2 [i_0]), (arr_5 [i_0] [i_0])))) - 65417))))));
            var_17 ^= (-32767 || 32767);
            var_18 = (min(var_18, (((+(((arr_5 [i_0] [i_2]) + (arr_1 [i_2] [i_2]))))))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
        {
            arr_11 [i_0] [i_0] [i_0] &= 6841673921621873497;
            var_19 = (arr_0 [i_3]);
        }
        var_20 ^= (min((~-var_9), ((11605070152087678140 ? (arr_2 [i_0]) : (arr_0 [i_0])))));
        arr_12 [3] [9] = ((-(((arr_2 [i_0]) ? (~var_8) : (arr_2 [i_0])))));
        arr_13 [i_0] [i_0] = (((arr_0 [i_0]) ^ ((var_8 ? ((var_8 ? var_7 : 9223372036854775807)) : (((arr_2 [i_0]) ? var_6 : 6011781009262399977))))));
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
    {
        arr_16 [i_4] [i_4] = (arr_5 [i_4] [i_4]);
        arr_17 [i_4] = ((-((-(arr_15 [0])))));
        var_21 = var_8;
        var_22 = var_1;
    }
    for (int i_5 = 2; i_5 < 13;i_5 += 1) /* same iter space */
    {
        arr_21 [i_5 + 1] [i_5] = 13343905495004096566;
        var_23 = (((((arr_7 [i_5 - 1] [i_5 - 1]) && (arr_7 [i_5 + 3] [i_5]))) ? ((((arr_7 [i_5 + 1] [8]) || (arr_7 [i_5 + 2] [i_5 + 1])))) : (((arr_7 [i_5 - 1] [i_5 - 1]) | var_8))));
        arr_22 [2] [4] |= (((((18249 < (arr_1 [7] [7])))) != (((arr_7 [i_5 - 2] [i_5]) << (arr_7 [i_5 + 1] [i_5])))));
        var_24 |= ((((((arr_20 [i_5] [2]) - (arr_19 [2] [i_5 + 2])))) ? (arr_3 [i_5] [0]) : (arr_20 [i_5] [1])));
    }
    for (int i_6 = 2; i_6 < 13;i_6 += 1) /* same iter space */
    {
        var_25 ^= (min(((((((arr_0 [i_6]) ? var_8 : -32749))) ? (((~(arr_6 [i_6] [i_6])))) : (arr_20 [10] [10]))), 840698078));
        var_26 = (((((32767 + (arr_6 [i_6 + 1] [i_6 + 3])))) ? (((arr_20 [i_6 - 1] [8]) / (arr_24 [i_6 + 2] [i_6 - 2]))) : (var_1 + 7220042942149618803)));
        var_27 = (min(var_6, (var_2 < var_7)));
    }
    #pragma endscop
}

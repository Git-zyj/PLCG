/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((min(var_11, var_2))) + (max(var_12, var_2)))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((18187041739598891897 < (arr_0 [i_0]))) ? ((min((arr_1 [21] [21]), (3597400538 || 68)))) : ((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [7]))))));
        arr_3 [i_0] [13] = ((max(((min((arr_0 [1]), 44806))), (arr_0 [i_0]))) % ((~(arr_1 [i_0] [i_0]))));
        var_18 -= ((-9223372036854775791 ? 2334305986 : 32));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_19 = (arr_4 [i_1] [i_2]);
            var_20 = ((var_10 ? (var_6 | -8207) : (((min(0, var_6))))));
            arr_9 [i_1] = (min(((((((arr_7 [i_2]) ? var_16 : (arr_0 [0])))) ? (arr_0 [i_1]) : (max((arr_5 [16]), (arr_4 [i_1] [i_1]))))), ((113 ? (arr_0 [i_1]) : var_7))));
        }
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            arr_12 [i_1] [i_1] [i_3] = (arr_4 [i_1] [i_1]);
            var_21 = (arr_0 [i_1]);
            var_22 = ((-8180 ? (arr_7 [i_1]) : (arr_5 [i_3 + 4])));
            var_23 += (((min((arr_8 [i_1] [1]), (arr_4 [20] [20]))) < (((min((arr_1 [21] [i_3 + 4]), (arr_1 [i_3 + 1] [i_3 + 1])))))));
            var_24 = (((arr_6 [i_3 + 2]) <= (((arr_6 [i_3 + 4]) ? (arr_6 [i_3 + 1]) : (arr_6 [i_3 + 4])))));
        }
        arr_13 [20] = ((var_11 == ((var_12 / (max(0, var_5))))));
        arr_14 [7] = (max((max(var_13, (((arr_1 [i_1] [i_1]) ? 17199071502416344566 : var_9)))), ((((max(-6343888536273479492, (arr_1 [i_1] [i_1])))) ? (((arr_5 [3]) % (arr_6 [i_1]))) : (30 != -6421491019301126208)))));
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {

        /* vectorizable */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            var_25 = arr_19 [i_4];
            var_26 ^= (arr_1 [i_4] [22]);
            var_27 = var_10;
        }
        var_28 = (((((arr_16 [i_4]) != (arr_16 [i_4]))) ? (max(-1525447077, (arr_19 [i_4]))) : (var_6 <= var_1)));
        var_29 = ((1025794176 ? ((8866650765323934446 % (((min(var_4, (-127 - 1))))))) : (((min((((arr_7 [i_4]) && var_0)), (arr_8 [i_4] [i_4])))))));
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        var_30 = (max(var_30, ((min((((arr_11 [i_6]) ? (arr_15 [i_6] [i_6]) : (arr_11 [i_6]))), ((((((arr_0 [18]) + var_7))) ? var_13 : (min(10486230513643285458, (arr_21 [i_6] [6]))))))))));
        arr_23 [i_6] = (~-4437322029529275976);
    }
    #pragma endscop
}

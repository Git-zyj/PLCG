/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_15 = (min(var_15, (((var_10 ? -var_2 : var_6)))));
        var_16 = var_8;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_17 = 73;
            var_18 = (min((arr_7 [i_2]), (((arr_5 [i_1] [i_2]) ^ (arr_4 [i_1])))));
            var_19 = ((~((~(~var_7)))));
            var_20 = var_12;
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            var_21 = (max((max((max((arr_3 [6] [i_3]), var_13)), (arr_10 [i_1]))), ((min(((min(6287, -1))), -1022749835)))));
            var_22 = (+((var_13 ? (~28309) : ((~(arr_9 [i_1] [i_3]))))));
            var_23 = (min(var_23, var_3));
        }
        for (int i_4 = 3; i_4 < 20;i_4 += 1)
        {
            arr_13 [i_1] [i_1] = ((((min((~0), (~1294067304)))) ? (min((((arr_8 [i_1]) ? (arr_4 [i_1]) : (arr_3 [i_1] [i_1]))), (arr_5 [i_1] [i_1]))) : (arr_3 [i_1] [i_1])));
            var_24 = 56563357836463817;
            var_25 = (max(var_25, 124));
        }
        var_26 = (max(var_26, 9223372036854775807));
        var_27 = (max((((arr_7 [i_1]) ? ((((arr_12 [i_1] [i_1] [i_1]) && var_7))) : (max(1867915520, 1867915527)))), (max(((max(var_7, var_2))), (arr_11 [11])))));
        var_28 = ((+(min((arr_11 [i_1]), (arr_10 [i_1])))));
        var_29 = arr_6 [i_1] [i_1];
    }
    for (int i_5 = 2; i_5 < 13;i_5 += 1)
    {

        /* vectorizable */
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            var_30 = (min(var_30, (((7496 & ((var_11 ? (arr_6 [14] [14]) : 0)))))));
            var_31 = ((((arr_2 [i_5] [i_5 - 2]) ? (arr_2 [i_5] [i_6]) : var_3)));
        }
        var_32 = (max(var_32, (((var_1 < (((arr_11 [i_5]) ? (arr_11 [i_5 - 2]) : 2171462075)))))));
    }
    var_33 = var_6;
    var_34 ^= var_6;
    var_35 = var_7;
    #pragma endscop
}

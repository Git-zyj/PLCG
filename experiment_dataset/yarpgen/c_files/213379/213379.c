/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((max((!21), (~204)))) ^ (max(var_5, var_0))));
    var_14 = ((~(123 | 12123)));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_15 = ((arr_0 [i_0] [i_0]) ? ((~(arr_0 [i_0] [i_0]))) : ((-111 ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0]))));
        arr_2 [i_0] = (max((((arr_0 [i_0] [i_0]) | 26)), ((max((arr_1 [i_0]), (arr_0 [i_0] [i_0]))))));
        var_16 = (((((252 | (arr_0 [i_0] [i_0])))) ? (max(var_9, var_12)) : ((15533 ? var_11 : 2825453316024264383))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 22;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_17 = 179930433;
            arr_8 [i_2] [i_1] [i_1 + 1] = (arr_7 [i_1 - 1] [i_1 + 2]);
            var_18 -= (204 ? (arr_7 [i_1 - 1] [i_2]) : ((((1351930694 < (arr_6 [i_2] [i_2] [i_1 + 1]))))));
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            arr_11 [i_1] = ((arr_4 [i_1 - 3]) <= 12279195041965097359);
            arr_12 [i_1 - 1] [i_1 + 2] [i_1 - 3] = (((arr_6 [i_1 - 2] [i_1 + 2] [i_1]) && (arr_6 [i_1 + 2] [i_3] [i_3])));
            var_19 = (((((var_8 ? (arr_7 [i_1] [i_3]) : (arr_5 [i_1] [i_3])))) ? (((-(arr_3 [i_1 - 2] [i_3])))) : (~var_8)));
            var_20 -= (arr_6 [i_1] [i_1 - 1] [i_1 - 1]);
        }
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            var_21 = ((~(~var_7)));
            arr_16 [i_1 - 2] [i_1] [i_4] = (((arr_14 [i_1 - 3] [i_1 - 3] [i_1 - 2]) ? var_8 : -4396711793815211198));
            var_22 = ((((((arr_15 [i_4] [i_4]) ? -16 : var_9))) ? (var_4 <= 127) : (((arr_14 [i_1 + 2] [i_1] [i_1 + 2]) ? (arr_10 [i_4] [i_4] [i_1]) : var_10))));
            var_23 -= (((-(arr_10 [i_1 - 1] [i_1 - 2] [i_1 - 2]))));
        }
        var_24 = (max(var_24, var_3));
    }
    #pragma endscop
}

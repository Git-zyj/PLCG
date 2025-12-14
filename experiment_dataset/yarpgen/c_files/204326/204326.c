/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, -var_12));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_14 = ((var_4 + ((((arr_1 [i_0]) ? -3545 : (arr_0 [i_0]))))));
        var_15 = (max(-507367327, ((((((arr_1 [i_0]) ? var_1 : var_2))) ? 65535 : (max(5716203783335028628, var_4))))));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_16 = (min((((((var_5 ? 5716203783335028656 : 1))) ? (((arr_3 [i_0]) >> (var_12 - 86))) : var_2)), (((~(arr_1 [16]))))));
            var_17 *= ((((((arr_1 [i_1]) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? (((arr_0 [i_0]) * 17982971431213365111)) : ((min((arr_3 [i_0]), (arr_1 [i_0]))))));
        }
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_18 += var_11;
        arr_8 [0] = (((((~(arr_1 [16])))) ? (arr_4 [14] [14]) : -27385278));
        arr_9 [5] = (((arr_1 [i_2]) ? (arr_1 [i_2]) : (arr_1 [i_2])));
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 12;i_3 += 1)
    {
        var_19 = ((var_5 ? (arr_7 [i_3 - 1] [8]) : (arr_1 [i_3 - 2])));
        arr_14 [i_3] = ((!((((arr_5 [i_3] [i_3 - 1] [i_3]) - var_4)))));
        var_20 = var_3;
        arr_15 [1] = (arr_6 [i_3]);
        var_21 = (((arr_3 [i_3 + 2]) == ((((arr_1 [i_3]) ? -1702123297 : -2147483642)))));
    }
    #pragma endscop
}

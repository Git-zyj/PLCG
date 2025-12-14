/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_15 = (min(var_15, 24466));
            arr_5 [i_0] [i_1] &= max(24466, 1);
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_16 = (((((((min(1, (arr_7 [i_0] [4] [i_2])))) / 2425))) ? 1 : -24465));
            arr_8 [i_2] = ((((max((((-(arr_3 [i_0])))), (arr_2 [i_0] [i_0])))) ? 1 : -11291430));
            var_17 = (((~(arr_0 [i_0]))) + (min((arr_0 [i_0]), 0)));
        }
        /* vectorizable */
        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            var_18 = (arr_2 [i_3 + 1] [i_3 + 1]);
            arr_13 [i_3] = (((((~(arr_4 [i_0] [i_3])))) ? (arr_10 [16] [i_0]) : (arr_4 [i_3] [i_3 + 1])));
            arr_14 [i_0] [1] [i_3 - 1] |= 16856;
            var_19 = ((var_3 ? -19805 : (arr_2 [i_0] [i_3 + 1])));
            arr_15 [i_3] [i_3] [i_0] = (arr_10 [i_3 + 1] [i_3 - 1]);
        }
        var_20 |= ((((min((arr_6 [i_0]), 1756905608))) || -24447));
        arr_16 [i_0] = (((((0 ? 1 : -24447))) && (((11291424 ? ((max(-32, (arr_7 [15] [i_0] [i_0])))) : (var_7 == var_4))))));
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        var_21 = (arr_2 [i_4] [i_4]);
        arr_19 [i_4] = ((((max((arr_9 [8] [i_4] [i_4]), 28))) ? (((arr_18 [i_4]) | (((-39 ? 58063 : 1))))) : ((((45193 == (arr_4 [i_4] [i_4])))))));
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        var_22 = var_7;
        var_23 = ((!((((arr_20 [i_5]) + (arr_20 [i_5]))))));
        var_24 = (arr_20 [i_5]);
    }
    var_25 = (var_11 - (((var_3 < var_10) ? (max(var_8, var_11)) : 116)));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_14 = (min((arr_0 [i_0]), (((arr_1 [16]) ? var_12 : var_3))));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_5 [i_0] = 19542;
            arr_6 [i_0] = (arr_2 [i_0] [14] [i_0]);
        }
        var_15 = var_2;
    }
    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        arr_11 [i_2] [i_2] = ((var_0 ? (arr_7 [i_2]) : (arr_7 [i_2])));

        for (int i_3 = 4; i_3 < 16;i_3 += 1)
        {
            var_16 = (1722742355 ? (arr_8 [i_3 - 1]) : (max((arr_8 [i_3 - 1]), (arr_8 [i_3 + 1]))));
            arr_15 [i_2] [i_2 - 1] [i_2] = var_11;
            var_17 = ((((((arr_7 [i_2]) ? (max(var_11, (arr_13 [i_3]))) : (((11534 ? (arr_0 [i_2]) : var_8)))))) ? var_11 : (max(-13114, var_1))));
            var_18 = var_8;
        }
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            var_19 = ((((((arr_12 [i_2 + 1] [i_2] [i_2]) ? var_11 : 174))) ? 1 : var_4));
            var_20 = 1109437406;
            var_21 = ((var_12 ? (arr_2 [i_2] [i_2] [i_2 + 1]) : (((((arr_7 [i_2]) && (((var_10 ? var_12 : 2994876526)))))))));
        }
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            var_22 = (arr_0 [i_2]);
            var_23 = ((((((arr_16 [i_2 + 1] [i_5]) & ((70 ? 186 : var_4))))) >= var_11));
            arr_20 [i_2] [i_2] [i_5] = (arr_19 [i_2 + 1] [i_2 + 1]);
        }
        var_24 = ((var_0 ? ((((arr_4 [i_2] [i_2] [i_2]) ? (arr_4 [i_2] [i_2] [i_2]) : var_8))) : (arr_14 [i_2])));
        var_25 = 0;
        var_26 = 163;
    }
    for (int i_6 = 3; i_6 < 19;i_6 += 1)
    {
        var_27 = (max(((var_8 ? ((max(var_8, var_10))) : -8742981192449296842)), var_9));
        arr_24 [i_6] = (arr_3 [i_6] [i_6 - 1] [i_6]);
    }
    #pragma endscop
}

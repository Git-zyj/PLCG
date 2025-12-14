/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_20 = (min(var_20, -var_3));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {

                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            var_21 = ((var_12 - (arr_12 [i_4 + 1] [i_1] [i_1])));
                            var_22 = (arr_11 [i_1] [i_2] [i_2] [i_1]);
                            arr_15 [i_0] [i_1] [7] [i_3] [i_1] = (!var_18);
                        }
                        var_23 = (arr_2 [i_0] [i_0 + 3]);
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        var_24 = (~var_12);
        var_25 = (((((~(((var_4 < (arr_16 [i_5]))))))) ? (((arr_18 [i_5]) ? (arr_17 [i_5] [i_5]) : (arr_17 [i_5] [i_5]))) : (arr_17 [i_5] [i_5])));
        arr_19 [i_5] = ((((((arr_18 [i_5]) ? var_4 : var_19)) != (((-(arr_16 [i_5])))))));
        var_26 *= (((((var_18 ? (((-(arr_17 [i_5] [22])))) : -var_16))) ? ((((arr_18 [16]) ? (arr_17 [i_5] [8]) : ((var_7 ? var_0 : (arr_16 [i_5])))))) : ((((((arr_16 [i_5]) ? (arr_18 [10]) : (arr_17 [i_5] [16])))) ? var_11 : var_4))));
    }
    var_27 = ((((((var_6 ? var_0 : var_15)) ? ((var_1 ? var_12 : var_2)) : ((var_4 ? var_18 : var_19))))));
    var_28 = ((((((var_4 ? var_9 : var_17)))) ? (~var_3) : (((-(~var_6))))));

    for (int i_6 = 4; i_6 < 16;i_6 += 1)
    {
        var_29 = (((((((var_16 != (arr_16 [i_6 - 1]))) ? -var_15 : (((var_4 ? (arr_20 [i_6] [i_6]) : (arr_21 [i_6]))))))) ? ((+(min((arr_16 [i_6]), (arr_20 [i_6] [i_6]))))) : ((((((-(arr_18 [i_6])))) ? ((var_14 ? (arr_18 [i_6]) : var_0)) : (arr_21 [i_6]))))));
        var_30 = (i_6 % 2 == 0) ? (((((((arr_18 [i_6]) ? (arr_18 [i_6]) : (arr_18 [i_6])))) ? (((((arr_18 [i_6]) + 2147483647)) << (((((arr_18 [i_6]) + 10506)) - 22)))) : (var_14 % var_9)))) : (((((((arr_18 [i_6]) ? (arr_18 [i_6]) : (arr_18 [i_6])))) ? (((((arr_18 [i_6]) + 2147483647)) << (((((((((arr_18 [i_6]) + 10506)) - 22)) + 14669)) - 26)))) : (var_14 % var_9))));
        var_31 = var_10;
        arr_22 [i_6] [i_6] = ((-(((((-84 ? 3954096075 : 1))) ? 96 : (arr_18 [i_6])))));
    }
    #pragma endscop
}

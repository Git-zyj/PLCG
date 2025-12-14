/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (((-((var_12 ? -var_10 : var_12)))))));
    var_16 = var_9;
    var_17 = var_10;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = ((~((var_10 ^ (arr_0 [i_0])))));
        arr_2 [i_0] [i_0] = var_11;
        var_19 += (((arr_1 [i_0] [i_0]) ? (((arr_1 [i_0] [i_0]) ? var_7 : var_14)) : (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [1] [i_0])))));
        var_20 = (min(((min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))), (((arr_1 [i_0] [i_0]) ? var_10 : var_8))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_21 = (min(var_21, (((!((((arr_0 [i_1]) ? (arr_1 [8] [i_1]) : 43822))))))));
        var_22 ^= ((var_8 ? (0 | 6106708107145638190) : (((var_5 ? var_14 : var_8)))));
        arr_6 [i_1] [i_1] = ((var_13 & (~32767)));
    }
    for (int i_2 = 3; i_2 < 21;i_2 += 1)
    {
        var_23 = (max(var_23, ((min((((((arr_1 [18] [2]) - var_9)))), var_2)))));

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_24 = (min(var_24, (((((((arr_4 [8]) ? (arr_4 [2]) : var_10))) ? (arr_4 [1]) : ((min((arr_4 [16]), (arr_4 [1])))))))));
            var_25 = (min(var_25, ((((arr_4 [14]) != ((((arr_7 [i_2 - 3]) ? (arr_4 [18]) : (arr_9 [18])))))))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 19;i_5 += 1)
                {
                    {
                        var_26 |= var_10;
                        var_27 = (min((((arr_15 [i_4] [i_4] [i_4] [i_4]) ? (min(var_1, (arr_1 [13] [13]))) : var_6)), ((min(-14846, -1)))));
                        arr_17 [i_5] [i_3] [i_3] [i_2 - 1] = (((1048575 / ((12340035966563913444 ? 956690264 : -3822)))) | ((966 ? 1 : -956690265)));
                        var_28 = (((((((var_7 ? var_13 : (arr_0 [9]))) - var_6))) ? (((((var_12 ? (arr_12 [i_5] [8]) : var_4))))) : (((min(var_11, var_13)) - var_6))));
                    }
                }
            }
            arr_18 [i_3] = var_6;
            var_29 = (arr_9 [i_3]);
        }
        var_30 = (max(var_30, (((((((arr_3 [i_2 - 2]) ? var_6 : var_14))) ? (((((arr_11 [i_2 - 2] [i_2 - 2] [i_2]) || ((min(var_0, (arr_16 [18] [18])))))))) : (min((arr_0 [15]), ((min(var_2, var_10))))))))));
        var_31 = ((((min((arr_4 [18]), var_1))) ? (((arr_4 [16]) ? var_10 : var_6)) : (arr_4 [16])));
        arr_19 [i_2 - 1] = var_12;
    }
    #pragma endscop
}

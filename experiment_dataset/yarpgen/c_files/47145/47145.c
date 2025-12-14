/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [14] = (~((((~(arr_1 [22] [i_0]))) + (0 >> var_13))));
        var_18 = 1;
    }

    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 21;i_3 += 1)
            {
                {
                    var_19 |= ((((((!var_9) <= (var_0 << 1)))) & (arr_0 [i_1 - 1])));
                    var_20 |= (arr_4 [i_1 - 1]);
                    var_21 += ((((((arr_8 [i_3] [i_3] [i_3 - 2]) ? 0 : var_11))) ? ((((!(((62 ? var_3 : var_13))))))) : (~5)));
                    arr_12 [i_2] = (-((-(62 | var_2))));
                }
            }
        }
        arr_13 [i_1 - 1] = ((-2781 ? 4135210288 : (((((max((arr_9 [i_1] [22]), var_7))) ? (arr_7 [i_1 + 1]) : ((max(var_17, var_2))))))));
        var_22 = (min(var_22, var_10));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    var_23 = (i_5 % 2 == 0) ? (((!((((arr_18 [i_1] [i_1 - 1] [i_4 - 1] [i_5]) >> (-632890400 + 632890411))))))) : (((!((((((arr_18 [i_1] [i_1 - 1] [i_4 - 1] [i_5]) + 2147483647)) >> (-632890400 + 632890411)))))));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 21;i_7 += 1)
                        {
                            {
                                arr_27 [i_1 - 1] [i_4 - 1] [i_5] [i_6 + 1] [i_7] = ((!((min((((arr_14 [i_1]) / var_16)), var_10)))));
                                arr_28 [i_1] [i_5] = var_9;
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_8 = 1; i_8 < 12;i_8 += 1)
    {
        var_24 = (max(var_24, 0));
        /* LoopNest 2 */
        for (int i_9 = 2; i_9 < 12;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                {
                    var_25 = (max(var_25, (arr_7 [i_8])));
                    arr_36 [i_8] [i_9 + 1] [i_8] = (((((var_11 | (~0)))) || ((((((arr_32 [i_8] [i_8] [i_10]) ? var_0 : var_10)) & ((var_11 ? 16008 : 1)))))));
                    arr_37 [0] [i_8] = var_10;
                    var_26 = 0;
                }
            }
        }
    }
    for (int i_11 = 3; i_11 < 7;i_11 += 1)
    {
        var_27 = (max(var_27, 1));
        arr_40 [i_11] [8] = 632890388;

        for (int i_12 = 4; i_12 < 9;i_12 += 1)
        {
            var_28 = var_13;
            var_29 = (min(var_29, ((((!-var_3) ? 1 : ((min(var_17, (arr_24 [i_11] [i_11 - 2] [5] [i_12 - 2] [i_12 + 1] [i_12] [i_12])))))))));
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 11;i_13 += 1)
            {
                for (int i_14 = 2; i_14 < 9;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        {
                            var_30 = (((-632890389 ? 632890388 : 32256)) <= (((arr_43 [i_11 - 1] [i_14 - 1]) ? var_1 : var_0)));
                            arr_51 [i_15] [7] [i_12] [6] [i_15] [i_15] = (!var_13);
                            arr_52 [i_12] [i_12] = -var_2;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

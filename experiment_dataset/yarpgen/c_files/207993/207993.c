/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] [6] [i_0] = (arr_3 [i_0]);
                arr_6 [5] = (min((((3507854838 % (arr_4 [i_0] [i_0])))), var_12));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_15 = ((16512 ? 103590849 : 4261412864));
                            var_16 = (-((((min((arr_8 [i_0] [10] [11]), var_0)) < var_14))));
                            arr_11 [i_3] [i_1 - 1] [i_2 + 2] [i_3] = 49024;
                            var_17 = ((var_11 <= (max(-8381564122750189274, var_2))));
                            arr_12 [3] = ((((((((arr_9 [i_0] [3] [i_0] [3] [8] [i_0]) ? (arr_4 [i_0] [i_0]) : 1361468148)) | (~49019)))) ? (max((~var_8), ((min(var_6, (arr_2 [6] [6] [i_2 + 1])))))) : ((min((arr_1 [4] [i_1 + 2]), ((~(arr_1 [i_1 - 1] [8]))))))));
                        }
                    }
                }
            }
        }
    }
    var_18 = (~var_9);
    var_19 = var_7;

    /* vectorizable */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            {
                                var_20 *= (((arr_22 [i_4] [i_5] [i_6] [i_7] [i_8]) ? (arr_14 [i_4]) : var_14));
                                var_21 = ((+(((arr_21 [2] [i_5] [i_8]) ? var_10 : (arr_25 [i_4] [3] [10] [3] [i_4])))));
                                var_22 = 1;
                            }
                        }
                    }
                    var_23 = ((49019 ? 204 : var_12));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 22;i_10 += 1)
                        {
                            {
                                var_24 = ((var_2 & (arr_31 [13] [13] [15] [i_9])));
                                var_25 = (arr_28 [i_4] [i_5] [i_9] [i_9]);
                                arr_36 [6] [21] [5] [i_9] [19] = (((arr_23 [i_4] [i_4] [7]) ? (((var_11 ? (arr_19 [i_4] [i_6] [i_9]) : var_7))) : var_2));
                                var_26 = ((!(arr_25 [i_4] [i_4] [8] [i_4] [i_4])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 21;i_12 += 1)
                        {
                            {
                                arr_42 [i_4] [i_4] [2] [i_4] [i_11] [i_12] [10] = (((((arr_17 [i_6]) && (arr_29 [5] [11] [i_11] [i_12 + 1]))) ? var_4 : ((var_14 ? var_3 : (arr_27 [0] [i_5])))));
                                arr_43 [i_4] [i_4] [i_6] [6] [i_12 + 1] = arr_24 [1] [i_5] [21] [i_11] [i_12 - 1] [i_6];
                                var_27 = arr_32 [i_12 + 1] [i_12 + 1] [14] [12] [i_12 - 1];
                                var_28 = (((arr_39 [4] [i_5] [i_5] [i_5]) + -1554794385));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 22;i_13 += 1)
        {
            for (int i_14 = 1; i_14 < 19;i_14 += 1)
            {
                {
                    arr_49 [i_14] = arr_39 [i_4] [i_13] [i_13] [i_13];
                    var_29 = (var_8 | var_4);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 12;i_15 += 1)
    {
        var_30 = (max(var_30, 1067663564063423870));
        arr_52 [i_15] [i_15] = ((!(arr_8 [i_15] [7] [7])));
    }
    for (int i_16 = 0; i_16 < 14;i_16 += 1)
    {
        var_31 = var_8;
        arr_56 [i_16] [0] = 2840781497;
    }
    for (int i_17 = 0; i_17 < 11;i_17 += 1)
    {
        var_32 = ((var_6 - (((-(((!(arr_22 [i_17] [i_17] [i_17] [i_17] [i_17])))))))));
        var_33 = var_5;
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_1] [i_1] [i_1] [i_0] [i_0] = (max(((max((arr_11 [i_2 + 1] [i_2 + 2] [i_2] [i_2]), 786997754))), (arr_11 [i_2 + 2] [i_2 + 1] [i_2] [i_2])));
                                arr_13 [i_1] [i_0] [i_0] [i_0] [i_1] = ((((((max(1, var_9))) ? (min(var_5, var_1)) : ((max(8242395943361443588, 160172901977635687))))) * (((arr_1 [i_0] [i_0]) ? (((arr_7 [13] [i_2] [i_3] [i_4]) * var_15)) : (arr_11 [i_0] [i_1] [i_2] [i_3])))));
                                arr_14 [i_0] [i_0] [i_1] [i_0] [i_0] [i_3] [i_4] = var_14;
                            }
                        }
                    }
                    arr_15 [i_0] [i_0] [i_0] [i_0] = ((((arr_0 [i_1 + 1]) ? (arr_11 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_2 - 1]) : (arr_0 [i_1 + 1]))));
                }
            }
        }
    }
    var_16 = var_1;
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 21;i_7 += 1)
            {
                {
                    arr_24 [i_5] [i_7] = var_8;
                    arr_25 [i_7] [i_7] [7] = var_14;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        for (int i_9 = 2; i_9 < 7;i_9 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 10;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        {
                            arr_34 [i_8] [i_9] [i_9] [i_10] [i_9] [i_9] = ((((!(arr_28 [i_9 + 4] [i_9] [i_9 - 1]))) ? (((max(1, 16700896882337073551)) + (var_7 || var_2))) : var_6));
                            arr_35 [i_8] [i_8] [i_8] [i_9] = ((~((1 ? (arr_2 [i_9 + 3] [i_8]) : var_10))));
                            arr_36 [i_10] [i_8] [i_10] [i_10] [i_11] [i_10] = 652825025;

                            for (int i_12 = 0; i_12 < 11;i_12 += 1)
                            {
                                arr_39 [i_8] [i_8] = (min((max((~var_6), (arr_31 [i_12] [i_9] [i_12]))), (((((max(var_5, (arr_9 [i_12] [i_11] [i_8] [i_8])))) <= 18446744073709551614)))));
                                arr_40 [i_8] [i_10 + 1] [i_10] [i_11] [0] [i_9] [0] = ((((max(((((arr_0 [i_8]) / (arr_19 [19] [19] [i_12])))), (arr_33 [i_8] [i_8] [i_8] [i_8])))) ? (((arr_23 [i_10 - 1] [i_11] [i_12]) ^ ((((var_7 < (arr_10 [i_9]))))))) : (((max(var_11, 8598683489014491674))))));
                                arr_41 [i_8] [i_12] &= (((var_2 | var_0) % -8598683489014491678));
                                arr_42 [i_8] [i_8] [i_8] [i_11] [i_8] [i_12] = (min((((min((arr_29 [i_8]), (arr_27 [i_12]))) <= (arr_2 [i_10 - 1] [i_9]))), (((((arr_37 [0] [i_9] [i_9] [i_9] [i_8] [i_9] [i_9 + 1]) || var_14)) && var_6))));
                            }
                            /* vectorizable */
                            for (int i_13 = 0; i_13 < 11;i_13 += 1)
                            {
                                arr_45 [i_8] [i_9] [i_10] [i_10] [1] [i_13] = (arr_21 [i_8] [i_8] [i_10] [i_8]);
                                arr_46 [i_8] [i_9] [5] [i_11] [i_13] [i_10] [i_13] = ((!(~1)));
                                arr_47 [i_13] [i_8] [i_10] [i_8] [i_10] [i_8] [i_8] = 1410137951306609144;
                            }
                        }
                    }
                }
                arr_48 [i_8] [i_8] = (max((((arr_17 [i_8]) ? (min(-935440176066729826, var_9)) : ((max(1, var_7))))), (((+((((arr_43 [i_9 + 1] [i_9] [i_8] [i_8] [i_8]) || 1))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 18;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 18;i_15 += 1)
        {
            {
                arr_54 [i_14] [i_14] = (((!var_3) ? ((var_6 ? ((max(var_13, -8598683489014491675))) : (var_1 / var_4))) : (min((arr_20 [i_14]), (var_12 / var_1)))));
                arr_55 [i_14] [i_14] [i_15] = (max((arr_5 [i_14]), ((((arr_49 [i_14] [i_15]) - (arr_5 [i_15]))))));
                arr_56 [i_14] [i_14] [i_15] = ((((var_10 || ((min((arr_53 [i_14] [i_14] [i_15]), var_2))))) ? ((((((arr_21 [i_14] [i_14] [i_14] [i_14]) * (arr_18 [i_14])))) ? (-1163334591145337727 | var_7) : (((arr_22 [i_14] [i_14] [5] [i_15]) ? var_4 : -8598683489014491682)))) : (((var_14 ^ (((-(arr_19 [i_14] [i_15] [i_15])))))))));
                arr_57 [i_14] [i_15] [i_15] = var_5;
            }
        }
    }
    #pragma endscop
}

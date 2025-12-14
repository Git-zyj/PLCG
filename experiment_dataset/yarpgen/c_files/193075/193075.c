/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (~((((arr_1 [i_1]) || (arr_1 [i_0])))));
                var_15 = (min(var_15, (((((arr_0 [i_0] [7]) / (arr_0 [i_0] [i_0]))) * ((min((arr_0 [i_0] [i_0]), (arr_0 [i_1] [13]))))))));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_16 &= var_1;
                        arr_10 [i_3] [i_0] [i_2] [i_2] [i_1] [i_0] = (var_6 >= var_11);
                        arr_11 [i_3] [i_3] [i_2] [i_0] [i_0] = ((1732470490 <= (var_5 & var_8)));
                    }

                    for (int i_4 = 1; i_4 < 17;i_4 += 1)
                    {

                        for (int i_5 = 2; i_5 < 14;i_5 += 1)
                        {
                            var_17 = (max(var_17, 506029530));
                            arr_17 [i_0] [2] [i_2] [4] [i_0] [i_2] |= (((arr_6 [i_5 + 1]) ? var_3 : var_13));
                            var_18 = (max(var_18, ((((3 >= (arr_6 [i_2])))))));
                        }
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            arr_20 [i_6] [i_6] |= -700167788;
                            var_19 *= ((-(arr_18 [i_2 - 1] [i_4] [i_6] [0])));
                        }
                        for (int i_7 = 3; i_7 < 17;i_7 += 1)
                        {
                            arr_24 [i_0] [15] [i_2] [i_2] [i_4] [i_2] [i_7] = var_11;
                            var_20 -= ((var_7 ? (((arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_1 : var_14)) : ((var_6 ? var_1 : var_0))));
                        }
                        arr_25 [i_4] [i_2] [i_2] [i_0] = (var_9 >> (var_8 != 252));
                    }

                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        arr_30 [i_8] [0] [i_2] [i_2] [i_0] [i_0] = -1732470473;
                        var_21 = ((1074172175 ? 227 : 246));

                        for (int i_9 = 1; i_9 < 14;i_9 += 1)
                        {
                            var_22 &= ((((arr_14 [i_0] [i_0] [i_1]) ^ var_5)));
                            arr_33 [i_2] = (i_2 % 2 == 0) ? (((arr_14 [i_1] [i_2 + 2] [i_2]) << (((arr_14 [i_2] [14] [i_2]) - 987652668)))) : (((arr_14 [i_1] [i_2 + 2] [i_2]) << (((((arr_14 [i_2] [14] [i_2]) - 987652668)) + 877491663))));
                            var_23 = var_0;
                        }
                    }
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        var_24 = (((arr_22 [i_2 - 1] [12] [i_2 - 1] [i_2 + 1] [i_2] [i_2]) <= (arr_15 [i_2] [i_2 + 1] [i_2 + 1] [i_2] [i_0])));
                        var_25 = (((arr_34 [i_2 + 1] [i_2 + 1] [i_2] [i_2 + 1] [i_2 - 1]) ? 27 : var_0));
                    }

                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        var_26 &= (((arr_18 [i_2 - 1] [i_2 - 1] [i_1] [i_2 - 1]) ? (arr_14 [i_2 - 1] [i_2 + 1] [i_1]) : var_6));

                        for (int i_12 = 0; i_12 < 18;i_12 += 1)
                        {
                            arr_43 [2] [i_1] [i_2] [2] [i_12] = 0;
                            arr_44 [i_2] [i_1] [i_2] [i_1] [i_12] = var_11;
                            var_27 -= (arr_41 [i_0] [i_1] [i_2] [i_11] [14]);
                            arr_45 [i_2] [i_2] [8] [i_11] [i_11] [i_11] [i_11] = var_11;
                        }
                        for (int i_13 = 0; i_13 < 18;i_13 += 1)
                        {
                            var_28 = (9 > var_9);
                            arr_48 [i_13] [i_2] [i_2] [i_2] [i_0] = ((-340460525 ? 59 : (var_4 ^ var_11)));
                            arr_49 [i_0] [i_2] [i_11] = (((arr_23 [4] [i_1] [i_13] [i_11] [i_13] [17]) != (arr_23 [i_13] [i_11] [i_0] [i_1] [i_1] [i_0])));
                        }
                        arr_50 [i_0] [i_11] [i_2] [i_1] [i_0] &= 694721798;

                        for (int i_14 = 0; i_14 < 18;i_14 += 1)
                        {
                            arr_54 [i_0] [i_1] [i_0] [i_0] [i_0] &= (~var_8);
                            var_29 = (min(var_29, (arr_39 [i_14] [i_0] [i_2 - 1] [i_0] [14])));
                            arr_55 [i_2] [i_2] [i_2] [i_0] = (((arr_31 [i_0] [i_2] [i_2 + 2]) | 1410311736));
                        }
                    }
                    for (int i_15 = 0; i_15 < 18;i_15 += 1)
                    {
                        var_30 = ((!(arr_3 [i_1] [i_2 - 1] [i_15])));
                        arr_59 [i_2] [i_2] [i_2] [i_1] [i_2] = (var_14 + var_6);
                        var_31 -= (-905349526 >= var_8);
                        var_32 |= (((arr_52 [i_2 + 2] [i_2] [i_2 - 1] [1]) >= -1074172176));
                    }
                }
                for (int i_16 = 0; i_16 < 18;i_16 += 1)
                {
                    var_33 -= (((((arr_12 [i_0] [i_1] [i_16] [i_1]) ? (arr_1 [i_16]) : var_1)) > (arr_8 [i_0])));
                    arr_63 [i_0] [i_16] [i_16] = ((var_14 || ((((!(arr_36 [12] [12] [12] [i_0] [i_1] [i_16])))))));
                    var_34 = (max(var_34, var_9));
                }
                arr_64 [i_0] [i_0] [i_1] = var_0;
            }
        }
    }
    var_35 |= (max(((1732470468 ? 248 : 820205707)), var_4));
    var_36 -= var_10;
    #pragma endscop
}

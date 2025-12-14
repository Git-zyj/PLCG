/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_13 = ((!((((arr_0 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : 6127861569754076662)))));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_14 = ((((var_12 ? var_1 : (arr_2 [i_0]))) % (((arr_2 [i_0]) ? var_1 : var_3))));
            var_15 = (((arr_0 [i_0] [i_0]) && (arr_0 [i_0] [i_0])));
            var_16 -= (((((arr_4 [i_0]) ^ var_2)) >= ((55 ? (arr_3 [i_0] [i_0]) : var_5))));
        }
    }

    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {
        var_17 = (max(var_17, var_1));
        var_18 ^= 10;
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 22;i_3 += 1)
    {
        var_19 = var_0;

        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        {
                            var_20 = (-9223372036854775807 - 1);
                            var_21 -= (!8208782734114319529);
                        }
                    }
                }
            }
            var_22 = var_0;
        }
        var_23 |= arr_13 [i_3 + 2] [i_3 + 1] [8] [i_3];
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    var_24 += (((arr_26 [i_3 + 2] [i_8 - 1] [i_9] [i_3 + 2]) & 1));
                    arr_28 [i_3] = 1;

                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        var_25 = (((arr_15 [i_3 - 1]) ? 0 : (arr_15 [i_3 + 1])));

                        for (int i_11 = 2; i_11 < 23;i_11 += 1)
                        {
                            var_26 *= 57;
                            var_27 = (var_12 / var_8);
                        }
                        for (int i_12 = 0; i_12 < 24;i_12 += 1)
                        {
                            arr_36 [i_3] [i_3] = ((-(arr_20 [i_3 - 1] [i_3 - 1] [i_9] [i_10] [i_12])));
                            arr_37 [11] [i_8 - 1] [i_9] [i_9] [i_10] [i_3] = -var_5;
                        }
                        arr_38 [i_3 + 2] [i_8] [19] [i_3] = (1 - -46648747);
                    }
                    for (int i_13 = 0; i_13 < 24;i_13 += 1)
                    {
                        var_28 = (max(var_28, -51));
                        var_29 = (min(var_29, (!var_4)));
                        var_30 = (arr_9 [i_8] [i_8 - 1]);
                        var_31 = ((~(arr_9 [i_3 - 1] [i_3 + 2])));
                    }
                    for (int i_14 = 0; i_14 < 24;i_14 += 1)
                    {

                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            var_32 = (min(var_32, ((var_8 >= (0 > 6127861569754076662)))));
                            var_33 = ((((var_8 ? 2005276916 : var_3))) * (arr_7 [i_3]));
                            var_34 += ((var_0 || (var_1 & 1516410146)));
                        }
                        for (int i_16 = 4; i_16 < 22;i_16 += 1)
                        {
                            var_35 = ((arr_35 [i_3] [i_3 + 2] [i_3 + 2] [i_16 - 3] [i_3 + 2]) == (~var_11));
                            var_36 &= (((((-6127861569754076658 ^ (arr_12 [4] [4])))) ? (var_6 / -1830670266) : ((var_4 >> (10054552153839817784 - 10054552153839817762)))));
                        }
                        for (int i_17 = 0; i_17 < 0;i_17 += 1)
                        {
                            var_37 += (var_0 - var_10);
                            var_38 = (((((-(arr_27 [i_3] [i_3] [i_3] [i_3])))) ? (!var_0) : (~var_3)));
                            var_39 *= ((arr_22 [i_17 + 1] [i_14]) + ((1 ? var_9 : (arr_11 [i_3 + 2] [12]))));
                        }

                        for (int i_18 = 1; i_18 < 22;i_18 += 1)
                        {
                            var_40 = ((!(2518344649934412674 >= 0)));
                            var_41 *= ((10054552153839817784 < (((((arr_23 [i_3 + 2]) == -23868))))));
                        }
                        for (int i_19 = 0; i_19 < 1;i_19 += 1)
                        {
                            arr_60 [i_3 + 1] [i_8 + 1] [i_9] [i_14] [i_3] = ((-(arr_11 [i_9] [i_3])));
                            arr_61 [i_3 + 1] [i_3] [i_3 + 2] [i_3] [i_3 + 2] [i_3 + 1] = arr_25 [i_14];
                            var_42 = ((var_5 <= (((!(arr_49 [9] [i_8] [i_8] [9]))))));
                        }
                        for (int i_20 = 0; i_20 < 24;i_20 += 1)
                        {
                            var_43 += 1;
                            var_44 = var_8;
                            var_45 = var_1;
                            var_46 = ((var_5 | (arr_27 [i_3 + 1] [i_3 + 1] [i_3] [i_3])));
                            arr_65 [i_9] [i_8 + 1] [i_3] [i_8 + 1] [i_3] = (((arr_41 [i_3 + 1] [i_8 + 1] [i_3]) ? (arr_41 [i_3 + 2] [i_8 - 1] [i_3]) : var_12));
                        }
                        var_47 = (((arr_20 [1] [i_3 + 1] [i_9] [i_14] [i_3]) ? var_11 : (arr_34 [i_3 + 2] [i_3 + 1] [i_3 + 1] [i_8 - 1] [i_3])));
                        var_48 = var_10;
                    }
                    for (int i_21 = 1; i_21 < 22;i_21 += 1)
                    {
                        var_49 = (((arr_55 [i_3 + 2] [i_21 + 2] [i_9] [i_3 + 2] [i_21 + 2]) ? (-23854 ^ -23856) : ((-(arr_13 [i_3] [i_8 - 1] [i_3] [i_8 - 1])))));
                        var_50 = ((~(arr_30 [i_3])));
                    }
                }
            }
        }
        var_51 &= -180;
    }

    for (int i_22 = 2; i_22 < 17;i_22 += 1)
    {
        var_52 = (min(var_52, (((~(max((arr_19 [i_22 + 1] [i_22 - 2] [i_22 + 2] [i_22 - 1]), (arr_27 [1] [i_22] [0] [i_22]))))))));
        var_53 = ((((+(((arr_58 [i_22] [i_22] [i_22] [i_22] [i_22 - 1] [i_22 - 2] [i_22]) - var_11)))) > ((var_1 ? (arr_53 [i_22 + 1] [i_22] [i_22] [i_22 + 2]) : (arr_53 [i_22] [i_22] [i_22] [i_22 + 2])))));
    }
    /* vectorizable */
    for (int i_23 = 0; i_23 < 1;i_23 += 1)
    {
        var_54 = var_0;
        var_55 = var_6;
        var_56 = (max(var_56, (((arr_69 [0] [i_23]) >= (!508244553)))));
    }
    var_57 = var_0;
    #pragma endscop
}

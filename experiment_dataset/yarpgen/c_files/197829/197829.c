/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= (max(((var_16 ? ((var_14 ? var_18 : var_11)) : var_5)), (((((790163328 ? -790163346 : var_7)) / -692840170)))));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_20 += arr_0 [i_0] [8];
        var_21 -= (((arr_0 [i_0] [0]) >= (arr_1 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_22 = (arr_2 [i_1]);
        var_23 = (max(var_23, (((452796933 ? (((arr_3 [i_1]) ? (arr_3 [i_1]) : (arr_3 [i_1]))) : (arr_2 [i_1]))))));

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_24 |= (arr_4 [i_1] [i_2]);
            var_25 &= arr_5 [i_2];
        }

        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            var_26 = ((~((0 ? (arr_6 [i_1] [i_1] [10]) : 1432769911804065847))));
            var_27 = ((~(arr_3 [i_1])));
            var_28 = (((arr_7 [i_1]) ? (265448035 > -618984653) : ((3762591343104426601 ? -249500067 : -2147483635))));
            var_29 = (arr_2 [i_3]);
        }
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            var_30 = (arr_6 [i_1] [i_4] [i_1]);
            var_31 += (((arr_12 [20]) ? (arr_7 [i_4]) : ((((arr_10 [i_4]) ? 265448045 : -249500062)))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    {
                        var_32 = (max(var_32, (((((arr_9 [i_1] [i_1] [i_1]) ? (arr_15 [i_5] [i_5] [i_5]) : (arr_2 [i_1])))))));
                        var_33 = -845012213;

                        for (int i_7 = 1; i_7 < 20;i_7 += 1)
                        {
                            var_34 = ((((((arr_15 [i_1] [i_6] [i_7]) ? (arr_9 [19] [19] [5]) : 790163346))) ? (arr_8 [i_1] [0]) : (arr_6 [i_1] [1] [i_5])));
                            var_35 = arr_19 [i_1] [i_1];
                            var_36 = (arr_14 [i_5] [i_6]);
                        }
                        for (int i_8 = 2; i_8 < 19;i_8 += 1)
                        {
                            var_37 |= (((arr_18 [i_8] [i_6] [i_8 - 2] [i_8] [i_6] [18]) / (arr_18 [18] [i_6] [i_8 - 2] [i_8] [i_6] [i_8])));
                            var_38 = (arr_16 [i_4] [i_4] [i_5] [i_4]);
                            var_39 |= (arr_11 [i_1] [i_1]);
                        }
                        var_40 = (((arr_17 [i_5] [12] [1]) ? (arr_17 [i_1] [i_1] [i_1]) : (arr_14 [i_1] [i_4])));
                    }
                }
            }
        }
        for (int i_9 = 1; i_9 < 17;i_9 += 1)
        {
            var_41 = (arr_2 [i_9]);
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 18;i_12 += 1)
                    {
                        {
                            var_42 = (min(var_42, (790163346 || 249500067)));
                            var_43 = (max(var_43, ((((arr_24 [i_1] [i_1] [i_1]) * (arr_6 [i_12 - 1] [i_11] [i_9]))))));
                        }
                    }
                }
            }
            var_44 = 790163345;
        }
    }

    for (int i_13 = 0; i_13 < 25;i_13 += 1) /* same iter space */
    {
        var_45 += (min((((~(arr_37 [i_13] [i_13])))), ((1298990769 ? 68 : 3961563584))));

        for (int i_14 = 0; i_14 < 25;i_14 += 1)
        {
            var_46 = (~(arr_37 [8] [i_14]));

            for (int i_15 = 1; i_15 < 24;i_15 += 1)
            {

                for (int i_16 = 2; i_16 < 24;i_16 += 1)
                {
                    var_47 = (arr_35 [i_15]);
                    var_48 = arr_38 [i_14] [i_14] [i_14];
                    var_49 = ((((((arr_43 [i_14] [i_16 - 2] [i_16] [3]) ? (arr_43 [i_14] [i_16 - 2] [i_16] [16]) : (arr_43 [i_14] [i_16 - 1] [i_16] [i_14])))) ? (((arr_43 [i_14] [i_16 + 1] [i_16] [i_16 + 1]) ? (arr_43 [i_14] [i_16 - 1] [i_16 - 1] [i_14]) : (arr_43 [i_14] [i_16 - 2] [i_14] [i_16]))) : -790163345));
                }
                var_50 = min((arr_35 [i_15 + 1]), (arr_36 [i_13]));
            }
        }
        var_51 = (max(64, 1515691842));
        var_52 |= ((max((min((arr_36 [i_13]), (arr_43 [i_13] [i_13] [i_13] [i_13]))), (((arr_43 [i_13] [i_13] [i_13] [i_13]) ? (arr_34 [i_13]) : (arr_43 [i_13] [i_13] [i_13] [i_13]))))));
    }
    /* vectorizable */
    for (int i_17 = 0; i_17 < 25;i_17 += 1) /* same iter space */
    {
        var_53 = arr_44 [i_17];
        var_54 = ((!(arr_36 [i_17])));
        var_55 = (arr_43 [i_17] [i_17] [i_17] [i_17]);
        var_56 = (!-249500045);
        var_57 = 4702339506780274425;
    }
    for (int i_18 = 0; i_18 < 25;i_18 += 1) /* same iter space */
    {
        var_58 = (((((((arr_47 [23]) == 14503986406314419155)))) == (arr_36 [i_18])));
        var_59 = (min(249500066, 13744404566929277191));
    }
    for (int i_19 = 0; i_19 < 25;i_19 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_20 = 0; i_20 < 25;i_20 += 1)
        {
            for (int i_21 = 1; i_21 < 24;i_21 += 1)
            {
                {
                    var_60 = min(((-(arr_37 [i_21 + 1] [20]))), ((((244 != -339626360) < (arr_35 [i_19])))));
                    var_61 = (min((((arr_34 [i_19]) ? (arr_36 [i_19]) : (arr_53 [6] [i_20] [6]))), -1506466871));
                }
            }
        }
        var_62 = ((-746619742 ? (arr_51 [i_19] [i_19] [i_19]) : (arr_51 [i_19] [i_19] [i_19])));
    }
    #pragma endscop
}

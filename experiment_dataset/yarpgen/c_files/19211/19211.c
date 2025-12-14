/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        arr_2 [i_0 - 2] = (arr_0 [i_0] [i_0]);
        var_18 = (max(var_18, 202));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 12;i_2 += 1)
        {
            {
                var_19 = ((((32 ? (arr_7 [i_2 - 2] [i_2 + 1]) : var_7)) <= ((~(arr_7 [i_2 - 1] [i_2 - 3])))));
                var_20 = (max((arr_7 [7] [7]), (~0)));

                /* vectorizable */
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {

                    for (int i_4 = 1; i_4 < 11;i_4 += 1) /* same iter space */
                    {
                        var_21 -= (arr_4 [i_3]);

                        for (int i_5 = 2; i_5 < 11;i_5 += 1) /* same iter space */
                        {
                            var_22 = ((~(arr_12 [i_1] [i_1] [i_2] [i_3 + 1] [i_4] [i_4] [i_4])));
                            var_23 = (max(var_23, (~var_17)));
                            var_24 = -3;
                            var_25 += (arr_12 [i_5] [11] [i_3 + 1] [1] [i_5 + 2] [5] [3]);
                            arr_15 [i_1] [i_2] = ((~(~var_3)));
                        }
                        for (int i_6 = 2; i_6 < 11;i_6 += 1) /* same iter space */
                        {
                            arr_19 [i_2] [i_2 + 1] [i_2] [i_4] [i_2] = (arr_9 [i_3] [i_3] [i_3]);
                            var_26 = (min(var_26, ((((arr_14 [i_4] [i_4] [i_3] [i_4] [i_6 + 1] [i_6 + 2] [i_2]) ? var_15 : (~53))))));
                            var_27 = 4294967295;
                            var_28 = (arr_18 [i_1] [i_2 - 1] [i_3 + 1] [i_4 + 2] [i_6 - 2]);
                        }
                        var_29 = (((((arr_17 [i_1] [i_2] [i_2] [i_2] [i_3] [i_4] [i_1]) ? 4754227027839809834 : var_5))) ? (((35 ? var_5 : 37402))) : ((~(arr_6 [i_1] [i_1] [i_2]))));
                    }
                    for (int i_7 = 1; i_7 < 11;i_7 += 1) /* same iter space */
                    {
                        arr_24 [i_2] [1] [1] [i_7 + 1] = (~5381759100501008191);
                        var_30 = (((arr_5 [i_1] [i_2 - 3]) | 7209));
                        var_31 = (37402 && var_7);
                        var_32 = ((~((var_0 ? 163 : var_8))));
                    }
                    for (int i_8 = 1; i_8 < 11;i_8 += 1) /* same iter space */
                    {
                        var_33 = (arr_17 [i_1] [1] [i_1] [i_1] [i_1] [i_1] [1]);
                        arr_27 [i_3] [i_2] [0] [i_3] [i_2] = (((73 <= 269547257) ? 178 : (42 / 28119)));
                        var_34 = (((arr_17 [i_8 + 2] [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_8] [1] [i_8 + 1]) | var_12));
                    }
                    for (int i_9 = 1; i_9 < 11;i_9 += 1) /* same iter space */
                    {
                        arr_30 [i_2] [i_2] = (arr_25 [i_1] [2] [i_2] [i_9] [i_9]);
                        var_35 -= (~1938528246);
                        var_36 -= (((arr_14 [i_9] [i_9] [7] [i_9] [1] [i_9 - 1] [i_9]) ? (arr_3 [i_3 + 1]) : (~var_4)));
                        arr_31 [i_1] [10] [i_2] = 876524266;
                        arr_32 [i_1] [i_2] [i_1] [i_1] = ((((((arr_25 [9] [i_2 - 2] [i_2] [i_2 - 3] [i_2 + 1]) / var_9))) ? var_15 : -51));
                    }
                    var_37 = (arr_20 [i_1] [i_2]);
                    arr_33 [i_3] [i_2] [i_2] = ((2356439080 >= (var_10 <= var_2)));
                }

                /* vectorizable */
                for (int i_10 = 1; i_10 < 11;i_10 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 12;i_11 += 1)
                    {
                        for (int i_12 = 4; i_12 < 11;i_12 += 1)
                        {
                            {
                                var_38 -= 0;
                                var_39 = (~var_17);
                                var_40 = -0;
                                var_41 += ((var_9 >> (((arr_6 [i_1] [i_1] [10]) - 1500567036))));
                            }
                        }
                    }
                    arr_41 [i_1] [i_2] [i_1] = (((~var_10) / ((94 ? var_10 : var_3))));
                    var_42 = ((~(~-176051512)));
                    var_43 -= ((~(((var_17 + 2147483647) >> var_16))));
                }
                /* vectorizable */
                for (int i_13 = 1; i_13 < 11;i_13 += 1) /* same iter space */
                {
                    arr_44 [i_2] [6] = ((-1 - ((13820986790896234250 ? var_12 : (arr_29 [i_1] [i_1] [i_1] [i_13] [i_13])))));
                    var_44 = 2356439049;
                    var_45 = ((13632977705901261752 ? 2528053832663172777 : 2356439025));
                    var_46 = (max(var_46, ((((arr_5 [i_2 - 1] [i_2 - 1]) + 15918690241046378839)))));
                }
                for (int i_14 = 1; i_14 < 11;i_14 += 1) /* same iter space */
                {

                    for (int i_15 = 1; i_15 < 1;i_15 += 1)
                    {
                        var_47 += max((arr_20 [i_1] [4]), (((((-1425992100 ? var_6 : -549975359457714310))) ? (((arr_21 [i_1] [i_1]) / (arr_16 [i_14] [i_14]))) : -1463430092)));
                        var_48 = var_4;

                        /* vectorizable */
                        for (int i_16 = 1; i_16 < 11;i_16 += 1) /* same iter space */
                        {
                            arr_51 [i_1] [i_2 - 2] [i_2] [i_15 - 1] [i_16] [12] = var_10;
                            var_49 = (min(var_49, ((((arr_22 [i_16] [i_16 - 1] [6] [i_16] [i_16 - 1] [i_15 - 1]) ? (arr_9 [i_16 - 1] [12] [i_16 - 1]) : (~154))))));
                            var_50 = (min(var_50, (arr_37 [i_1] [i_2] [12] [6] [i_16 + 1] [i_14])));
                            var_51 = (~1);
                        }
                        /* vectorizable */
                        for (int i_17 = 1; i_17 < 11;i_17 += 1) /* same iter space */
                        {
                            var_52 = ((-674755109 ? 6730 : -7715148889119947220));
                            var_53 = (~94);
                        }
                        arr_54 [i_14] [i_2] [i_14] [i_14] = ((~(((arr_52 [i_2 - 1] [i_2 - 1] [i_14 + 1] [i_15 - 1] [i_15 - 1] [i_15 - 1] [i_15]) ? var_6 : (arr_52 [i_2 - 1] [i_2 - 1] [i_14 + 2] [i_15 - 1] [5] [i_15 - 1] [5])))));
                    }
                    var_54 = (max((~var_0), var_9));
                    var_55 = (~1938528246);
                }
                var_56 = (min(var_56, 106));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_18 = 1; i_18 < 1;i_18 += 1)
    {
        for (int i_19 = 2; i_19 < 11;i_19 += 1)
        {
            {
                var_57 = (min(var_57, (arr_35 [11] [i_19 - 2])));
                var_58 += (((arr_42 [12]) <= ((max((arr_45 [i_18] [i_19 - 2] [i_18 - 1]), (arr_45 [i_18] [i_19] [i_18 - 1]))))));
                var_59 = (min(var_59, (((var_5 ? (min((~1126304331), var_10)) : ((((min(var_14, -1677416545981125134))) ? (~var_12) : (((arr_46 [i_18] [i_19] [i_18] [i_19 + 2]) ? -1 : (arr_4 [i_18]))))))))));
            }
        }
    }
    var_60 = ((~((var_17 + (var_0 == 1083047743)))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 14;i_2 += 1)
            {
                {
                    var_10 = (min(4294967295, (((((var_2 ? (arr_2 [i_2 - 3] [i_0] [i_0]) : var_7))) ? (arr_1 [i_0]) : (arr_4 [i_0] [i_1 - 1] [i_1 - 1])))));
                    var_11 = ((-(min((~192), 63))));
                    var_12 = (-((((-(arr_2 [i_0 + 1] [i_1 + 2] [i_2 - 1]))) ^ ((min(var_3, var_0))))));
                }
            }
        }

        for (int i_3 = 2; i_3 < 13;i_3 += 1)
        {
            var_13 = (min(var_13, (((!(arr_2 [i_0 - 1] [2] [i_0 - 1]))))));
            /* LoopNest 2 */
            for (int i_4 = 2; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    {
                        var_14 = ((((max((arr_10 [i_0] [i_4 - 1] [i_4 - 1] [i_4 - 2]), ((((arr_7 [i_0]) <= (arr_8 [i_0] [i_3] [i_4 - 1] [i_5]))))))) ? (((arr_2 [i_0 + 1] [i_3 + 2] [i_4 - 2]) ? (arr_0 [i_0] [i_0]) : (arr_7 [i_0]))) : ((-(((arr_11 [i_5] [i_5] [12] [12] [12]) << (var_3 - 21541)))))));

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_15 = (max(var_15, var_8));
                            var_16 |= (arr_0 [i_0] [0]);
                        }
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            var_17 = (((arr_5 [i_0 - 1] [i_3 + 1] [i_4]) ? (((!(arr_5 [i_0 - 1] [i_3 - 2] [i_5])))) : ((min(var_2, (arr_5 [i_0 - 1] [i_3 - 1] [i_3 - 1]))))));
                            var_18 ^= (~(min((arr_4 [i_0 - 1] [i_3 - 2] [1]), (((-(arr_11 [i_7] [i_7] [i_7] [i_5] [i_7])))))));
                            var_19 = var_8;
                            var_20 = var_4;
                        }
                        arr_22 [i_0] = ((((((arr_0 [i_0] [i_0]) <= var_2)) ? (arr_5 [i_0 + 1] [i_3 - 2] [i_0 + 1]) : (arr_12 [i_0] [i_0] [i_4 - 2] [i_0] [i_0] [i_0]))));
                        var_21 = (!var_2);
                    }
                }
            }

            /* vectorizable */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {

                for (int i_9 = 2; i_9 < 14;i_9 += 1) /* same iter space */
                {

                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        var_22 -= (99 == 17585407362421583115);
                        var_23 = (min(var_23, ((((arr_16 [i_3 - 1] [i_3] [i_8] [i_9 - 1]) ? (arr_16 [i_0] [i_3 + 1] [i_3 + 1] [i_3 + 1]) : (arr_16 [i_0 - 1] [i_3 - 1] [i_8] [i_10]))))));
                        var_24 = (min(var_24, (arr_20 [i_9 + 1] [i_3 + 1] [i_0 - 1] [i_0 - 1] [i_0])));
                    }
                    var_25 = (max(var_25, (arr_5 [i_0 + 1] [i_3 + 2] [i_9 - 2])));
                    var_26 = (4294967295 ? 0 : 17585407362421583115);

                    for (int i_11 = 4; i_11 < 11;i_11 += 1)
                    {
                        var_27 = (((arr_9 [i_0 + 1] [i_0 - 1] [i_3 - 1] [i_11 + 1]) | var_5));
                        var_28 = (max(var_28, ((var_8 ? (arr_6 [i_8] [i_0 + 1]) : (arr_6 [5] [i_0 + 1])))));
                        arr_33 [i_0] [i_0 + 1] [13] [i_0] [i_9 - 1] [i_11 - 2] = ((-(arr_13 [i_11 - 1] [i_9 + 1])));
                    }
                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        var_29 = (((~(arr_30 [i_0] [i_0] [i_8] [i_9 - 1] [i_12]))));
                        var_30 = (arr_27 [i_0 + 1] [i_0] [i_0 + 1] [i_9] [i_0 + 1] [i_0] [i_0 - 1]);
                    }
                    for (int i_13 = 0; i_13 < 15;i_13 += 1)
                    {
                        var_31 = ((!(arr_16 [i_3 - 2] [i_3 - 1] [i_0 - 1] [i_9])));
                        var_32 = var_7;
                        var_33 = ((!(arr_19 [i_0] [i_3 + 2])));
                    }
                }
                for (int i_14 = 2; i_14 < 14;i_14 += 1) /* same iter space */
                {
                    var_34 = ((((arr_1 [i_0]) <= (arr_6 [i_14] [i_3 + 1]))));

                    for (int i_15 = 0; i_15 < 15;i_15 += 1) /* same iter space */
                    {
                        var_35 = (arr_8 [i_0] [i_3 - 1] [i_8] [i_15]);
                        arr_44 [i_0] [i_0] [i_8] [i_8] = ((var_6 ? ((var_7 ? var_1 : (arr_28 [i_0] [9] [9] [i_0] [i_0]))) : var_5));
                        var_36 *= ((-(arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1])));
                    }
                    for (int i_16 = 0; i_16 < 15;i_16 += 1) /* same iter space */
                    {
                        arr_47 [i_0] [i_3] [i_3 - 2] [i_3] [i_8] [i_3] [i_16] = (((arr_42 [i_0]) == (arr_15 [i_0] [i_3] [i_0] [i_3] [i_0])));
                        var_37 = (max(var_37, var_0));
                    }
                }
                for (int i_17 = 2; i_17 < 14;i_17 += 1) /* same iter space */
                {
                    var_38 = ((~(arr_5 [i_0 - 1] [i_0 + 1] [i_17 + 1])));
                    var_39 = (((arr_19 [i_0] [i_0]) ? (((var_6 == (arr_5 [i_0 + 1] [i_3] [i_17])))) : (arr_3 [3] [i_0 + 1] [i_0 + 1])));
                    arr_50 [i_0] [i_0] = (var_4 - var_1);
                    var_40 = (((arr_43 [i_0 - 1]) ? (arr_43 [i_0 - 1]) : (arr_43 [i_0 + 1])));
                }
                var_41 = (((!(arr_8 [i_0] [i_3 - 2] [i_8] [i_8]))) ? ((((var_9 < (arr_26 [i_0] [i_3 + 1] [i_8] [i_0]))))) : (arr_9 [i_0] [i_3 + 2] [i_8] [i_0]));
            }
            /* vectorizable */
            for (int i_18 = 1; i_18 < 14;i_18 += 1)
            {
                var_42 = (arr_42 [i_0]);
                arr_54 [i_0] [i_0] [i_0] [i_18 + 1] = ((-(arr_10 [i_0] [i_0] [i_0] [i_0])));
                var_43 = ((-(arr_40 [i_3 + 2] [i_0 - 1] [i_18] [i_0] [i_0 - 1])));
            }
            var_44 = (min(var_44, (!-var_6)));
        }
        for (int i_19 = 0; i_19 < 15;i_19 += 1) /* same iter space */
        {
            var_45 = (max(var_45, (arr_56 [i_19] [i_19] [i_19])));

            for (int i_20 = 3; i_20 < 13;i_20 += 1)
            {
                var_46 -= ((!(((arr_14 [i_0 + 1] [i_0 + 1] [i_19] [i_19] [i_20 + 1] [i_20] [i_20 - 1]) > var_0))));
                /* LoopNest 2 */
                for (int i_21 = 0; i_21 < 15;i_21 += 1)
                {
                    for (int i_22 = 1; i_22 < 1;i_22 += 1)
                    {
                        {
                            arr_67 [i_0] [i_0] = 15;
                            arr_68 [i_0] [i_20] [i_22 - 1] = var_1;
                            var_47 = ((-(((arr_31 [i_22] [i_21] [i_20 - 3] [i_19] [i_0]) ? var_0 : (((!(arr_66 [i_0 - 1] [i_19]))))))));
                        }
                    }
                }
                var_48 -= (((~(arr_38 [i_20] [i_20] [i_20 - 1] [i_20 - 1] [i_20 - 2]))));
            }
            /* vectorizable */
            for (int i_23 = 0; i_23 < 15;i_23 += 1)
            {
                var_49 = (max(var_49, var_3));
                var_50 = (((arr_11 [i_0] [i_0 + 1] [i_0 - 1] [i_0] [i_0]) < var_2));
            }
            for (int i_24 = 0; i_24 < 15;i_24 += 1)
            {

                for (int i_25 = 0; i_25 < 15;i_25 += 1)
                {
                    var_51 = (min(var_51, ((((arr_55 [i_0 - 1] [i_0 - 1] [i_24]) || ((((arr_55 [i_0 + 1] [i_19] [7]) / var_5))))))));
                    var_52 = var_5;
                }
                for (int i_26 = 2; i_26 < 12;i_26 += 1)
                {
                    var_53 = (arr_28 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_24] [i_26 + 3]);
                    var_54 -= var_0;
                }
                for (int i_27 = 0; i_27 < 15;i_27 += 1)
                {
                    var_55 *= (!1);
                    var_56 = (min((arr_12 [i_0 - 1] [i_24] [4] [14] [i_24] [i_24]), (((!((var_2 <= (arr_30 [i_0] [13] [i_19] [i_19] [13]))))))));
                }
                var_57 = (min(((((((var_9 && (arr_79 [i_0] [i_0] [i_0] [i_19] [i_24])))) <= -var_3))), (((arr_1 [i_0]) ? var_4 : (156 ^ -787067717)))));
                var_58 = ((~(min((((13 ? 0 : 43633))), 861336711287968501))));
            }
        }
        for (int i_28 = 0; i_28 < 15;i_28 += 1) /* same iter space */
        {
            var_59 = (max(var_59, (((-(((arr_30 [i_0] [i_0] [i_0 - 1] [i_28] [i_0 - 1]) + (arr_30 [i_0 - 1] [i_28] [i_0 - 1] [i_0 - 1] [i_0 - 1]))))))));
            var_60 = (min(var_60, ((((+((var_5 ? (arr_73 [i_0] [i_0 + 1] [i_0] [i_0] [i_28]) : var_7))))))));
        }
        var_61 ^= var_9;

        for (int i_29 = 1; i_29 < 14;i_29 += 1)
        {
            var_62 = (min((max((arr_75 [i_29] [i_0 + 1] [i_29] [i_29]), (arr_2 [i_0] [i_0 + 1] [i_29 - 1]))), ((((min((arr_27 [i_0 + 1] [i_29] [i_29] [i_29] [i_0 - 1] [i_0 - 1] [i_0]), var_4)) >= (arr_0 [i_0 + 1] [i_0]))))));
            arr_87 [i_0] = ((max(1, 0)));
            var_63 = 1651746051;
        }
    }
    var_64 *= var_9;
    /* LoopNest 2 */
    for (int i_30 = 3; i_30 < 14;i_30 += 1)
    {
        for (int i_31 = 0; i_31 < 15;i_31 += 1)
        {
            {
                var_65 = ((~((-(arr_40 [i_30] [i_30 - 1] [i_30] [i_31] [i_30])))));
                arr_92 [11] = ((!((!(~var_9)))));
                var_66 = -var_0;
                var_67 = ((!((var_5 == (arr_29 [i_30 - 3] [i_30 - 2] [i_30 - 3] [i_30 - 3] [i_30 - 2] [i_30])))));
            }
        }
    }
    var_68 += ((-(var_6 == var_6)));
    #pragma endscop
}

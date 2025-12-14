/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_20 -= ((((arr_4 [i_0]) - (((var_5 ? var_5 : var_5))))));
            arr_6 [i_0] [i_0] [i_0] = (min(((1674537951511578609 ? 14629279333362000 : (47 || 1))), ((((((2987516247 ? 9 : 53))) && 249)))));
            arr_7 [i_0] [i_0] = -1;
            arr_8 [i_0] [i_0] = var_7;
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            arr_12 [i_0] [i_0] = (((((var_6 ? 1 : (arr_10 [i_0] [i_2])))) ? 134217727 : var_6));
            arr_13 [i_0] = arr_1 [i_2] [i_0];
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            var_21 += (((arr_1 [i_5] [i_4]) | (arr_22 [i_5] [i_3] [i_3] [i_2] [i_0])));
                            var_22 = (var_14 - var_18);
                            arr_23 [i_0] [i_5] [i_0] [i_2] [i_5] [i_5] [i_5] = (-19 >= 9354057380055082721);
                            var_23 = (((arr_17 [i_0] [i_3] [i_3] [0]) ? ((~(arr_1 [i_0] [i_5]))) : 1));
                        }
                    }
                }
            }
            var_24 = (((arr_17 [i_0] [i_2] [i_0] [i_0]) || (arr_5 [i_2] [i_0])));

            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                var_25 = (max(var_25, var_4));
                var_26 = 245;
                arr_28 [i_0] = -var_14;
                var_27 = 218;
            }
        }
        for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
        {

            for (int i_8 = 0; i_8 < 0;i_8 += 1)
            {
                arr_33 [i_0] [i_7] [i_8] = (min((max(2, (arr_5 [i_8 + 1] [i_8 + 1]))), ((250 ? -23 : 1))));
                var_28 = ((+((max((arr_20 [i_8] [i_8 + 1] [i_8 + 1] [i_7]), var_16)))));
                var_29 = (min(-3, 4294967295));
            }

            /* vectorizable */
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                var_30 = ((4 ? -134217715 : -30));
                var_31 = (min(var_31, 16));
                arr_38 [i_7] [i_7] [i_0] [i_7] = (arr_0 [i_7] [i_9]);
            }
            for (int i_10 = 1; i_10 < 1;i_10 += 1)
            {
                arr_41 [i_0] [i_0] [i_0] = (((max(4, (arr_20 [i_10] [i_10 - 1] [i_10] [i_10]))) - (((arr_16 [i_0] [i_10 - 1] [i_10]) + -15))));
                var_32 = (arr_36 [i_0] [i_0] [i_10 - 1]);
                arr_42 [i_10] [i_7] [i_7] [i_0] = (((((min(1612877924034683296, var_15))) && 1)));

                for (int i_11 = 0; i_11 < 23;i_11 += 1) /* same iter space */
                {
                    arr_45 [i_11] [i_11] [i_0] [i_11] [i_11] = (max(((254 ? (((max(var_15, (arr_25 [i_11] [i_10] [i_0] [i_0]))))) : (max((arr_24 [i_0] [i_0] [i_11]), -16)))), 9062877211158850605));
                    var_33 = (max(var_33, ((((arr_24 [i_10 - 1] [6] [i_10]) || (arr_24 [i_10 - 1] [10] [i_10 - 1]))))));
                }
                for (int i_12 = 0; i_12 < 23;i_12 += 1) /* same iter space */
                {
                    var_34 |= ((((min(var_14, 1))) ? (max(var_0, ((1 ? (arr_1 [i_12] [i_7]) : 2328251921)))) : (arr_34 [i_12] [i_10 - 1] [i_12])));
                    arr_50 [i_0] [i_12] [i_10] [1] [i_0] = 8;
                }
                for (int i_13 = 0; i_13 < 23;i_13 += 1) /* same iter space */
                {
                    var_35 &= (max((((max(1, (arr_17 [i_0] [i_7] [i_10] [i_13]))))), ((-(arr_11 [i_7] [i_7])))));
                    var_36 = (((arr_36 [i_10 - 1] [i_0] [0]) ? (((min((arr_39 [i_10 - 1] [i_10 - 1] [i_10 - 1]), (arr_18 [i_10 - 1] [i_10 - 1] [i_10] [i_10 - 1]))))) : (((arr_40 [i_10 - 1] [i_10 - 1] [i_10] [i_10 - 1]) | 4024688274))));
                }
            }
        }
        for (int i_14 = 0; i_14 < 23;i_14 += 1) /* same iter space */
        {
            var_37 = ((!(arr_11 [i_0] [i_14])));
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 23;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 23;i_16 += 1)
                {
                    {
                        arr_61 [i_16] [i_14] [i_16] [i_0] = 204;

                        /* vectorizable */
                        for (int i_17 = 0; i_17 < 23;i_17 += 1) /* same iter space */
                        {
                            var_38 = (max(var_38, ((((arr_51 [i_17] [i_16] [i_15] [i_14] [i_0]) == var_19)))));
                            var_39 &= 14977;
                        }
                        for (int i_18 = 0; i_18 < 23;i_18 += 1) /* same iter space */
                        {
                            var_40 -= var_13;
                            var_41 ^= (((arr_51 [i_18] [i_16] [i_0] [i_14] [i_0]) ? (((((1 ? -929737558 : var_15)) + ((max((arr_37 [14] [i_15] [i_18]), 253)))))) : (((arr_21 [i_18] [i_16] [i_15] [i_14] [i_0]) * var_15))));
                            var_42 = (((arr_40 [i_0] [12] [i_16] [i_16]) != (9 == 1)));
                            var_43 = (max(1, var_1));
                        }
                        /* vectorizable */
                        for (int i_19 = 0; i_19 < 23;i_19 += 1) /* same iter space */
                        {
                            arr_69 [i_0] [6] [i_0] [i_0] [i_14] [i_0] = (((arr_60 [i_0] [i_14] [i_15]) & (arr_48 [i_16] [i_16] [i_14] [i_0])));
                            arr_70 [i_0] [i_14] [i_15] [i_16] [i_0] = (((arr_4 [i_14]) && (((1477394891 ? -14 : 1966715371)))));
                            var_44 -= ((+((((arr_30 [i_14]) && var_5)))));
                        }

                        for (int i_20 = 0; i_20 < 23;i_20 += 1)
                        {
                            var_45 = (max(var_45, var_15));
                            arr_73 [i_0] [i_0] [i_15] [i_0] [i_0] = 1477394878;
                        }
                        var_46 = 36;
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_21 = 3; i_21 < 19;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 1;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 23;i_23 += 1)
                    {
                        {
                            var_47 = (arr_36 [i_22] [i_0] [i_21 - 3]);
                            var_48 = (--17873);
                        }
                    }
                }
            }
        }

        for (int i_24 = 0; i_24 < 23;i_24 += 1)
        {
            /* LoopNest 3 */
            for (int i_25 = 0; i_25 < 23;i_25 += 1)
            {
                for (int i_26 = 0; i_26 < 23;i_26 += 1)
                {
                    for (int i_27 = 0; i_27 < 1;i_27 += 1)
                    {
                        {
                            arr_91 [i_27] [i_0] [i_25] [i_0] [i_0] = (arr_63 [i_0] [i_24] [i_25] [i_26] [i_27]);
                            var_49 = (((((var_14 ? (var_0 / var_11) : (arr_22 [i_27] [i_26] [i_25] [i_24] [i_0])))) ? (max(364187301, 17901)) : (((var_12 != (arr_31 [i_0] [i_24] [i_25] [i_26]))))));
                            arr_92 [i_0] [i_0] = ((-((min(var_15, 1)))));
                            var_50 = (((arr_26 [i_0] [i_0] [i_26] [i_26]) > (((arr_26 [i_24] [i_24] [i_27] [i_26]) ? (arr_90 [i_26] [i_25]) : (arr_26 [i_24] [i_24] [3] [i_24])))));
                        }
                    }
                }
            }
            arr_93 [i_0] = (max((min((min((arr_9 [i_24] [i_0] [i_0]), var_9)), 1)), ((min((arr_86 [i_24]), (min((arr_63 [i_24] [i_24] [i_24] [i_0] [i_0]), (arr_10 [i_0] [i_0]))))))));
            var_51 = (max(var_51, (((-(arr_90 [i_24] [i_0]))))));
        }
    }
    var_52 -= ((var_19 && ((min((~var_8), (-2 <= var_10))))));
    var_53 = (min(var_53, (((var_2 ? (((((var_17 ? var_17 : var_11))) ? ((min(var_17, 1966715365))) : var_6)) : (((-123 ? (!21617) : 1))))))));
    #pragma endscop
}

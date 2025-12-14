/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            {
                var_10 ^= ((((((arr_0 [i_0] [i_1 - 3]) / (arr_3 [i_0] [i_0] [i_0])))) ? var_0 : (max((arr_2 [i_1 - 1] [i_1 - 3]), (arr_2 [i_1 - 1] [i_1])))));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_15 [i_2] [i_1 + 1] = 155;
                                var_11 = (arr_3 [i_2] [i_2] [i_2]);
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        arr_19 [i_0] [i_1 - 1] [i_2] [i_5] = (((arr_6 [i_2 - 1] [i_2] [i_2 + 2]) & ((((arr_14 [i_0] [i_1] [i_1] [i_2] [i_5]) <= var_8)))));
                        var_12 = (((((arr_13 [0] [i_1 - 3] [i_1 - 3] [i_1 - 3] [i_5]) == (arr_5 [i_2] [i_1]))) ? (arr_8 [i_0] [i_0] [i_0] [i_5]) : ((var_1 & (-32767 - 1)))));
                    }
                    for (int i_6 = 1; i_6 < 21;i_6 += 1)
                    {
                        var_13 += var_3;
                        var_14 = ((~(arr_5 [i_2 + 2] [i_1 - 4])));
                        var_15 ^= (((((var_1 ? (arr_5 [i_1] [i_6]) : 32758))) + 12947990939555753816));
                    }
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    arr_24 [i_0] [i_7] = arr_2 [i_7] [i_1];

                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {

                        for (int i_9 = 2; i_9 < 23;i_9 += 1)
                        {
                            arr_30 [i_0] [9] [i_1] [i_0] [2] [i_8] [i_9] = var_4;
                            var_16 = (max(var_16, ((((arr_21 [i_1 - 1] [i_1 - 1] [i_7] [i_9] [i_9]) == (!150))))));
                            var_17 = 134;
                            arr_31 [12] [12] [12] = (((arr_21 [i_0] [i_0] [i_0] [i_8] [i_0]) ? (((152 ? (arr_12 [i_8] [i_9]) : (arr_6 [i_0] [i_9] [i_7])))) : var_7));
                        }
                        for (int i_10 = 1; i_10 < 23;i_10 += 1)
                        {
                            var_18 = ((var_6 ? 108 : (((!(arr_8 [i_0] [i_1] [i_7] [i_8]))))));
                            var_19 = ((var_3 ? ((((arr_33 [i_0] [i_0] [i_1] [i_7] [i_8] [i_10 + 1]) > var_9))) : (~var_8)));
                            arr_34 [i_0] [i_1] [i_7] [i_8] [i_8] [i_10] [i_10 + 1] = var_6;
                            var_20 = (31 % 150);
                        }
                        for (int i_11 = 2; i_11 < 23;i_11 += 1) /* same iter space */
                        {
                            var_21 *= (((arr_1 [i_0]) + (arr_11 [i_1] [i_7] [i_8] [i_1])));
                            var_22 ^= 28;
                            var_23 *= (((31 ? 81 : 6680)) == (arr_21 [i_11 + 1] [i_11 - 2] [i_11 - 2] [i_7] [i_11 - 2]));
                            var_24 = var_7;
                        }
                        for (int i_12 = 2; i_12 < 23;i_12 += 1) /* same iter space */
                        {
                            var_25 ^= ((-(arr_12 [i_0] [i_1])));
                            var_26 = (((((arr_23 [i_12] [i_8] [i_1] [i_1]) / var_8))) ? (arr_35 [i_1 - 2]) : 152);
                        }
                        var_27 = (arr_32 [i_0] [i_0] [i_1] [i_1] [i_1] [19]);
                    }
                    for (int i_13 = 1; i_13 < 22;i_13 += 1)
                    {
                        var_28 = (arr_39 [19] [22] [23] [i_13 + 2] [i_13 + 2] [i_0] [i_1 - 3]);
                        arr_43 [i_13] [i_13] [i_7] = 98;
                        var_29 ^= -var_2;
                    }
                    for (int i_14 = 0; i_14 < 24;i_14 += 1) /* same iter space */
                    {
                        var_30 ^= (((arr_38 [i_0] [i_0] [i_7] [0]) ? 1645614845256268288 : (arr_20 [i_0] [i_1 - 3])));
                        var_31 ^= 58841;
                        var_32 *= ((~(arr_12 [i_0] [i_7])));
                    }
                    for (int i_15 = 0; i_15 < 24;i_15 += 1) /* same iter space */
                    {
                        var_33 += (arr_20 [i_0] [i_1 - 3]);
                        var_34 = ((-3068979643121480841 ? (-32767 - 1) : ((((arr_28 [i_1 - 2] [i_1] [i_1] [i_1 - 1]) == 176)))));
                        var_35 = (((arr_9 [i_15] [1] [i_1 + 1] [i_15] [i_1 + 1] [i_15]) ? (arr_9 [i_0] [i_0] [i_1 - 1] [i_15] [i_1 - 3] [i_0]) : (arr_40 [i_0] [i_1 - 3] [i_1 - 2])));
                        var_36 += (((arr_3 [i_0] [i_0] [i_1 - 4]) != (arr_3 [i_0] [i_1] [i_1 - 4])));
                        var_37 = (arr_17 [i_0] [i_1 - 4] [i_0] [i_0]);
                    }
                    var_38 = arr_47 [i_0] [i_1];
                    var_39 ^= ((+((26436 ? (arr_13 [i_0] [i_1] [i_7] [i_7] [i_7]) : var_0))));
                }
                /* vectorizable */
                for (int i_16 = 0; i_16 < 24;i_16 += 1)
                {
                    var_40 = arr_4 [i_0];
                    var_41 ^= (~-3576712272910328168);
                    arr_51 [i_0] [i_16] = (arr_13 [i_0] [i_0] [i_16] [i_16] [i_16]);
                    var_42 = (((arr_27 [i_0] [i_1 - 2] [i_16] [i_1 - 2] [i_1 - 2]) ? var_1 : (arr_14 [i_0] [i_0] [i_16] [i_0] [i_0])));
                    var_43 *= (((169 ^ 141) ? (((var_4 ? (arr_44 [i_0] [i_1] [i_16] [i_16] [i_16]) : 100))) : var_6));
                }
                for (int i_17 = 0; i_17 < 24;i_17 += 1)
                {
                    arr_54 [i_0] = 115;
                    var_44 = (((arr_37 [i_0] [i_1 - 1] [i_1 - 4] [i_1] [i_1 + 1] [i_17]) || var_4));
                }
                var_45 = (max(((~(arr_39 [i_1 - 4] [i_1] [i_1 - 1] [i_1] [i_1] [i_1] [i_1]))), (arr_53 [i_0])));
            }
        }
    }
    var_46 = (max((var_5 == var_2), ((((max(var_3, var_7))) ? var_6 : ((max(var_6, 1)))))));
    #pragma endscop
}

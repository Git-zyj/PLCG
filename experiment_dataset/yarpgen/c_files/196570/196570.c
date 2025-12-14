/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_13 = (((((-(arr_1 [i_0])))) ? ((+(((arr_0 [i_0]) | var_3)))) : (arr_0 [i_0])));
        arr_2 [7] [i_0] = 14;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_14 ^= (~var_11);
                    var_15 = (max(var_15, 15931));

                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            arr_13 [i_0] [i_0] = ((-(arr_9 [i_0] [i_1] [i_0] [i_3 - 1] [i_1] [i_4])));
                            var_16 = ((var_7 ? (arr_8 [i_3] [i_1] [i_2] [i_1] [i_1] [i_0]) : (arr_8 [i_4] [1] [i_2] [6] [i_4] [i_0])));
                            var_17 = (((var_4 || (arr_0 [i_0]))));
                            var_18 = (((arr_1 [i_0]) ? (arr_1 [i_0]) : var_4));
                        }
                        for (int i_5 = 4; i_5 < 9;i_5 += 1)
                        {
                            var_19 = ((((((((arr_3 [i_0] [i_1] [i_0]) + (arr_1 [i_0]))) + 1))) ? (((arr_9 [i_5 - 1] [8] [i_0] [i_3 + 2] [i_5] [8]) ? var_6 : var_3)) : 253));
                            arr_16 [i_1] [i_1] [i_0] [i_5] [i_0] = (((-((((arr_3 [i_0] [0] [i_0]) || var_0))))));
                        }

                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            arr_21 [i_0] [8] [i_1] [i_1] [8] [i_0] [1] = (((arr_5 [i_1] [i_2] [2]) ? ((((arr_11 [i_3 - 1] [6] [i_2] [i_1] [i_2]) * ((((!(arr_6 [i_0] [2] [6] [i_6])))))))) : ((var_1 ? var_1 : (arr_10 [i_2] [i_3 - 1] [i_3 - 1] [i_2] [i_3 + 1] [i_3 + 1])))));
                            arr_22 [i_0] [i_3] [3] [i_2] [i_1] [i_0] [i_0] = (arr_14 [i_0]);
                            arr_23 [2] [i_3] [i_0] [5] [2] = (~17123569813781031802);
                            arr_24 [i_0] = ((17123569813781031807 >> (17123569813781031807 - 17123569813781031788)));
                        }
                    }
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        arr_28 [i_0] [i_0] [1] [1] = var_3;

                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            arr_31 [i_0] [i_1] [i_1] = ((~((-(arr_10 [i_0] [i_1] [i_2] [i_2] [i_7] [i_8])))));
                            arr_32 [i_8] [i_7] [i_0] [0] [i_0] = (((arr_15 [i_0] [4] [1] [i_7] [i_7] [2]) - (((88 - 14149) + var_10))));
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            var_20 = (((arr_3 [i_0] [1] [i_0]) ? var_4 : (arr_4 [i_2] [i_7] [i_0])));
                            arr_36 [i_0] [i_1] [i_1] [i_7] [i_0] = var_11;
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            arr_40 [9] [i_0] = (arr_3 [8] [i_1] [i_0]);
                            var_21 = var_10;
                            var_22 &= (((-(arr_30 [3] [i_1] [i_1] [8]))));
                        }
                    }
                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        arr_43 [i_0] [i_1] [6] [i_11] = ((!((max((arr_35 [i_1] [i_1] [i_2] [i_11] [i_11]), (arr_35 [i_11] [i_11] [i_11] [i_11] [8]))))));
                        arr_44 [9] [i_0] [i_0] [i_0] = var_1;
                    }
                }
            }
        }
        arr_45 [4] |= var_6;
        arr_46 [i_0] = (max(var_4, ((((((arr_4 [i_0] [9] [i_0]) + (arr_15 [i_0] [2] [i_0] [i_0] [i_0] [7])))) ? var_10 : (~31)))));
    }
    for (int i_12 = 0; i_12 < 11;i_12 += 1)
    {
        var_23 = (((var_7 & (arr_47 [i_12]))));
        var_24 *= (((!var_6) << ((((arr_47 [i_12]) && (arr_48 [i_12] [i_12]))))));
    }
    var_25 = var_9;
    var_26 = var_8;

    for (int i_13 = 0; i_13 < 1;i_13 += 1)
    {
        var_27 = -1323174259928519808;
        arr_52 [i_13] = (((var_3 / (arr_49 [i_13]))));
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 19;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 19;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 19;i_16 += 1)
                {
                    {
                        arr_61 [4] [i_14] [i_15] [i_13] = (((arr_50 [i_13]) >> (-16 + 69)));
                        arr_62 [11] [i_13] = var_7;
                    }
                }
            }
        }
    }
    for (int i_17 = 1; i_17 < 14;i_17 += 1) /* same iter space */
    {
        var_28 |= ((((!(arr_58 [i_17 - 1] [i_17 - 1] [i_17 + 1] [i_17 + 1] [15] [6])))));
        arr_66 [7] [i_17] = ((-((~(arr_57 [i_17 + 1] [15] [i_17 - 1])))));
    }
    for (int i_18 = 1; i_18 < 14;i_18 += 1) /* same iter space */
    {
        var_29 = 2;
        arr_70 [9] [1] = ((!(((var_6 ? (arr_57 [i_18 + 1] [i_18 + 1] [i_18 - 1]) : (arr_50 [4]))))));
        var_30 *= (min((arr_56 [i_18]), (((arr_69 [i_18 + 1]) ? (((arr_55 [14]) + (arr_53 [i_18] [i_18 + 2] [10]))) : ((~(arr_51 [5])))))));
    }
    #pragma endscop
}

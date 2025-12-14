/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((var_4 ? var_11 : (var_12 / var_13)))) ? var_2 : (((var_10 ? (var_13 <= var_6) : var_13)))));
    var_17 = (min((((var_11 <= (!var_13)))), (((((var_12 + 9223372036854775807) << var_7)) - (var_9 % var_14)))));
    var_18 &= var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [i_2 - 1] = (((arr_4 [i_0] [i_1 + 1]) ? (arr_4 [i_1 + 1] [i_1 - 1]) : (arr_4 [i_1 + 1] [i_1 + 1])));

                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        var_19 = ((((((arr_0 [i_2]) ? var_14 : var_4))) ? (arr_1 [i_2 - 1] [i_1 - 1]) : ((var_14 ? (arr_4 [i_0] [i_3 - 2]) : var_5))));

                        for (int i_4 = 3; i_4 < 14;i_4 += 1)
                        {
                            arr_14 [i_1] [i_1] = (((arr_11 [i_0] [i_4 - 1] [12] [i_4] [i_4 - 1]) ? (arr_11 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3] [i_3 + 1]) : (arr_6 [i_3] [i_1 + 2] [i_2 - 2] [i_3])));
                            var_20 = (min(var_20, var_5));
                            var_21 &= (((arr_5 [2] [i_1] [i_2] [i_1 - 1]) == var_7));
                            var_22 = var_15;
                            arr_15 [i_0] [13] [i_0] [i_3 - 2] [i_4 - 3] = (arr_6 [3] [i_4 - 1] [1] [i_3]);
                        }
                    }
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        var_23 = ((((((arr_0 [i_5]) <= (arr_12 [i_1 + 2] [11])))) >> (((((arr_4 [i_0] [i_0]) % (arr_9 [i_0] [i_0] [2] [4] [i_0]))) + 717341564))));

                        for (int i_6 = 3; i_6 < 14;i_6 += 1)
                        {
                            var_24 = (min(var_24, (arr_9 [i_1] [i_1 - 1] [0] [i_1 + 2] [i_1])));
                            arr_23 [i_0] [i_1] [i_6] [i_2 - 2] [i_5] [i_6] [i_6] = ((var_2 ? (arr_9 [i_0] [i_1] [2] [i_2] [i_6 + 1]) : (var_4 != var_5)));
                        }
                        var_25 = ((!((((arr_9 [i_1] [i_1] [i_1 + 1] [13] [i_1]) ? var_1 : (arr_17 [i_1]))))));
                    }
                    arr_24 [i_0] [7] [i_2 - 1] [i_2] = (((arr_10 [i_0] [i_1] [i_2] [i_1 + 1] [i_2 + 1] [i_2]) ? (arr_3 [i_0] [i_1]) : (arr_3 [12] [i_1])));
                }
            }
        }
        var_26 = ((((((arr_3 [i_0] [i_0]) ? (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_17 [5])))) ? (var_15 & var_6) : -0));
        var_27 = (((arr_16 [i_0] [i_0] [i_0]) ? (arr_13 [i_0] [i_0] [2] [i_0] [2]) : (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [8])));
        var_28 = ((var_15 ? (arr_19 [i_0] [i_0] [i_0] [i_0]) : (arr_19 [i_0] [i_0] [i_0] [i_0])));
    }
    for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
    {
        arr_28 [13] = (min(((-(arr_2 [i_7]))), (arr_18 [i_7] [i_7] [i_7] [i_7])));
        arr_29 [i_7] = (((((-(arr_11 [i_7] [0] [i_7] [i_7] [i_7])))) ? (((((-(arr_19 [i_7] [i_7] [i_7] [i_7])))) ? (arr_17 [i_7]) : (arr_20 [12] [12] [i_7] [i_7] [i_7] [i_7] [i_7]))) : (((((var_8 ? var_11 : (arr_17 [i_7])))) ? (((arr_25 [i_7]) * var_7)) : ((var_10 ? (arr_25 [i_7]) : var_11))))));

        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            arr_33 [i_7] [i_7] [i_7] = var_12;
            arr_34 [i_8] |= ((((((var_5 | (arr_9 [1] [11] [11] [i_8] [i_7]))) <= ((var_0 ? (arr_1 [i_7] [i_7]) : var_3)))) ? (((arr_22 [i_8] [i_8] [i_7]) ? (arr_22 [i_7] [i_7] [i_8]) : var_6)) : (((+((((arr_31 [i_8]) && (arr_3 [i_7] [i_7])))))))));
        }
        /* vectorizable */
        for (int i_9 = 1; i_9 < 14;i_9 += 1)
        {
            arr_39 [13] [7] [i_9 - 1] &= ((var_1 <= (arr_37 [i_9 + 1])));
            /* LoopNest 2 */
            for (int i_10 = 4; i_10 < 14;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    {
                        var_29 = var_13;
                        var_30 = (min(var_30, (((var_3 - (arr_42 [i_9 + 1] [i_10 - 3] [i_10 + 1]))))));
                    }
                }
            }
            var_31 = ((((((arr_42 [i_7] [i_7] [i_7]) ? var_6 : var_14))) ? ((~(arr_11 [i_9 - 1] [4] [i_7] [i_9 + 1] [i_7]))) : (~var_4)));

            for (int i_12 = 3; i_12 < 14;i_12 += 1)
            {
                arr_47 [i_9] [i_9] &= (arr_9 [i_7] [i_9 - 1] [i_12 - 3] [i_7] [i_9]);
                var_32 = (arr_25 [10]);
                arr_48 [i_7] [i_7] [i_9] [i_12] = (((arr_19 [i_7] [i_12] [3] [i_7]) ? (arr_41 [i_12 - 3] [i_9 + 1]) : (((!(arr_5 [i_7] [i_9 - 1] [12] [i_12]))))));
            }
        }
        arr_49 [i_7] [i_7] &= ((-(((arr_11 [7] [i_7] [i_7] [i_7] [i_7]) ? (arr_11 [i_7] [i_7] [i_7] [i_7] [14]) : var_2))));
    }
    for (int i_13 = 0; i_13 < 15;i_13 += 1) /* same iter space */
    {

        for (int i_14 = 0; i_14 < 15;i_14 += 1)
        {
            arr_54 [i_13] = (((min(((var_5 ? (arr_30 [i_13]) : (arr_11 [i_13] [i_13] [i_13] [i_13] [13]))), ((((arr_17 [i_13]) ? var_3 : var_6))))) - ((((arr_8 [i_14] [i_14] [i_14] [i_14] [1] [9]) ? (arr_52 [i_14] [i_13]) : (arr_40 [2]))))));
            var_33 = (min(var_33, ((var_6 ? (((arr_20 [i_13] [i_13] [i_13] [i_14] [i_13] [i_14] [i_14]) ? var_13 : (((arr_43 [i_13] [i_13] [i_13] [i_13]) ? var_4 : var_6)))) : (arr_21 [11] [8] [i_14] [i_14] [11])))));
        }
        arr_55 [6] [i_13] = ((min((arr_10 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]), ((var_14 ? (arr_25 [i_13]) : (arr_30 [4]))))));
        var_34 = (((((arr_41 [i_13] [i_13]) ? var_10 : ((((arr_53 [i_13] [i_13]) && (arr_31 [i_13])))))) >> (((((arr_30 [i_13]) * (arr_30 [i_13]))) - 10836828072659452924))));
    }
    #pragma endscop
}

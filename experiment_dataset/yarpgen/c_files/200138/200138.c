/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_19 = ((-27442 ? var_7 : (arr_13 [i_0] [i_1] [6])));
                                arr_14 [i_0] [i_0] [i_2] = (arr_9 [i_0] [i_1]);
                                var_20 += -27442;
                            }
                        }
                    }
                    arr_15 [i_0] = (((arr_3 [i_0] [5] [i_2]) ? (arr_4 [i_0]) : ((((arr_4 [i_2]) == 1)))));
                    var_21 = -27442;
                    var_22 += (arr_5 [i_0 - 1] [i_1] [i_2]);
                    var_23 = (min(var_6, var_12));
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
    {
        arr_20 [i_5] [i_5] = (max(((((!(-9223372036854775807 - 1))))), (((((arr_7 [i_5] [i_5] [i_5] [i_5] [10]) ? var_13 : -6839397148046230700)) * var_4))));
        var_24 = (((((min(1, 1039462146759078892))) ? var_16 : (arr_9 [i_5] [i_5]))) - ((min(110, 1039462146759078892))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                {
                    var_25 = ((-(arr_3 [i_5] [i_6] [i_7])));
                    var_26 = ((((max((((0 && (arr_10 [i_6] [1] [i_7] [i_6] [i_7])))), (arr_1 [i_5])))) & ((2 / (arr_2 [i_6] [i_6] [i_7])))));
                    var_27 = 2147483647;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
    {
        var_28 += (~(2463642291 == var_4));
        var_29 = ((((27431 < (arr_27 [5]))) ? ((((244 == (arr_8 [i_8] [i_8] [i_8] [i_8]))))) : -var_15));
        var_30 = ((var_0 ? -1302461292 : (arr_6 [i_8] [i_8] [i_8] [i_8])));
        arr_29 [i_8] [i_8] = 51;
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
    {
        var_31 = -832550300;
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 12;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 11;i_11 += 1)
            {
                {
                    var_32 = (min(var_32, (-52 + 6948177503296113017)));
                    var_33 = (arr_18 [i_11 + 1]);
                    arr_39 [5] [i_10] [i_9] = ((-((((arr_27 [i_9]) || 0)))));
                    var_34 = (((13002372216606460295 > 27442) ? -127 : 3865537647));
                    var_35 = (max(var_35, ((((((arr_4 [i_9]) >= (arr_27 [i_9]))) ? ((19977 ? 6948177503296113047 : -1)) : 28)))));
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        var_36 = ((!((max(78, 2)))));
        arr_43 [i_12] = (var_18 & 16);
        var_37 *= (((arr_40 [i_12] [i_12]) << (((((arr_42 [i_12] [i_12]) ? (arr_42 [i_12] [i_12]) : (arr_41 [2]))) - 728405430))));
        var_38 = (((max((arr_41 [i_12]), (arr_42 [i_12] [i_12])))) ? (!var_2) : (arr_41 [i_12]));
        var_39 = (max(var_39, ((max((((var_7 >> (-30 + 52)))), 4050111179)))));
    }
    #pragma endscop
}

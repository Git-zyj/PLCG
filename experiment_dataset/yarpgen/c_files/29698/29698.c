/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((var_13 ? -var_7 : var_0)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_18 = (max(((+((((arr_2 [i_0] [7]) <= (arr_3 [i_1])))))), ((((arr_3 [i_1]) == var_11)))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [1] [i_0] [i_1] [i_3] [i_3] [10] &= (arr_4 [i_0] [i_0] [i_4]);
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_1] = var_3;
                            }
                        }
                    }
                    arr_13 [8] [i_1] [i_2] &= ((((((arr_5 [i_0]) ? var_12 : 7106289919918104465))) ? 5 : (534773760 >> 1)));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 8;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                arr_23 [i_1] [9] [i_5] [i_0] [i_1] = -496;
                                arr_24 [i_1] [i_1] = 1;
                                var_19 = ((~(arr_14 [i_1])));
                            }
                        }
                    }

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        arr_27 [i_1] [i_1] [i_1] [1] = var_0;
                        arr_28 [i_0] [i_1] [9] [10] [i_1] [0] = (~var_15);
                        var_20 = (arr_20 [1] [i_1] [i_1] [i_1] [5] [i_1]);
                        var_21 = (arr_1 [i_0]);
                    }
                    var_22 = (((arr_20 [i_0] [7] [i_5] [i_0] [i_0] [i_1]) ? (arr_3 [i_1]) : (arr_9 [i_5] [9] [i_0] [i_0])));
                    var_23 = ((((arr_19 [5] [i_1] [8] [i_1] [i_1]) | var_4)) != (arr_10 [1] [i_1] [2] [1]));
                    var_24 = var_14;
                }

                /* vectorizable */
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    arr_31 [i_1] [i_1] = (arr_29 [i_1]);
                    var_25 = (((arr_5 [i_9]) - ((17592186036224 ? 2313136713 : (arr_5 [i_0])))));
                }
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    var_26 = (~1981830583);
                    var_27 = 1981830588;
                    arr_36 [i_1] [i_1] [i_10] = ((((~0) & (1981830593 ^ 2313136726))) | ((min(-32557, (~255)))));
                    var_28 = (max(var_28, (((((((arr_35 [i_0] [10]) & 732413722)) & 11493402529771315853)) & (((arr_14 [i_10]) | 3475480023))))));
                }
                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {

                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        arr_41 [i_0] [i_0] [i_0] [i_1] [i_11] [i_1] = (arr_39 [i_0]);
                        var_29 = (max(var_29, var_6));
                    }
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        var_30 = (min(var_30, ((max((((((-(arr_22 [i_13])))) ? (arr_35 [i_1] [i_0]) : (arr_34 [i_0] [i_0] [3] [i_0]))), ((1 ? (((~(arr_15 [i_0] [i_11])))) : var_16)))))));
                        arr_44 [i_0] [i_0] [i_1] = (arr_18 [i_0] [i_1] [i_11] [i_13] [i_0] [i_1]);
                    }
                    for (int i_14 = 0; i_14 < 11;i_14 += 1)
                    {
                        arr_49 [8] [i_1] [2] [i_1] = (max((((1 >> (1048544 - 1048529)))), 1));
                        arr_50 [i_0] [i_0] [i_0] [i_1] = (min(((14873300982455515567 ? (arr_2 [i_0] [i_1]) : ((6940555785091187892 ? var_9 : (arr_8 [i_0] [i_0] [i_1] [i_0] [i_1] [9] [4]))))), (((~((~(arr_37 [6] [i_1] [i_11] [i_14]))))))));
                        var_31 = (arr_17 [i_0] [9] [i_11] [i_14]);
                    }
                    arr_51 [i_1] = (((((((arr_5 [i_0]) >> (((arr_2 [i_0] [i_11]) - 222)))))) || (arr_33 [i_0] [i_1] [i_1])));
                    var_32 = (arr_48 [i_0] [i_1] [i_0]);
                }
            }
        }
    }
    var_33 = (var_5 + (11493402529771315853 < var_5));
    #pragma endscop
}

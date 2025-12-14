/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_14 ^= (((!var_13) + (min(32768, (arr_0 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    var_15 = ((!((((((var_7 ? (arr_5 [i_0] [i_1 - 2] [i_1] [i_2 - 1]) : var_8))) ? (((arr_1 [i_0] [i_2]) ? (arr_3 [i_0] [4]) : -2653299751230031034)) : (arr_5 [i_2] [i_1] [i_1] [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2 - 2] [i_3] [1] = (arr_4 [9] [7] [i_2] [i_3]);
                                var_16 = (arr_10 [i_3] [i_2 - 2] [i_1 - 1] [i_0]);
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (max(2047, (((arr_2 [i_2 - 1]) ? var_7 : 0))));
                                var_17 = var_10;
                                var_18 = (min(var_18, (arr_12 [i_2] [i_1 - 2] [i_2])));
                            }
                        }
                    }
                    var_19 -= (((((arr_7 [i_1 + 1] [i_0]) ? 1 : (arr_7 [i_1 - 1] [i_2 + 2]))) * (!var_9)));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        arr_25 [i_7] [i_5] [i_7] = ((!((!(arr_2 [i_0])))));
                        var_20 = (14164 ? (arr_9 [i_0] [i_5 + 2] [i_5 - 1] [i_5 - 1]) : (arr_17 [i_5 + 2] [i_5 + 2]));
                        var_21 = arr_8 [i_0] [i_5 - 1] [i_6] [i_7];
                        var_22 = (arr_23 [i_0] [16]);
                        arr_26 [i_7] [i_5] [i_0] [i_5] [i_0] = 1;
                    }
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        var_23 ^= ((!((((arr_29 [i_5] [i_5 - 1] [i_5] [i_5 + 2]) >> (var_5 + 138))))));
                        arr_31 [i_6] [i_5 - 1] [i_6] [i_5] [0] = 2050;
                    }
                    for (int i_9 = 2; i_9 < 16;i_9 += 1)
                    {
                        var_24 |= var_13;
                        var_25 = (arr_8 [i_9 - 2] [i_9 - 1] [i_9 - 1] [i_9 - 1]);
                        var_26 ^= -23182550;
                        var_27 ^= max(53, -9250);
                    }
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        var_28 += ((!(3191726388 + 9527)));
                        arr_37 [i_0] [i_5] [i_6] [i_10] = (max((((arr_2 [i_10]) << ((((var_11 ? 2097151 : (arr_11 [i_5 - 1] [i_10]))) - 2097145)))), ((min((arr_23 [i_5 - 1] [i_5 + 2]), (arr_23 [i_5 + 2] [i_5 + 1]))))));
                    }
                    arr_38 [i_0] [i_0] [i_0] [i_5] = ((arr_4 [i_6] [i_5] [i_0] [i_0]) ? (((((((1 ? 1 : 2719))) || ((max((arr_27 [i_0] [i_5] [i_6] [i_5]), (arr_24 [i_0] [i_5 - 1] [i_5] [i_6])))))))) : (max(((-(arr_36 [i_0] [i_5] [i_6] [i_5]))), (((!(arr_18 [i_5])))))));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 16;i_12 += 1)
                        {
                            {
                                arr_46 [i_5] = (max((((arr_10 [16] [i_5 + 1] [i_11] [i_12 - 1]) ? (arr_10 [i_5 + 2] [i_5 - 1] [i_6] [i_12 + 1]) : (arr_10 [i_5] [i_5 - 1] [i_11] [i_12 + 1]))), ((-(arr_10 [8] [i_5 + 1] [i_5] [i_12 + 1])))));
                                var_29 = (max((max((((1739344753 ? 1 : (arr_21 [i_0] [i_5] [i_0] [i_5] [i_12 + 1])))), (min((arr_9 [i_0] [i_6] [9] [i_12]), -4577357436597677099)))), ((max((arr_10 [4] [i_12 + 1] [i_12 - 1] [i_12 - 1]), 15055)))));
                                arr_47 [i_0] [i_5 + 1] [i_5] [1] [i_12 - 1] = (((((-(arr_44 [3] [i_0] [i_6] [i_12 - 1] [i_12])))) || (arr_42 [i_12 + 1] [i_12 + 1] [i_12] [i_12] [i_12])));
                            }
                        }
                    }
                    arr_48 [i_0] [i_5] = var_11;
                }
            }
        }
    }

    for (int i_13 = 0; i_13 < 15;i_13 += 1)
    {
        arr_53 [i_13] = ((!(!1)));
        var_30 = (max((arr_20 [i_13]), ((((max((arr_20 [i_13]), 1))) * ((((arr_33 [i_13] [i_13] [11] [i_13] [i_13]) == var_7)))))));
    }
    for (int i_14 = 0; i_14 < 25;i_14 += 1)
    {
        arr_56 [1] [i_14] = ((((!(arr_54 [i_14])))) <= (arr_54 [i_14]));
        arr_57 [i_14] [i_14] = (((arr_54 [i_14]) ? (((!(!var_7)))) : var_5));
        arr_58 [i_14] &= (arr_54 [i_14]);
    }
    #pragma endscop
}

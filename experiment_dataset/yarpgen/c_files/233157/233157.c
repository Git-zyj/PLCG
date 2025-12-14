/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((~4036631819) > var_10));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (max(var_16, (var_6 - var_2)));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_4 [i_1] = ((arr_2 [i_1] [i_1]) ? 29 : (~127));
            var_17 = -var_11;
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
        {
            arr_7 [i_0] [i_2] [i_2] = ((!(arr_0 [i_0] [i_2])));
            var_18 = (((arr_2 [i_2] [i_2]) ? var_11 : var_1));
            arr_8 [i_0] [i_2] = 1;
            arr_9 [i_0] [i_0] [i_0] = (var_13 - var_4);
        }
        for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
        {
            var_19 = (!-122);
            var_20 = (!var_6);
            arr_12 [i_0] [i_3] [i_3] = ((arr_3 [i_3] [2] [i_3]) ^ ((var_12 ? var_8 : (arr_5 [i_0] [i_3] [i_0]))));
            var_21 = (min(var_21, ((((arr_0 [i_3] [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_3]))))));
        }
        arr_13 [i_0] [i_0] = (((((arr_5 [1] [i_0] [3]) ? var_5 : var_9)) + (arr_5 [i_0] [i_0] [i_0])));
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        var_22 = (max(((var_11 ? (arr_14 [i_4]) : var_14)), ((((3781314949 ^ var_4) && ((max(var_2, var_11))))))));
        var_23 = (min(var_23, (((!(arr_0 [i_4] [i_4]))))));

        for (int i_5 = 3; i_5 < 9;i_5 += 1)
        {
            var_24 = ((!(((-var_13 ? (var_11 & var_12) : var_5)))));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 9;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_25 = max((max(-7721624385244345710, (arr_24 [i_4] [i_5]))), ((((~2365591813) || ((max(var_1, var_13)))))));
                            var_26 = (min((~var_12), (((arr_24 [i_4] [i_5 + 3]) ? (arr_24 [i_5] [i_7 - 3]) : var_3))));
                            var_27 = var_2;
                        }
                    }
                }
            }
            var_28 = (max(var_28, ((min(((282095083 ? (min((arr_22 [i_4] [i_4] [0] [i_4]), 18446744073709551615)) : var_6)), (((-((max(var_10, var_12)))))))))));
            var_29 = (min(var_29, ((max(((((min(var_13, var_10))) || (~var_0))), (max((arr_10 [i_5 - 3]), (arr_10 [i_5 - 2]))))))));
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            var_30 -= (((arr_5 [i_4] [i_4] [i_9]) ? var_11 : (arr_5 [i_4] [i_4] [i_9])));
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        {
                            var_31 = ((-(!var_11)));
                            arr_38 [i_4] [10] [i_4] [i_11] [7] = var_7;
                            var_32 = ((~(arr_20 [i_4] [i_12] [i_10] [i_11])));
                            var_33 = (((!(arr_19 [0] [i_11] [0] [i_11]))));
                            var_34 = (((arr_10 [i_9]) + (arr_10 [i_4])));
                        }
                    }
                }
            }
        }
        for (int i_13 = 0; i_13 < 12;i_13 += 1)
        {
            var_35 = (max((((arr_27 [i_4] [i_4] [i_4]) ? (arr_31 [i_13] [i_13] [i_13] [i_13]) : (arr_27 [i_4] [i_4] [i_4]))), (((arr_27 [i_4] [6] [i_13]) ? (arr_27 [i_4] [i_13] [i_4]) : (arr_30 [i_13])))));

            for (int i_14 = 0; i_14 < 12;i_14 += 1)
            {
                var_36 |= ((min(14550026105927391300, var_9)));
                var_37 = (min(((((arr_6 [i_4] [i_13]) == (arr_18 [i_4] [i_4] [i_14])))), ((var_12 ? (arr_16 [i_4]) : (arr_6 [i_4] [10])))));
            }
            for (int i_15 = 0; i_15 < 12;i_15 += 1) /* same iter space */
            {
                var_38 = ((((((((-(arr_31 [1] [i_4] [11] [i_4])))) ? (min(251, var_11)) : -var_7))) - (min((arr_40 [i_13]), (arr_0 [i_13] [i_4])))));
                var_39 = 2261224578096913427;
            }
            for (int i_16 = 0; i_16 < 12;i_16 += 1) /* same iter space */
            {
                var_40 = ((max(((var_0 == (arr_45 [i_13] [i_13]))), (!var_7))));
                var_41 -= (((((var_5 >= (arr_42 [i_4]))))) - (((arr_42 [i_4]) ? (arr_42 [i_4]) : (arr_42 [i_4]))));
                arr_50 [9] [i_13] [9] [i_13] = (((~(((arr_17 [i_13] [i_13]) ? var_4 : (arr_32 [i_4] [i_4] [i_4] [i_4]))))));
            }
            /* LoopNest 3 */
            for (int i_17 = 0; i_17 < 12;i_17 += 1)
            {
                for (int i_18 = 1; i_18 < 11;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 12;i_19 += 1)
                    {
                        {
                            var_42 -= ((((max(4413943537650412492, (arr_32 [i_4] [i_4] [i_4] [i_4]))) + (min((arr_47 [i_13] [i_17] [i_18] [i_19]), var_14)))));
                            var_43 = ((-((var_0 ^ (arr_53 [i_17] [i_17] [i_18 + 1] [i_17])))));
                            var_44 = ((((max(667385542, (arr_14 [i_19])))) ? ((-(arr_14 [i_19]))) : var_8));
                        }
                    }
                }
            }
        }
    }
    for (int i_20 = 0; i_20 < 20;i_20 += 1)
    {
        arr_63 [i_20] [i_20] = ((((((!(((var_14 ^ (arr_60 [i_20] [i_20])))))))) <= ((-(2360119892 ^ var_4)))));
        arr_64 [i_20] [i_20] = (min((min(var_2, var_5)), (arr_61 [i_20] [i_20])));
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_2 [11] [i_0] = ((var_16 ? 16717836066994609637 : var_3));
        arr_3 [i_0] = var_6;
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            var_17 = ((30964 ? (arr_7 [i_2] [7]) : (!var_8)));
            var_18 = (max(var_18, (((105 - (arr_1 [i_1 + 2]))))));
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    {
                        var_19 = ((var_3 ? ((91 ? var_1 : (arr_13 [i_1] [i_2 + 1] [i_3] [i_4]))) : (arr_12 [i_1 + 2] [i_2 - 1] [i_3 - 1])));
                        arr_17 [i_1 + 2] [i_2] [i_2] [i_4] = (arr_10 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]);
                        var_20 = var_0;
                        var_21 = ((!151) + (((arr_10 [i_1] [i_1] [i_3 + 2] [i_4]) ? (arr_1 [i_1]) : 105)));
                    }
                }
            }
            arr_18 [i_2] = ((4294967278 ? (arr_0 [i_2] [i_1 - 1]) : var_13));
            var_22 = (arr_5 [i_1 - 1]);
        }
        for (int i_5 = 1; i_5 < 13;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 4; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        {
                            arr_29 [i_5] = (((((arr_9 [i_8] [i_7]) ? (arr_5 [i_1]) : (arr_7 [i_1] [i_5])))));
                            arr_30 [i_1] [i_1 + 1] [i_1 + 2] [i_1] [i_5] [i_1] = (min((((var_12 <= (((89 && (arr_19 [i_1] [i_1 + 1]))))))), (min((var_10 >= 167), (min(89, var_16))))));
                            var_23 = (max(var_23, (444386968 <= 52)));
                            arr_31 [i_1] [i_5] = (max((((arr_12 [i_6 - 1] [i_5] [i_6]) ? (arr_12 [i_6 - 4] [i_5] [i_5]) : 0)), (((arr_12 [i_6 - 2] [i_5] [i_6]) / (arr_12 [i_6 - 3] [i_5 + 1] [i_6])))));
                            var_24 *= (!183);
                        }
                    }
                }
            }
            var_25 = (arr_23 [0] [7] [i_5] [i_5 - 1]);
        }
        var_26 ^= 112;
    }
    for (int i_9 = 1; i_9 < 12;i_9 += 1) /* same iter space */
    {
        var_27 = (max((var_12 >= 155), (((arr_25 [i_9 + 2] [i_9 + 2] [i_9 - 1] [i_9 - 1] [8]) >= 242))));
        arr_34 [i_9] = var_13;
        var_28 -= (min((((((var_4 | (arr_22 [i_9 + 1] [i_9] [i_9 + 1])))) ? (((arr_19 [i_9] [i_9]) ? 103 : (arr_6 [7] [7] [i_9 + 2]))) : var_11)), (arr_4 [i_9 + 2])));
    }

    for (int i_10 = 0; i_10 < 22;i_10 += 1)
    {
        var_29 = (((arr_36 [i_10]) ? ((var_8 + (arr_35 [i_10]))) : (arr_36 [i_10])));

        /* vectorizable */
        for (int i_11 = 2; i_11 < 20;i_11 += 1)
        {
            var_30 = ((4239893613 ? 96 : (arr_39 [i_11 + 1] [i_11 - 2])));
            arr_40 [i_10] [11] [i_10] &= (110 && 4294967295);
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 22;i_12 += 1)
        {
            var_31 = ((var_3 ? (arr_39 [i_12] [i_12]) : (arr_39 [i_10] [i_12])));

            for (int i_13 = 1; i_13 < 19;i_13 += 1)
            {
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 22;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 22;i_15 += 1)
                    {
                        {
                            var_32 = ((~(arr_41 [i_13 + 1] [i_13])));
                            var_33 ^= (arr_37 [i_13 - 1] [i_13 + 3] [i_13 + 3]);
                            arr_51 [i_10] [i_10] = (arr_41 [i_13 - 1] [i_13 - 1]);
                        }
                    }
                }
                arr_52 [i_10] [i_10] [i_10] = -var_3;
                var_34 = (((arr_45 [i_13 + 2] [i_13 + 2] [i_13 + 1] [i_13 - 1]) ? var_6 : 89));
            }
            for (int i_16 = 0; i_16 < 22;i_16 += 1)
            {
                arr_55 [i_10] [i_10] = ((5726310682655191350 ? var_9 : var_8));

                for (int i_17 = 0; i_17 < 22;i_17 += 1)
                {
                    var_35 = ((arr_35 [i_17]) ? (arr_50 [i_17] [i_12] [i_12]) : (!3));
                    var_36 = (min(var_36, 0));
                    arr_59 [i_10] [17] [i_16] [i_17] = ((-267095233035986018 ? (arr_44 [i_10] [i_12] [i_16]) : (arr_49 [i_10] [i_12] [i_16])));
                }
                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    var_37 = var_2;
                    var_38 = ((((((arr_61 [i_10] [i_12] [i_16] [i_16] [17]) / -22))) ? 65510 : ((-1938372626 / (arr_37 [i_18] [i_12] [i_10])))));
                }
                var_39 = var_3;
                var_40 = (min(var_40, (((var_6 >= (arr_38 [i_10] [i_12] [i_16]))))));
            }
        }
        for (int i_19 = 4; i_19 < 21;i_19 += 1)
        {
            var_41 *= (((((arr_56 [i_19 - 3] [i_19] [i_10] [i_10]) ? (arr_37 [i_19 - 3] [i_19 - 1] [i_19 - 2]) : 147)) + ((min((arr_61 [i_10] [i_10] [i_10] [i_10] [i_19 - 1]), 126)))));
            var_42 = (min((((~(arr_64 [i_10] [i_10] [i_19 - 2])))), (max(1064712953852775519, (arr_56 [i_19 - 1] [i_19 - 1] [i_19 - 3] [i_19 - 3])))));
        }
    }
    for (int i_20 = 0; i_20 < 1;i_20 += 1)
    {
        /* LoopNest 2 */
        for (int i_21 = 0; i_21 < 10;i_21 += 1)
        {
            for (int i_22 = 0; i_22 < 10;i_22 += 1)
            {
                {
                    arr_71 [i_20] = ((((max(955282562, (arr_13 [i_20] [i_20] [i_20] [i_20])))) ? ((((arr_13 [i_20] [i_21] [i_21] [i_22]) * (arr_7 [i_21] [i_21])))) : (((arr_61 [6] [i_20] [6] [i_20] [i_20]) ? (arr_61 [i_20] [i_21] [i_20] [i_21] [i_21]) : 1765673484203058865))));
                    var_43 = (((((arr_48 [i_20] [19] [i_22] [i_22]) || (arr_27 [i_20] [i_20] [i_22] [i_22]))) ? (arr_1 [i_20]) : var_1));
                    var_44 = ((!(((~(~19103))))));
                }
            }
        }
        var_45 = ((max(649088943, 23)));
        arr_72 [i_20] [i_20] = ((-(arr_60 [i_20] [i_20])));
    }
    /* vectorizable */
    for (int i_23 = 0; i_23 < 21;i_23 += 1)
    {
        var_46 = var_6;
        arr_75 [i_23] = (((((var_14 ? var_9 : 166))) ? (var_16 / var_3) : (arr_53 [i_23] [i_23] [i_23] [i_23])));
    }
    #pragma endscop
}

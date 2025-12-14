/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 11;i_3 += 1)
                {
                    {
                        var_14 -= ((((var_10 ? 30483 : (arr_12 [i_3 - 1] [i_3] [3] [i_1] [i_0]))) ^ (arr_4 [i_0 - 1] [9] [i_0])));
                        arr_13 [i_0] [6] [i_2] [i_3 - 1] = (((arr_1 [i_0 + 1]) & (arr_1 [i_0 - 1])));
                    }
                }
            }
        }
        var_15 = 30483;
        var_16 = (arr_6 [i_0 + 1] [i_0] [i_0 - 1]);
        var_17 += (((!-25312) ? (arr_9 [i_0] [i_0 + 1] [i_0] [i_0]) : (arr_6 [i_0] [i_0] [8])));

        for (int i_4 = 1; i_4 < 12;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                arr_19 [i_5] [8] [i_5] |= ((var_2 ? (arr_18 [i_0 - 1] [i_0 - 1]) : (arr_18 [i_0 - 1] [i_0 - 1])));
                var_18 = (-(arr_18 [i_4 + 2] [i_0 + 1]));
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        {
                            var_19 = (arr_23 [i_4 + 2] [i_4 + 2] [i_4 - 1] [i_4 + 2] [i_4 + 1]);
                            arr_25 [i_5] [i_5] [i_5] [i_0] [10] [i_0] [i_5] = arr_0 [i_0] [i_4];
                        }
                    }
                }
                arr_26 [i_0] [i_4 - 1] [i_5] [i_4 - 1] = ((var_4 ? ((((!(arr_15 [i_0 + 1] [i_4 + 1]))))) : -var_1));
            }
            /* LoopNest 2 */
            for (int i_8 = 3; i_8 < 11;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    {
                        var_20 -= (arr_29 [i_0] [11]);
                        var_21 = (((arr_21 [i_4 + 1] [i_0 + 1]) ? var_9 : (arr_21 [i_4 - 1] [i_0 - 1])));
                        var_22 = ((1362575710733157654 ? (arr_14 [i_0]) : (arr_3 [i_0] [9] [i_0])));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {
                    {
                        arr_39 [i_4 - 1] [i_0] [i_4 - 1] = (arr_35 [i_0] [i_4] [i_0] [2] [i_4] [i_11]);
                        arr_40 [i_0] [i_0] [i_10] [i_0] [i_4 - 1] [i_11] = 2147483645;
                        arr_41 [i_0] [i_0] [i_10] [i_11] = var_5;
                    }
                }
            }
        }
        for (int i_12 = 1; i_12 < 13;i_12 += 1)
        {

            for (int i_13 = 0; i_13 < 14;i_13 += 1) /* same iter space */
            {
                var_23 = (((arr_42 [i_13] [i_12] [i_12]) ? (arr_24 [i_0] [i_12] [i_13] [i_12 - 1] [i_12 + 1] [i_0 + 1]) : -32762));
                var_24 = (max(var_24, (((var_1 ? (arr_17 [i_0 + 1] [i_12 - 1]) : ((~(arr_10 [i_0 + 1] [i_12 - 1] [13]))))))));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 14;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 14;i_15 += 1)
                    {
                        {
                            var_25 |= ((~(arr_38 [i_12 - 1] [i_12 + 1] [i_12 + 1] [7])));
                            arr_54 [i_0] [i_12 - 1] [i_13] [i_13] [i_0] [i_14] [i_15] = 2198956146688;
                            var_26 *= arr_24 [i_0 + 1] [i_12] [6] [i_14] [6] [i_15];
                        }
                    }
                }
            }
            for (int i_16 = 0; i_16 < 14;i_16 += 1) /* same iter space */
            {
                var_27 = ((-(arr_17 [i_12 + 1] [i_16])));
                var_28 = ((~(15360 > 13739)));
            }
            arr_57 [i_0] [i_0] = var_11;
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 14;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 14;i_18 += 1)
                {
                    {
                        var_29 = (max(var_29, (arr_12 [6] [i_12 + 1] [i_12] [i_12 + 1] [i_17])));
                        var_30 = (min(var_30, (((-(~-43))))));
                        var_31 = (((arr_36 [i_18] [i_12]) ? -32762 : (arr_36 [i_0 + 1] [i_0 - 1])));
                        arr_63 [i_0 + 1] [i_0] [i_0] [i_17] [i_18] = (arr_30 [i_0] [i_0 - 1] [i_12] [i_12 + 1]);
                        arr_64 [i_18] [i_0] [i_0] [i_0] [i_0] = ((!(arr_32 [i_0 + 1] [i_12 + 1])));
                    }
                }
            }
        }
        for (int i_19 = 3; i_19 < 12;i_19 += 1)
        {
            var_32 = ((arr_44 [i_0 - 1]) ? (arr_50 [i_0 - 1] [i_19 - 1]) : (arr_44 [i_0 - 1]));
            arr_67 [i_0] [i_19 - 2] = (!32762);
            var_33 = (min(var_33, (((var_4 >= (arr_7 [i_0 - 1] [i_0 + 1] [8]))))));
        }
    }
    for (int i_20 = 2; i_20 < 18;i_20 += 1)
    {
        var_34 = ((((max(15, -14730))) ? (((!16384) ? ((min(4034, (arr_68 [i_20] [i_20])))) : -229)) : -var_10));
        var_35 = (min(var_35, var_3));
    }
    for (int i_21 = 0; i_21 < 13;i_21 += 1)
    {
        var_36 = 32758;
        /* LoopNest 2 */
        for (int i_22 = 0; i_22 < 13;i_22 += 1)
        {
            for (int i_23 = 2; i_23 < 11;i_23 += 1)
            {
                {
                    arr_79 [i_23] [i_22] [i_21] = ((-(((arr_2 [i_23 - 2]) ? (arr_2 [i_23 + 2]) : (arr_2 [i_23 + 2])))));
                    arr_80 [i_23] [3] [i_22] [i_21] = ((739 ? ((min((arr_74 [i_23 + 2] [i_22]), (arr_43 [i_23 + 1])))) : ((-(arr_74 [i_23 + 1] [i_22])))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_24 = 0; i_24 < 13;i_24 += 1)
        {
            for (int i_25 = 1; i_25 < 12;i_25 += 1)
            {
                {
                    arr_88 [i_21] [i_24] [i_21] [i_21] = 30038271465610906;
                    /* LoopNest 2 */
                    for (int i_26 = 0; i_26 < 13;i_26 += 1)
                    {
                        for (int i_27 = 4; i_27 < 12;i_27 += 1)
                        {
                            {
                                var_37 = (min(var_37, ((max(((max((arr_50 [i_25 - 1] [i_27 - 1]), (arr_50 [i_25 + 1] [i_27 - 3])))), -2534821580413228972)))));
                                var_38 = (max(var_38, (((5 ? (((4080 ^ 95) ? ((29173 ? var_7 : var_11)) : ((-3962 ^ (arr_93 [i_27 - 4] [i_26] [i_25]))))) : ((((-3962 ? -8 : 6)))))))));
                            }
                        }
                    }
                }
            }
        }
        var_39 *= (min((arr_29 [i_21] [i_21]), ((max((arr_8 [i_21] [i_21] [i_21]), (arr_8 [i_21] [7] [i_21]))))));
    }
    #pragma endscop
}

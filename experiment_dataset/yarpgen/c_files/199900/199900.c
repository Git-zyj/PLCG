/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += (((((var_15 ? (1 <= 1) : var_9))) ? -var_0 : ((max(var_11, var_10)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_1] = (((arr_3 [1]) % (((arr_3 [i_1 - 1]) ? ((max(var_12, var_8))) : (arr_0 [i_0])))));
                    var_18 = (arr_3 [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_19 -= (min(((((var_2 ? (arr_1 [11]) : var_5)) * 1)), (((arr_4 [i_2 + 2] [i_1] [8]) ? (arr_1 [i_1 - 1]) : 1))));
                                var_20 = (min(var_20, ((((!(1 ^ var_11)))))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        var_21 = (arr_10 [i_0] [i_1] [i_1]);

                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            arr_15 [10] [i_1] [6] [i_6] &= 1;
                            arr_16 [i_0] [i_0] [1] [i_5] [i_6] = var_6;
                            var_22 += 39058;
                            arr_17 [i_5] [i_0] = arr_7 [i_0] [i_2] [13] [i_0];
                            arr_18 [i_0] [i_1] [i_1] [i_0] [i_6] = var_14;
                        }
                        for (int i_7 = 4; i_7 < 14;i_7 += 1)
                        {
                            var_23 = (min(var_23, ((((arr_7 [i_7] [2] [i_2 - 1] [i_7 + 1]) ? ((max(4776, (arr_7 [i_7] [i_2] [i_2 + 1] [i_7 + 1])))) : ((46094 >> (arr_7 [i_7] [8] [i_2 + 1] [i_7 - 4]))))))));
                            var_24 = var_12;
                            var_25 = (((1 << (-11161 + 11174))));
                        }
                        for (int i_8 = 1; i_8 < 1;i_8 += 1)
                        {
                            arr_24 [i_0] [i_0] [1] [i_2] [i_2] [0] [i_8] = ((max(375616921, 53446)));
                            arr_25 [i_0] [i_0] [11] [1] [i_0] [1] = ((arr_10 [i_8 - 1] [i_5 + 1] [i_1 - 1]) ? (arr_10 [i_8 - 1] [i_5 + 1] [i_1 - 1]) : var_6);
                            var_26 = (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [5]);
                        }
                        var_27 = var_2;
                        var_28 = (min(((((!var_4) <= ((min(9931, 1)))))), var_15));
                        var_29 = (((-32767 - 1) ? ((~(~var_3))) : (arr_11 [0] [i_0] [i_0] [i_0] [i_0])));
                    }
                    var_30 += (min(1, (((!var_8) + 1))));
                }
            }
        }
    }
    var_31 = var_12;
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 0;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        {

                            for (int i_13 = 0; i_13 < 15;i_13 += 1)
                            {
                                var_32 = (min(var_32, ((((((arr_37 [i_9] [14] [i_13]) * var_10)) | ((max((~1), 1))))))));
                                var_33 = (min(((~(arr_0 [1]))), ((12167 ? (arr_27 [i_11]) : (arr_27 [i_11])))));
                            }
                            /* vectorizable */
                            for (int i_14 = 0; i_14 < 1;i_14 += 1)
                            {
                                var_34 = 55279;
                                arr_43 [i_9] [i_9] [i_11] [i_11] [i_9] [1] [i_9] = (((14804 + 2) ? -var_3 : (arr_3 [i_9])));
                                var_35 = ((~(arr_33 [i_9 + 1] [i_10] [i_14])));
                                var_36 = (min(var_36, 1));
                            }

                            for (int i_15 = 0; i_15 < 15;i_15 += 1)
                            {
                                var_37 = ((arr_22 [4] [i_10] [4] [4] [i_15]) + (((+((min((arr_45 [i_9] [i_10] [13] [i_11] [i_10] [10] [13]), (arr_32 [1] [1]))))))));
                                var_38 = var_3;
                                arr_46 [i_11] [i_12] [i_9] [i_10] [i_11] = (18 && 1);
                                arr_47 [i_9] [i_11] [i_9] = (max(var_5, ((var_3 ? ((var_13 ? (arr_31 [2] [8] [i_15]) : var_9)) : (-32390 - var_7)))));
                            }
                            var_39 = (((((arr_28 [i_9] [i_9 + 1]) ? (arr_28 [i_9] [i_9 + 1]) : (arr_28 [i_9] [i_9 + 1])))) || (arr_28 [i_9 + 1] [i_9 + 1]));

                            /* vectorizable */
                            for (int i_16 = 0; i_16 < 15;i_16 += 1) /* same iter space */
                            {
                                var_40 = (((arr_23 [i_9] [8] [i_11] [8] [i_9] [i_9 + 1] [i_9]) ? (arr_29 [i_9 + 1] [11]) : (arr_29 [i_9 + 1] [i_10])));
                                arr_52 [i_9] [i_9] [i_11] [i_11] [i_12] [8] [i_11] = (arr_3 [i_10]);
                                arr_53 [i_16] [i_12] [i_11] [i_10] [i_16] &= ((32767 ? 0 : -3));
                                arr_54 [i_16] [6] [i_16] [i_16] [i_9] [i_9] |= (var_4 <= var_2);
                                arr_55 [i_9] [1] [i_11] [i_11] [i_9] = (arr_42 [i_9 + 1] [i_11] [i_11] [i_12] [i_11]);
                            }
                            for (int i_17 = 0; i_17 < 15;i_17 += 1) /* same iter space */
                            {
                                var_41 = ((((min((1 / 32235), (((arr_26 [0]) ? 65442 : 54931))))) ? (((((arr_1 [i_17]) * 33300)) * ((-(arr_37 [i_11] [i_9] [i_11]))))) : (((arr_27 [i_9 + 1]) * (arr_27 [i_9 + 1])))));
                                var_42 += (min((((!(arr_1 [i_9 + 1])))), ((-((((arr_3 [i_17]) && (arr_26 [i_11]))))))));
                                arr_58 [6] [i_10] [i_11] [i_11] [i_12] [i_11] = arr_42 [i_9] [i_11] [i_11] [i_12] [i_17];
                            }
                            for (int i_18 = 0; i_18 < 15;i_18 += 1) /* same iter space */
                            {
                                arr_63 [i_11] = ((var_15 + (((1 ? (arr_3 [i_9 + 1]) : ((var_4 ? var_6 : 18)))))));
                                var_43 = ((min(65535, (arr_56 [i_9 + 1] [i_9 + 1] [i_9] [i_9 + 1] [i_11]))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_19 = 0; i_19 < 15;i_19 += 1)
                {
                    for (int i_20 = 2; i_20 < 12;i_20 += 1)
                    {
                        for (int i_21 = 1; i_21 < 11;i_21 += 1)
                        {
                            {
                                arr_72 [i_20] [i_21] [i_20] [i_20] [6] [1] [i_20] = var_8;
                                var_44 = ((((!(arr_48 [i_20]))) ? (((!(var_8 + 46144)))) : var_6));
                            }
                        }
                    }
                }
                var_45 -= (min(((((min(var_14, var_9))) * 1)), var_2));
            }
        }
    }
    #pragma endscop
}

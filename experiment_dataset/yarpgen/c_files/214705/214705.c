/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((var_16 > var_5), (max(((var_7 ? 1033943741 : var_19)), ((33 ? 3261023554 : 6270))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] [i_2] [i_3] [i_0] [i_1] = var_13;
                        var_21 |= (arr_7 [i_3] [i_3] [i_3] [i_0]);

                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            var_22 ^= ((((72 ? (arr_1 [i_4 - 1]) : (arr_0 [i_4 - 1]))) | 42491));
                            arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] = ((var_15 ? (arr_13 [i_0] [i_0] [i_0] [i_0] [i_4 - 2]) : 44789));
                        }

                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            var_23 = (arr_16 [i_0] [i_0] [i_0] [15] [i_0] [i_0] [i_0]);
                            arr_18 [i_1] = var_7;
                            var_24 = var_1;
                        }
                        for (int i_6 = 3; i_6 < 19;i_6 += 1)
                        {
                            arr_21 [i_0] [i_1 + 1] [i_2] [i_0] [13] [i_6] [i_1] = (((arr_3 [i_1] [i_6 - 2]) | (!879245477)));
                            var_25 -= (arr_20 [i_0] [i_1 + 1] [i_2 + 2] [i_6 - 1] [i_0]);
                        }

                        for (int i_7 = 0; i_7 < 0;i_7 += 1) /* same iter space */
                        {
                            arr_25 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_1] [1] [i_1] = 1274580073;
                            var_26 *= ((arr_14 [i_1] [i_1 - 1] [i_1 - 1] [i_1 + 1]) ? ((var_5 ? 39903 : (arr_5 [i_1] [i_2]))) : (arr_24 [i_3] [i_0]));
                            arr_26 [i_0] [i_0] [9] [i_1] [i_0] [i_0] = ((~(arr_20 [i_0] [i_2 + 2] [i_2] [i_3] [i_3])));
                            var_27 = (i_1 % 2 == 0) ? ((((arr_4 [i_1] [i_2 - 1] [i_2 - 4]) << (((arr_4 [i_1] [i_2 + 2] [i_2 - 1]) - 114))))) : ((((((arr_4 [i_1] [i_2 - 1] [i_2 - 4]) + 2147483647)) << (((((((arr_4 [i_1] [i_2 + 2] [i_2 - 1]) - 114)) + 237)) - 21)))));
                        }
                        for (int i_8 = 0; i_8 < 0;i_8 += 1) /* same iter space */
                        {
                            var_28 = var_17;
                            arr_29 [i_0] [i_0] [i_1] = var_9;
                            var_29 &= -3261023553;
                        }
                        for (int i_9 = 4; i_9 < 19;i_9 += 1)
                        {
                            arr_33 [i_1] [i_1] [i_2] [i_0] [i_9] = ((3261023549 ? var_6 : (((arr_19 [i_1] [i_3] [i_2] [i_1] [i_1] [i_0] [i_0]) ? var_6 : var_6))));
                            var_30 -= ((var_5 ? 63 : ((-6296 ? var_2 : (arr_16 [i_0] [i_0] [17] [i_2] [i_0] [i_0] [i_0])))));
                            arr_34 [i_0] [i_3] [i_0] [i_3] [i_9 - 2] [i_1] [i_2] |= (arr_4 [i_9] [4] [i_3]);
                            var_31 = (arr_14 [i_0] [i_1 + 1] [i_2 - 4] [i_9 + 2]);
                            arr_35 [i_9] [i_1] [i_0] [i_1] [i_1] [i_0] = (((((44789 ? var_5 : 7149))) ? (arr_19 [i_2] [i_2] [i_2 - 3] [i_1] [i_2] [i_2] [i_2]) : (arr_10 [i_0] [i_0] [i_0] [i_0])));
                        }
                    }
                }
            }
            arr_36 [i_0] [i_1] [i_0] = 4294967295;
            var_32 = (max(var_32, (((((var_18 ? var_4 : var_11)) | (arr_8 [i_0] [8] [8] [8]))))));
        }
        for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
        {
            arr_40 [i_0] [i_0] = -1;
            arr_41 [i_0] [i_0] [i_10] = ((var_9 == (arr_0 [i_10])));

            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {
                arr_44 [i_0] [5] [5] [i_10] = (((~var_3) ? var_19 : (arr_0 [i_10])));
                var_33 = var_1;
            }
            for (int i_12 = 0; i_12 < 21;i_12 += 1)
            {
                var_34 = -1433810807;
                var_35 ^= ((30 >> (((arr_19 [i_0] [i_0] [i_0] [i_12] [i_10] [i_12] [i_12]) + 3256654189206814711))));
            }
            for (int i_13 = 1; i_13 < 17;i_13 += 1)
            {
                var_36 = ((var_19 ? var_8 : 4094));
                arr_50 [i_10] [i_13] = (arr_20 [i_0] [i_0] [i_10] [1] [i_13]);

                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    arr_55 [i_14] [i_0] [i_0] [i_10] [i_0] [i_0] = (arr_1 [i_13 + 4]);
                    arr_56 [i_0] [i_10] [6] [i_14] [i_14] = (arr_8 [i_14] [i_10] [i_10] [i_0]);
                    arr_57 [i_14] [i_10] [i_0] &= ((!(arr_46 [i_13 - 1] [i_13 + 1])));
                }
                for (int i_15 = 2; i_15 < 20;i_15 += 1)
                {
                    var_37 = (~var_10);
                    var_38 = -var_19;
                }
                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {
                    var_39 = ((var_0 / (((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [9]) ? (arr_10 [i_0] [i_0] [i_0] [i_0]) : (arr_51 [i_0] [i_0] [i_0])))));
                    var_40 = (arr_8 [i_0] [i_10] [i_10] [i_0]);
                    var_41 |= (((arr_46 [i_13] [i_13 + 3]) * var_15));
                    arr_64 [12] [i_10] [i_10] [i_10] |= (((arr_28 [i_10]) ? var_1 : (arr_22 [i_10] [i_0] [i_10] [i_0] [i_16])));
                }
                /* LoopNest 2 */
                for (int i_17 = 2; i_17 < 17;i_17 += 1)
                {
                    for (int i_18 = 1; i_18 < 18;i_18 += 1)
                    {
                        {
                            var_42 += var_9;
                            var_43 |= ((1984297868 ? (-2147483647 - 1) : ((67 ? (arr_48 [i_0] [i_10] [i_13] [i_18]) : var_1))));
                            var_44 |= var_6;
                        }
                    }
                }
            }
        }
        for (int i_19 = 0; i_19 < 21;i_19 += 1) /* same iter space */
        {
            var_45 = ((-var_18 / ((((arr_10 [i_0] [3] [i_0] [i_0]) / var_16)))));
            arr_72 [i_0] = 11524;
        }
        arr_73 [i_0] = (((arr_49 [i_0] [i_0] [i_0]) ? (arr_12 [i_0] [i_0] [8] [8] [i_0]) : var_5));
    }
    for (int i_20 = 3; i_20 < 12;i_20 += 1)
    {
        var_46 = (-1 ? 2526789819 : 54011);
        var_47 = (max((arr_0 [i_20 - 2]), -14));
    }
    #pragma endscop
}

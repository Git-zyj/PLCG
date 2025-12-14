/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_11 = (max((arr_0 [i_0] [i_0]), var_9));
        var_12 = (arr_2 [i_0]);
        var_13 &= ((((((((arr_0 [i_0] [i_0]) >= (arr_1 [i_0]))) ? ((~(arr_1 [i_0]))) : var_10))) * (((arr_1 [i_0]) - 8912571215465521519))));
        arr_4 [i_0] [2] = (((arr_3 [0] [i_0]) ? ((var_1 ? var_2 : (arr_3 [i_0] [i_0]))) : (arr_3 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_14 = (((var_3 ? (arr_8 [11]) : (arr_7 [i_1] [i_1]))));
        var_15 = (1 >> 1);
    }
    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        var_16 = (~1);
        arr_12 [i_2] = (min(((((((arr_10 [5]) ? var_3 : 143))) ? var_1 : 1)), ((var_6 ^ (arr_11 [i_2 - 1])))));
    }
    var_17 = var_5;
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_18 = (-((max((arr_24 [i_7 + 3]), (arr_24 [i_7 + 2])))));
                                arr_25 [1] [i_4] [i_4] [i_6] [i_4] = var_4;
                                var_19 = ((((min(((var_4 ? (arr_14 [i_5]) : 1)), (549755813887 == -24508)))) >= ((0 ? 24510 : (max(var_4, (arr_17 [i_3] [i_3] [i_4])))))));
                                var_20 = 209;
                                var_21 = (min(var_21, (((max(26, 2035667801))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                arr_30 [i_3] [4] [10] [i_4] [i_8] [16] = (arr_18 [i_8] [i_4] [i_4]);
                                var_22 = (arr_26 [i_3] [3] [i_3] [i_9]);
                                arr_31 [i_3] [i_4] [i_4] [i_5] [10] [i_9] = ((max((1 - -43), var_5)));
                                var_23 = (max(var_23, (((((arr_29 [i_3] [i_4] [i_5] [9]) > 1))))));
                                arr_32 [i_3] [i_4] [14] [i_4] [i_9] = var_10;
                            }
                        }
                    }

                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {

                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            arr_40 [i_3] [i_3] [i_4] [i_3] [i_11] = (arr_26 [i_3] [i_11] [i_5] [i_11]);
                            arr_41 [i_11] [i_4] [i_4] [i_4] = ((-27814 % 1) ? ((((arr_17 [i_4] [i_4] [i_4]) ? (arr_17 [i_3] [i_4] [i_4]) : 1))) : (arr_17 [i_4] [i_4] [i_4]));
                        }
                        arr_42 [i_4] = 23884;
                        var_24 = (((min(0, (arr_37 [14] [i_4])))));
                    }
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        arr_45 [i_4] [8] = ((var_0 && (((var_3 ^ (arr_20 [i_12]))))));
                        var_25 -= ((-((-(arr_33 [i_3] [i_4] [i_4] [i_5] [i_12] [i_3])))));

                        for (int i_13 = 1; i_13 < 16;i_13 += 1)
                        {
                            var_26 = (i_4 % 2 == 0) ? ((((arr_47 [i_5] [i_5] [i_5] [10] [i_4]) >> (((((67108863 ? 43 : -24513))) - 28))))) : ((((((arr_47 [i_5] [i_5] [i_5] [10] [i_4]) + 2147483647)) >> (((((67108863 ? 43 : -24513))) - 28)))));
                            var_27 = 67108863;
                            var_28 = (arr_23 [i_3] [1] [i_4] [i_4] [i_5] [i_12] [i_13]);
                        }

                        for (int i_14 = 2; i_14 < 19;i_14 += 1)
                        {
                            var_29 |= (((arr_43 [i_14 - 1] [10] [i_14 - 1] [i_12]) ? (((~(~129)))) : ((var_6 ? 0 : var_7))));
                            var_30 = 255;
                        }
                        for (int i_15 = 1; i_15 < 18;i_15 += 1) /* same iter space */
                        {
                            arr_55 [8] [i_4] [i_5] [i_4] [i_3] = (((var_5 ^ var_2) ? var_6 : (arr_22 [i_4] [i_15 + 2] [i_15] [10] [i_15])));
                            var_31 *= var_9;
                        }
                        for (int i_16 = 1; i_16 < 18;i_16 += 1) /* same iter space */
                        {
                            var_32 = (((arr_36 [i_5] [i_16 - 1] [i_16] [7] [i_16]) ^ (((arr_36 [i_3] [i_16 - 1] [13] [i_16] [17]) ? var_4 : var_9))));
                            var_33 = var_4;
                            arr_58 [i_3] [i_4] [i_12] [5] [i_16] [i_4] [i_12] = (((+(((arr_56 [3]) ? (arr_15 [11]) : 18446744073709551608)))));
                        }
                        /* vectorizable */
                        for (int i_17 = 0; i_17 < 1;i_17 += 1)
                        {
                            arr_61 [i_3] [i_4] [i_5] [i_5] [i_12] [15] = var_8;
                            arr_62 [i_3] [i_3] [i_3] [8] [i_3] |= var_0;
                        }
                    }
                }
            }
        }
    }
    var_34 = var_10;
    #pragma endscop
}

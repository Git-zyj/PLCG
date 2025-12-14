/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_11 [3] [3] [0] [i_2] [i_1] [i_3] = (arr_9 [i_0] [i_0] [i_3]);
                            var_19 = (((16248032886365519920 ? 51224472 : 1329)));
                            var_20 = var_7;
                            var_21 = ((((((46084 ? 18053 : 64206))) ? ((((arr_10 [i_1]) ? (arr_2 [i_3] [i_0]) : (arr_5 [i_0] [i_1] [1] [i_3])))) : 4294967295)));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    var_22 = (((((103 ? (arr_8 [i_0] [i_1] [i_4]) : (arr_8 [i_0] [i_1] [i_0])))) ? (((~(arr_8 [i_0] [i_1] [5])))) : (arr_13 [i_0] [i_0] [0] [i_0])));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_23 = (min(var_23, (206930939 ^ 0)));
                                var_24 *= ((~((1329 ? (arr_4 [i_6] [i_4] [i_6]) : (arr_0 [i_0])))));
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            {
                                arr_27 [i_1] [i_1] [i_1] [8] [i_1] [8] = (arr_4 [i_1] [i_1] [i_1]);
                                arr_28 [i_0] [i_0] [13] [i_8] [10] [i_1] [i_7] = ((~((58229 ? 50723 : var_13))));
                                var_25 |= ((arr_8 [0] [i_9] [0]) << (((!((max((arr_5 [i_0] [14] [5] [i_8]), 47483)))))));
                                var_26 = (((-(arr_18 [i_0] [i_0] [i_1] [7] [1]))));
                            }
                        }
                    }
                    var_27 = (i_1 % 2 == zero) ? ((((((1329 ? (arr_10 [i_1]) : (arr_15 [i_0] [i_1] [i_0] [i_0] [i_0])))) ? ((((arr_23 [i_1] [i_1] [i_7] [1] [i_7] [i_0]) >> (((arr_10 [i_1]) - 182))))) : ((var_12 ? (arr_15 [i_7] [i_1] [i_1] [i_1] [i_0]) : (arr_15 [i_0] [i_1] [i_0] [i_1] [11])))))) : ((((((1329 ? (arr_10 [i_1]) : (arr_15 [i_0] [i_1] [i_0] [i_0] [i_0])))) ? ((((arr_23 [i_1] [i_1] [i_7] [1] [i_7] [i_0]) >> (((((arr_10 [i_1]) - 182)) + 121))))) : ((var_12 ? (arr_15 [i_7] [i_1] [i_1] [i_1] [i_0]) : (arr_15 [i_0] [i_1] [i_0] [i_1] [11]))))));

                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        var_28 *= (min((min((arr_15 [1] [i_10] [i_7] [i_10] [i_7]), (((36047 ? 64206 : (arr_2 [i_0] [i_7])))))), (-32767 - 1)));
                        var_29 = (min(var_29, var_2));
                    }
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        var_30 = var_0;

                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 15;i_12 += 1)
                        {
                            var_31 *= (arr_30 [i_0] [i_0] [3]);
                            var_32 ^= ((-(arr_34 [i_0] [i_1] [i_7] [i_11])));
                        }
                        for (int i_13 = 0; i_13 < 15;i_13 += 1)
                        {
                            arr_42 [i_0] [i_1] [i_0] [4] [i_0] = 3641951766847379319;
                            arr_43 [i_0] [i_1] [i_7] [i_1] [6] = var_1;
                        }
                        for (int i_14 = 0; i_14 < 15;i_14 += 1)
                        {
                            var_33 *= 0;
                            var_34 = (min(0, 64206));
                        }
                        for (int i_15 = 0; i_15 < 15;i_15 += 1)
                        {
                            arr_50 [8] [8] [i_1] [i_7] [i_11] [i_1] [3] = var_17;
                            arr_51 [i_1] [1] = ((((((var_1 ? 110 : (arr_2 [i_11] [i_11]))))) ? ((~(arr_39 [i_0] [i_0] [1] [i_7] [i_11] [6]))) : 138));
                            arr_52 [i_1] [i_1] [i_7] = ((((((min((arr_10 [i_1]), (-9223372036854775807 - 1)))) ? (arr_19 [i_1] [1] [i_11]) : -3030282351821273326)) & var_13));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 15;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 15;i_17 += 1)
                        {
                            {
                                arr_57 [i_1] = var_2;
                                arr_58 [i_0] [i_0] [9] [i_1] [i_7] [i_16] = var_12;
                                var_35 = ((!(arr_54 [i_0] [0] [i_0] [i_0] [i_0] [i_0])));
                            }
                        }
                    }
                }
                var_36 = -var_15;
                var_37 = (max(var_12, var_3));
            }
        }
    }
    #pragma endscop
}

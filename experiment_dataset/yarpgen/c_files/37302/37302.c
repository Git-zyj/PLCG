/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_14 = (min(var_14, ((((min((((var_13 && (arr_2 [i_0 - 1])))), var_10)) > ((min(((1 ^ (arr_11 [i_0]))), ((min(var_2, (arr_6 [i_1]))))))))))));
                            var_15 *= ((-(((arr_3 [i_0 - 1]) ? (arr_3 [i_0 - 1]) : (arr_3 [i_0 - 1])))));
                            var_16 ^= (max(((((arr_7 [6] [i_0 - 1] [i_0 - 1]) + (arr_7 [i_0] [i_0 - 1] [i_0])))), -var_9));

                            for (int i_4 = 0; i_4 < 13;i_4 += 1)
                            {
                                arr_15 [7] [i_1] [i_4] = var_8;
                                var_17 = ((arr_13 [i_1] [i_1] [1] [i_1] [12] [i_4] [i_1]) ? ((var_12 >> (((arr_9 [i_2 - 1] [i_0 - 1] [i_0 - 1]) - 13732991262071814111)))) : (!var_3));
                                arr_16 [i_0 - 1] [i_3] [i_2 - 2] [i_3] &= var_10;
                                var_18 = (~28);
                            }
                            for (int i_5 = 3; i_5 < 10;i_5 += 1)
                            {
                                arr_19 [i_0] [i_0] [i_5] [i_3] [i_1] [i_0] [i_2 - 3] = ((var_13 & (arr_17 [i_0] [2] [9] [i_0] [i_0] [i_0])));
                                var_19 = ((((var_0 <= (arr_14 [1] [i_1] [1] [i_3] [i_3] [i_5]))) ? ((((((((arr_7 [6] [i_1] [i_0]) && var_9))) <= var_9)))) : (((arr_18 [i_2] [i_5] [i_2]) ? (arr_9 [i_2 + 1] [i_2 - 1] [i_2 - 1]) : (arr_18 [i_2] [i_5] [i_2])))));
                            }
                            for (int i_6 = 0; i_6 < 13;i_6 += 1)
                            {
                                var_20 = (min(var_20, ((min(((((arr_11 [i_3]) + ((var_5 - (arr_20 [i_6] [i_3] [i_3] [i_3] [i_0] [i_0])))))), (((((var_3 ? var_6 : var_11))) ? (((arr_9 [i_2 - 2] [i_1] [i_2 - 2]) * var_5)) : (((min(var_12, var_8)))))))))));
                                var_21 = (max(var_21, (((1099377410048 ? 13 : (((arr_14 [4] [1] [i_2] [1] [i_6] [i_3]) ? 13 : 13)))))));
                                arr_23 [i_3] [i_3] [i_3] [i_3] [i_3] &= (max(var_10, (((arr_22 [i_0] [i_1] [i_0] [i_2 - 2] [1]) ? var_11 : var_5))));
                            }
                            /* vectorizable */
                            for (int i_7 = 3; i_7 < 12;i_7 += 1)
                            {
                                var_22 = (((arr_9 [i_0 - 1] [i_7 - 3] [i_2 - 1]) ? (arr_9 [i_0 - 1] [i_7 - 1] [i_2 - 2]) : (arr_9 [i_0 - 1] [i_7 - 2] [i_2 - 3])));
                                var_23 = (arr_13 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]);
                            }
                        }
                    }
                }
                var_24 = (min(var_24, var_0));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 10;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            {
                var_25 = ((((min(((((arr_3 [1]) == var_5))), var_13))) && (!var_6)));
                var_26 = (max(((max((max(var_9, (arr_2 [1]))), (min(var_7, (arr_14 [i_8] [i_8] [i_9] [8] [i_9] [i_8])))))), (((((arr_14 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]) && (arr_14 [i_8] [i_8] [i_8] [12] [i_8] [i_8]))) ? var_9 : var_1))));
                var_27 = (max((((arr_32 [i_9] [i_8]) ? var_5 : ((13275590297504580330 ? 1 : 18446744073709551612)))), ((var_5 ? ((0 ? 18446744073709551615 : 1)) : var_0))));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 10;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {

                            for (int i_12 = 1; i_12 < 7;i_12 += 1)
                            {
                                var_28 = ((-(((arr_5 [i_8]) ? (arr_33 [i_8] [i_8] [i_10] [i_11]) : var_9))));
                                arr_40 [3] [i_10] [i_10] [i_10] = (min((min(var_11, (arr_32 [i_8] [i_8]))), (max((((var_10 ? (arr_17 [1] [i_11] [i_10] [i_10] [6] [i_8]) : var_6))), ((var_11 + (arr_18 [i_8] [i_10] [i_10])))))));
                            }
                            for (int i_13 = 0; i_13 < 10;i_13 += 1)
                            {
                                var_29 = var_5;
                                var_30 = (max(var_30, ((min((((((var_6 ? var_2 : var_13)) <= ((1 << (((arr_38 [i_13] [i_13] [i_13] [i_11] [i_10] [i_9] [i_8]) - 167))))))), (max(var_6, (((171 ? 85 : -18112))))))))));
                                var_31 = (~var_10);
                                arr_43 [i_8] [i_10] [i_10] [i_8] [i_13] = (max(((((((~(arr_0 [i_8])))) ? ((var_2 ? var_5 : (arr_25 [i_9] [i_9] [i_10] [i_11] [i_13] [i_9]))) : ((18446744073709551603 ? 228 : 255))))), ((var_12 & (min(var_10, var_1))))));
                                arr_44 [i_8] [i_8] [6] [i_10] [i_8] [i_8] [i_8] = ((((((((1 >> (4503599627370495 - 4503599627370473)))) && var_7))) <= (((((var_4 ? (arr_11 [i_13]) : var_12)) != ((var_2 ? (arr_41 [i_8] [i_10] [9]) : var_13)))))));
                            }
                            arr_45 [i_9] [i_10] [i_9] [i_11] = (min(((((((var_13 ? var_13 : var_9))) ? (((arr_0 [i_8]) * var_2)) : var_13))), ((var_4 ? (min((arr_11 [1]), 12365954286731516829)) : (((var_2 << (((arr_14 [7] [i_10] [i_8] [i_9] [i_9] [i_10]) + 14030)))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

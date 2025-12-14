/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_4] [11] [i_4] = var_16;
                                arr_14 [i_4] [i_4] [i_4] [3] [i_2] [i_4] = var_9;
                                arr_15 [i_4] [i_1 + 1] [i_2] [i_3] [i_4] [i_4] = var_0;
                                var_17 = min(((14 ? var_13 : (max(var_11, 9223372036854775799)))), ((((max(243, var_5)) > (arr_0 [i_1 - 2])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_18 = var_9;
                                arr_20 [6] [i_1 - 3] [i_2] [i_6] = (((~2147483632) ? 48 : ((18446744073709551611 ? 224 : 536870912))));
                                var_19 = (((((arr_0 [i_1 - 3]) ? var_6 : 18446744073709551603)) >> (469762048 - 469762019)));
                                arr_21 [i_0] [i_1] [i_2] [i_1] [i_6] = ((!((((arr_7 [i_0] [i_1] [i_1 - 2] [i_6] [i_6] [i_6]) ? (51 & 241) : 13)))));
                                arr_22 [i_0] [i_1 + 2] [i_2] [0] [i_6] [i_1] = ((var_12 ? var_11 : (((-var_8 + 2147483647) << (251 - 251)))));
                            }
                        }
                    }
                    arr_23 [3] [1] = 241;
                }
            }
        }
    }
    var_20 = (((min((!var_10), (!2147483625))) ? var_11 : ((((((var_7 ? var_5 : var_11)) + 2147483647)) >> (var_13 - 2916580528)))));
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 14;i_8 += 1)
        {
            {
                var_21 = ((((((arr_25 [i_8 - 2] [i_8 - 2]) / var_13))) ? (((arr_24 [i_8 - 2]) ? var_0 : (((1966080 ? var_5 : 127))))) : (104 >= 2333130063033672383)));

                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    var_22 = (((~((-(arr_25 [i_7] [i_7]))))));
                    var_23 = ((((max(30306, (arr_26 [i_8 - 2])))) ? ((((arr_26 [i_8 + 1]) > (arr_26 [i_8 - 1])))) : (var_11 / var_15)));
                }
                for (int i_10 = 3; i_10 < 12;i_10 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 12;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 14;i_12 += 1)
                        {
                            {
                                arr_41 [i_7] [i_8] [i_10] [i_11] [i_7] |= var_11;
                                var_24 = (((var_6 || 2822375215013375399) ? (max((arr_32 [i_12 + 1]), (arr_32 [i_12 + 1]))) : ((var_6 ? (arr_32 [i_12 + 1]) : (arr_32 [i_12 - 1])))));
                                var_25 = var_14;
                                arr_42 [i_10] [i_10] [i_11] = (arr_37 [7] [i_8 - 2] [7] [i_11 + 3] [i_12]);
                            }
                        }
                    }
                    var_26 = 18446744073709551611;
                    var_27 *= ((((max(4552399072053099701, (arr_35 [i_8 + 1] [i_8 + 1] [i_10 + 3] [i_10 - 1])))) ? (((arr_35 [i_8 + 1] [i_8 - 2] [i_10 + 3] [i_10 - 2]) ? var_4 : 1185358687)) : (((var_11 != (arr_35 [i_8 + 1] [i_8 + 1] [i_10 + 3] [i_10 + 3]))))));
                    var_28 = 18446744073709551611;
                }
                for (int i_13 = 3; i_13 < 12;i_13 += 1) /* same iter space */
                {
                    var_29 = min(4294967288, ((30720 ? ((var_0 ? var_11 : 3627927913)) : ((((!(arr_29 [i_7] [i_7] [i_7] [5]))))))));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            {
                                var_30 = 241;
                                arr_52 [i_13] [4] [i_13 + 2] = (arr_24 [i_7]);
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_16 = 0; i_16 < 15;i_16 += 1)
                {
                    arr_55 [i_7] [i_7] [i_7] = (((((248 % (arr_37 [i_7] [0] [i_7] [i_8 - 2] [i_8 + 1])))) ? var_15 : ((var_4 ? var_16 : (arr_40 [i_16])))));
                    var_31 = (((544721455 & -2147483618) ? var_9 : var_6));
                }
            }
        }
    }
    #pragma endscop
}

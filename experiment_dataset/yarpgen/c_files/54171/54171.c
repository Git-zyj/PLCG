/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_14;
    var_18 |= var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_1] = (max((arr_1 [i_1 - 2] [i_1 - 2]), ((((((22 ? 47 : (arr_4 [i_0] [i_1] [i_1])))) ? (arr_0 [i_0] [i_0]) : (max((arr_4 [i_1] [i_1] [i_0]), 2011799351)))))));
                arr_7 [i_1] = ((var_6 - (max((arr_1 [i_1 - 1] [i_1]), (arr_1 [i_1 - 2] [6])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_19 -= var_16;

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 17;i_4 += 1)
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_1] [i_2] [i_3] [i_2] = arr_5 [i_0] [12];
                                var_20 = (max(var_20, ((4294967295 ? 945 : 57535))));
                                var_21 = (((arr_13 [i_1]) ? (arr_13 [i_1]) : (arr_13 [i_1])));
                                var_22 = (max(var_22, (((var_9 ? (arr_5 [i_2] [4]) : (arr_5 [i_3 + 1] [i_1 + 1]))))));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 17;i_5 += 1)
                            {
                                var_23 = ((var_0 && (arr_17 [i_3] [i_3 - 1] [i_3] [i_3] [i_3 - 1] [i_3] [i_1])));
                                arr_18 [i_3 - 1] [i_1] [i_3 - 1] = (((arr_12 [i_1 - 2] [i_1 - 2] [i_1] [i_1] [i_1] [i_1 - 1] [i_3 + 1]) ? (arr_12 [i_1 - 2] [i_1] [15] [5] [i_1] [i_1 - 1] [i_3 + 1]) : (arr_12 [i_1 - 2] [i_1] [i_1 - 2] [i_1] [i_1] [i_1 - 1] [i_3 + 1])));
                                var_24 = (max(var_24, (((223 < (arr_4 [i_3 - 1] [i_0] [i_0]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        for (int i_7 = 3; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 4; i_8 < 21;i_8 += 1)
            {
                {
                    arr_28 [i_6] [i_6] = 23151;
                    arr_29 [i_6] [i_7] [i_6] [11] = (max(((-64591 ? (arr_26 [i_7] [i_7] [i_6]) : (1593747621 || 33))), (((((43 ? (arr_22 [9] [i_6]) : (arr_27 [i_6] [i_7] [0] [i_7]))) < var_16)))));
                    arr_30 [21] [i_7] [21] [21] = ((2897502351340373049 ? 18011 : 5));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 2; i_9 < 17;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 19;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 18;i_11 += 1)
            {
                {
                    var_25 = ((((max((((arr_34 [i_9]) ? var_9 : var_9)), var_8))) ? ((max(var_5, (var_11 < var_15)))) : var_14));
                    var_26 = ((var_16 ? (((arr_33 [i_11 - 1]) ? (arr_33 [i_11 - 1]) : (arr_38 [2]))) : (((((arr_19 [i_9 + 1]) <= (arr_22 [i_9 + 1] [i_11 - 1])))))));

                    /* vectorizable */
                    for (int i_12 = 2; i_12 < 16;i_12 += 1)
                    {
                        var_27 *= arr_25 [i_9] [i_9] [i_9];
                        var_28 = (min(var_28, ((((11694 ^ 44) <= var_15)))));
                        var_29 = (((arr_40 [i_9 + 1] [i_9 + 1] [i_9] [i_9]) ? (arr_36 [i_9]) : ((((var_8 + 2147483647) >> (var_12 - 106))))));
                    }
                    for (int i_13 = 0; i_13 < 19;i_13 += 1)
                    {

                        for (int i_14 = 0; i_14 < 19;i_14 += 1)
                        {
                            arr_49 [i_9] [5] [i_11] [9] [i_9] = (((var_13 ? var_11 : (arr_25 [i_11 - 2] [i_11 - 1] [i_9 + 2]))));
                            arr_50 [i_9] [i_11] [i_11] [i_9] = ((((min((arr_41 [i_9 - 1] [i_11 - 1] [i_11 - 1] [i_13]), (arr_34 [i_9])))) ? (arr_20 [i_9]) : (arr_42 [5] [i_10] [i_11] [i_14] [i_10])));
                            var_30 = (max(var_30, ((((((((arr_46 [i_9] [i_11] [4] [i_14]) == var_3)) ? (arr_46 [i_14] [i_13] [i_11] [i_13]) : (((arr_33 [8]) + 196)))) < (((max(((((arr_47 [i_9 + 1] [i_9 - 2] [i_11 - 2] [11] [i_14]) || (arr_41 [0] [0] [i_10] [i_9])))), (arr_48 [i_9 - 2] [i_9 - 1] [i_10] [i_11 - 2] [14]))))))))));
                            arr_51 [i_9] [i_9] [i_11] [i_9] [i_9] = ((((((arr_24 [i_9] [i_10] [i_13]) * (max((arr_25 [i_9] [i_9] [i_14]), var_7))))) ? -1647807431 : (((!((max((arr_33 [14]), (arr_34 [i_9])))))))));
                        }
                        arr_52 [i_9] [i_9] [i_9] [15] [i_9] = (arr_41 [4] [i_10] [i_11] [4]);
                        arr_53 [i_13] &= ((((((arr_26 [1] [1] [i_11]) ? ((233 ? var_3 : (arr_24 [i_11] [i_11] [i_11]))) : var_0))) == (((((arr_45 [i_13]) ? (arr_43 [i_9] [i_10] [i_11 + 1] [i_10]) : (arr_32 [i_13]))) * var_4))));
                        var_31 = (min(var_31, var_3));
                    }
                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 19;i_15 += 1)
                    {
                        var_32 &= (arr_41 [i_9] [i_9] [i_9] [i_9 - 2]);
                        var_33 ^= var_15;
                    }
                    /* vectorizable */
                    for (int i_16 = 0; i_16 < 19;i_16 += 1)
                    {
                        var_34 = ((2090000530 ? (arr_56 [3] [i_10] [i_10] [i_10] [i_10]) : (arr_56 [i_11 - 2] [i_11] [i_11 - 2] [i_11 - 2] [i_11 - 2])));
                        arr_58 [i_9] [i_9] [i_9 + 2] [i_9] [i_9] = (arr_36 [i_9]);
                        var_35 = (arr_38 [i_9]);
                        var_36 = ((!(((64590 ? 196 : (arr_47 [i_9] [i_9] [i_9] [i_9] [i_9]))))));
                        var_37 = (((arr_19 [i_9 - 1]) != 169));
                    }
                }
            }
        }
    }
    #pragma endscop
}

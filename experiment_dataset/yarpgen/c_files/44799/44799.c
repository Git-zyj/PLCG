/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 32767;
    var_14 ^= 1;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_15 = (max(var_15, (arr_0 [i_0] [i_0])));

        /* vectorizable */
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            var_16 = var_3;
            arr_6 [i_0] = (arr_3 [i_0]);
        }
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        arr_11 [i_2] [i_2] = ((var_1 >> (((min((arr_8 [i_2]), (arr_8 [i_2]))) - 857602239))));
        arr_12 [i_2] = ((((max((arr_7 [i_2]), (arr_9 [i_2] [7])))) < ((var_3 ? var_3 : (arr_10 [i_2] [i_2])))));
        arr_13 [i_2] = (arr_10 [i_2] [i_2]);
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            {

                for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                {
                    arr_23 [8] [i_4] [i_4] [i_4] = 981572456;
                    var_17 += (((arr_14 [i_5] [i_4]) != (((!(arr_15 [i_3]))))));
                }
                for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
                {

                    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                    {
                        var_18 = 32743;
                        var_19 = (arr_7 [i_4]);
                        var_20 = (arr_20 [i_4] [7] [i_6]);
                        arr_30 [i_7] [i_4] [i_4] [i_4] [i_4] = 228530840;
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                    {

                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            arr_37 [i_3] [i_4] [i_6] [i_8] [i_9] = ((((((((var_3 ? 7 : 1295102646))) ? (arr_19 [i_4]) : (var_11 + 32767)))) ? var_11 : (((arr_31 [i_3] [i_3] [i_4] [i_3] [i_4] [i_4]) << (((((arr_20 [i_3] [i_4] [i_6]) ? -2096055414 : var_4)) + 2096055423))))));
                            var_21 = (((arr_35 [i_8]) >> var_11));
                            arr_38 [i_3] [i_4] [i_6] [i_8] [i_9] = ((arr_16 [i_3]) ? ((((((arr_16 [i_6]) ? (arr_10 [13] [13]) : var_2))) ? var_6 : (((arr_8 [i_3]) ? var_9 : (arr_36 [i_3] [i_4] [i_6] [i_6] [i_8] [i_9]))))) : (arr_36 [i_3] [i_8] [i_6] [i_4] [i_3] [i_3]));
                            arr_39 [i_3] [i_4] [i_6] [i_3] [i_4] [i_6] = ((((arr_18 [i_4] [i_9]) ? (arr_31 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]) : var_8)) - (((18446744073709551615 > (arr_29 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])))));
                        }

                        for (int i_10 = 0; i_10 < 12;i_10 += 1)
                        {
                            arr_42 [3] [i_8] = var_5;
                            var_22 = (((1 ? (8708345762761429642 / var_6) : (((arr_14 [i_3] [i_4]) + (arr_33 [i_3] [i_4] [i_4] [i_3]))))));
                            var_23 = var_5;
                            var_24 *= ((((((((arr_10 [i_8] [i_6]) ? 9727406747151559552 : (arr_40 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])))) ? 12208314532902656710 : (((arr_21 [i_3] [i_3] [i_3]) ? (arr_33 [i_4] [i_6] [i_4] [i_10]) : (arr_41 [i_3] [i_3] [i_3] [i_3] [i_6] [i_8] [i_10]))))) == (((((min(var_2, (arr_24 [i_3] [i_3] [i_10])))) ? (((arr_15 [i_4]) ? var_10 : 4)) : (arr_19 [i_4]))))));
                        }
                        for (int i_11 = 2; i_11 < 10;i_11 += 1) /* same iter space */
                        {
                            arr_47 [i_3] [i_4] [i_6] [i_4] [i_11] = (arr_43 [8] [i_6]);
                            var_25 = (arr_44 [i_11] [i_11] [i_11 - 1] [i_11] [i_11] [i_11 + 2] [i_11 + 2]);
                        }
                        /* vectorizable */
                        for (int i_12 = 2; i_12 < 10;i_12 += 1) /* same iter space */
                        {
                            arr_50 [i_12] [i_8] [i_6] [i_4] [i_3] = ((arr_7 [i_12 - 1]) - (arr_7 [i_12 + 2]));
                            var_26 &= ((((((arr_36 [i_3] [i_4] [i_3] [i_8] [i_8] [i_3]) >> (var_3 - 189)))) ? (arr_31 [i_12 - 2] [i_12 + 2] [i_12] [i_12] [i_12 + 1] [i_12 - 2]) : (arr_19 [i_12 + 1])));
                            var_27 = var_2;
                            var_28 = ((((((arr_18 [i_6] [i_12]) ? (arr_34 [i_6]) : (arr_19 [i_12 - 2])))) ? var_4 : (arr_31 [i_12 + 1] [i_12 + 2] [i_12 + 1] [i_12 - 2] [i_8] [i_8])));
                            var_29 += ((((((arr_34 [i_6]) + var_11))) ? (!var_2) : ((-2147483635 ? (arr_7 [i_4]) : var_1))));
                        }
                        var_30 += ((((min((((arr_18 [i_3] [i_4]) + 31817)), (arr_19 [i_4])))) ? (arr_19 [1]) : (~var_8)));
                    }
                    for (int i_13 = 0; i_13 < 12;i_13 += 1)
                    {
                        var_31 -= (((arr_25 [4] [i_6] [i_4] [i_3]) ^ (max((arr_8 [i_4]), (arr_8 [i_13])))));
                        var_32 = var_11;
                        arr_54 [i_3] [i_4] [i_6] [i_13] = var_9;
                    }
                    var_33 = ((((!((!(arr_14 [i_3] [i_4]))))) && (arr_26 [i_3] [i_3] [i_4] [i_6])));
                }
                for (int i_14 = 0; i_14 < 12;i_14 += 1)
                {

                    for (int i_15 = 2; i_15 < 11;i_15 += 1)
                    {
                        arr_61 [i_3] [i_4] [i_14] [i_15] [i_15] [i_15] = (arr_45 [i_3] [i_3] [i_3]);
                        arr_62 [i_3] [i_3] [i_3] [i_3] [i_3] = ((~(((var_9 && (arr_19 [i_15 + 1]))))));
                        arr_63 [i_3] [i_3] = (arr_7 [i_15]);
                    }
                    arr_64 [i_3] [i_4] [i_14] [1] = (((((((((arr_51 [i_14] [i_14] [i_4] [i_4] [i_3]) ? var_1 : (arr_18 [i_3] [i_3])))) ? var_6 : (arr_31 [i_3] [10] [i_14] [3] [i_14] [i_14])))) ? (max(((4190 ? 11956144413759022599 : (arr_58 [i_3] [i_3] [i_4] [i_14]))), (!178))) : (((((65535 * var_0) < ((var_1 ? var_9 : var_11))))))));
                }
                for (int i_16 = 1; i_16 < 9;i_16 += 1)
                {
                    var_34 = (min((((((min((arr_35 [i_3]), var_12))) ? (arr_56 [i_16 - 1] [i_16] [i_16 + 1] [i_16 + 3]) : var_9))), (arr_36 [1] [i_3] [i_3] [i_3] [i_3] [i_3])));
                    /* LoopNest 2 */
                    for (int i_17 = 2; i_17 < 10;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 12;i_18 += 1)
                        {
                            {
                                arr_73 [i_3] [i_3] [i_16] [i_17] [i_16] [i_18] [i_16] = (arr_16 [0]);
                                var_35 = (max(var_35, (((~(((arr_57 [i_16 + 2] [i_17 - 1] [i_18] [i_18]) ? (arr_72 [i_3] [i_4] [i_16] [i_17 - 1] [i_3] [i_3]) : (arr_7 [18]))))))));
                            }
                        }
                    }
                }
                arr_74 [i_4] = var_11;
            }
        }
    }
    #pragma endscop
}

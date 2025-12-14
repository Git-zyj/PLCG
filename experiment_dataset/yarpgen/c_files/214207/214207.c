/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= var_12;
    var_18 = (var_9 > var_6);

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [1] = var_4;
        arr_3 [i_0] [i_0] |= (((arr_1 [i_0]) ? (min((min((arr_0 [1] [i_0]), var_4)), (min(0, var_2)))) : 3863229349));
        var_19 = -27798;

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_20 = ((((((arr_0 [8] [i_1]) - (arr_0 [i_0] [i_0])))) ? ((~(arr_0 [i_1] [i_0]))) : (arr_0 [i_0] [i_1])));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_10 [7] [8] [i_2] [12] [4] = ((-(!var_16)));
                        var_21 = (((((((arr_8 [2] [i_2] [i_2]) % var_10)) % var_3)) >> (((!((max(3863229328, var_3))))))));
                        var_22 = 65534;
                    }
                }
            }
        }
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            var_23 *= var_14;
            arr_13 [i_0] [i_4] [i_0] = (max(-var_9, 1));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    {
                        var_24 = 7775101094573167132;

                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 12;i_7 += 1)
                        {
                            var_25 = (((arr_12 [i_0]) >= 147));
                            var_26 = (((arr_21 [i_7 + 2] [i_7 + 1] [i_7 + 2] [i_7 - 1] [i_7 + 1] [i_7 + 2]) ^ (arr_21 [i_7 - 1] [i_7 + 3] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 2])));
                            var_27 = ((~(8089340046119569916 < 8316599453527945205)));
                            var_28 = (arr_8 [i_7 + 1] [i_7 + 3] [i_7 - 1]);
                            var_29 = ((var_11 ? var_1 : ((0 ? -22 : 1466317199))));
                        }
                        arr_23 [i_4] [i_4] [i_5] [i_6] = ((3863229349 ? (!-1) : 26));
                    }
                }
            }
            arr_24 [i_4] [i_4] [i_4] = (((((arr_17 [i_4] [i_4]) ? (arr_21 [i_0] [i_4] [10] [i_4] [i_4] [i_4]) : (arr_15 [i_0] [i_4] [i_4])))) && (((var_13 >> (3863229349 - 3863229321)))));
        }
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
    {
        arr_28 [i_8] [i_8] = ((!(((124 ? (arr_25 [i_8]) : -1)))));
        arr_29 [i_8] = ((var_10 ? (arr_26 [1]) : (arr_26 [i_8])));
        var_30 = ((!(arr_26 [i_8])));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
    {
        var_31 = ((!((((arr_26 [i_9]) ? var_2 : 27800)))));
        var_32 = 42701;

        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            var_33 = 2742839641;
            arr_35 [9] [i_10] [3] = var_1;
            arr_36 [i_9] [i_10] [9] = (arr_25 [i_9]);
            arr_37 [i_9] = (~((var_6 + (arr_34 [i_10] [i_9]))));
            var_34 += ((~(((!(arr_26 [i_9]))))));
        }
        for (int i_11 = 1; i_11 < 1;i_11 += 1)
        {
            var_35 += ((var_5 ? var_1 : var_3));
            var_36 *= (var_12 ? ((var_3 ^ (arr_31 [i_9]))) : (arr_27 [24]));
            var_37 = (!var_14);
            var_38 = ((-(~var_14)));
            var_39 *= ((((((((arr_25 [i_9]) + 2147483647)) >> (18446744073709551615 - 18446744073709551603)))) ? 122 : (arr_38 [i_9] [i_11 - 1])));
        }
        arr_40 [i_9] [i_9] = ((65534 ? (((arr_31 [i_9]) ? (arr_33 [i_9] [i_9] [12]) : 2147483647)) : ((-(arr_27 [0])))));
    }

    /* vectorizable */
    for (int i_12 = 1; i_12 < 12;i_12 += 1)
    {
        var_40 = ((~((var_5 | (arr_19 [i_12 - 1] [7] [7] [i_12])))));
        var_41 -= ((~(arr_38 [i_12 - 1] [i_12 + 1])));
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 14;i_14 += 1)
            {
                {
                    var_42 = (-((var_8 ? 255 : -2)));
                    var_43 ^= ((-var_11 ? var_4 : 3685162518018545443));
                    var_44 = (--27798);
                }
            }
        }
        var_45 = ((~(arr_30 [i_12])));
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 25;i_15 += 1)
    {
        var_46 = ((var_11 > (arr_50 [i_15])));
        var_47 *= var_5;
    }
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 11;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 11;i_17 += 1)
        {
            {

                for (int i_18 = 2; i_18 < 9;i_18 += 1)
                {
                    var_48 &= ((((var_11 + ((((arr_6 [i_18 - 2] [i_17] [i_17] [i_16]) ? 1 : var_4))))) + (((max((arr_34 [i_16] [i_17]), var_6))))));
                    var_49 = (arr_39 [3] [i_18 - 2]);
                }
                for (int i_19 = 1; i_19 < 10;i_19 += 1)
                {
                    var_50 = 586848568;
                    var_51 = ((!(((var_9 ? var_5 : ((((11 < (arr_43 [i_16]))))))))));
                    var_52 |= (min((((!(arr_7 [i_17] [i_19 - 1])))), ((((max(var_5, var_2))) ? ((0 ? 2828650097 : 3863229334)) : (arr_1 [i_17])))));
                }
                for (int i_20 = 2; i_20 < 8;i_20 += 1)
                {
                    arr_67 [i_20] [i_17] [i_17] [10] |= var_3;
                    arr_68 [i_16] [i_16] [i_20] |= (((!var_10) <= ((-(~var_13)))));
                    arr_69 [i_16] [0] [0] [i_20] = (((-(min(1552127655, 431737954)))));
                }
                for (int i_21 = 4; i_21 < 8;i_21 += 1)
                {
                    var_53 = (arr_22 [2] [i_16] [i_17] [i_16] [i_16]);
                    var_54 = (-11 ? 3896 : 255);
                    var_55 = ((max(var_5, (arr_12 [1]))));
                    var_56 = ((65522 ? var_9 : var_12));
                }
                var_57 = (min(var_57, ((min((min(18446744073709551615, 0)), 18446744073709551615)))));
                var_58 = (max(var_15, 5));
            }
        }
    }
    #pragma endscop
}

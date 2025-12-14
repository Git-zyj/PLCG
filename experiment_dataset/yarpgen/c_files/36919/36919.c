/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(-var_8, (((!var_3) ? ((max(var_8, 127))) : var_8))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_20 ^= -1;
        var_21 = (min(var_21, (arr_0 [i_0])));
        arr_2 [i_0] [i_0] = ((var_18 ? (~var_5) : (arr_0 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_22 = var_2;

        for (int i_2 = 3; i_2 < 11;i_2 += 1)
        {
            arr_7 [i_1] = -127;
            var_23 = ((~(arr_1 [i_2 + 3])));
        }
        arr_8 [i_1] = (((arr_5 [i_1] [i_1] [i_1]) ? var_12 : (-127 - 1)));
        var_24 = var_8;
        var_25 &= (((arr_1 [i_1]) % var_15));
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
    {
        arr_11 [i_3] = (((17482605963938670473 == var_0) ? var_16 : (1 - 0)));

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_26 = ((~((((arr_9 [i_3]) > (arr_9 [i_4]))))));
            arr_14 [i_3] [i_3] [i_4] |= 0;
        }
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            arr_19 [i_3] [i_5] [i_3] = ((-79 ? 1 : (!212)));
            var_27 ^= (max((max((((arr_16 [i_5]) ? var_8 : var_17)), ((max(1, 216))))), ((((((var_11 >> (var_11 - 12693213894841290723)))) && ((max(var_7, 16))))))));
        }
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            var_28 ^= ((~(((0 | var_3) ^ (var_12 & 125)))));
            var_29 = (max(var_29, 0));
            var_30 = (min(var_30, ((min(((-(arr_1 [i_3]))), ((max((arr_10 [i_3]), (arr_10 [i_3])))))))));
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
    {
        var_31 = (((arr_6 [i_7] [i_7] [i_7]) || 0));
        var_32 = (((arr_16 [i_7]) ? var_16 : (arr_9 [i_7])));

        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            var_33 = ((0 || (((113 ? -104 : 17947)))));

            for (int i_9 = 1; i_9 < 13;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        {
                            arr_34 [i_7] [i_7] [i_9] [i_7] [i_7] [i_11] = (((arr_3 [i_11]) ? var_1 : -6123));
                            var_34 = ((~(((!(arr_10 [i_9]))))));
                        }
                    }
                }
                var_35 = (arr_3 [i_7]);
                var_36 = (((arr_30 [i_9 + 1] [i_9 - 1] [9] [i_9 - 1] [i_9 + 1] [i_9 + 1]) / (arr_32 [i_9 - 1] [i_9] [i_9] [i_9 + 1] [i_9 + 1])));
                var_37 = (arr_3 [i_9 + 1]);
            }
            for (int i_12 = 0; i_12 < 14;i_12 += 1)
            {
                arr_37 [i_7] [i_12] [i_12] [11] = (arr_4 [i_7]);
                var_38 = var_0;

                for (int i_13 = 3; i_13 < 13;i_13 += 1)
                {
                    var_39 = (~var_5);
                    var_40 *= ((~(((arr_24 [i_7] [i_7] [i_13 - 2]) ? var_3 : var_6))));
                    var_41 = (min(var_41, (((arr_21 [i_13 + 1] [i_13 - 2]) ? var_12 : var_1))));
                    var_42 -= var_14;

                    for (int i_14 = 0; i_14 < 14;i_14 += 1)
                    {
                        var_43 = (min(var_43, (((var_12 ? -var_6 : var_16)))));
                        var_44 = (((arr_16 [i_13 + 1]) ? var_7 : (arr_16 [i_13 - 1])));
                    }
                }
                for (int i_15 = 1; i_15 < 11;i_15 += 1)
                {
                    arr_45 [i_12] [i_12] [i_8] [i_12] = (((arr_30 [13] [13] [i_15 + 2] [i_15 + 3] [i_15 + 3] [i_15 + 3]) ? (arr_28 [i_7] [i_12] [i_12]) : ((var_8 ? 13237537276233815288 : 46))));
                    var_45 = ((arr_38 [i_15] [i_15 + 3] [i_12] [i_12] [i_15 + 3] [i_8]) + (arr_44 [i_15] [i_15 + 3] [3] [i_15 + 2] [i_15 - 1] [i_8]));

                    for (int i_16 = 0; i_16 < 14;i_16 += 1)
                    {
                        var_46 += ((arr_13 [i_15 - 1] [i_15 + 3] [i_15 + 3]) ? 563768580 : (arr_13 [i_15 + 1] [i_15 + 2] [i_15 + 2]));
                        var_47 = (((arr_24 [i_15 - 1] [i_15 + 3] [i_15 + 3]) % var_16));
                        arr_48 [i_7] [12] [i_12] [i_12] [12] [i_7] |= (arr_22 [i_15 - 1]);
                    }
                    for (int i_17 = 3; i_17 < 12;i_17 += 1) /* same iter space */
                    {
                        arr_53 [i_7] [i_12] [i_12] [i_15] [i_17 - 2] = (arr_29 [i_17 - 1] [i_7] [i_7]);
                        var_48 = (max(var_48, ((((206 * 0) ? 16769 : (arr_42 [i_15] [i_8] [i_15 - 1] [i_8] [i_15]))))));
                    }
                    for (int i_18 = 3; i_18 < 12;i_18 += 1) /* same iter space */
                    {
                        var_49 = (max(var_49, ((((arr_50 [i_15 + 2] [i_15 - 1] [i_15 - 1] [i_15 - 1] [i_18 + 2]) + -var_4)))));
                        var_50 ^= (-110 - (arr_55 [i_15 + 1] [i_15 + 1] [10] [i_7] [i_15 + 1]));
                    }
                }
                for (int i_19 = 0; i_19 < 14;i_19 += 1)
                {
                    var_51 = ((1 ? 1 : 61));
                    var_52 = var_11;
                }
                for (int i_20 = 1; i_20 < 13;i_20 += 1)
                {
                    var_53 = (max(var_53, (arr_42 [i_7] [i_20 + 1] [i_7] [i_8] [i_8])));
                    arr_62 [i_20 + 1] [i_12] [i_20] [i_12] [i_12] [i_7] = ((1 ? (var_5 >= var_2) : (((arr_17 [i_7] [6]) ? 1 : (arr_1 [i_8])))));
                }
                var_54 = arr_56 [0] [i_12];
                arr_63 [i_12] [i_8] [i_12] = var_10;
            }
        }
    }
    #pragma endscop
}

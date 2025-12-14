/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, var_7));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 = (arr_0 [i_0] [i_0]);
        var_17 = (min(var_17, (arr_1 [i_0])));
    }

    for (int i_1 = 1; i_1 < 8;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = ((arr_1 [6]) ? ((((arr_4 [i_1 - 1] [i_1 - 1]) / (arr_4 [i_1 + 3] [i_1 + 1])))) : (((((arr_0 [i_1] [i_1 - 1]) ? (arr_5 [i_1 + 3] [i_1 + 3]) : (arr_3 [i_1]))) % (arr_1 [i_1 - 1]))));
        var_18 = ((((arr_2 [i_1 + 2] [i_1 + 1]) - (arr_2 [i_1 + 2] [i_1 + 1]))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {
        var_19 = (min(var_19, (((-(arr_1 [i_2]))))));
        var_20 -= (((arr_7 [i_2] [i_2]) - (arr_7 [i_2] [i_2])));
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 2; i_4 < 16;i_4 += 1)
        {
            var_21 = ((-(arr_9 [i_3] [i_3])));
            var_22 = (((arr_9 [i_3] [1]) ? (((((arr_11 [i_4] [13]) ? (arr_7 [i_4 - 1] [i_3]) : (arr_11 [i_3] [i_4 - 2]))) | (arr_0 [i_4] [i_4 + 1]))) : ((((!((((arr_8 [i_3] [i_3]) ? (arr_12 [i_4 + 1]) : (arr_1 [i_4]))))))))));
        }

        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {

            for (int i_6 = 2; i_6 < 16;i_6 += 1)
            {
                var_23 *= (arr_11 [i_5] [i_5]);

                for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
                {
                    var_24 = -var_8;
                    var_25 = (((((~(arr_16 [i_6 - 2] [i_6 - 1] [i_6 - 1] [i_6 - 2])))) + (min(((((arr_15 [i_6] [10] [i_6]) != var_4))), (min(var_6, (arr_12 [i_5])))))));
                }
                for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
                {
                    var_26 *= (max((((arr_20 [i_3] [i_5] [10]) & ((-(arr_17 [i_3] [i_6 - 1] [i_6] [1]))))), ((((arr_12 [i_8]) < (arr_15 [i_3] [i_3] [8]))))));
                    var_27 |= ((((arr_15 [i_3] [14] [1]) || var_11)));
                    var_28 = (arr_20 [i_3] [i_6 - 1] [0]);
                    var_29 = var_1;
                }
                arr_21 [i_6] [i_6] [16] = var_4;
            }
            for (int i_9 = 2; i_9 < 16;i_9 += 1)
            {

                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    arr_29 [i_3] [i_3] [i_3] [i_3] = (arr_24 [i_9] [i_10]);
                    var_30 = (arr_1 [i_10]);
                }
                for (int i_11 = 0; i_11 < 17;i_11 += 1)
                {
                    var_31 = (((((arr_7 [i_11] [i_5]) - (arr_7 [i_3] [16]))) - (arr_28 [i_3] [i_9 - 1] [i_11])));
                    var_32 = max(((max((arr_9 [i_5] [i_9]), var_4))), var_13);
                    var_33 = (min(var_5, ((((!(arr_2 [i_3] [i_5]))) ? (arr_17 [i_9] [14] [i_3] [i_9]) : var_7))));
                    arr_32 [i_3] [4] [i_9 + 1] [i_9 + 1] [i_11] = (arr_25 [i_3] [i_3]);
                }
                for (int i_12 = 0; i_12 < 17;i_12 += 1)
                {
                    var_34 = (((-(arr_0 [i_9 - 1] [i_9]))));
                    arr_36 [i_3] = min(18446744073709551615, 98);
                }
                for (int i_13 = 2; i_13 < 15;i_13 += 1)
                {
                    arr_39 [i_13 + 2] [i_5] [i_3] &= ((-(((!(arr_18 [i_9] [1] [i_13 + 2] [i_13 + 2] [i_13]))))));
                    arr_40 [i_5] = ((~(arr_26 [i_3] [i_3] [i_9 - 2] [i_13])));
                }
                arr_41 [i_3] [i_5] = ((var_7 / ((((arr_10 [i_3]) * (arr_8 [i_3] [16]))))));
            }
            for (int i_14 = 0; i_14 < 17;i_14 += 1)
            {
                /* LoopNest 2 */
                for (int i_15 = 3; i_15 < 13;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 17;i_16 += 1)
                    {
                        {
                            var_35 -= (min((arr_13 [i_16]), ((((arr_48 [10] [i_15 + 1] [i_16] [i_15 + 4] [14]) & (arr_48 [i_3] [i_15 + 2] [i_14] [i_15 - 2] [i_16]))))));
                            arr_50 [i_3] [i_3] [11] [i_3] [i_15] [i_3] = (arr_8 [i_15 - 1] [i_14]);
                            var_36 = (min(var_36, (arr_9 [i_15 + 3] [i_15 - 3])));
                        }
                    }
                }
                var_37 = (((arr_15 [i_3] [i_5] [i_14]) ? (((!(arr_30 [i_3])))) : (!var_2)));
            }

            for (int i_17 = 0; i_17 < 1;i_17 += 1) /* same iter space */
            {
                arr_54 [i_3] [i_3] [i_3] = ((var_5 - ((min((arr_8 [i_5] [i_5]), 48)))));
                var_38 = (max(((((~(arr_14 [i_3] [i_3] [i_3]))) | (arr_7 [i_17] [i_17]))), var_13));
                var_39 = ((~(max(var_0, (min((arr_16 [i_3] [i_3] [i_3] [i_3]), (arr_52 [i_5])))))));
            }
            for (int i_18 = 0; i_18 < 1;i_18 += 1) /* same iter space */
            {
                var_40 = (((((-(arr_9 [i_3] [i_5])))) ? (!var_0) : (arr_44 [i_3] [i_5] [i_18])));
                var_41 = ((((arr_19 [6] [i_18] [8] [i_18] [i_18] [1]) ? (arr_28 [i_18] [i_5] [i_3]) : (arr_45 [i_5] [i_5] [i_18]))));
                arr_58 [14] [14] [14] [i_18] = min(((~(arr_57 [16] [i_3] [i_5] [i_18]))), (arr_27 [i_3]));
                var_42 = (max(var_42, ((((max(-var_0, (arr_7 [i_3] [i_5])))) ? (arr_15 [i_18] [i_5] [2]) : var_5))));
            }
            arr_59 [i_3] = (arr_57 [i_3] [i_3] [12] [12]);
            arr_60 [i_3] [11] = (-((var_12 ? (arr_44 [i_3] [i_5] [i_5]) : (arr_44 [i_5] [i_5] [i_3]))));
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 17;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 17;i_20 += 1)
                {
                    {
                        var_43 = ((((~(arr_55 [i_3] [9] [i_19] [4]))) ^ (arr_55 [i_19] [i_5] [i_5] [i_20])));
                        var_44 ^= (-((max(56, 10015))));
                        var_45 = (~(!var_6));
                        arr_67 [i_19] [i_19] [8] [8] [i_19] [i_19] &= (min((arr_62 [i_3] [i_3] [i_3] [15]), ((-var_8 / (arr_47 [i_19] [i_20])))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_21 = 3; i_21 < 15;i_21 += 1)
        {
            for (int i_22 = 1; i_22 < 13;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 17;i_23 += 1)
                {
                    {
                        var_46 = ((-(max(((-(arr_38 [i_23]))), (arr_13 [i_22])))));
                        arr_75 [i_3] [i_21] [i_22] [i_3] = ((+(((var_6 - var_2) ? (arr_62 [i_3] [i_3] [i_3] [i_3]) : var_11))));
                    }
                }
            }
        }
        var_47 = var_14;
    }
    var_48 = (var_0 / var_0);
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            var_18 = (max(var_18, ((((((~(arr_5 [i_0] [i_1] [i_1])))) ? ((0 ? (arr_0 [i_1]) : 21)) : var_11)))));
            var_19 *= ((!(((var_5 ? var_13 : (arr_0 [12]))))));

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    var_20 = var_14;
                    arr_11 [i_1] [i_1] = (var_13 ? (arr_7 [i_1] [i_1] [i_2] [i_1]) : var_17);
                }
                for (int i_4 = 2; i_4 < 12;i_4 += 1)
                {
                    var_21 = ((((((arr_14 [i_0] [i_1] [i_2] [i_1]) ? var_10 : var_7))) * (arr_10 [i_0] [i_1] [i_2] [i_1])));
                    var_22 = (((var_8 ? var_2 : var_10)));
                    var_23 = var_3;
                }
                var_24 = (arr_6 [i_1] [i_1] [i_2]);
            }
            for (int i_5 = 2; i_5 < 12;i_5 += 1) /* same iter space */
            {
                var_25 = ((18446744073709551613 ? 0 : 0));
                var_26 = (min(var_26, (((var_7 ? var_10 : (!-28315))))));
            }
            for (int i_6 = 2; i_6 < 12;i_6 += 1) /* same iter space */
            {
                var_27 = (min(var_27, (((((var_13 ? (arr_19 [i_6] [i_1] [i_6 - 2] [i_0]) : var_17)) & var_7)))));
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        {
                            var_28 = (arr_23 [i_0] [i_1] [i_6] [i_6] [i_6]);
                            arr_27 [i_1] = (arr_5 [i_1] [i_1] [i_1]);
                            arr_28 [i_1] = (62 && 250);
                            arr_29 [i_8] [i_7] [i_1] [i_1] [i_0] = 1;
                        }
                    }
                }
            }
            for (int i_9 = 2; i_9 < 12;i_9 += 1) /* same iter space */
            {

                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    arr_36 [i_1] [i_1] [i_1] [i_1] [i_1] = var_1;
                    var_29 = (((arr_0 [i_10]) ? var_9 : var_8));
                    var_30 = (min(var_30, (arr_25 [i_0] [4] [i_9] [i_9] [i_9] [i_9] [i_9])));
                }
                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {

                    for (int i_12 = 0; i_12 < 15;i_12 += 1) /* same iter space */
                    {
                        var_31 += (((var_16 == var_11) * var_8));
                        var_32 = var_12;
                        var_33 -= ((-2044 ? 112 : 2397954525));
                    }
                    for (int i_13 = 0; i_13 < 15;i_13 += 1) /* same iter space */
                    {
                        var_34 = (arr_23 [i_9] [i_9 + 1] [i_9] [i_9 + 1] [i_9]);
                        arr_43 [i_1] [i_11] = (((arr_24 [i_1] [i_1] [i_1] [i_11] [i_13]) ? (arr_10 [i_1] [i_9] [i_11] [i_1]) : (arr_24 [i_1] [1] [i_11] [i_11] [i_9 + 2])));
                        var_35 = (((arr_31 [i_9 - 2] [i_9 - 2] [7]) ? (arr_15 [i_13] [i_11] [i_9] [i_0]) : var_7));
                    }
                    for (int i_14 = 0; i_14 < 15;i_14 += 1) /* same iter space */
                    {
                        var_36 = var_15;
                        var_37 = (7 | 19998);
                    }

                    for (int i_15 = 3; i_15 < 11;i_15 += 1)
                    {
                        var_38 -= 61621;
                        var_39 = (arr_49 [i_0] [i_1] [i_9] [i_11] [1]);
                        var_40 *= (arr_17 [i_0] [6]);
                        var_41 = (max(var_41, var_5));
                        arr_50 [i_0] [i_1] [i_0] [i_0] [13] [i_0] = ((arr_31 [i_15 + 2] [i_9 + 2] [i_9 - 1]) ? (arr_31 [i_15 + 3] [i_9 + 1] [i_9 + 2]) : (arr_31 [i_15 - 1] [i_9 - 1] [i_9 + 2]));
                    }
                }
                for (int i_16 = 0; i_16 < 15;i_16 += 1)
                {

                    for (int i_17 = 0; i_17 < 15;i_17 += 1)
                    {
                        var_42 = (min(var_42, ((((arr_23 [i_0] [5] [i_9] [i_16] [i_17]) ? (arr_41 [i_0] [i_1] [i_1] [i_1] [i_16] [i_17]) : var_14)))));
                        var_43 -= (var_15 ? var_6 : ((4776967401221277192 ? 2397954542 : 2773254534250181747)));
                    }
                    arr_56 [i_1] [i_16] = 7;
                }
                for (int i_18 = 0; i_18 < 15;i_18 += 1)
                {
                    var_44 = -var_3;
                    arr_59 [i_18] [i_1] [i_1] [i_0] = ((65523 ? 2773254534250181738 : 12));
                    arr_60 [i_1] = ((!(arr_23 [i_0] [1] [4] [4] [i_0])));
                }
                var_45 |= (((arr_53 [i_9 + 1] [i_9] [i_9 - 2]) ? (arr_53 [i_9 - 1] [i_9 + 1] [i_9 + 1]) : (arr_53 [i_9 - 2] [i_9] [i_9 + 2])));
                var_46 = ((12712744684608140968 > (arr_52 [i_9 + 1] [i_0] [i_0] [i_0])));
            }
        }
        for (int i_19 = 0; i_19 < 1;i_19 += 1) /* same iter space */
        {
            arr_63 [i_19] [i_19] = arr_38 [i_19] [i_0] [2] [i_19] [i_0] [i_19];
            var_47 *= (((var_13 ? (arr_3 [i_0] [i_0] [i_19]) : var_12)));
            var_48 = var_16;
            var_49 = (min(var_49, (((var_4 ? var_6 : var_15)))));
        }
        for (int i_20 = 0; i_20 < 1;i_20 += 1) /* same iter space */
        {
            var_50 |= (arr_51 [i_0] [i_0] [i_0] [i_0] [i_0] [i_20]);
            arr_66 [i_0] = var_1;
            var_51 ^= var_4;
        }
        var_52 -= (-2044 ? 3 : 18446744073709551615);

        for (int i_21 = 1; i_21 < 13;i_21 += 1)
        {
            var_53 ^= var_8;
            arr_69 [i_0] [i_21 + 1] = (arr_24 [i_0] [i_0] [i_0] [i_21 + 2] [i_21]);
            var_54 ^= (((arr_65 [i_21] [i_0] [i_0]) ^ ((((arr_68 [i_0] [i_21] [i_0]) ? var_12 : (arr_14 [i_0] [i_0] [i_0] [i_0]))))));
        }
    }
    /* vectorizable */
    for (int i_22 = 2; i_22 < 21;i_22 += 1)
    {
        var_55 ^= ((!-1386207947268505585) ? (arr_70 [i_22 + 1]) : -1386207947268505603);
        arr_72 [i_22 - 2] [i_22] = -var_7;
    }
    for (int i_23 = 0; i_23 < 11;i_23 += 1)
    {
        var_56 = (max(var_56, (arr_55 [i_23] [i_23] [i_23] [i_23])));
        var_57 ^= ((((!(((var_5 ? (arr_34 [i_23] [2] [i_23] [12]) : var_6))))) ? (((arr_45 [6] [6] [i_23] [i_23] [i_23] [i_23]) ? (arr_42 [i_23]) : ((var_15 ? var_9 : (arr_53 [i_23] [i_23] [i_23]))))) : (((var_8 ? ((var_16 ? (arr_8 [6] [6]) : (arr_71 [i_23]))) : var_5)))));
    }
    /* vectorizable */
    for (int i_24 = 0; i_24 < 1;i_24 += 1)
    {
        var_58 ^= ((0 ? (arr_75 [0]) : var_16));
        var_59 = arr_76 [i_24] [i_24];
        var_60 = (((arr_75 [i_24]) / var_0));
        arr_78 [i_24] = 1;
    }
    var_61 &= var_16;
    #pragma endscop
}

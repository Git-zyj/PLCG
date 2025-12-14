/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_20 = (((((arr_0 [i_0]) ? ((124 ? 2335324541132820730 : 16)) : 145)) << ((((min((max(var_13, var_14)), (arr_0 [i_0])))) - 179))));
        var_21 += ((((min(var_14, (arr_0 [i_0])))) * (min((((arr_0 [i_0]) % (arr_2 [i_0]))), ((max((arr_2 [i_0]), 0)))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {
            var_22 |= (arr_1 [i_2 - 1]);

            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                arr_12 [i_1] = ((1 ? var_7 : var_6));

                for (int i_4 = 3; i_4 < 13;i_4 += 1)
                {
                    arr_16 [i_1] [i_2] [i_3] [i_4] [i_4] = ((-(arr_14 [i_1] [i_2 + 1] [i_4 + 1] [i_4])));
                    var_23 = (min(var_23, (arr_4 [i_2])));
                    var_24 = (max(var_24, (~16)));
                    arr_17 [i_1] [i_2] [i_4] = var_19;
                }
            }
            arr_18 [i_1] [i_1] [i_2] = ((!(arr_5 [i_2 - 1])));
        }
        arr_19 [i_1] = var_12;

        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {

            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {

                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    var_25 = ((var_10 ? (arr_9 [i_6] [i_6] [i_6 - 1]) : (arr_9 [i_6] [i_6] [i_6 - 1])));
                    arr_27 [i_1] [i_1] = (((240 != var_9) ? (arr_13 [i_1] [i_6 - 1] [i_6] [i_7]) : (var_5 == var_19)));
                }

                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    arr_30 [i_6 - 1] [i_1] = var_14;
                    arr_31 [i_1] [i_5] [i_6] [i_1] = ((!(((arr_5 [i_1]) < (arr_3 [i_5])))));
                    arr_32 [i_1] [i_5] [i_5] [i_6] [i_1] [i_8] = (((14 * var_18) ? (arr_10 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6]) : ((-(arr_22 [i_1] [i_1])))));
                    var_26 = (arr_9 [i_1] [i_5] [i_6]);
                }
                arr_33 [i_1] [9] [i_5] [i_1] = ((-(arr_11 [i_5] [i_6 - 1] [i_1] [i_6])));
            }
            var_27 = (((arr_2 [i_5]) || (arr_2 [4])));
            arr_34 [i_1] [i_1] [i_1] = ((-var_16 != (arr_24 [i_1])));
        }
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            var_28 = (min(var_28, ((((arr_37 [i_9]) ? (arr_3 [i_1]) : (arr_37 [i_1]))))));
            var_29 |= (((arr_15 [i_1] [i_1] [i_9] [i_9]) ? (arr_5 [i_1]) : (arr_25 [i_9] [i_9] [i_1])));
        }
        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {

            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                arr_42 [i_1] [i_1] [i_11] [i_1] = ((218 ? 18080 : 16));
                var_30 = (((arr_14 [i_1] [i_1] [i_1] [i_1]) + var_8));
            }
            for (int i_12 = 0; i_12 < 15;i_12 += 1) /* same iter space */
            {
                arr_46 [i_1] [i_10] [i_12] [i_1] = var_13;
                var_31 = (min(var_31, (((((0 + (arr_43 [i_1] [i_10] [i_12]))) ^ ((((arr_37 [i_10]) + (arr_13 [i_1] [i_10] [i_12] [1])))))))));
            }
            for (int i_13 = 0; i_13 < 15;i_13 += 1) /* same iter space */
            {

                for (int i_14 = 0; i_14 < 15;i_14 += 1)
                {
                    arr_52 [i_10] [i_13] [i_1] = (var_2 ^ var_8);

                    for (int i_15 = 1; i_15 < 14;i_15 += 1) /* same iter space */
                    {
                        var_32 = (((arr_53 [i_15] [i_15 - 1] [i_15 + 1] [i_15 + 1] [i_15 - 1]) ? (arr_53 [i_15] [i_15 - 1] [i_15 + 1] [i_15 + 1] [i_15 + 1]) : var_3));
                        var_33 += (arr_40 [i_13] [i_10]);
                    }
                    for (int i_16 = 1; i_16 < 14;i_16 += 1) /* same iter space */
                    {
                        var_34 = (arr_41 [i_10]);
                        arr_60 [i_1] [i_10] [i_13] [i_1] [i_16] = (~var_15);
                    }
                    for (int i_17 = 1; i_17 < 14;i_17 += 1) /* same iter space */
                    {
                        var_35 = (((arr_53 [i_17 + 1] [i_17] [i_17 - 1] [i_17 - 1] [i_17 - 1]) == var_13));
                        var_36 = 0;
                        arr_63 [i_10] [i_1] = (((arr_26 [i_1]) << (arr_3 [i_17 + 1])));
                        arr_64 [i_1] [i_10] [i_13] = (arr_23 [i_17 - 1] [i_17 + 1] [i_17 + 1]);
                    }
                }
                var_37 = (arr_51 [i_1] [i_10] [i_10] [i_13]);
            }
            var_38 += (((arr_38 [i_1] [i_1] [i_1]) == var_15));
        }
    }
    for (int i_18 = 1; i_18 < 1;i_18 += 1)
    {
        var_39 += (((((arr_57 [i_18 - 1] [10] [i_18] [i_18] [10] [i_18]) ? (arr_57 [i_18 - 1] [14] [i_18] [i_18] [14] [8]) : (arr_57 [i_18 - 1] [12] [i_18] [i_18] [12] [i_18]))) & var_6));
        var_40 = var_3;
        var_41 = (244 == 111);
        var_42 = (max(((~(((arr_14 [1] [12] [i_18] [0]) ? (arr_26 [10]) : 13)))), var_15));

        /* vectorizable */
        for (int i_19 = 0; i_19 < 14;i_19 += 1)
        {
            var_43 = (((var_16 ? var_6 : (arr_61 [i_18] [i_18] [i_19] [11]))));
            /* LoopNest 2 */
            for (int i_20 = 1; i_20 < 13;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 14;i_21 += 1)
                {
                    {
                        var_44 = (max(var_44, ((((137 ^ -18080) ? 18446744073709551610 : (arr_25 [0] [i_19] [14]))))));
                        var_45 = (var_1 | (arr_72 [i_19] [i_18 - 1] [i_20 + 1] [i_20]));
                        var_46 = (max(var_46, (!var_18)));
                    }
                }
            }
        }
        for (int i_22 = 3; i_22 < 13;i_22 += 1)
        {
            arr_79 [i_22] = (((min((arr_76 [i_18 - 1] [i_22 + 1] [i_22 + 1] [i_22 - 3]), (arr_76 [i_18 - 1] [i_22 - 3] [i_22 - 2] [i_22 - 1]))) - (((-(((arr_75 [11]) + var_3)))))));
            var_47 = (min(var_10, var_14));
            var_48 = ((83 ? 16 : 18446744073709551594));
            arr_80 [i_22] |= ((((((arr_56 [8] [i_18] [i_18 - 1]) ? var_15 : (arr_56 [2] [i_18] [i_18])))) ? (((!(arr_56 [0] [i_18] [i_18])))) : ((min(var_15, (arr_56 [8] [i_18] [i_18]))))));
            arr_81 [i_18] = (arr_22 [i_18] [2]);
        }
        /* vectorizable */
        for (int i_23 = 0; i_23 < 14;i_23 += 1)
        {
            arr_84 [i_18 - 1] [i_18] [i_23] = var_6;
            var_49 = (arr_25 [i_23] [i_23] [i_23]);
            var_50 = var_19;
            var_51 = (((arr_13 [i_18 - 1] [i_18] [i_23] [i_23]) % (arr_13 [i_18 - 1] [i_23] [i_23] [i_18])));
        }
    }
    var_52 &= -var_16;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += (var_1 | var_6);
    var_13 = -var_0;

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_14 = (max((arr_1 [i_0]), (min(((-(arr_0 [i_0] [i_0]))), (((arr_1 [23]) / (arr_0 [i_0] [i_0])))))));

        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            arr_4 [i_1] = (min((arr_2 [i_0]), var_1));
            var_15 = (arr_0 [20] [20]);
            var_16 = var_11;
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_17 = var_1;
            arr_8 [i_0] [i_2] = -var_0;
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    {
                        arr_14 [i_0] [i_3] [i_3] [i_4] = (var_6 > 20744616);
                        arr_15 [i_3] = (min((arr_13 [i_3]), (arr_11 [i_0] [i_2] [i_2] [i_2])));
                    }
                }
            }

            for (int i_5 = 0; i_5 < 0;i_5 += 1)
            {
                arr_19 [i_0] [i_5] [i_0] = (~var_2);

                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {

                    for (int i_7 = 1; i_7 < 24;i_7 += 1) /* same iter space */
                    {
                        var_18 = (arr_11 [i_0] [i_2] [i_5] [15]);
                        var_19 = var_6;
                        var_20 = (((arr_11 [i_0] [i_0] [i_6] [i_7 + 1]) - (min((((var_3 && (arr_3 [i_0] [i_0] [i_0])))), (arr_11 [i_0] [i_0] [9] [i_0])))));
                        var_21 &= (((arr_2 [i_6]) ? var_8 : ((((max(0, var_1))) ? var_4 : var_5))));
                    }
                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 24;i_8 += 1) /* same iter space */
                    {
                        var_22 -= var_2;
                        arr_29 [i_0] [i_0] [24] [i_5] [i_5] [i_5] = ((~(arr_16 [i_0] [18] [1])));
                    }
                    arr_30 [i_6] [i_5] [i_5] [7] = (148 / var_11);
                    var_23 = ((((min((arr_5 [i_0] [i_6]), (-360179873 * 1)))) ? (arr_2 [i_2]) : (var_10 * 1401654724)));
                }
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    var_24 = (min(var_24, (((((var_11 < (((arr_24 [i_9] [i_2] [i_9]) ? var_8 : var_8)))) ? ((min((arr_31 [i_9] [1] [i_2]), (arr_31 [i_0] [i_5] [i_9])))) : (((!(((arr_5 [1] [i_9]) || (arr_24 [i_9] [i_0] [i_9])))))))))));
                    var_25 = ((~(arr_28 [i_2] [i_2] [i_2] [i_5 + 1] [i_5])));
                    var_26 = var_8;

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        arr_37 [i_0] [i_0] [i_5] = var_1;
                        arr_38 [1] [1] [i_5] [i_5] [i_9] [i_10] = (((2 ? var_3 : var_3)));
                        var_27 ^= ((((arr_31 [i_0] [1] [i_10]) || (arr_7 [1] [i_0]))));
                        var_28 = (min(var_28, 1));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        var_29 &= arr_0 [i_0] [i_2];
                        var_30 = (((((5197833986927933018 ? -5197833986927933019 : -5197833986927933018))) ? -574587414 : -328801138));
                        var_31 = var_9;
                    }
                    for (int i_12 = 1; i_12 < 24;i_12 += 1)
                    {
                        var_32 += (~var_9);
                        var_33 = (max(var_33, (arr_36 [i_9] [i_9])));
                        var_34 += ((((!(arr_3 [i_0] [i_2] [i_5 + 1]))) ? (var_0 * var_0) : var_9));
                    }
                }
                arr_45 [i_0] [22] [i_5] = ((var_8 ? 107684547 : (((min(3870446326, var_10)) | ((-670 ? 4294967276 : -118))))));
            }
        }
        arr_46 [i_0] = (((((var_4 ? 32744 : var_4))) || (arr_43 [i_0] [i_0] [i_0] [1] [i_0] [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 25;i_13 += 1) /* same iter space */
    {
        arr_49 [i_13] = (((arr_20 [i_13] [i_13]) << (((arr_48 [i_13]) - 103))));
        var_35 = var_4;
    }
    for (int i_14 = 0; i_14 < 25;i_14 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 25;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                {
                    var_36 = (min(((((arr_57 [i_14] [i_14] [i_15] [i_16]) ? var_11 : (arr_57 [20] [i_16] [i_16] [i_15])))), ((var_9 ? var_5 : (arr_57 [i_14] [i_15] [i_15] [i_16])))));
                    var_37 = var_0;

                    for (int i_17 = 0; i_17 < 25;i_17 += 1)
                    {
                        var_38 = var_4;
                        var_39 += var_9;
                        var_40 = (4294967291 || 2);
                    }
                    for (int i_18 = 2; i_18 < 21;i_18 += 1)
                    {

                        for (int i_19 = 2; i_19 < 22;i_19 += 1)
                        {
                            var_41 *= (min((((!(arr_21 [i_14] [i_14] [i_16] [i_18] [i_19 - 1])))), (min((arr_21 [10] [i_14] [i_16] [i_18 + 1] [i_19 + 1]), var_6))));
                            arr_69 [i_19 - 1] [i_15] [i_18] [i_15] [i_14] = (arr_18 [i_18]);
                        }
                        var_42 = (min(-32767, ((((4274222680 ? (arr_63 [i_14] [i_14]) : var_7))))));
                        arr_70 [i_18] [i_18] [i_18] [i_14] = ((((255 & (arr_43 [i_14] [i_18 - 1] [i_14] [i_18] [i_18 + 4] [0] [1]))) * (arr_17 [i_14] [i_14] [i_14])));
                        arr_71 [i_14] [i_14] [19] [i_18 - 1] [i_18] [i_15] = var_8;
                        var_43 *= var_3;
                    }
                    var_44 *= var_8;

                    /* vectorizable */
                    for (int i_20 = 0; i_20 < 1;i_20 += 1) /* same iter space */
                    {
                        var_45 = (arr_28 [i_14] [i_15] [0] [i_16] [i_20]);
                        arr_75 [i_20] [i_15] [i_20] = var_7;
                        arr_76 [i_20] [i_20] = ((var_8 ? (arr_34 [i_20] [i_20] [i_20] [i_20]) : (arr_58 [i_15] [i_16] [i_15] [i_14])));
                        var_46 = (arr_20 [i_16] [i_20]);
                    }
                    for (int i_21 = 0; i_21 < 1;i_21 += 1) /* same iter space */
                    {
                        var_47 = (min((arr_72 [i_16] [i_14]), ((((!var_9) ? (var_9 * var_1) : (arr_21 [i_14] [i_21] [i_15] [i_21] [i_14]))))));
                        arr_79 [i_21] [i_16] [2] [i_21] = ((var_8 ? (5317795612642410128 > -232741123) : (min(-1430186466, (~var_0)))));
                        var_48 = (arr_36 [i_16] [i_21]);
                        arr_80 [i_21] [1] [i_15] [i_21] = (var_4 << (var_10 - 28905));
                    }
                    for (int i_22 = 0; i_22 < 1;i_22 += 1) /* same iter space */
                    {
                        arr_84 [i_14] [i_22] [i_14] [i_22] = (~var_9);
                        var_49 *= (((var_0 / 17) ? 0 : 1));
                        arr_85 [i_14] [3] [i_16] [i_22] [i_22] [12] = var_9;
                    }
                }
            }
        }
        var_50 *= var_6;

        for (int i_23 = 0; i_23 < 25;i_23 += 1)
        {
            var_51 *= (arr_7 [i_14] [i_23]);
            arr_88 [i_14] [i_23] = (arr_62 [i_14] [i_23]);
            arr_89 [i_14] [i_14] [i_23] &= (arr_32 [i_23] [20] [i_23]);
            var_52 = ((var_3 % (((((var_9 ? var_2 : -995321654))) ? ((var_2 + (arr_43 [i_23] [1] [i_14] [i_14] [20] [i_14] [i_14]))) : var_0))));
        }
    }
    var_53 = max((253 > -1521368339), ((var_6 ? var_6 : ((var_5 ? var_0 : -6013)))));
    #pragma endscop
}

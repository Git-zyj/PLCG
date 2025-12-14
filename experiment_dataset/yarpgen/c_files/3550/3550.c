/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_12 = (max(((((((arr_2 [i_0]) ? var_5 : var_6))) ? (((arr_1 [i_0] [i_0]) ? var_3 : var_5)) : (arr_2 [i_0 - 2]))), (((!(arr_1 [i_0 + 1] [i_0 + 1]))))));
        arr_3 [i_0] [i_0] = ((47385 ? 18152 : 0));
        arr_4 [i_0 + 1] [i_0] = (min((max(((var_0 ? (arr_2 [i_0]) : var_6)), (arr_2 [i_0 - 2]))), (47385 * 0)));
        arr_5 [15] = (arr_2 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 20;i_1 += 1) /* same iter space */
    {
        var_13 = var_9;
        arr_9 [i_1] = var_1;

        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            arr_12 [i_2] [i_1] [i_2] = (var_0 + -var_3);

            for (int i_3 = 3; i_3 < 22;i_3 += 1)
            {
                arr_15 [i_2] [i_2] [i_2] = ((!(var_8 & var_5)));
                var_14 = var_0;
                arr_16 [i_2] [i_2] [i_1 - 2] [i_2] = var_1;

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    arr_19 [i_2] [i_3] [i_2 + 2] [i_2 + 2] [i_1] [i_2] = ((arr_17 [i_4] [i_3] [i_1] [i_1]) ? ((~(arr_0 [i_3 - 3]))) : (var_3 <= var_11));
                    var_15 = var_3;
                    arr_20 [i_2] = ((~(var_6 && var_9)));
                    var_16 = (((arr_7 [i_3] [i_2 + 2]) ? var_11 : var_9));
                    var_17 = ((~(arr_13 [i_4] [i_4] [i_2 + 1] [i_1 - 2])));
                }
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    arr_25 [i_2] [i_2] = ((-(arr_2 [i_1 - 2])));
                    var_18 = arr_7 [i_5] [i_1];
                }
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    arr_29 [i_6] [i_3 - 2] [i_2] [i_2] [i_1 + 3] [i_1 + 3] = (arr_2 [i_1 - 2]);
                    var_19 = (arr_18 [i_1] [16] [i_2] [i_1] [i_1]);
                    arr_30 [i_2] [i_3] [i_2] [i_2] = (arr_2 [i_1 + 2]);
                    var_20 = ((var_1 != (arr_1 [i_1] [i_1])));
                }
            }
        }
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            var_21 = (47374 / var_3);
            arr_33 [i_7] [i_1] = ((((((arr_23 [i_7] [i_1] [i_7] [i_1] [i_1] [i_1]) ? var_8 : (arr_28 [18] [i_1] [i_1])))) ? (((!(arr_8 [15])))) : ((var_5 ? var_8 : (arr_23 [i_7] [i_7] [i_7] [i_1] [i_1] [i_1])))));
        }
        var_22 = (arr_24 [i_1 + 1] [1] [i_1 + 2] [i_1 + 2]);
        arr_34 [i_1] = var_4;
    }
    for (int i_8 = 2; i_8 < 20;i_8 += 1) /* same iter space */
    {
        arr_39 [i_8] = (min(((max(var_8, (arr_38 [i_8 - 2])))), (((arr_38 [i_8 - 2]) * (arr_38 [i_8 - 2])))));

        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 3; i_12 < 22;i_12 += 1)
                    {
                        {
                            var_23 = ((1 ? (!1961578169) : 18150));
                            var_24 = var_8;
                            arr_50 [i_11] [i_11] [i_9] [i_9] [i_9] [i_8] = (((((262128700 ? 18162 : var_3))) != (max(47388, (7 - -1421848587387624536)))));
                            var_25 = ((((((arr_48 [i_11] [i_9] [14] [i_9] [i_11 - 1]) ? (arr_48 [i_12 - 3] [i_9] [16] [i_9] [i_11]) : var_4))) ? (((((var_9 ? var_6 : var_11))) ? var_11 : 1)) : (max((arr_49 [i_8 + 3] [i_8 + 2]), 2619354177))));
                        }
                    }
                }
            }
            arr_51 [17] [i_9] [20] = ((min(((~(-2147483647 - 1))), (!var_3))));

            /* vectorizable */
            for (int i_13 = 0; i_13 < 23;i_13 += 1) /* same iter space */
            {
                arr_54 [i_9] = ((((((arr_26 [2] [i_8] [2] [i_9] [i_8] [i_8 + 1]) ? var_8 : var_11))) ? (((arr_28 [i_13] [i_9] [i_8]) ? (arr_27 [i_8]) : var_9)) : (arr_44 [i_8] [i_8])));
                arr_55 [i_13] [i_9] [i_9] [18] = (arr_43 [i_13] [i_9] [i_8]);
            }
            for (int i_14 = 0; i_14 < 23;i_14 += 1) /* same iter space */
            {
                var_26 = ((-((max((max(var_1, (arr_27 [i_9]))), (max(var_10, var_2)))))));
                var_27 = var_9;
            }
            arr_59 [i_9] [i_8] [i_9] = ((((((arr_58 [i_9] [i_8 - 1] [8] [i_9]) ? ((max(47374, 15834))) : var_7))) || ((max(((var_0 ? var_4 : var_3)), var_0)))));
            arr_60 [i_9] [i_8] [i_9] = ((6427 ? (((arr_22 [i_9] [i_9] [i_9] [i_9] [11]) ? (max(var_11, (arr_13 [i_9] [i_9] [1] [i_8]))) : (arr_49 [i_8 + 1] [i_8 + 1]))) : (((-(arr_42 [i_9] [i_9]))))));
        }
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 23;i_15 += 1)
        {
            for (int i_16 = 1; i_16 < 22;i_16 += 1)
            {
                for (int i_17 = 1; i_17 < 1;i_17 += 1)
                {
                    {
                        arr_70 [i_17] [i_8 + 3] [i_15] [i_15] [i_8 + 3] = ((-(((arr_58 [i_15] [i_17] [i_17] [i_15]) + var_3))));
                        var_28 = (max(((~(((arr_13 [1] [i_8 + 2] [i_15] [i_8 + 2]) ? (arr_41 [6]) : var_7)))), (~1)));
                        var_29 = (((arr_57 [i_17] [17] [i_8]) - ((((((~(arr_46 [i_16] [2] [i_8])))) ? ((max(var_9, var_6))) : ((var_9 ? 1 : var_6)))))));
                    }
                }
            }
        }
        var_30 = (((arr_6 [i_8 + 1]) ? ((var_11 ? (arr_6 [i_8 - 1]) : (arr_6 [i_8 - 2]))) : ((max((arr_6 [i_8 + 2]), (arr_6 [i_8 + 2]))))));
        var_31 = ((var_11 ? (((arr_40 [i_8] [i_8]) >> (arr_40 [i_8] [i_8]))) : (47385 == 65535)));
    }
    /* LoopNest 2 */
    for (int i_18 = 0; i_18 < 25;i_18 += 1)
    {
        for (int i_19 = 1; i_19 < 23;i_19 += 1)
        {
            {

                for (int i_20 = 0; i_20 < 25;i_20 += 1)
                {
                    var_32 = ((max(var_1, (~var_10))));
                    arr_80 [i_18] [i_19] [i_18] = ((!49702) || (arr_76 [i_19 + 2] [i_19 - 1] [i_18] [i_18]));
                    arr_81 [i_20] [i_20] [i_19] [i_18] = (max(var_9, (min(((max(-76, 52256))), -60312984))));
                    arr_82 [i_20] [3] [3] [i_18] = ((65531 ? 6433 : 6448));
                }
                arr_83 [i_19 + 2] [i_18] = (max((var_9 >= var_6), (((var_8 % var_8) != 78))));
                var_33 = ((47374 < (!1)));
            }
        }
    }
    var_34 = ((!((max(var_2, var_1)))));
    #pragma endscop
}

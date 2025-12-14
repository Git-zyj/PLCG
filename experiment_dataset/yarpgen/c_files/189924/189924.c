/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((~((min((max(var_5, var_16)), -97)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, (arr_5 [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_19 = (max(var_19, var_0));
                                arr_14 [i_2] [i_1] [i_2] [i_0] [i_4] [i_0] = arr_0 [i_4 + 2];
                            }
                        }
                    }
                    var_20 = (min(var_20, var_3));
                    arr_15 [i_2] [i_1] [i_1] [i_0] = arr_5 [i_0];
                    var_21 = (max(var_21, (max(((((arr_6 [i_0] [i_1] [i_2]) >= (arr_9 [i_0] [i_2 - 1] [i_2 - 2] [i_2 + 4] [i_2 - 2])))), (arr_9 [i_0] [i_1] [i_1] [i_2 - 2] [i_2 - 2])))));
                }
            }
        }
    }
    var_22 = (max((min(var_3, (~var_14))), var_2));
    var_23 *= var_14;

    /* vectorizable */
    for (int i_5 = 3; i_5 < 22;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 4; i_7 < 22;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    {
                        arr_27 [i_5] [20] [i_5 + 2] [i_5] [i_5 + 1] = -var_16;
                        arr_28 [i_5] [i_6] [i_5] [i_8] = ((!(arr_16 [i_7 + 2] [13])));
                        arr_29 [i_5] [i_6] [i_5] [i_8] [i_5 - 2] = ((var_13 || (arr_24 [i_7 - 1] [i_7 - 2] [i_7] [i_8])));
                        arr_30 [4] [i_6] [i_8] = (((arr_24 [i_5 - 3] [i_5] [i_5] [i_5]) <= 60));
                    }
                }
            }
            arr_31 [i_5] [i_5 - 3] [i_5 - 3] = (((arr_20 [i_5 - 1]) * (arr_20 [i_5 + 1])));
            arr_32 [i_5 + 1] [i_5] = arr_24 [2] [i_6] [i_6] [i_6];
            var_24 ^= (arr_17 [i_5 - 3]);
        }
        for (int i_9 = 1; i_9 < 23;i_9 += 1)
        {
            var_25 = (((arr_24 [i_5 + 2] [i_5 + 1] [i_5 - 2] [i_5]) - (arr_24 [i_5 - 2] [i_5 + 2] [i_9 - 1] [i_9])));
            var_26 += (((arr_16 [i_5 - 3] [i_5 - 3]) ? (arr_16 [i_5 - 1] [i_5]) : (arr_16 [i_5 - 1] [i_5])));
            var_27 = (min(var_27, (((var_10 ? var_15 : (arr_16 [i_5 - 3] [i_9 - 1]))))));
        }
        var_28 = ((var_16 ? (arr_24 [13] [17] [i_5] [i_5 - 2]) : (arr_18 [i_5] [i_5 + 1])));
        arr_35 [i_5] [i_5] = (((var_9 % -106) || (arr_33 [i_5 - 1] [i_5 + 1])));
        var_29 = (max(var_29, 60));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
    {
        var_30 = ((var_16 / (arr_33 [14] [i_10])));
        arr_40 [i_10] [9] = (((arr_3 [i_10]) ? var_1 : (~var_2)));

        for (int i_11 = 0; i_11 < 10;i_11 += 1) /* same iter space */
        {
            arr_43 [i_10] [i_11] [i_11] = ((~(arr_21 [i_10] [i_10])));
            arr_44 [i_10] [3] [7] = arr_41 [i_10] [i_10] [i_10];
        }
        for (int i_12 = 0; i_12 < 10;i_12 += 1) /* same iter space */
        {
            arr_49 [i_10] [i_12] = (~var_1);
            var_31 = (max(var_31, (arr_23 [i_10] [i_10] [i_10] [i_10])));
        }
    }
    for (int i_13 = 0; i_13 < 10;i_13 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_14 = 2; i_14 < 7;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 10;i_15 += 1)
            {
                {
                    var_32 = max((max((arr_13 [20] [i_14 - 2] [i_14] [i_15]), (min(var_7, var_12)))), var_15);
                    var_33 -= ((((max(var_12, (arr_17 [i_14 + 3])))) << (((arr_17 [i_14 - 1]) + 62))));
                    arr_58 [i_15] [i_14] [i_13] = (var_8 * var_0);
                    var_34 -= ((((min((arr_21 [4] [i_14]), (arr_11 [i_15] [i_14 + 3] [i_14 + 2] [i_14] [i_14] [i_14 + 1] [i_13])))) % ((min(((((arr_20 [i_14]) <= (arr_22 [9])))), (arr_26 [i_13] [0] [i_15] [i_13]))))));
                    var_35 = (min((((arr_3 [i_14 - 1]) / (arr_42 [i_14 + 2] [i_14 - 2] [i_14 + 2]))), ((max((arr_22 [16]), (arr_47 [i_13] [9]))))));
                }
            }
        }
        var_36 = (max(var_36, (((~((min(var_3, (arr_53 [i_13] [i_13])))))))));
        var_37 = max(var_15, var_8);

        /* vectorizable */
        for (int i_16 = 0; i_16 < 10;i_16 += 1)
        {
            var_38 = var_13;
            var_39 = (min(var_39, ((((arr_26 [i_13] [i_13] [19] [i_16]) << (((((arr_17 [i_16]) + (arr_4 [i_13] [0] [i_13]))) + 28)))))));
            var_40 &= ((!(arr_50 [i_13] [6])));

            for (int i_17 = 0; i_17 < 10;i_17 += 1)
            {
                arr_65 [i_13] [i_13] [i_13] = (((arr_47 [i_13] [i_16]) / (((arr_39 [7]) * (arr_22 [4])))));
                arr_66 [i_16] = arr_42 [i_16] [i_16] [i_13];
                /* LoopNest 2 */
                for (int i_18 = 1; i_18 < 9;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 10;i_19 += 1)
                    {
                        {
                            arr_73 [i_13] [i_13] [i_13] [i_18] [i_13] = ((-(arr_0 [i_18 - 1])));
                            arr_74 [6] [i_18] = arr_13 [i_13] [i_16] [i_18] [i_19];
                            arr_75 [i_18] = ((!(arr_56 [i_18 + 1])));
                            arr_76 [i_18] = var_3;
                        }
                    }
                }
                arr_77 [i_17] [i_13] [7] [i_17] = ((~(arr_45 [i_13] [i_16] [i_17])));
                var_41 = (arr_61 [i_13] [i_16] [i_17]);
            }
        }
    }
    #pragma endscop
}

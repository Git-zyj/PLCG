/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_4));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((~(arr_1 [i_0]))) != var_8);
        arr_3 [i_0] [i_0] = ((((arr_0 [i_0] [i_0]) ? var_10 : (~var_12))));
        var_20 += (max(106, var_16));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_21 = ((((((arr_5 [i_1]) - (arr_5 [i_1])))) ? (arr_4 [i_1]) : (arr_5 [i_1])));
        var_22 &= ((!(arr_5 [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            var_23 = (min(var_23, ((((arr_11 [i_2] [i_3] [i_3]) ? (arr_11 [i_2] [i_3] [i_2]) : var_3)))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    {
                        var_24 = (max(var_24, var_6));
                        var_25 = (max(var_25, (((-(arr_10 [i_2] [i_3] [i_4]))))));
                        var_26 = (min(var_26, ((((((arr_5 [i_3]) + 9223372036854775807)) << (((arr_9 [i_2] [i_2]) - 110)))))));
                        var_27 = (max(var_27, (((-((var_12 ? var_4 : var_7)))))));
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            arr_22 [i_2] [i_2] = ((-(((arr_20 [i_2]) ? (arr_12 [i_2] [i_2] [i_6]) : var_8))));

            for (int i_7 = 1; i_7 < 14;i_7 += 1)
            {
                arr_25 [i_2] = (arr_17 [i_7 + 1] [i_6] [i_7]);
                /* LoopNest 2 */
                for (int i_8 = 3; i_8 < 14;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 0;i_9 += 1)
                    {
                        {
                            var_28 = ((~(arr_14 [i_2] [i_9 + 1] [i_7 + 1])));
                            var_29 = (max(var_29, ((((-2147483647 - 1) ? -78 : 268435456)))));
                            arr_30 [i_7] [i_8] [i_6] [i_7] [i_6] [i_2] = (((arr_10 [i_2] [i_7 + 1] [i_8 - 2]) ? ((((var_6 + 2147483647) << (var_8 - 4133680026257046328)))) : (arr_17 [i_2] [i_7 + 1] [i_8 - 3])));
                            var_30 = (max(var_30, (((-(arr_27 [i_2] [i_6] [i_7 - 1] [i_9]))))));
                        }
                    }
                }
                var_31 = (~var_15);
            }
            for (int i_10 = 4; i_10 < 14;i_10 += 1)
            {
                var_32 = (arr_17 [i_10 - 3] [i_6] [i_10 - 3]);
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        {
                            arr_38 [i_2] [i_6] [i_10 - 4] [i_6] [i_11] [i_12] = (~(!var_0));
                            var_33 = (min(var_33, (((89 ? -1395569021 : (-127 - 1))))));
                        }
                    }
                }
            }
            for (int i_13 = 1; i_13 < 14;i_13 += 1)
            {
                var_34 ^= (arr_19 [i_6]);
                var_35 = ((!(arr_29 [i_13] [i_6] [i_6])));
                var_36 = (max(var_36, (arr_11 [i_13] [4] [i_13 - 1])));

                for (int i_14 = 1; i_14 < 14;i_14 += 1)
                {
                    var_37 = (min(var_37, ((((((arr_20 [i_2]) ? var_5 : (arr_18 [i_13]))) | var_7)))));
                    var_38 = (min(var_38, (((((((arr_43 [i_2] [i_2] [i_2] [i_14 - 1] [6]) ? var_10 : var_10))) ? (~var_1) : ((~(arr_12 [i_14] [i_13] [i_2]))))))));
                }
            }
            var_39 = (max(var_39, -var_7));

            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                arr_49 [i_2] [i_15] = ((var_11 ? var_12 : (arr_20 [i_6])));
                var_40 ^= (((arr_42 [i_2] [i_2]) ? (arr_24 [i_15] [i_6] [i_2] [i_2]) : (arr_29 [i_2] [i_6] [i_15])));
            }
            for (int i_16 = 3; i_16 < 12;i_16 += 1)
            {
                var_41 = (max(var_41, (arr_7 [i_16 - 3])));
                var_42 = (max(var_42, var_10));
            }
            for (int i_17 = 1; i_17 < 11;i_17 += 1)
            {

                for (int i_18 = 0; i_18 < 15;i_18 += 1)
                {
                    var_43 = (((((var_4 ? (arr_56 [i_2] [i_2] [i_2] [i_17 + 4] [i_18] [i_18]) : (arr_17 [i_2] [i_6] [i_17 + 4])))) ? (arr_48 [i_17 + 3] [9] [i_17] [i_17 + 3]) : (~var_10)));
                    arr_58 [i_2] [i_6] [i_2] [i_18] = (((arr_54 [i_6] [2] [i_17] [i_17 + 4]) ? (arr_54 [i_2] [i_2] [i_6] [i_17 - 1]) : (arr_54 [i_17] [i_17 - 1] [i_17] [i_17 + 2])));
                    var_44 = (((arr_44 [2] [i_6] [i_17 + 4] [i_2] [2] [i_17]) ? (arr_44 [i_2] [i_2] [i_6] [i_17 + 3] [i_17 - 1] [i_17 + 3]) : var_18));
                    var_45 = (((arr_33 [i_6] [i_17 - 1] [i_17 + 1] [i_17 + 2] [i_17 + 2]) ? -var_4 : -var_8));
                }
                var_46 &= ((var_8 ? (arr_55 [i_17 + 2] [i_17 + 1] [i_17 + 3]) : (arr_55 [i_17 + 2] [i_17 + 1] [i_17 + 3])));
            }
        }
        /* LoopNest 2 */
        for (int i_19 = 0; i_19 < 15;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 1;i_20 += 1)
            {
                {
                    var_47 = (arr_7 [i_20]);
                    arr_67 [i_20] [i_19] = (arr_4 [i_2]);
                }
            }
        }
        arr_68 [i_2] = (arr_64 [i_2] [i_2]);
        /* LoopNest 3 */
        for (int i_21 = 0; i_21 < 1;i_21 += 1)
        {
            for (int i_22 = 0; i_22 < 15;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 15;i_23 += 1)
                {
                    {
                        arr_77 [i_23] [i_22] [i_21] [i_2] = -var_3;

                        for (int i_24 = 0; i_24 < 15;i_24 += 1)
                        {
                            arr_82 [i_2] [i_21] [i_22] [i_24] [i_24] = ((~(arr_48 [i_24] [i_23] [i_22] [i_2])));
                            arr_83 [i_21] [i_21] [i_21] [i_21] [i_21] = (arr_31 [i_21] [i_22] [i_23] [i_24]);
                        }
                    }
                }
            }
        }
    }
    var_48 = -var_12;
    #pragma endscop
}

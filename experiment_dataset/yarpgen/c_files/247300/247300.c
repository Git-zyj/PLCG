/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -49421;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                arr_6 [i_1] = ((var_5 ? ((min(18, 31277))) : ((min((arr_4 [i_1] [i_1 - 3] [i_1 - 2] [i_1]), (arr_4 [i_1] [i_1 + 1] [i_1 + 1] [i_1]))))));
                var_15 = ((~((0 ? (arr_3 [i_1 - 1] [i_1 + 1]) : var_1))));
                arr_7 [i_1 - 3] [i_1] = arr_1 [i_2] [i_0];
            }
            var_16 = max((max((arr_3 [5] [i_1 - 1]), var_1)), (max(var_13, (var_6 & var_11))));
        }
        for (int i_3 = 4; i_3 < 8;i_3 += 1)
        {
            var_17 = (max((((arr_9 [i_0] [i_3]) ? var_10 : ((-(arr_9 [i_0] [i_3 + 2]))))), -var_10));
            var_18 = ((((((-(arr_1 [i_3] [i_0])))) ? (min(var_4, var_9)) : (min(var_11, var_4)))));
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 7;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    {
                        var_19 = var_11;
                        var_20 *= ((((((~var_11) & var_7))) ? ((((max(15851, var_4))) ? ((var_10 ? 1 : 22)) : var_8)) : ((1 ? 0 : 0))));
                    }
                }
            }

            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                arr_19 [3] [i_3] [i_6] = var_6;

                for (int i_7 = 1; i_7 < 9;i_7 += 1)
                {
                    var_21 = ((7779 ? (((!1) ? (arr_22 [i_3] [i_3] [i_6] [i_7]) : (arr_4 [i_7] [i_6] [i_3] [i_7]))) : (((min(68, -3415))))));
                    var_22 = (24935 * 46540);
                    var_23 = ((24935 + (((-(arr_15 [i_7] [i_6] [i_3] [i_0]))))));

                    for (int i_8 = 0; i_8 < 0;i_8 += 1)
                    {
                        arr_27 [i_0] [i_3] [i_3] [i_7] [5] [2] [i_7] = min((var_1 != 6787), var_3);
                        var_24 = ((158 / ((-((165 ? (arr_22 [i_3 - 3] [i_3] [7] [i_7]) : (arr_5 [i_0] [i_6] [i_7] [i_8 + 1])))))));
                    }
                    for (int i_9 = 1; i_9 < 9;i_9 += 1)
                    {
                        arr_30 [i_7] [0] [i_7] = ((((((arr_17 [i_3 + 1] [i_7 + 1] [i_9 - 1]) ? (arr_17 [i_3 - 4] [i_7 - 1] [i_9 - 1]) : (arr_17 [i_3 - 3] [i_7 - 1] [i_9 - 1])))) ? ((-(arr_17 [i_3 - 2] [i_7 + 1] [i_9 + 2]))) : (((((arr_17 [i_3 + 2] [i_7 + 2] [i_9 + 1]) + 2147483647)) >> (var_13 - 13646444394440099229)))));
                        arr_31 [i_7] [i_7] [8] [i_7 - 1] [i_6] = var_13;
                    }
                    for (int i_10 = 3; i_10 < 9;i_10 += 1)
                    {
                        var_25 = (max(var_11, var_2));
                        var_26 = (min(1, -var_9));
                        var_27 = (min(var_27, ((((((var_11 << (var_6 - 4670750663876603908)))) ? ((~(arr_18 [i_10 + 2] [i_7] [i_3]))) : var_9)))));
                        arr_35 [i_3 - 1] [i_7] [i_7] [i_10] = (((arr_1 [0] [2]) == (arr_0 [i_0] [i_0])));
                    }
                }
                for (int i_11 = 1; i_11 < 10;i_11 += 1)
                {

                    /* vectorizable */
                    for (int i_12 = 2; i_12 < 9;i_12 += 1)
                    {
                        var_28 = arr_15 [i_0] [i_3 + 3] [i_12 - 1] [i_12 + 1];
                        var_29 *= (arr_21 [i_3 - 1] [i_3] [i_0] [i_11 - 1]);
                        arr_40 [i_0] [i_3] [i_6] [i_11] [i_12] [i_0] [i_12 + 2] = (arr_17 [i_12] [i_12] [i_3 - 3]);
                        var_30 = ((((((arr_16 [9] [i_6] [i_3 - 4] [i_0]) ? 59290 : var_2))) ? ((var_0 / (arr_39 [i_6] [5]))) : ((var_12 ? 16383 : 1))));
                        var_31 = var_2;
                    }
                    for (int i_13 = 3; i_13 < 10;i_13 += 1)
                    {
                        var_32 &= (arr_11 [i_6]);
                        var_33 = (-((var_10 ? (var_10 & var_3) : var_3)));
                        arr_45 [i_0] [i_3] [i_6] [i_13] [i_13 - 3] = (((108 ? (((157 ? 25799 : 16))) : (min(18446744073709551615, 0)))));
                    }
                    arr_46 [i_11] [i_3] &= ((((min((max(var_7, (arr_14 [i_11] [i_6] [i_3] [i_0]))), (min((arr_14 [10] [i_3] [i_6] [i_11]), var_0))))) * (max(((-(arr_44 [i_6] [i_6] [i_6] [i_3 + 2] [i_6]))), (arr_15 [i_11] [i_3] [i_6] [i_11 + 1])))));
                    var_34 = var_5;
                }
                for (int i_14 = 2; i_14 < 9;i_14 += 1) /* same iter space */
                {
                    var_35 = var_5;
                    var_36 = ((var_2 || (((min(var_1, 19292))))));
                }
                for (int i_15 = 2; i_15 < 9;i_15 += 1) /* same iter space */
                {
                    var_37 *= (arr_14 [0] [i_15] [i_15] [i_15 + 1]);
                    var_38 ^= (((-17 % var_9) ? 104 : 39737));
                    var_39 = min((min(var_9, ((~(arr_24 [i_15] [i_6] [i_3] [1]))))), (!var_5));
                }
                var_40 = ((((max((arr_18 [i_0] [i_3] [i_3 - 3]), (arr_2 [i_6] [i_6] [i_3 - 2])))) || (~var_7)));

                for (int i_16 = 1; i_16 < 9;i_16 += 1)
                {
                    var_41 &= var_11;
                    var_42 = (var_2 || 1);
                }
                /* vectorizable */
                for (int i_17 = 4; i_17 < 9;i_17 += 1)
                {
                    arr_59 [i_0] [i_3] [i_6] [i_6] &= (arr_3 [i_0] [i_0]);
                    var_43 = ((-(((arr_25 [i_0] [i_0] [i_6] [i_17] [i_17]) - var_0))));
                    var_44 = (243 - -7);
                }
            }
            /* vectorizable */
            for (int i_18 = 1; i_18 < 1;i_18 += 1)
            {

                for (int i_19 = 3; i_19 < 10;i_19 += 1)
                {

                    for (int i_20 = 0; i_20 < 11;i_20 += 1)
                    {
                        var_45 = -var_8;
                        arr_68 [i_0] [6] [i_0] [i_19] [i_19 - 3] [i_20] [i_20] |= ((!(arr_22 [i_0] [i_19 - 2] [i_3 + 3] [i_0])));
                    }

                    for (int i_21 = 0; i_21 < 1;i_21 += 1)
                    {
                        var_46 = (arr_69 [8] [i_18] [i_19 - 1] [i_18 - 1] [i_18] [i_0]);
                        var_47 = 49117;
                    }
                    for (int i_22 = 3; i_22 < 10;i_22 += 1)
                    {
                        arr_73 [i_18] = (((arr_69 [i_0] [i_18] [i_3 - 2] [i_19 - 1] [i_22 - 1] [i_22]) ? (arr_43 [i_18] [i_3] [i_18 - 1] [i_19] [i_19] [i_3 - 4]) : ((var_13 ? (arr_38 [i_22] [i_18] [i_18] [i_3] [i_0]) : (arr_67 [i_3] [i_19 - 3] [i_22 + 1])))));
                        var_48 = var_8;
                    }
                }
                var_49 = (max(var_49, -1));
            }
            var_50 = (max(var_10, (((arr_43 [1] [i_3 - 4] [i_3 - 2] [i_3 - 1] [i_0] [i_3]) ? var_12 : var_11))));
        }
        arr_74 [i_0] = var_7;
        /* LoopNest 2 */
        for (int i_23 = 1; i_23 < 7;i_23 += 1)
        {
            for (int i_24 = 0; i_24 < 11;i_24 += 1)
            {
                {
                    var_51 &= var_7;
                    var_52 = (((((((max((arr_4 [i_23] [i_0] [i_23 + 4] [i_24]), 141))) * var_7))) ? (var_2 >= var_10) : (arr_4 [i_23] [i_23] [i_23] [i_23])));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_25 = 0; i_25 < 11;i_25 += 1)
        {
            for (int i_26 = 0; i_26 < 11;i_26 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_27 = 0; i_27 < 11;i_27 += 1)
                    {
                        for (int i_28 = 0; i_28 < 11;i_28 += 1)
                        {
                            {
                                arr_90 [i_25] [i_25] [i_26] [i_27] [i_28] = (arr_89 [i_0] [i_25] [1] [i_26] [i_27] [i_28]);
                                var_53 = ((max((~var_1), (((arr_66 [i_0] [i_25] [i_26] [i_26] [i_27] [i_28] [i_28]) ? (arr_18 [i_0] [i_26] [i_26]) : var_8)))));
                                arr_91 [i_0] [i_25] [i_28] [i_27] [i_28] = var_9;
                                arr_92 [10] [i_26] &= ((!((!((min((arr_21 [i_0] [i_25] [i_25] [i_27]), 172)))))));
                            }
                        }
                    }
                    var_54 = (max(58, 39607));
                    var_55 = var_3;
                    var_56 &= var_1;
                    var_57 |= (((((((var_13 ? (arr_78 [i_25] [i_25] [i_26] [i_26]) : var_10))) || (arr_85 [i_0]))) ? 46374 : ((~((max(var_8, var_11)))))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_29 = 0; i_29 < 11;i_29 += 1)
        {
            for (int i_30 = 0; i_30 < 11;i_30 += 1)
            {
                for (int i_31 = 0; i_31 < 11;i_31 += 1)
                {
                    {
                        var_58 = (max(var_58, (((-((var_2 ? (arr_11 [i_30]) : (((max(var_1, 39613)))))))))));
                        arr_102 [i_31] [i_0] = -182;
                    }
                }
            }
        }
    }
    #pragma endscop
}

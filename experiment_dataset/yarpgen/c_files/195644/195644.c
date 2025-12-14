/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_20 = var_15;
                            arr_12 [i_3] = ((3665445399 ? -21489 : -51));
                        }
                    }
                }
                arr_13 [i_0] [6] = ((4294967272 ? -512 : 32764));
                var_21 = (arr_5 [i_0] [i_1] [i_1]);
            }
        }
    }

    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        var_22 = (min(var_22, var_10));
        var_23 = var_4;

        /* vectorizable */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                var_24 -= 17633;
                arr_21 [i_4] [i_5] [i_6] = 17620;
                var_25 = (max(var_25, var_2));
                var_26 += (((arr_15 [i_4] [i_5]) ? (arr_15 [i_4] [i_6]) : (arr_19 [i_6])));
            }
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    {
                        var_27 ^= (((-17633 + 2147483647) >> (var_0 - 915472436)));
                        var_28 = (min(var_28, (arr_18 [i_4])));
                    }
                }
            }
            var_29 = (min(var_29, (arr_23 [i_4])));
        }
        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            var_30 = (max(var_30, var_16));
            var_31 -= (arr_14 [7]);
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 21;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    {

                        for (int i_12 = 0; i_12 < 24;i_12 += 1)
                        {
                            arr_37 [i_10] = -1751681376895403833;
                            arr_38 [i_10] = arr_22 [i_4] [i_4];
                            var_32 = (min(var_32, (arr_22 [20] [i_9])));
                        }
                        var_33 = ((-((((-1751681376895403841 ? -7925 : 4294967287)) / (((arr_20 [i_4] [i_9] [i_9] [i_4]) * 2648934417))))));
                    }
                }
            }
        }

        for (int i_13 = 0; i_13 < 24;i_13 += 1)
        {

            /* vectorizable */
            for (int i_14 = 0; i_14 < 24;i_14 += 1) /* same iter space */
            {
                var_34 ^= (((arr_20 [i_13] [i_13] [i_4] [i_4]) ? (((arr_32 [i_4] [21]) ? (arr_32 [i_4] [i_4]) : 2648934412)) : (arr_17 [i_4] [i_4] [i_4])));
                arr_43 [16] [i_4] [i_4] &= ((var_11 ? (arr_17 [i_4] [i_13] [i_4]) : (arr_14 [i_4])));
            }
            for (int i_15 = 0; i_15 < 24;i_15 += 1) /* same iter space */
            {
                arr_46 [i_4] [i_4] &= (((((arr_33 [i_4] [i_4] [i_4] [23]) ? (arr_33 [i_15] [i_13] [i_13] [i_4]) : (arr_33 [0] [i_4] [i_13] [i_4]))) - -var_17));
                arr_47 [i_4] [11] [11] = (arr_18 [i_4]);

                for (int i_16 = 0; i_16 < 24;i_16 += 1)
                {
                    arr_50 [i_4] [i_4] [i_4] [i_4] = (arr_44 [i_4] [4] [4] [6]);
                    var_35 = var_11;
                    var_36 = (((arr_44 [i_13] [i_15] [i_13] [i_4]) ? (((max((arr_44 [i_16] [i_15] [i_4] [i_4]), (arr_44 [i_4] [i_4] [i_4] [i_4]))))) : (min((arr_44 [1] [19] [i_15] [i_16]), var_16))));
                    arr_51 [8] [5] [8] [5] [8] [5] = (arr_30 [i_4] [i_13] [i_15] [16]);
                    var_37 = var_0;
                }
                for (int i_17 = 0; i_17 < 24;i_17 += 1)
                {

                    for (int i_18 = 0; i_18 < 24;i_18 += 1)
                    {
                        arr_56 [i_15] [i_15] [i_15] [i_4] [i_4] = var_11;
                        arr_57 [i_4] [i_13] [i_13] = (((((var_2 ? var_18 : var_11)))));
                        var_38 = ((((min((arr_16 [i_4] [i_15] [i_17]), ((36458 + (arr_35 [21] [i_17] [i_15] [i_13] [i_4])))))) ? (arr_18 [i_4]) : var_7));
                    }
                    for (int i_19 = 0; i_19 < 24;i_19 += 1)
                    {
                        arr_60 [7] [i_19] [i_19] [i_19] [i_4] = (((arr_14 [i_19]) ? var_19 : (~13347)));
                        var_39 += (min((((4294967272 ? 14 : 190))), (min((arr_28 [18]), 1214900067))));
                        var_40 = (min(var_40, (arr_30 [i_4] [11] [i_15] [i_17])));
                        var_41 = (min(var_41, (((var_5 ? (((((var_17 ? var_18 : var_0)) ^ 8745))) : (((arr_35 [i_4] [i_17] [i_13] [i_13] [i_4]) | var_7)))))));
                    }
                    var_42 ^= (min(1, 1751681376895403835));
                }
            }

            for (int i_20 = 0; i_20 < 1;i_20 += 1) /* same iter space */
            {
                var_43 = ((((((arr_36 [i_4] [i_4] [i_4] [i_20] [i_20]) ? (arr_36 [i_4] [i_4] [i_20] [i_20] [i_4]) : (arr_34 [i_13] [i_13] [i_13] [i_13] [i_13])))) ? (arr_36 [i_4] [i_4] [i_4] [i_4] [i_4]) : ((0 ? 1 : 7948))));
                var_44 = (min(var_44, var_6));
            }
            /* vectorizable */
            for (int i_21 = 0; i_21 < 1;i_21 += 1) /* same iter space */
            {
                var_45 = (-1612556065 || 2);
                var_46 ^= (arr_65 [i_4] [i_4] [i_21]);
                var_47 = (((arr_26 [i_4] [i_13]) ^ (arr_26 [i_4] [i_21])));

                for (int i_22 = 0; i_22 < 24;i_22 += 1)
                {
                    var_48 = (min(var_48, (((~(arr_31 [i_22] [i_21] [i_4] [i_4]))))));
                    arr_70 [i_4] [5] [i_21] [i_22] [i_22] = (arr_66 [23] [23] [i_22] [i_22]);
                }
            }
            /* vectorizable */
            for (int i_23 = 0; i_23 < 24;i_23 += 1)
            {
                arr_73 [i_4] [i_4] [i_23] = (arr_59 [i_4] [i_13] [i_4] [i_4] [i_23] [i_4]);
                var_49 = var_10;
            }
            var_50 = (max(var_50, ((min((arr_66 [i_4] [i_4] [0] [i_13]), var_4)))));

            for (int i_24 = 0; i_24 < 24;i_24 += 1)
            {
                var_51 -= 18214;
                arr_76 [8] = arr_28 [i_13];
            }
            /* vectorizable */
            for (int i_25 = 0; i_25 < 24;i_25 += 1)
            {
                arr_80 [i_25] [i_25] [i_13] [i_25] = (arr_31 [i_4] [i_4] [i_13] [i_25]);
                arr_81 [i_4] [i_4] [12] [i_13] |= ((!(arr_27 [i_13])));
                arr_82 [i_25] [i_25] [5] = (arr_53 [i_4] [8] [i_4]);
            }
            /* vectorizable */
            for (int i_26 = 0; i_26 < 24;i_26 += 1)
            {
                var_52 = (min(var_52, var_11));
                /* LoopNest 2 */
                for (int i_27 = 0; i_27 < 24;i_27 += 1)
                {
                    for (int i_28 = 0; i_28 < 24;i_28 += 1)
                    {
                        {
                            var_53 = (arr_16 [i_13] [i_13] [i_13]);
                            var_54 = (arr_54 [2] [8] [2] [i_13] [2]);
                            var_55 *= ((-(arr_49 [i_28] [4] [i_4] [i_4])));
                        }
                    }
                }

                for (int i_29 = 0; i_29 < 24;i_29 += 1)
                {
                    arr_94 [i_29] [i_29] = (var_3 ? (!7895) : -3);

                    for (int i_30 = 0; i_30 < 1;i_30 += 1)
                    {
                        arr_99 [i_4] [i_13] [i_26] [i_29] = var_10;
                        var_56 = (min(var_56, ((((arr_25 [13] [i_29] [i_26] [i_13]) ? (arr_42 [i_4] [i_4] [i_4]) : (arr_95 [21] [21] [21] [i_26] [i_26] [i_26] [20]))))));
                    }
                }
            }
            arr_100 [i_13] [i_4] [i_4] &= (((((((((((arr_58 [i_13] [i_13] [i_4] [i_4] [i_13] [i_4]) + 2147483647)) >> (((arr_68 [i_13] [i_13] [i_4] [i_4]) - 5828725343906385408))))) | (1751681376895403828 & -4)))) ? (arr_75 [i_4] [i_4] [i_4] [i_4]) : var_1));
        }
        var_57 = ((1751681376895403833 ? 116 : 334570061));
    }
    #pragma endscop
}

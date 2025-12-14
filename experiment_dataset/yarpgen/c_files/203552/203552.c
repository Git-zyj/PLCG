/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_17 = var_7;
                        var_18 += (34633 < 908352464159683420);
                        arr_13 [i_0] [i_1] [9] [i_1 - 1] = (((arr_0 [i_2 - 1]) ? var_3 : var_6));
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                var_19 = (arr_6 [i_0] [i_0] [i_0]);
                arr_22 [5] [i_4] [i_5] = (((arr_14 [0]) ? ((((arr_18 [i_0] [i_4] [i_5]) ^ 27504))) : ((var_8 ? var_14 : var_2))));

                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    var_20 = ((-(arr_8 [i_4] [i_4] [i_4])));
                    var_21 = ((38036 ? ((var_3 ? var_0 : var_12)) : 38050));
                }
            }
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 4; i_8 < 17;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 17;i_9 += 1)
                    {
                        {
                            arr_34 [i_4] [i_7] [11] [i_7] [i_9] = ((23 % ((0 ? 22633 : -6375062839054553968))));
                            arr_35 [i_4] [i_9 + 2] [i_4] [i_4] [i_4] [i_4] = (var_12 / var_16);
                        }
                    }
                }

                for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
                {
                    var_22 = (arr_10 [i_0] [i_0] [i_7] [i_4]);
                    var_23 = (((~var_8) ? var_5 : (arr_2 [i_4] [i_7])));
                    var_24 = (max(var_24, (arr_10 [i_0] [i_0] [i_7] [i_0])));
                }
                for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
                {
                    var_25 = (((arr_9 [i_4] [i_7] [i_11]) + var_8));
                    arr_41 [i_0] [i_4] [i_7] [i_7] [i_7] [10] = ((!(arr_21 [i_0])));
                }
                for (int i_12 = 0; i_12 < 19;i_12 += 1) /* same iter space */
                {
                    arr_45 [i_4] [7] [i_7] = (var_0 | var_9);
                    var_26 = (((var_13 ^ var_12) < (arr_15 [i_0] [i_4])));
                    var_27 = (arr_32 [i_7] [i_0] [7] [i_12] [9]);
                }
                for (int i_13 = 0; i_13 < 19;i_13 += 1) /* same iter space */
                {
                    var_28 = (min(var_28, (((!((!(arr_33 [i_0]))))))));
                    arr_48 [i_13] [i_4] [5] = (~var_8);
                    var_29 = (var_13 ? ((var_8 ? var_8 : var_2)) : (arr_18 [i_0] [i_4] [i_0]));
                }
            }
            var_30 += (((arr_40 [i_0]) ? var_13 : var_4));
            var_31 = arr_1 [i_0];
        }
        arr_49 [i_0] [8] = var_14;
    }
    for (int i_14 = 2; i_14 < 11;i_14 += 1)
    {
        var_32 = min((((65535 ? (arr_0 [i_14 + 2]) : (arr_2 [i_14] [i_14 + 1])))), var_15);
        arr_52 [i_14] [i_14 + 2] = (-var_2 >= 127);

        for (int i_15 = 1; i_15 < 11;i_15 += 1)
        {
            var_33 = (min(((var_2 ? (arr_27 [i_14 - 2] [i_15 + 2] [i_15] [i_15 + 1]) : var_11)), ((((arr_10 [i_14] [i_14] [i_15] [i_15]) < var_12)))));

            for (int i_16 = 1; i_16 < 12;i_16 += 1)
            {
                arr_57 [i_15] [i_15] = (((((max(9317, 0)))) / (((arr_20 [i_15 + 1] [i_15 + 1] [i_16]) | var_12))));
                var_34 -= (~var_1);
                arr_58 [i_15] [i_15] = min(var_16, (max(((((arr_4 [i_16] [i_15]) != 37654))), (0 % var_2))));
            }
            /* LoopNest 3 */
            for (int i_17 = 2; i_17 < 9;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 13;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 13;i_19 += 1)
                    {
                        {
                            arr_66 [i_15 - 1] [i_15] = var_3;
                            var_35 = (((((arr_40 [i_15 + 1]) ? (((arr_59 [i_14] [i_14]) ? var_2 : var_12)) : 0)) != (!var_6)));
                            arr_67 [i_14 + 2] [i_15] [4] [i_15] [i_19] = -38049;
                            var_36 = (max(((((arr_5 [i_15] [i_15]) < (((arr_40 [10]) * var_0))))), (max(((55951 % (arr_64 [i_15] [i_19] [i_19] [i_15]))), ((var_14 >> (var_2 - 6427886532867599817)))))));
                            arr_68 [i_14] [i_14] [i_15] [i_17] [i_15] [i_19] [8] = arr_1 [i_15];
                        }
                    }
                }
            }
            var_37 = ((((13099 ? -7904336905790932896 : 4385)) / (arr_25 [i_14] [i_14] [i_15])));
            arr_69 [i_15] [i_15] [i_15] = ((+(((~var_2) + (var_7 - var_12)))));
        }
        for (int i_20 = 1; i_20 < 12;i_20 += 1)
        {

            /* vectorizable */
            for (int i_21 = 3; i_21 < 10;i_21 += 1)
            {
                arr_76 [i_21] [2] = var_13;
                var_38 = (((((arr_32 [i_14] [i_14] [i_14] [i_20] [i_21 + 2]) << (var_15 + 1445479606951624616))) | var_7));

                for (int i_22 = 0; i_22 < 13;i_22 += 1)
                {
                    arr_79 [i_21] [i_21] [i_21 + 2] = (~var_3);
                    arr_80 [i_21] = (((arr_7 [i_14 + 1] [i_21] [i_21 + 1] [i_21 + 1]) ? 33449 : 127));
                    var_39 ^= var_15;
                }
                for (int i_23 = 0; i_23 < 13;i_23 += 1)
                {
                    var_40 = (max(var_40, (39042 / 65513)));
                    arr_84 [i_23] [0] [0] [i_14] |= ((var_10 - (((arr_43 [14] [i_20] [14] [i_23]) ? var_0 : var_9))));
                }
                arr_85 [10] |= ((arr_51 [i_20 + 1]) % (arr_51 [i_14 + 1]));
            }
            var_41 = (min(var_41, 8412177303353894839));
            arr_86 [i_20] = max((arr_16 [i_20 - 1]), ((min(var_13, var_10))));
            var_42 = (arr_23 [i_20 + 1] [i_20 - 1] [i_20 - 1] [5]);
        }
    }
    var_43 = ((((var_7 | (var_5 | var_4)))) ? var_14 : (max((max(var_15, var_8)), 50753)));
    var_44 = var_15;
    var_45 = ((!(((65535 ? 65516 : 16)))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_2, (~var_9)));
    var_13 = (min((max(1700892658080514646, var_10)), var_11));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_14 = ((-(arr_3 [i_0] [i_1 - 1])));
            var_15 = 88;
            var_16 = (arr_2 [i_0]);
            arr_5 [13] [i_1] [i_1 - 1] = (arr_4 [i_0] [2]);
            arr_6 [i_0] [i_0] [i_1] = 1;
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_9 [11] = (max(((max((1 == 1), var_11))), (arr_0 [i_0])));
            arr_10 [i_0 + 3] [i_2] = (arr_1 [i_0]);
        }
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                var_17 = ((-(((arr_15 [i_3] [7] [i_3] [i_0 + 1]) | (arr_4 [i_0 + 3] [i_0 + 1])))));
                var_18 = (arr_11 [i_4] [i_3] [i_0 + 1]);

                /* vectorizable */
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    arr_18 [i_3] [i_3] [i_4] [i_5] = (var_0 | var_8);
                    var_19 = (arr_12 [1]);
                    arr_19 [i_3] [4] [i_0] [i_3] = arr_3 [5] [i_3];
                    var_20 = var_11;
                    arr_20 [i_3] [i_4] [i_3] [i_0 - 1] [i_3] = 3180323227930538294;
                }
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    var_21 = 1;
                    var_22 = var_10;
                    arr_24 [i_0] [i_0] [i_3] [i_6] = (min((((var_7 + 2147483647) << (var_8 - 238))), ((min((1 <= -1125555696), var_8)))));
                }
                var_23 = var_10;
            }
            for (int i_7 = 0; i_7 < 0;i_7 += 1)
            {
                var_24 = 1046254141951417666;
                var_25 = ((((((max(var_10, 1))))) / ((-(min(-3963339520848713284, 391849926))))));
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                arr_32 [i_3] = ((-((((arr_2 [7]) == var_7)))));
                var_26 = (((arr_29 [5] [5] [5] [8]) | (arr_23 [i_0 + 3] [i_0] [i_0] [i_3] [i_0 + 4] [i_8])));
                arr_33 [i_3] [i_3] [i_3] [i_3] = -var_11;
            }
            /* vectorizable */
            for (int i_9 = 3; i_9 < 10;i_9 += 1)
            {
                var_27 = var_2;
                var_28 = ((~(arr_29 [i_0 - 1] [i_9 - 2] [i_9 - 1] [i_9 + 1])));
                var_29 = (!((var_3 > (arr_4 [i_0] [3]))));
                var_30 = (((((-(arr_31 [12] [i_3] [i_3] [i_3])))) > (var_6 / 8103)));
            }
            arr_36 [i_3] [i_3] = (min(1, -7686732965677647461));
            var_31 = (max((max((((arr_28 [i_0] [4] [4]) | (arr_8 [3] [3]))), 6526321594263714628)), 1));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {
                    {
                        arr_41 [i_3] = (min((arr_17 [i_0] [i_3] [i_10] [i_11] [i_0]), (arr_3 [i_0] [i_0 - 1])));
                        var_32 = (arr_34 [i_3]);
                        var_33 = (min(1, (min(776905338401263282, (var_10 - 1)))));
                        arr_42 [i_0] [i_3] [8] [i_0 + 2] [i_0] [i_0] = -391849935;
                    }
                }
            }

            for (int i_12 = 0; i_12 < 14;i_12 += 1) /* same iter space */
            {
                var_34 = var_4;
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 14;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 14;i_14 += 1)
                    {
                        {
                            var_35 = (((!1) + (max(-737405614, (~15)))));
                            arr_51 [i_3] [i_3] = (max((arr_46 [i_3] [i_13] [i_14]), -3751));
                            arr_52 [i_0] [i_3] [i_12] [i_12] [9] = (+(((arr_40 [i_0 + 1] [i_0 + 1] [i_13] [i_3]) ? (~50936) : var_1)));
                        }
                    }
                }
            }
            for (int i_15 = 0; i_15 < 14;i_15 += 1) /* same iter space */
            {
                var_36 = ((((1 > (!1))) || var_0));
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 14;i_16 += 1)
                {
                    for (int i_17 = 1; i_17 < 11;i_17 += 1)
                    {
                        {
                            arr_64 [i_3] [i_3] [i_15] [i_16] [i_17 - 1] = 1;
                            var_37 = (max(var_10, (((1 == (arr_53 [i_0] [i_0 + 2] [i_0 + 3] [i_17 + 1]))))));
                            var_38 = (max((arr_4 [i_15] [i_16]), (min((arr_34 [i_3]), -7764))));
                        }
                    }
                }
                arr_65 [i_0] [i_3] [i_15] = (min((arr_50 [i_0] [i_0] [i_0 + 3] [i_0] [i_3]), var_6));
            }
            for (int i_18 = 0; i_18 < 14;i_18 += 1) /* same iter space */
            {
                var_39 = ((min(var_8, (var_10 % -31195))));
                arr_69 [i_0] [i_3] [i_18] = ((!((max((arr_0 [i_0]), ((1 ? 13002630473509203221 : 0)))))));
                arr_70 [i_0 + 3] [i_3] [i_3] [i_18] = ((1 / (((min(-7021667966027952369, -16686)) / -31295))));
            }
            for (int i_19 = 0; i_19 < 14;i_19 += 1) /* same iter space */
            {
                var_40 = (3790 | 30855);
                arr_74 [i_3] [i_3] [i_19] = (arr_73 [i_0] [i_3] [i_3]);

                for (int i_20 = 0; i_20 < 14;i_20 += 1)
                {
                    arr_77 [i_20] [i_3] [i_3] [i_0 + 1] = (max((~183), (arr_12 [3])));
                    var_41 = var_4;
                }
            }
        }

        for (int i_21 = 0; i_21 < 14;i_21 += 1) /* same iter space */
        {
            var_42 = ((6526321594263714628 << ((((max(1, 130))) - 128))));
            var_43 = ((((var_1 == (arr_38 [i_21] [i_21] [6]))) ? var_0 : ((((-28759 - 25108) >= var_3)))));
            /* LoopNest 3 */
            for (int i_22 = 0; i_22 < 14;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 14;i_23 += 1)
                {
                    for (int i_24 = 3; i_24 < 12;i_24 += 1)
                    {
                        {
                            var_44 = (((arr_38 [i_23] [i_21] [i_23]) < var_10));
                            var_45 = (min(141, (max((arr_17 [i_0] [1] [i_22] [1] [4]), 18512))));
                        }
                    }
                }
            }
            var_46 = var_6;
        }
        /* vectorizable */
        for (int i_25 = 0; i_25 < 14;i_25 += 1) /* same iter space */
        {
            arr_92 [i_0 - 1] [i_0] [i_0] = -var_8;

            for (int i_26 = 0; i_26 < 14;i_26 += 1)
            {
                arr_96 [i_26] [i_26] [i_0] = var_7;
                /* LoopNest 2 */
                for (int i_27 = 0; i_27 < 14;i_27 += 1)
                {
                    for (int i_28 = 0; i_28 < 14;i_28 += 1)
                    {
                        {
                            arr_103 [i_28] [i_26] [i_26] [i_26] [i_0] = var_6;
                            var_47 = -278609445;
                        }
                    }
                }
            }
            var_48 = (arr_59 [i_25] [i_25]);
        }
        arr_104 [i_0] = 122;
    }
    var_49 = var_5;
    #pragma endscop
}

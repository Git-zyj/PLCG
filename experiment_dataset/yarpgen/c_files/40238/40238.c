/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        var_17 = (min((arr_0 [i_0] [i_0]), (96 & -1)));
        var_18 = arr_2 [i_0 - 4];
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 11;i_3 += 1)
                {
                    {

                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            var_19 = (min(var_2, var_9));
                            arr_12 [i_0] [i_3 - 1] &= ((((max(var_12, (arr_11 [i_0] [i_1] [0] [6] [i_4])))) % (min(16379, 168))));
                            var_20 = (max(var_20, (min((arr_7 [i_1] [i_2] [i_3]), (arr_4 [i_0] [12] [5])))));
                        }
                        var_21 = min((arr_9 [i_3 - 1] [i_2] [i_0 - 1] [9] [i_0] [i_0 - 1]), (arr_3 [i_2] [11]));
                    }
                }
            }
        }

        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            arr_16 [i_0 - 2] [4] = min(((min((arr_15 [i_0 - 1]), ((max(var_16, -8351)))))), 18446744073709551615);
            var_22 = ((1 ^ (((((arr_4 [i_0] [i_0] [i_0]) && (arr_10 [i_0] [i_5] [i_5] [i_5] [2] [i_5] [i_5])))))));
        }
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            arr_20 [i_0] [11] = (min(((min((arr_4 [i_0] [12] [i_6]), 95))), ((~(arr_6 [11] [i_6] [0])))));
            var_23 = (arr_11 [i_0] [i_0] [i_6] [i_6] [0]);
            arr_21 [i_0] = (min(-1, (min((arr_10 [i_0] [i_0] [i_0 - 1] [i_0 + 1] [i_0] [i_6] [i_6]), (arr_10 [i_0] [i_0] [i_0 + 1] [i_0 - 1] [i_6] [i_6] [12])))));
        }
        for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
        {
            var_24 = (min(var_24, 0));

            /* vectorizable */
            for (int i_8 = 1; i_8 < 12;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 12;i_10 += 1)
                    {
                        {
                            var_25 = (arr_0 [i_7] [12]);
                            arr_33 [i_0] [i_7] [i_8] [i_9] [i_10] = (arr_8 [i_0] [2] [i_0 - 1] [i_8 + 1] [2] [i_7]);
                            var_26 = var_1;
                            var_27 += (((arr_28 [i_8] [i_8 + 1] [i_8] [i_8 + 1] [i_8 + 1]) && (arr_1 [i_0 - 4] [11])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 2; i_11 < 11;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 13;i_12 += 1)
                    {
                        {
                            var_28 = var_2;
                            var_29 = 11;
                            var_30 -= ((!(arr_6 [i_0] [i_0] [i_0])));
                        }
                    }
                }
            }
            for (int i_13 = 2; i_13 < 11;i_13 += 1)
            {
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 13;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 13;i_15 += 1)
                    {
                        {
                            var_31 = (arr_5 [i_7]);
                            var_32 = (((arr_36 [i_0] [i_13 - 1] [i_0 - 3] [i_14]) >> (575100857 - 575100846)));
                            var_33 = max(((((arr_31 [7] [i_13] [11] [3] [8] [0]) >= -28445))), (min(561850441793536, (85 && var_6))));
                        }
                    }
                }
                var_34 = 18446744073709551615;
                var_35 = 86;
            }
            arr_46 [i_0 - 1] = (arr_25 [i_0 - 4] [i_7]);

            for (int i_16 = 0; i_16 < 13;i_16 += 1) /* same iter space */
            {

                /* vectorizable */
                for (int i_17 = 0; i_17 < 13;i_17 += 1) /* same iter space */
                {
                    var_36 ^= 255;
                    arr_52 [i_0] [i_0] [8] [i_17] = 10783;
                    arr_53 [i_0 - 3] [i_16] [i_16] = 120;
                }
                for (int i_18 = 0; i_18 < 13;i_18 += 1) /* same iter space */
                {
                    arr_57 [1] [i_16] = -51;

                    /* vectorizable */
                    for (int i_19 = 2; i_19 < 10;i_19 += 1)
                    {
                        var_37 = (arr_9 [i_0] [i_7] [i_7] [i_16] [i_18] [i_19]);
                        var_38 = 54435;
                        var_39 = (arr_1 [i_7] [8]);
                    }
                    /* vectorizable */
                    for (int i_20 = 2; i_20 < 9;i_20 += 1)
                    {
                        var_40 = ((-(arr_7 [i_0 - 3] [i_18] [i_20 + 1])));
                        var_41 -= (((arr_47 [i_0] [i_0 + 2] [i_20 - 1]) & 1));
                        arr_62 [i_0] [i_0] [i_7] [i_16] [5] [i_20 + 1] = (arr_26 [i_7] [i_16] [i_18] [i_20]);
                    }
                    for (int i_21 = 0; i_21 < 13;i_21 += 1)
                    {
                        arr_67 [i_0] [i_0] [i_0] [3] [i_0 + 2] = (min((((3 - (arr_19 [i_0] [i_21])))), var_0));
                        var_42 = (arr_37 [i_0] [i_7] [5] [5] [i_7]);
                        var_43 = (min(((min((min((arr_22 [8] [i_7] [8]), 244)), (arr_2 [i_7])))), (arr_10 [i_0] [i_18] [i_7] [i_7] [i_16] [i_18] [i_18])));
                    }
                    var_44 = (~var_15);
                }

                /* vectorizable */
                for (int i_22 = 0; i_22 < 1;i_22 += 1)
                {
                    var_45 = (min(var_45, 10588));
                    var_46 = (max(var_46, (arr_17 [i_0 + 1] [i_0 + 2])));
                    var_47 = 255;
                    arr_70 [i_0 + 2] [i_16] [i_22] = 214;
                }
                for (int i_23 = 3; i_23 < 11;i_23 += 1)
                {
                    arr_74 [i_23 - 2] = (((arr_37 [i_0] [i_7] [i_7] [i_16] [12]) * (arr_68 [i_0] [i_0] [9] [i_0])));
                    arr_75 [10] [i_16] [i_16] [i_16] = -24963;
                }
            }
            for (int i_24 = 0; i_24 < 13;i_24 += 1) /* same iter space */
            {

                for (int i_25 = 0; i_25 < 13;i_25 += 1) /* same iter space */
                {
                    var_48 = 0;
                    var_49 = (max((arr_47 [6] [i_24] [i_25]), var_8));
                    var_50 = (((min(18215605988272049348, 32767)) & (arr_11 [i_0] [i_7] [i_25] [i_25] [12])));
                    var_51 -= (min((arr_61 [i_0] [i_7] [i_24] [i_24] [i_24] [3] [i_25]), ((min(var_8, 1)))));
                    arr_82 [i_0] [3] [i_0] [3] = ((-(max((arr_13 [1] [i_24]), var_0))));
                }
                for (int i_26 = 0; i_26 < 13;i_26 += 1) /* same iter space */
                {
                    arr_85 [i_0 - 2] [8] = (min((arr_22 [i_0 - 2] [i_7] [i_26]), 96));
                    var_52 = max((max((max(var_3, var_5)), 231)), (arr_84 [i_26]));
                    var_53 = (min(var_53, ((min((min((arr_51 [i_0 - 3] [5] [i_0 + 1] [i_0]), (arr_51 [i_0 - 4] [i_0 - 2] [i_0 - 4] [i_0]))), 174)))));
                    arr_86 [i_7] = (arr_77 [i_0] [i_0 - 3]);
                    var_54 = 304023864834546524;
                }
                var_55 = (arr_65 [12] [i_0] [i_0 - 2] [i_0] [i_0 - 3] [i_0 - 2]);
                var_56 = (min(var_56, ((((arr_65 [i_0] [i_0 - 1] [i_0 + 2] [i_0] [i_0 - 4] [9]) || ((min((arr_28 [8] [i_7] [i_24] [i_7] [i_24]), var_2))))))));
                var_57 = (arr_83 [i_0 + 2] [i_0 - 4] [i_0] [i_0 - 1]);
            }
        }
        for (int i_27 = 0; i_27 < 13;i_27 += 1) /* same iter space */
        {
            arr_90 [i_0] [i_27] = 84;
            var_58 += (arr_80 [i_0 - 2] [i_0 + 2] [12] [i_0 - 2]);
            /* LoopNest 3 */
            for (int i_28 = 4; i_28 < 9;i_28 += 1)
            {
                for (int i_29 = 0; i_29 < 13;i_29 += 1)
                {
                    for (int i_30 = 0; i_30 < 13;i_30 += 1)
                    {
                        {
                            var_59 = (min(((min((arr_2 [1]), (((241 >= (arr_99 [7] [7] [7] [4] [i_30]))))))), (min(((min((arr_56 [i_0] [i_0] [i_0 - 3] [i_0] [2] [i_0]), (arr_93 [i_27] [8] [1])))), var_6))));
                            var_60 = (max(var_60, ((((((arr_93 [i_0 + 2] [i_0 + 2] [i_28 - 2]) | var_7)) ^ 185)))));
                            arr_101 [8] [i_28 - 2] [i_29] = var_5;
                        }
                    }
                }
            }
            arr_102 [i_0] [i_27] = (arr_44 [i_0] [10] [i_0] [i_0 + 1] [i_0] [i_27] [i_27]);
        }
    }
    var_61 = var_14;

    for (int i_31 = 1; i_31 < 15;i_31 += 1)
    {
        var_62 = (arr_103 [8]);
        var_63 = (arr_105 [i_31]);
        arr_107 [i_31] = (((((min(33027, 4)))) << (((-var_3 + 56) - 25))));
    }
    /* vectorizable */
    for (int i_32 = 2; i_32 < 7;i_32 += 1)
    {
        /* LoopNest 2 */
        for (int i_33 = 0; i_33 < 1;i_33 += 1)
        {
            for (int i_34 = 0; i_34 < 10;i_34 += 1)
            {
                {
                    var_64 = 811212226162349806;
                    var_65 = ((var_8 + (((arr_42 [2] [i_33] [i_33] [10] [i_33] [i_33]) | var_6))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_35 = 2; i_35 < 9;i_35 += 1)
        {
            for (int i_36 = 0; i_36 < 1;i_36 += 1)
            {
                {
                    arr_121 [i_35] [4] [i_36] = (arr_91 [i_36]);
                    var_66 = var_16;
                    var_67 = (arr_37 [i_32] [i_32] [i_32 - 1] [i_35] [i_36]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_37 = 1; i_37 < 12;i_37 += 1)
    {
        for (int i_38 = 2; i_38 < 12;i_38 += 1)
        {
            {
                var_68 = (min(var_68, ((min((((!((max(148, 25394)))))), (arr_106 [i_38]))))));
                var_69 &= (min((~var_6), (arr_51 [i_38 - 2] [i_38 - 2] [i_38] [12])));
            }
        }
    }
    #pragma endscop
}

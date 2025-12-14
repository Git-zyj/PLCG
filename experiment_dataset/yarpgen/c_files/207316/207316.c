/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_12 = 1107963330;
                        arr_12 [i_0 + 1] [i_0 - 1] [i_0] [i_0] = 1;

                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            var_13 -= (min(((min(var_4, (arr_0 [i_4])))), (3187003955 > 3187003992)));
                            arr_15 [i_0] [i_4] [i_4] = var_11;
                            var_14 = arr_7 [i_0];
                            arr_16 [i_0] [i_1] [i_0] [i_3] [i_3] [i_4] = (((((!(arr_9 [i_0] [i_0] [i_0]))) ? (~799896384) : (arr_9 [1] [i_0 + 1] [i_2 + 2]))) <= (arr_2 [i_0 + 1] [i_2 + 3]));
                        }
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        var_15 = var_5;
                        var_16 = (!var_6);
                        var_17 = var_5;
                        var_18 = (-1 == 3495070911);
                        arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_5] = (((1444636191 - 1) ? (arr_1 [i_0 + 1] [i_0 + 1]) : var_3));
                    }
                    var_19 = (min(var_11, ((~(arr_4 [i_0 + 1] [i_2 + 3])))));
                }
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    var_20 &= 0;
                    var_21 ^= var_0;

                    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                    {
                        var_22 &= ((max((max(1, var_5)), var_5)) ? 2196985511 : ((((!(arr_4 [i_0 - 1] [i_7]))))));
                        var_23 = (((min(((max((arr_13 [i_0] [i_0] [i_6]), (arr_22 [13] [i_1] [i_1])))), ((var_1 ? var_3 : var_9))))) ? (~1043227491) : 3603733338);
                        var_24 = var_3;
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                    {

                        for (int i_9 = 2; i_9 < 18;i_9 += 1)
                        {
                            var_25 = arr_9 [i_1] [i_1] [i_6];
                            var_26 = (max(var_26, (((-85 && (arr_7 [i_1]))))));
                            var_27 = var_6;
                        }
                        arr_31 [i_0 + 1] [i_1] [i_1] [1] [i_8] [i_6] = (1 | 1);
                    }
                }
                var_28 = (min(var_28, ((max(var_10, (85 && var_3))))));
            }
        }
    }
    var_29 |= (!((max(var_6, ((1 ? var_0 : var_2))))));

    for (int i_10 = 1; i_10 < 12;i_10 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_11 = 0; i_11 < 14;i_11 += 1)
        {
            arr_40 [10] = var_1;
            var_30 = 1;
            var_31 += 1;
            arr_41 [i_10 + 2] = (((~2097981785) * var_4));
            var_32 = (max(var_32, (((2224193134 && 1) ? (arr_2 [i_10] [i_10]) : ((2097981784 ? 0 : 4294967292))))));
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 14;i_12 += 1) /* same iter space */
        {
            var_33 ^= (arr_7 [i_10 - 1]);
            var_34 ^= 1;
        }
        for (int i_13 = 0; i_13 < 14;i_13 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_14 = 1; i_14 < 1;i_14 += 1)
            {
                for (int i_15 = 1; i_15 < 1;i_15 += 1)
                {
                    {
                        arr_50 [1] [i_13] = ((~(max(1, (~5)))));
                        arr_51 [i_10] [i_13] [i_13] = 2615805581;
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_16 = 0; i_16 < 14;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 14;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 14;i_18 += 1)
                    {
                        {
                            var_35 = ((((((1 + 3187003967) ? var_0 : ((var_6 ? (arr_7 [i_10]) : (arr_45 [i_10] [1] [i_10])))))) && ((((((var_3 && (arr_44 [i_13] [i_13] [i_13]))))) <= (arr_3 [i_10])))));
                            var_36 = (((((-(!25)))) ? (max(var_9, (~2097981794))) : (var_10 / 2097981803)));
                            var_37 = ((((((!var_0) / (arr_42 [i_10] [i_13])))) ? (~var_11) : var_11));
                        }
                    }
                }
            }
            var_38 ^= ((!((((((1 | (arr_28 [i_10] [i_10] [i_10] [i_10] [i_13])))) ? var_2 : (arr_17 [i_10] [i_13] [i_10] [i_10 + 2] [i_10] [i_13]))))));
        }
        var_39 = min((arr_6 [i_10] [i_10 + 2] [i_10] [i_10]), var_11);
    }
    for (int i_19 = 1; i_19 < 12;i_19 += 1) /* same iter space */
    {
        var_40 &= (!(arr_54 [i_19 + 1] [1] [0] [i_19]));

        /* vectorizable */
        for (int i_20 = 1; i_20 < 1;i_20 += 1) /* same iter space */
        {
            arr_65 [i_19] [i_20] [i_19] = var_3;
            var_41 = (min(var_41, (((-1 ? 1 : 422889458)))));
            var_42 = ((!(arr_63 [i_20])));
            var_43 |= (-(arr_25 [12]));
        }
        for (int i_21 = 1; i_21 < 1;i_21 += 1) /* same iter space */
        {
            arr_69 [i_19] [i_19] = var_0;
            arr_70 [i_19] [i_19] = var_8;

            /* vectorizable */
            for (int i_22 = 0; i_22 < 14;i_22 += 1)
            {
                var_44 &= ((-(arr_1 [i_19] [i_19])));
                var_45 = ((arr_73 [i_19 + 2] [i_19 + 2]) && 1);
            }
            /* LoopNest 3 */
            for (int i_23 = 0; i_23 < 14;i_23 += 1)
            {
                for (int i_24 = 3; i_24 < 12;i_24 += 1)
                {
                    for (int i_25 = 0; i_25 < 1;i_25 += 1)
                    {
                        {
                            arr_83 [i_19] [i_19] [i_19] [i_19] = 3872077836;
                            arr_84 [i_19 + 2] [i_21] [i_23] [i_24 - 1] [i_25] = (-var_4 | 422889448);
                            var_46 = (min((((~(85 > var_2)))), (min(0, (max(var_9, 98304))))));
                        }
                    }
                }
            }
        }
        for (int i_26 = 1; i_26 < 1;i_26 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_27 = 0; i_27 < 14;i_27 += 1)
            {
                for (int i_28 = 0; i_28 < 1;i_28 += 1)
                {
                    {
                        var_47 = (min((((((max(var_5, 0))) && (var_8 + var_11)))), (((1 & var_5) ? 1 : var_7))));
                        arr_92 [i_19] [i_19] [i_19] [i_27] [0] = (((min((arr_4 [i_19 + 2] [i_19 + 1]), (arr_4 [i_19 - 1] [i_19 + 1]))) ? (arr_4 [i_19 - 1] [i_19 - 1]) : (((!(arr_4 [i_19 + 2] [i_19 + 2]))))));
                    }
                }
            }
            var_48 = (((((min(-36, (arr_81 [i_26] [i_26] [i_19] [i_19] [i_19] [i_19])))) ? var_9 : (!var_11))));
        }
        /* vectorizable */
        for (int i_29 = 1; i_29 < 13;i_29 += 1)
        {
            arr_96 [i_29] = ((arr_39 [i_29]) | var_2);
            arr_97 [0] &= (-(arr_42 [i_19 + 2] [12]));
            var_49 = -41;
            var_50 ^= (var_9 && (~1));
            arr_98 [i_29] [i_29 + 1] = -var_8;
        }
        var_51 = (min(var_51, ((max(-0, ((min((arr_71 [i_19 + 1] [i_19 + 2] [i_19 + 1]), var_4))))))));
    }
    for (int i_30 = 0; i_30 < 1;i_30 += 1)
    {

        for (int i_31 = 0; i_31 < 11;i_31 += 1)
        {
            arr_105 [i_30] [i_31] [i_30] = var_5;
            var_52 = (arr_75 [10] [i_31] [i_30] [i_30]);
            var_53 = (!(!23));
            var_54 = 2461045458;
        }
        for (int i_32 = 0; i_32 < 1;i_32 += 1)
        {
            var_55 = ((((3872077862 ? 3872077847 : 1974145626)) - (max((arr_94 [i_32] [i_32]), (arr_89 [i_32] [i_32] [i_32] [i_32])))));

            /* vectorizable */
            for (int i_33 = 0; i_33 < 1;i_33 += 1)
            {
                var_56 = 51942057;
                var_57 ^= var_9;
            }
            for (int i_34 = 2; i_34 < 8;i_34 += 1)
            {

                /* vectorizable */
                for (int i_35 = 0; i_35 < 11;i_35 += 1) /* same iter space */
                {
                    var_58 = (15 <= var_0);
                    arr_114 [i_32] [1] [i_30] [i_32] [i_32] = (~var_2);
                    var_59 ^= ((((~(-127 - 1))) * ((84 ? var_3 : var_0))));
                    var_60 = (((51942067 ? (arr_24 [i_30] [i_32] [i_32] [i_35] [i_30] [i_35]) : var_2)) ^ (((((arr_43 [2] [i_32] [i_32]) != var_11)))));

                    for (int i_36 = 1; i_36 < 1;i_36 += 1)
                    {
                        arr_117 [i_32] [i_32] [i_34] [i_35] [i_35] [i_36] [i_36] = ((-((((-127 - 1) <= 2097981797)))));
                        var_61 ^= (~0);
                        var_62 = (var_11 + 2795545250);
                    }
                }
                for (int i_37 = 0; i_37 < 11;i_37 += 1) /* same iter space */
                {
                    var_63 = (max(var_63, (((~(arr_81 [i_34] [i_34] [i_34] [i_34 - 1] [i_34 - 1] [i_37]))))));
                    var_64 = (min(var_64, ((min(var_1, (max(3872077848, ((128 ? 0 : 2196985493)))))))));
                    var_65 = (arr_34 [i_30]);
                }
                /* vectorizable */
                for (int i_38 = 0; i_38 < 11;i_38 += 1) /* same iter space */
                {
                    var_66 = -2097981794;
                    var_67 = ((!(-127 - 1)));
                }
                /* vectorizable */
                for (int i_39 = 0; i_39 < 11;i_39 += 1) /* same iter space */
                {
                    arr_125 [i_32] [i_32] [i_32] [i_34] [i_34] = ((var_4 ? (var_10 | 1) : var_1));
                    var_68 = var_1;
                    arr_126 [i_32] = 1550055767;
                    var_69 = (min(var_69, var_11));
                }
                var_70 = ((-(((var_0 != ((((arr_77 [i_30] [i_32] [i_34]) < 2097981794))))))));
                /* LoopNest 2 */
                for (int i_40 = 0; i_40 < 11;i_40 += 1)
                {
                    for (int i_41 = 0; i_41 < 11;i_41 += 1)
                    {
                        {
                            var_71 = (((!-var_5) <= 132));
                            var_72 = (max((min(((4243025229 ? 0 : 2196985506)), (max(var_3, 422889449)))), var_9));
                            arr_132 [i_32] [i_34 - 1] [i_34 + 2] = ((var_0 * (max((var_9 / var_0), var_6))));
                            var_73 = -2;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_42 = 0; i_42 < 1;i_42 += 1)
                {
                    for (int i_43 = 0; i_43 < 11;i_43 += 1)
                    {
                        {
                            var_74 = var_5;
                            var_75 = 1;
                        }
                    }
                }
                var_76 += (arr_22 [1] [i_32] [i_34]);
            }
            arr_140 [i_32] [i_32] = (max((min(1, ((16775168 ? var_4 : 1)))), (arr_111 [i_32] [i_32])));
        }
        arr_141 [i_30] = (!-35);
        var_77 = ((-((~(!1)))));
    }
    var_78 *= ((~((min(1, 1)))));
    #pragma endscop
}

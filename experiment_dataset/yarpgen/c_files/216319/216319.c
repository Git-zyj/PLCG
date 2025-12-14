/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = 7;

        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            var_11 = (!206);
            var_12 = ((((((arr_4 [i_1 - 1] [i_1] [i_1]) + (arr_4 [i_1 - 2] [i_0] [i_0])))) ? (((arr_4 [i_1 - 2] [i_0] [i_0]) ? (arr_4 [i_1 + 1] [i_1] [i_1]) : (arr_4 [i_1 + 1] [1] [i_1]))) : (arr_4 [i_1 - 2] [i_1] [i_1])));
            var_13 = (arr_0 [i_0] [i_1]);
        }

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            arr_9 [i_2] [i_2] = ((65499 ? (+-7) : (((((arr_3 [i_0] [i_0] [i_0]) >= 1)) ? var_4 : (((max((arr_1 [i_0] [i_2]), -15387))))))));
            var_14 = ((~((((arr_7 [i_0] [i_0] [i_0]) > (arr_6 [i_0] [i_0]))))));
            var_15 = var_8;
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_16 = (arr_7 [i_0] [i_0] [i_3]);
            arr_13 [i_0] |= (arr_6 [i_0] [i_3]);
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            var_17 = 37;
            var_18 = (!0);
        }
    }

    for (int i_5 = 2; i_5 < 8;i_5 += 1)
    {

        /* vectorizable */
        for (int i_6 = 3; i_6 < 9;i_6 += 1)
        {
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        {
                            arr_29 [i_5] [i_5] [i_5] = (((arr_5 [i_6 - 2] [i_7]) ? 1 : (arr_5 [i_6 - 2] [i_7])));
                            var_19 &= (arr_5 [i_7] [i_9]);
                            var_20 = (((arr_16 [i_6 + 1]) ? 87 : (arr_16 [i_6 + 1])));
                        }
                    }
                }
            }
            var_21 = var_6;
            var_22 = ((-(arr_19 [i_6])));
            arr_30 [i_5] [i_6] [i_6] = ((arr_10 [i_5 + 2] [i_5 + 2]) ? (arr_10 [i_5 - 2] [i_6]) : -66);
        }
        var_23 = 7;

        for (int i_10 = 1; i_10 < 9;i_10 += 1)
        {
            var_24 |= ((2586 ? ((~(arr_27 [i_5] [i_5] [i_5] [i_5] [1] [i_5] [i_5 - 2]))) : (var_0 == 156)));

            for (int i_11 = 1; i_11 < 8;i_11 += 1)
            {
                var_25 = (min(var_25, var_1));
                var_26 = var_5;
                arr_35 [i_5] [i_10] [i_11] = var_3;
            }

            /* vectorizable */
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                /* LoopNest 2 */
                for (int i_13 = 1; i_13 < 9;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 10;i_14 += 1)
                    {
                        {
                            var_27 = 99950175765352232;
                            var_28 = (-5 == -27);
                        }
                    }
                }
                arr_44 [i_5] [i_10] = (arr_24 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]);
            }
            /* vectorizable */
            for (int i_15 = 0; i_15 < 10;i_15 += 1)
            {
                arr_48 [i_10] [i_10] [i_10] = -99950175765352233;
                var_29 = -11989;
                var_30 = ((-((36 ? 1 : var_6))));
            }
        }
        for (int i_16 = 0; i_16 < 10;i_16 += 1)
        {
            arr_52 [i_5] = ((var_8 ? (((arr_25 [i_16] [i_16] [i_5] [i_5 - 2] [i_5]) ? var_0 : (!var_10))) : ((max((arr_36 [i_16] [i_5 - 2] [i_16]), (arr_36 [i_16] [i_5 - 1] [i_16]))))));
            var_31 = ((!(arr_31 [9])));
            var_32 = var_3;
            arr_53 [i_16] = ((-(((arr_22 [i_5] [i_16] [i_16]) ? ((((arr_18 [i_5]) >= var_3))) : var_8))));
        }
        /* vectorizable */
        for (int i_17 = 0; i_17 < 10;i_17 += 1)
        {

            for (int i_18 = 0; i_18 < 10;i_18 += 1)
            {
                var_33 = (min(var_33, ((((41 ? -863484283 : (arr_38 [i_18] [i_17] [i_5])))))));
                var_34 = (((arr_21 [i_5] [i_5 - 2]) >= (((99950175765352232 << (((arr_14 [i_5] [i_5]) - 4246915294)))))));
            }
            var_35 = (arr_11 [i_5 - 1]);
        }
        /* vectorizable */
        for (int i_19 = 0; i_19 < 10;i_19 += 1)
        {
            var_36 = ((-3727321231378388399 ? (arr_32 [i_19] [i_5 + 2] [i_5 - 2]) : 7869332451362441231));
            var_37 = 1;
        }
        arr_62 [i_5] [i_5] = -8055;
    }
    for (int i_20 = 3; i_20 < 18;i_20 += 1)
    {

        /* vectorizable */
        for (int i_21 = 0; i_21 < 19;i_21 += 1) /* same iter space */
        {
            var_38 = var_2;

            for (int i_22 = 0; i_22 < 19;i_22 += 1)
            {

                for (int i_23 = 0; i_23 < 1;i_23 += 1)
                {
                    arr_73 [i_20] [i_23] [i_22] [i_22] = 16128;
                    var_39 = (!4294967290);
                }

                for (int i_24 = 2; i_24 < 18;i_24 += 1)
                {
                    var_40 = ((((arr_68 [i_24] [i_22] [1] [4]) || (arr_63 [i_20]))));
                    var_41 = var_9;
                }
                for (int i_25 = 0; i_25 < 19;i_25 += 1)
                {
                    var_42 = (((((arr_66 [i_20]) / var_7)) * ((0 % (arr_65 [i_21])))));
                    arr_78 [i_20] [i_20] = ((!(~3171868023)));
                    arr_79 [i_20] [i_20] [i_22] [i_22] [i_22] [i_25] = (arr_66 [i_20 - 3]);
                    var_43 = (min(var_43, (arr_65 [i_20 - 1])));
                    var_44 = ((((((arr_70 [i_20] [i_20] [i_20] [i_20] [i_20]) ? (arr_72 [i_25] [i_22] [i_21] [i_20]) : (arr_65 [i_21])))) && (arr_68 [i_20] [i_21] [12] [i_25])));
                }
            }
        }
        for (int i_26 = 0; i_26 < 19;i_26 += 1) /* same iter space */
        {
            var_45 = (arr_71 [i_26] [i_20]);
            var_46 = (min(-18147, (((((~(arr_83 [i_26] [i_20] [i_26]))) >= ((3171868023 ? 6144 : var_3)))))));
            arr_84 [i_20] [i_26] = (max((max((arr_80 [i_26] [i_26]), (arr_65 [i_20 - 2]))), 18147));

            for (int i_27 = 0; i_27 < 19;i_27 += 1)
            {
                arr_88 [i_26] [i_26] [i_26] [i_20] = (arr_77 [i_20] [i_26] [i_20] [i_20] [i_20]);
                var_47 = ((((var_8 | (max((arr_74 [i_27] [i_26] [i_27] [3]), (arr_66 [i_26]))))) & (~var_10)));
            }
            /* vectorizable */
            for (int i_28 = 0; i_28 < 19;i_28 += 1)
            {
                var_48 = (arr_90 [i_26] [i_26] [10]);
                arr_91 [i_20] [i_20] [i_26] = 0;
            }
            /* vectorizable */
            for (int i_29 = 1; i_29 < 17;i_29 += 1)
            {
                arr_95 [11] [i_26] [11] [i_20] = (arr_75 [3] [i_26] [i_26] [9]);

                for (int i_30 = 2; i_30 < 17;i_30 += 1) /* same iter space */
                {
                    arr_98 [i_26] [i_30] [i_30] |= (arr_83 [i_30] [i_29] [i_30]);
                    var_49 = 1811242190;

                    for (int i_31 = 0; i_31 < 0;i_31 += 1)
                    {
                        var_50 = (arr_66 [i_20 + 1]);
                        var_51 = (-84 * 32640);
                        var_52 = (var_1 + -var_2);
                    }
                }
                for (int i_32 = 2; i_32 < 17;i_32 += 1) /* same iter space */
                {
                    var_53 = (arr_71 [i_29] [i_32]);
                    var_54 = ((6895960314930124298 ? (arr_64 [i_20 - 2]) : (arr_81 [i_29 - 1] [i_26] [i_32 + 1])));
                }
                for (int i_33 = 0; i_33 < 19;i_33 += 1)
                {
                    var_55 = (arr_85 [i_29 - 1] [i_26] [i_20 - 3] [i_20]);
                    arr_107 [0] [i_26] [2] [i_26] = (1 ^ -10949);
                }
                var_56 = (min(var_56, ((((var_9 - 37) | (arr_103 [i_20] [i_26] [i_20] [i_26] [i_26]))))));
            }
        }
        var_57 *= (((((arr_99 [i_20] [10] [i_20 + 1] [10] [10]) >> (((arr_87 [i_20]) - 207)))) | (((2147483647 ? 0 : 65499)))));
    }
    var_58 = var_1;
    #pragma endscop
}

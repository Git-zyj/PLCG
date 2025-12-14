/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((~(min((!-11565), (-224 | 4697)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = (((arr_2 [i_0] [i_1]) < (arr_0 [i_0])));
            var_18 = var_3;
        }
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        var_19 = (arr_6 [i_0]);
                        arr_16 [14] [i_2] [i_2] [6] = ((-(arr_8 [i_0] [i_0] [i_3] [i_4])));
                        arr_17 [i_2] [i_3] [i_2] [0] [i_0] = (arr_7 [i_0] [i_2]);
                        arr_18 [i_2] [i_2] [i_3] [i_2] [10] = (((arr_3 [i_2]) << (((257784357 * 4697) - 3927314640))));
                        arr_19 [i_4] [i_4] [2] [i_2] = (var_2 <= var_9);
                    }
                }
            }
        }

        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {

            for (int i_6 = 1; i_6 < 14;i_6 += 1)
            {
                var_20 = var_13;
                arr_25 [i_0] [i_5] [i_0] [i_0] = (((-18501 == 37296) - ((~(arr_9 [i_0] [i_0] [i_5] [1])))));

                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_21 = (((((var_2 + 2147483647) >> (((arr_15 [i_0] [i_6] [i_7]) - 2094301843)))) <= (var_11 - var_5)));
                        arr_32 [i_0] [i_5] [i_6] [i_7] = (((~var_7) << (((var_2 == (arr_6 [i_0]))))));
                        arr_33 [i_0] [i_0] [i_6] [i_7] [i_7] |= (!(-2147483647 - 1));
                        arr_34 [i_5] [i_5] [i_5] [i_5] [i_8] = (((arr_4 [10]) - 60838));
                    }
                    arr_35 [5] [i_5] [i_5] [i_0] = (arr_12 [i_6 - 1] [i_6 - 1]);
                }

                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    arr_38 [i_5] [i_5] = var_4;
                    var_22 = var_0;
                    var_23 = var_10;
                }
                for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
                {
                    arr_42 [i_0] [i_5] [i_10] [i_5] |= (((-501062893 < var_0) * (((arr_20 [9] [i_5]) * var_6))));
                    arr_43 [i_0] [i_0] [i_5] [i_5] [i_10] [i_10] = -var_5;
                    arr_44 [i_0] [i_0] [i_5] [i_5] [i_0] [i_0] = var_4;
                }
                for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
                {
                    arr_49 [i_5] [0] [i_5] [i_5] = (arr_26 [i_5] [i_5] [i_5] [i_0]);
                    arr_50 [i_5] [i_6] [i_5] [i_5] = (arr_36 [i_0] [i_5]);
                    arr_51 [i_0] [i_5] [i_5] [2] = var_3;
                }
            }
            for (int i_12 = 0; i_12 < 0;i_12 += 1)
            {

                for (int i_13 = 2; i_13 < 12;i_13 += 1) /* same iter space */
                {

                    for (int i_14 = 1; i_14 < 14;i_14 += 1)
                    {
                        arr_58 [i_5] = ((-(!var_10)));
                        arr_59 [i_14] [i_5] [i_12] [i_5] [i_5] [i_0] = (arr_3 [i_13 + 3]);
                        var_24 -= (((arr_56 [i_12 + 1] [i_13 - 1] [i_13] [i_14 + 1]) | var_13));
                        arr_60 [i_0] [8] [1] [1] [i_5] [1] [i_14 - 1] = (arr_54 [i_14] [8] [i_0] [14] [i_0] [i_0]);
                    }
                    for (int i_15 = 0; i_15 < 15;i_15 += 1)
                    {
                        var_25 = var_15;
                        var_26 = (~-501062895);
                        arr_63 [5] [5] [5] [i_12 + 1] [i_5] [1] = ((((var_9 || (arr_24 [1] [i_12]))) || (((arr_8 [i_13 - 2] [i_13] [i_13] [i_13]) || (arr_8 [i_0] [i_0] [i_0] [2])))));
                        var_27 = var_2;
                    }
                    arr_64 [i_5] = (((~(arr_12 [i_0] [i_0]))));
                    arr_65 [i_0] [i_0] [10] [4] [i_0] [i_5] = 501062901;
                }
                for (int i_16 = 2; i_16 < 12;i_16 += 1) /* same iter space */
                {
                    var_28 = var_6;
                    arr_68 [i_0] [i_0] [i_12] [i_5] = (!34631);
                }
                arr_69 [i_0] [2] [i_5] = -var_12;
                /* LoopNest 2 */
                for (int i_17 = 1; i_17 < 1;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 15;i_18 += 1)
                    {
                        {
                            var_29 = var_15;
                            arr_77 [i_0] [i_5] [i_5] [i_0] [12] [i_18] = ((~(60838 - -1986107752)));
                            arr_78 [i_5] = (((~var_0) == ((~(arr_55 [i_17] [i_17] [i_17] [i_17])))));
                            arr_79 [i_0] [i_5] [i_0] [i_18] [i_5] [i_5] = var_7;
                            arr_80 [i_17] [7] [i_5] [i_0] [i_5] [2] [i_17] = (~var_8);
                        }
                    }
                }
            }
            var_30 = var_14;
        }
        for (int i_19 = 0; i_19 < 15;i_19 += 1)
        {
            /* LoopNest 2 */
            for (int i_20 = 1; i_20 < 11;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 15;i_21 += 1)
                {
                    {
                        arr_87 [8] [i_19] [i_19] [i_20] = (((((!(arr_52 [i_0] [i_0] [i_0] [i_20])))) << ((((arr_70 [i_0] [i_20] [i_0] [i_0]) < (arr_82 [i_0]))))));
                        var_31 = var_3;
                        var_32 = (159581319 * (arr_13 [i_0] [i_19] [i_19] [i_20] [i_20] [i_20]));
                        arr_88 [i_0] [12] [i_20] [i_21] = (~1);
                    }
                }
            }
            arr_89 [i_0] [i_0] [i_0] = ((var_12 / (arr_30 [i_0] [i_19] [i_19] [i_19] [i_19])));
        }
    }
    #pragma endscop
}

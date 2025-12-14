/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] = var_8;
                    arr_9 [i_0] [i_1 - 1] [i_1] = var_2;
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        arr_12 [i_3] = var_10;

        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            arr_15 [1] = (arr_13 [i_4]);
            arr_16 [i_3] [i_3] [i_4] = var_4;
        }
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            var_17 = (min(var_17, (((!((!(arr_11 [i_3] [i_5 - 1]))))))));

            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                arr_25 [i_3] [i_3] [i_3] [i_3] = (arr_20 [i_3] [i_3] [i_6]);
                var_18 ^= (arr_24 [i_5 - 1] [i_5 - 1]);
            }
            for (int i_7 = 3; i_7 < 23;i_7 += 1)
            {
                var_19 -= ((!(arr_13 [i_5 - 1])));
                var_20 = ((-(arr_20 [i_5] [i_5 - 1] [i_5 - 1])));

                for (int i_8 = 1; i_8 < 23;i_8 += 1)
                {
                    arr_30 [i_3] [i_3] [i_3] [i_3] = var_5;
                    arr_31 [i_7] [i_7] [2] [i_7] [i_5] [i_3] = (arr_26 [i_3] [i_3] [7]);
                    arr_32 [i_7] = var_2;
                    var_21 = (((~(arr_26 [i_3] [i_5 - 1] [i_5 - 1]))));
                }
                var_22 = (arr_23 [i_3] [i_3] [5] [5]);
                var_23 = (arr_22 [i_5] [i_5] [i_3]);
            }
        }
        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 24;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 1;i_12 += 1)
                    {
                        {
                            arr_42 [i_3] [i_3] [i_3] [i_3] [i_3] [i_12] [i_3] = ((-(arr_11 [i_12 - 1] [i_9])));
                            var_24 &= ((-(((!(arr_23 [i_3] [i_3] [i_3] [i_3]))))));
                        }
                    }
                }
            }
            arr_43 [i_3] [i_3] [i_9] = (arr_22 [i_3] [i_9] [i_3]);

            for (int i_13 = 0; i_13 < 24;i_13 += 1)
            {
                arr_47 [i_3] [i_9] [i_9] = (arr_46 [i_3] [i_9] [21]);
                arr_48 [i_3] = (~var_7);
            }
        }
        for (int i_14 = 0; i_14 < 24;i_14 += 1)
        {
            arr_51 [1] [i_14] = (!(((~(arr_22 [i_3] [i_14] [i_3])))));
            var_25 = (min(var_25, (arr_11 [i_3] [i_14])));
            arr_52 [i_3] [18] [i_3] = ((-(~var_14)));
        }
        arr_53 [i_3] [i_3] = ((~(!var_14)));
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 14;i_15 += 1)
    {
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 14;i_16 += 1)
        {
            for (int i_17 = 2; i_17 < 11;i_17 += 1)
            {
                {
                    var_26 -= var_11;

                    for (int i_18 = 0; i_18 < 14;i_18 += 1)
                    {
                        arr_64 [i_15] [i_16] [i_15] [i_17] [i_18] = (arr_21 [i_17 + 3] [i_17 - 1] [i_17 + 2] [i_17 - 1]);

                        for (int i_19 = 0; i_19 < 14;i_19 += 1)
                        {
                            var_27 = (arr_10 [i_15]);
                            var_28 = ((~((~(arr_44 [i_15] [i_15] [i_15])))));
                            var_29 = (arr_17 [i_17] [i_17 - 1] [i_17 + 1]);
                        }

                        for (int i_20 = 3; i_20 < 12;i_20 += 1)
                        {
                            arr_71 [i_15] [i_20] [i_15] [i_18] [i_20 - 3] = (arr_14 [i_15] [i_17] [i_20]);
                            arr_72 [i_17 + 2] [i_18] [i_20] = arr_41 [i_15] [i_15] [i_15] [i_15] [i_15];
                            arr_73 [i_15] [i_16] [i_15] [i_20] [i_20 + 1] = (!((!(arr_61 [i_15] [10] [i_15]))));
                            arr_74 [i_15] [0] [0] [i_15] [i_20] &= (arr_24 [4] [i_16]);
                        }
                        for (int i_21 = 2; i_21 < 13;i_21 += 1) /* same iter space */
                        {
                            var_30 += -var_14;
                            arr_79 [i_15] [i_15] [i_17 - 1] [i_16] [i_15] [i_15] [i_15] = var_2;
                            arr_80 [i_15] [i_15] [i_15] = var_3;
                            arr_81 [i_15] [i_16] [i_17] = (arr_36 [i_17]);
                        }
                        for (int i_22 = 2; i_22 < 13;i_22 += 1) /* same iter space */
                        {
                            arr_85 [i_15] [i_15] [i_15] = (arr_11 [i_15] [i_15]);
                            var_31 = ((!(arr_69 [6] [i_17 + 2] [i_17 + 2])));
                            arr_86 [i_15] [i_15] [1] [i_15] [i_15] [i_15] = (!var_9);
                        }

                        for (int i_23 = 1; i_23 < 12;i_23 += 1)
                        {
                            arr_89 [i_15] [9] [i_17] [i_23] [0] = ((~((~(arr_82 [i_15] [i_15] [i_15] [i_17] [i_18] [i_23] [i_23 + 2])))));
                            arr_90 [i_15] [i_23] [i_17] [i_18] [i_17] = (arr_44 [i_17] [i_17] [i_17]);
                        }
                        for (int i_24 = 4; i_24 < 12;i_24 += 1)
                        {
                            var_32 -= (arr_46 [i_15] [i_15] [i_24]);
                            arr_93 [i_15] [i_16] [i_17] [i_18] [i_24 + 1] = ((-(arr_41 [i_24 - 1] [i_18] [i_15] [i_16] [i_15])));
                        }
                        arr_94 [i_18] [i_16] [i_16] [i_15] [i_15] [i_15] = arr_27 [i_15] [i_15];
                    }
                    for (int i_25 = 0; i_25 < 1;i_25 += 1)
                    {
                        arr_98 [i_25] [i_15] [i_25] [i_15] [i_15] = ((~(arr_24 [i_17] [i_17 + 2])));

                        for (int i_26 = 4; i_26 < 13;i_26 += 1)
                        {
                            arr_101 [i_25] [i_25] [i_17] = (~var_13);
                            arr_102 [i_25] [i_16] [i_17] [i_16] [i_26] = ((!(arr_17 [i_15] [i_16] [i_17 + 3])));
                        }
                        for (int i_27 = 0; i_27 < 14;i_27 += 1)
                        {
                            var_33 = ((~(arr_37 [i_17] [i_17] [i_17 + 2] [i_17 + 1])));
                            var_34 -= (arr_78 [6] [i_17 + 1] [i_17 + 1] [6] [i_15]);
                        }
                    }
                    var_35 = -var_11;
                }
            }
        }
        arr_105 [i_15] = ((!(arr_75 [i_15] [i_15])));
        arr_106 [i_15] = (arr_24 [i_15] [i_15]);
        var_36 = ((!(arr_62 [i_15])));
        var_37 = ((!(arr_19 [i_15])));
    }
    #pragma endscop
}

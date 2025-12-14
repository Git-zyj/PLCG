/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [2] = var_11;

        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            arr_7 [i_0] = (arr_5 [i_0 - 1]);
            arr_8 [i_0] [i_1] = ((~(((!(arr_3 [i_0] [i_0]))))));
        }
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 16;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    arr_15 [i_2] [i_3] = ((((var_0 ? (arr_4 [i_2] [i_2] [i_4]) : var_5)) * ((((!(arr_6 [i_4] [i_3] [i_2])))))));
                    arr_16 [i_4] [8] [i_4] = (arr_14 [i_4] [i_3] [i_3] [i_3 + 2]);
                }
            }
        }
        arr_17 [i_2] = (~3971725331);
        arr_18 [10] = (arr_1 [14]);

        for (int i_5 = 1; i_5 < 17;i_5 += 1) /* same iter space */
        {
            arr_21 [i_2] = (arr_13 [i_2] [i_2] [10]);
            arr_22 [i_2] [i_2] [14] = var_4;
        }
        for (int i_6 = 1; i_6 < 17;i_6 += 1) /* same iter space */
        {
            arr_25 [i_2] [i_2] [i_6] = (arr_24 [i_2] [i_6 - 1] [i_2]);

            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                arr_28 [14] |= ((((var_8 + (arr_11 [i_2] [i_7])))) + ((323241974 ? -5620538269917519556 : 323241981)));
                arr_29 [2] [i_6 - 1] [i_6] = (((arr_11 [i_6] [i_2]) != (((arr_24 [i_2] [i_2 + 1] [i_2]) ? var_2 : var_4))));
                arr_30 [i_2] = (~var_6);
                arr_31 [i_2 - 1] [i_6] [i_7] = ((!(((arr_1 [i_7]) && (arr_14 [i_7] [i_6] [i_6] [i_6 - 1])))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        {
                            arr_37 [i_2] [i_6] = (!var_7);
                            arr_38 [i_2 + 2] [i_2] [i_2] [i_2 - 1] [i_2] = (((((arr_13 [i_2 + 1] [i_7] [i_7]) + 2147483647)) >> (((arr_11 [i_8] [8]) + 853477718))));
                        }
                    }
                }
            }
            for (int i_10 = 1; i_10 < 17;i_10 += 1)
            {
                arr_41 [i_2] [i_2] [12] = (arr_27 [i_10] [i_2]);
                arr_42 [i_10] = (arr_4 [i_6 - 1] [i_10] [i_10 + 1]);
            }
            for (int i_11 = 0; i_11 < 18;i_11 += 1)
            {
                arr_45 [5] [i_2] = 3831;
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 18;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        {
                            arr_52 [i_13] [i_13] [i_13] [i_6] = ((~(arr_11 [i_6 + 1] [i_6 + 1])));
                            arr_53 [i_2] [i_13] [i_11] [i_13] [i_13] [i_11] = (((arr_14 [i_13] [i_12] [i_13] [i_13]) ? var_5 : (arr_44 [i_2 + 1] [i_2 + 2] [i_6 - 1] [i_6 - 1])));
                        }
                    }
                }
                arr_54 [i_2] [i_6] = (((arr_23 [i_2 - 1] [i_6 + 1] [i_6 + 1]) ? ((var_3 ? (arr_26 [i_2] [i_6 + 1] [i_11] [i_11]) : var_2)) : (((!(arr_39 [i_2] [i_6 - 1] [i_2] [i_11]))))));
            }
        }
        for (int i_14 = 4; i_14 < 17;i_14 += 1)
        {
            arr_58 [3] [i_2] [i_2] = var_6;
            arr_59 [i_2] [i_14 - 3] = (!var_7);
            arr_60 [i_2] [i_2] = ((var_4 ? (arr_50 [i_2 - 1] [i_2 - 1] [i_2] [i_2] [i_2 - 1] [i_2]) : (arr_46 [i_14 - 3] [i_14] [i_14] [i_14 - 1])));
        }
        for (int i_15 = 0; i_15 < 18;i_15 += 1)
        {
            arr_65 [i_2] = var_7;
            arr_66 [i_2] = ((!(((arr_34 [i_2] [i_15] [i_15] [i_15] [i_15]) < var_4))));
            /* LoopNest 2 */
            for (int i_16 = 0; i_16 < 18;i_16 += 1)
            {
                for (int i_17 = 1; i_17 < 15;i_17 += 1)
                {
                    {
                        arr_71 [i_2] [i_17] [i_2] = (arr_51 [i_2] [i_15] [i_16] [i_17] [i_17]);
                        arr_72 [i_2] [i_2] [i_2] [i_2] [i_16] [i_16] = (~var_5);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 18;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 18;i_19 += 1)
                {
                    {
                        arr_78 [i_2] [0] [i_18] [i_19] = ((((var_2 >> (((arr_1 [i_15]) + 3228859000315373183))))) * (arr_62 [i_2 + 2] [i_2 + 1] [i_2 + 1]));
                        arr_79 [i_2] [i_2] [i_18] [i_2] = (((((arr_27 [i_2] [i_2]) ? var_3 : var_5)) / 246));

                        for (int i_20 = 0; i_20 < 18;i_20 += 1)
                        {
                            arr_82 [i_2] [i_15] [i_15] [16] [i_20] = (arr_49 [i_2 + 1] [i_18] [i_2 + 2] [i_2 + 2] [i_2] [i_2 + 2]);
                            arr_83 [i_19] [i_19] [3] [i_15] [i_2] = (arr_14 [i_20] [i_15] [i_15] [i_15]);
                        }
                        for (int i_21 = 1; i_21 < 17;i_21 += 1)
                        {
                            arr_86 [1] [i_15] [i_15] [9] = -var_9;
                            arr_87 [i_18] [i_21] = (((arr_55 [i_2 + 1]) ? (arr_55 [i_2 + 1]) : (arr_55 [i_2 - 1])));
                        }
                        for (int i_22 = 0; i_22 < 1;i_22 += 1)
                        {
                            arr_92 [i_22] [i_22] [i_18] [i_22] [i_2] = ((((((arr_55 [2]) ? var_10 : var_5))) ? (arr_43 [i_15] [i_15] [i_19] [i_22]) : (arr_27 [i_15] [i_19])));
                            arr_93 [i_2] [i_22] [i_22] = (arr_89 [i_15] [i_18] [1]);
                            arr_94 [i_2] [i_19] [i_18] [i_19] [i_22] = (((arr_81 [i_22] [i_22] [i_22] [i_19] [i_22]) < 9223372036854775807));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_23 = 0; i_23 < 11;i_23 += 1)
    {
        for (int i_24 = 0; i_24 < 11;i_24 += 1)
        {
            {
                arr_101 [i_23] [i_23] = (arr_64 [i_23] [i_23]);
                arr_102 [i_23] [i_23] = (~-15468);
                arr_103 [i_23] [i_24] [i_24] = var_8;
                arr_104 [i_23] = (arr_3 [i_23] [i_23]);
            }
        }
    }
    #pragma endscop
}

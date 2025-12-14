/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((~(max((arr_2 [i_0]), ((~(arr_2 [i_0])))))));
        arr_4 [i_0] = (~var_2);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {

        for (int i_2 = 3; i_2 < 23;i_2 += 1)
        {

            for (int i_3 = 3; i_3 < 23;i_3 += 1)
            {
                arr_13 [i_3 - 2] [i_3] [10] [i_1] = (arr_7 [i_1] [i_1] [i_1]);
                arr_14 [i_1] [i_1] [i_1] = ((~(!65535)));
                arr_15 [i_1] = ((~(arr_12 [i_2 + 1])));
            }
            arr_16 [i_1] [i_2 + 1] [i_2 - 2] = (max((arr_12 [i_1]), (max((arr_12 [i_2 + 1]), (arr_12 [i_2 - 2])))));
            arr_17 [i_1] [i_2] [i_1] = 1;
        }
        arr_18 [i_1] [i_1] = ((((~(arr_5 [i_1]))) >= ((max((arr_5 [i_1]), (arr_5 [i_1]))))));
        arr_19 [i_1] = (max(((((arr_7 [0] [0] [0]) || -48))), (~var_8)));
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            {
                arr_24 [i_5] [i_5] = (max((((!((min(var_4, var_3)))))), var_3));
                arr_25 [i_5] = var_1;
            }
        }
    }
    var_10 = var_2;

    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        arr_28 [8] [8] |= ((!((max(137, (arr_12 [i_6]))))));
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 12;i_8 += 1)
            {
                {
                    arr_33 [i_6] [i_6] = ((max(18446744073709551615, 0)));

                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {

                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            arr_40 [i_6] [i_6] [i_6] [5] [i_6] = (~-var_1);
                            arr_41 [i_6] [10] [i_8] [3] [i_6] = ((!(min(1, (arr_5 [i_8 + 2])))));
                            arr_42 [2] [2] [2] [i_6] [i_10] = ((-((-((min(var_9, (arr_6 [i_10]))))))));
                        }
                        for (int i_11 = 1; i_11 < 11;i_11 += 1)
                        {
                            arr_46 [i_6] [i_6] [i_6] [i_9] [i_6] = var_8;
                            arr_47 [i_6] [i_6] [i_6] [1] [i_11 + 1] = 26914;
                            arr_48 [i_6] [i_7 - 2] [i_6] [i_8 + 2] [i_9] [i_7 - 2] = (min((!var_2), ((!(!var_5)))));
                        }
                        for (int i_12 = 1; i_12 < 1;i_12 += 1)
                        {
                            arr_53 [i_9] [i_9] [i_8] [i_7 - 1] [i_9] = ((var_8 > ((max((arr_51 [i_6] [1] [i_7 - 2] [4] [i_8]), (arr_51 [i_6] [7] [i_7 - 2] [i_7 - 2] [7]))))));
                            arr_54 [i_9] [i_9] = (max((~var_2), (!var_0)));
                            arr_55 [1] [i_6] [i_6] = (max((arr_51 [i_6] [i_6] [i_8] [i_9] [i_12 - 1]), 932058777));
                        }
                        arr_56 [i_6] [i_9] [i_8] [12] |= (~5);

                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 14;i_13 += 1)
                        {
                            arr_61 [13] [12] [12] [i_6] = (arr_51 [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_8 + 1] [i_7 - 2]);
                            arr_62 [4] [1] [i_9] [1] [0] = 536870848;
                            arr_63 [i_13] [i_9] [i_7] = (arr_52 [i_6] [i_6] [i_6] [i_8 + 2] [10] [i_9]);
                        }
                        for (int i_14 = 2; i_14 < 10;i_14 += 1) /* same iter space */
                        {
                            arr_66 [i_14] = var_3;
                            arr_67 [i_6] [i_9] = (arr_51 [i_6] [i_6] [i_6] [i_6] [i_6]);
                            arr_68 [i_6] [i_6] [4] [i_6] [i_6] = ((-(arr_7 [i_14 + 2] [i_7 - 2] [i_7])));
                        }
                        for (int i_15 = 2; i_15 < 10;i_15 += 1) /* same iter space */
                        {
                            arr_71 [i_15] [i_8 + 1] [i_15] = (max((max((arr_6 [i_7 - 2]), (arr_6 [i_7 + 1]))), (min(0, (arr_6 [i_7 - 2])))));
                            arr_72 [i_6] [5] [i_6] = var_6;
                            arr_73 [12] [i_15 + 2] [i_6] [i_6] [7] [i_6] = (arr_31 [i_6] [i_6] [1]);
                        }
                        arr_74 [i_6] [0] [0] [i_9] |= (min(-255, var_6));
                        arr_75 [i_6] [i_6] = (~-0);
                    }
                    for (int i_16 = 0; i_16 < 14;i_16 += 1)
                    {
                        arr_79 [i_6] = (max((~var_7), -var_5));
                        arr_80 [i_6] [i_8 + 2] [i_6] [i_6] = ((min(var_0, 91)));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_17 = 2; i_17 < 11;i_17 += 1)
        {
            for (int i_18 = 2; i_18 < 13;i_18 += 1)
            {
                {
                    arr_86 [8] [8] = (!8128);

                    for (int i_19 = 0; i_19 < 14;i_19 += 1)
                    {
                        arr_89 [i_6] [i_6] [i_19] [i_19] [i_19] [i_6] = (16383 * var_4);
                        arr_90 [i_6] = ((!((min((arr_27 [i_6] [i_18 - 2]), (arr_37 [i_18 + 1] [i_17 + 2] [i_17 + 3] [i_17 + 2]))))));
                        arr_91 [i_6] [i_18 - 2] [9] [i_6] = (min((!var_5), (max(var_8, ((min(var_7, 240)))))));
                    }
                    arr_92 [i_6] [i_6] [i_6] = 1788532472;
                    arr_93 [0] [0] [8] [0] = (arr_64 [i_18 + 1] [i_17 - 1] [0] [2] [2]);
                }
            }
        }
    }
    for (int i_20 = 0; i_20 < 13;i_20 += 1)
    {
        arr_98 [i_20] = ((~((max((!var_6), var_4)))));
        arr_99 [i_20] = 1;
    }
    for (int i_21 = 1; i_21 < 1;i_21 += 1)
    {
        arr_104 [i_21] = (max(((max((arr_5 [i_21 - 1]), var_8))), (max((arr_100 [i_21 - 1]), (min(52, (arr_12 [i_21])))))));
        arr_105 [i_21 - 1] = ((!(arr_9 [i_21 - 1] [i_21 - 1])));
        arr_106 [i_21 - 1] = ((!((!(arr_12 [i_21 - 1])))));
    }
    #pragma endscop
}

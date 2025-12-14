/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_13 ? var_10 : var_3));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            arr_6 [i_0] [i_1] [i_0] = (((arr_0 [i_0]) ? (arr_5 [16] [i_0]) : (arr_1 [i_0] [15])));

            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                arr_9 [i_0] [i_0] = (min((arr_0 [i_0]), ((~(((arr_8 [i_0] [10] [i_1] [i_2]) ? var_15 : var_14))))));
                arr_10 [i_1] = ((-428 ? -16225 : 436));
            }
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            arr_13 [1] [i_3] [1] = (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_11 [i_0] [16] [i_3])));
            arr_14 [i_0] [i_3] [i_0] = ((!(((var_5 ^ (arr_3 [19]))))));
        }
        arr_15 [2] = (arr_12 [20] [10]);
        arr_16 [i_0] &= ((((max((arr_0 [i_0]), (var_11 < var_1)))) ? (((max(((max((arr_8 [i_0] [i_0] [0] [i_0]), (arr_4 [i_0])))), var_10)))) : (arr_11 [i_0] [6] [i_0])));
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        arr_20 [1] = ((-(min((arr_18 [i_4]), var_13))));
        arr_21 [i_4] [10] = ((-16225 ? 0 : 1));
        arr_22 [i_4] [i_4] = var_15;
        arr_23 [i_4] = (arr_17 [i_4]);
    }
    for (int i_5 = 2; i_5 < 14;i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                {
                    arr_30 [i_5] [i_6] [1] = (((((((max((arr_0 [i_5]), var_5))) ? ((-(arr_19 [8]))) : var_11))) ? (((var_12 != ((var_13 - (arr_7 [i_5] [i_6])))))) : (arr_12 [i_5] [i_5])));
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 14;i_9 += 1)
                        {
                            {
                                arr_35 [8] [i_5] [i_5] [8] = var_13;
                                arr_36 [i_5] [i_7] [9] [i_5] [i_5] [i_5] [i_5] = ((-(((var_5 != (!var_12))))));
                                arr_37 [i_5] [6] [14] [i_8] [i_7] = var_8;
                            }
                        }
                    }
                }
            }
        }
        arr_38 [i_5] = ((-((((((arr_11 [i_5] [i_5] [i_5]) ? (arr_18 [i_5]) : (arr_12 [i_5] [i_5])))) ? ((-(arr_25 [8] [i_5]))) : (arr_24 [i_5])))));
    }
    for (int i_10 = 2; i_10 < 14;i_10 += 1) /* same iter space */
    {
        arr_42 [i_10] = (9 <= 239);

        for (int i_11 = 0; i_11 < 15;i_11 += 1)
        {
            arr_47 [2] [0] [i_10] |= (min((((((max(-8, 427))) == (((arr_31 [i_10] [i_10] [i_10] [i_11] [i_11] [i_11]) * var_7))))), ((-(!var_2)))));

            for (int i_12 = 0; i_12 < 15;i_12 += 1)
            {
                arr_51 [i_10] [i_11] [1] [i_12] = (((arr_46 [i_12] [i_11] [6]) > (max((arr_11 [i_10] [i_12] [i_12]), ((((arr_2 [i_11] [i_10]) ? var_11 : (arr_12 [i_12] [i_12]))))))));
                arr_52 [i_10] = ((!(((((((arr_2 [13] [17]) ? (arr_2 [6] [0]) : (arr_24 [i_10])))) ? (arr_49 [i_10] [i_10 - 2] [i_10] [i_10 + 1]) : var_4)))));
            }
            for (int i_13 = 0; i_13 < 15;i_13 += 1)
            {
                arr_55 [2] [i_13] = ((((var_8 + (arr_40 [i_13]))) - var_8));
                arr_56 [13] [4] [i_13] [4] = arr_45 [i_13] [i_11] [i_10];
            }
            for (int i_14 = 0; i_14 < 15;i_14 += 1)
            {
                arr_60 [i_10] [i_10] [i_10] = ((((((max(var_13, var_8))))) ? ((50305 * ((-48 | (arr_32 [i_10]))))) : ((-(min((arr_46 [i_10] [i_10] [i_14]), (arr_7 [i_10 - 1] [15])))))));

                for (int i_15 = 1; i_15 < 13;i_15 += 1)
                {
                    arr_64 [i_10] [i_10] [i_10] [2] = (arr_61 [i_10] [i_11] [i_14] [i_15]);
                    arr_65 [i_11] &= ((((max(((min(var_7, (arr_1 [10] [i_15])))), ((var_5 - (arr_50 [i_10])))))) <= ((((max((arr_61 [i_10] [i_11] [6] [6]), var_9))) ? (arr_11 [2] [i_14] [i_15 + 2]) : -var_15))));
                    arr_66 [i_10] [9] [i_14] [i_15] = ((var_14 || ((max((var_11 & var_7), -var_10)))));
                    arr_67 [12] [14] = max(((((-48 < -94) > ((-955607676 ? var_7 : 194))))), (max((((arr_48 [1] [i_10 + 1]) ? 0 : var_3)), (10 | 45248))));
                }
                for (int i_16 = 0; i_16 < 15;i_16 += 1)
                {
                    arr_71 [i_16] [i_11] [i_11] [i_10] = ((~(arr_68 [i_14] [i_14] [14] [i_16] [14] [i_10 - 2])));
                    arr_72 [i_10] [i_14] [i_10] [i_10] = var_11;

                    for (int i_17 = 3; i_17 < 13;i_17 += 1)
                    {
                        arr_76 [i_10] [i_10] [12] = var_8;
                        arr_77 [i_10] = var_12;
                    }

                    /* vectorizable */
                    for (int i_18 = 2; i_18 < 13;i_18 += 1) /* same iter space */
                    {
                        arr_80 [7] [7] [i_11] [i_14] [4] [i_11] [1] = (arr_33 [i_10] [i_11] [2] [i_14] [i_18]);
                        arr_81 [i_10] [i_11] [i_14] [i_16] [14] = ((((var_5 ? var_2 : var_12)) - (~var_5)));
                        arr_82 [i_10] = ((~(arr_79 [i_10] [i_11] [i_11] [i_16] [i_18])));
                        arr_83 [3] [i_11] [8] [i_16] [i_18] [9] [i_18] = var_8;
                    }
                    for (int i_19 = 2; i_19 < 13;i_19 += 1) /* same iter space */
                    {
                        arr_86 [i_10] [i_11] [7] [1] [i_19] = (arr_25 [i_16] [i_16]);
                        arr_87 [i_10] [i_10] [i_14] [i_10] [i_10] = ((+(((arr_84 [i_10 + 1]) ? var_9 : (arr_84 [i_10 + 1])))));
                        arr_88 [i_14] [i_14] = (((121 | 975854769) + var_1));
                    }
                }
            }
        }
    }
    var_17 = (!var_6);
    #pragma endscop
}

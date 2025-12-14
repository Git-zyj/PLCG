/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;
    var_13 = var_6;
    var_14 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                arr_7 [i_1] = (arr_0 [12] [13]);
                arr_8 [i_1] [i_1] [i_1] = min(var_3, var_6);
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [i_0] [i_1] [i_1] [11] = (((~(arr_12 [i_0 + 2]))));
                            arr_15 [i_0] = ((((-(arr_9 [i_0] [i_0] [i_0])))));
                        }
                    }
                }
            }
        }
    }

    for (int i_4 = 1; i_4 < 24;i_4 += 1)
    {
        arr_18 [i_4] = ((var_9 ^ (~5938)));

        for (int i_5 = 2; i_5 < 24;i_5 += 1)
        {
            arr_21 [20] [i_5 - 1] = (arr_19 [14] [i_5] [i_5 - 1]);
            arr_22 [i_4] [i_4] = var_1;
            arr_23 [i_4] [6] = (21813 | var_6);
        }
        for (int i_6 = 3; i_6 < 22;i_6 += 1)
        {
            arr_27 [i_6] [i_4] = ((-((~(arr_19 [i_4] [6] [i_6])))));

            for (int i_7 = 1; i_7 < 23;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 23;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 24;i_9 += 1)
                    {
                        {
                            arr_34 [6] [10] [i_8] = (((min((arr_33 [i_8 + 2] [i_8 + 2] [0] [i_8 + 2] [i_8 + 2]), (arr_33 [i_8 + 2] [i_8 + 2] [16] [6] [i_8 - 1]))) & var_8));
                            arr_35 [i_4] [i_6] [i_7] [i_8] [i_4] [i_9] [i_9 - 1] = -21814;
                            arr_36 [24] [24] = var_5;
                            arr_37 [i_4] [i_6] [19] [i_4] [i_9] = var_10;
                            arr_38 [i_4 + 1] [i_4] [i_6] [i_7] [i_6] [i_9] = (arr_30 [i_4] [i_6 + 3]);
                        }
                    }
                }
                arr_39 [i_4 + 1] [i_6] [1] [i_7] &= (min((arr_25 [i_6] [i_4 + 1] [i_4 - 1]), ((min((arr_25 [i_4 - 1] [i_4 + 1] [i_4]), (arr_25 [i_6] [i_4 + 1] [i_4]))))));
                arr_40 [i_4] [i_4] = (-(~var_5));
            }
            /* vectorizable */
            for (int i_10 = 3; i_10 < 24;i_10 += 1)
            {
                arr_43 [2] [12] [i_6] [i_10] = ((7080118650873856197 ? ((var_8 ? var_1 : var_4)) : (var_9 ^ var_11)));
                arr_44 [i_4] = var_7;
                arr_45 [i_4] = var_5;
                arr_46 [10] [20] [i_6] [i_10] |= (~var_5);
            }
            for (int i_11 = 4; i_11 < 23;i_11 += 1)
            {
                arr_49 [i_4] = var_4;
                arr_50 [i_4] = (arr_47 [i_4] [i_4]);
                /* LoopNest 2 */
                for (int i_12 = 2; i_12 < 23;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 24;i_13 += 1)
                    {
                        {
                            arr_56 [i_6] [i_6] [i_11 - 4] [i_11] = var_3;
                            arr_57 [i_12] [i_6] [i_11] [i_12] [i_13] [10] [i_6 - 3] = (((242 && (arr_33 [i_13 + 1] [i_12] [i_11] [i_6] [i_4]))));
                            arr_58 [i_4] [i_4] [i_11] [i_4] [i_13 + 1] = (min(var_5, 17835077118219560459));
                            arr_59 [i_4] [i_6] [i_11 + 2] [i_12 + 2] [i_13] = 5319;
                        }
                    }
                }
            }
            for (int i_14 = 1; i_14 < 22;i_14 += 1)
            {
                arr_62 [i_4] [i_4] [i_4] = (arr_61 [i_6] [i_4]);
                arr_63 [2] &= ((((~(arr_60 [i_14 + 2] [i_14 + 1] [2]))) ^ (arr_60 [i_14 + 3] [i_14 - 1] [18])));
                arr_64 [i_4] [i_4] [i_4 - 1] = arr_52 [i_14];
                arr_65 [i_4] [i_6] [i_4] = -var_0;

                for (int i_15 = 2; i_15 < 24;i_15 += 1)
                {
                    arr_68 [i_4 - 1] [i_6] [i_6] [i_4] [6] = -9;
                    arr_69 [i_4] [i_4] [i_6] [i_4] [i_6] = ((min((arr_25 [i_4] [i_4 - 1] [i_4]), var_6)));
                    arr_70 [i_4] [i_15] [i_6] [i_14] [i_15] [i_15 + 1] = ((((arr_47 [i_14 + 1] [i_15]) ? (arr_41 [i_6] [i_6] [i_6] [i_6 + 2]) : var_3)));
                }
            }
            arr_71 [i_4] = ((min(48, 72)));
            arr_72 [14] = (min(var_11, -var_0));
        }
        arr_73 [i_4] = (arr_51 [i_4] [i_4] [i_4 + 1] [i_4 + 1] [i_4] [i_4]);
    }
    for (int i_16 = 2; i_16 < 19;i_16 += 1)
    {
        arr_78 [i_16] = -72;
        arr_79 [i_16] [i_16] = var_2;
    }
    for (int i_17 = 2; i_17 < 13;i_17 += 1)
    {
        arr_83 [i_17] = (((-(arr_2 [i_17 + 1] [3]))));

        for (int i_18 = 2; i_18 < 12;i_18 += 1)
        {
            arr_87 [i_17] [i_17] = (arr_66 [i_17] [i_17] [i_17] [i_17]);
            arr_88 [i_17] [i_18] = (arr_10 [i_17 - 1] [i_17]);
            arr_89 [i_17 + 1] = (((arr_26 [i_18 + 2] [i_18] [i_18 - 1]) ? (var_2 || var_5) : -2962432632869633161));
        }
    }
    #pragma endscop
}

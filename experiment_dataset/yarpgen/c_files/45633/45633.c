/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
                        {
                            arr_14 [i_1] = (max(var_4, (65535 >= 15)));
                            arr_15 [i_0] [i_0] [i_0] [i_1] [i_4] [i_1] [i_3] = (arr_4 [i_0]);
                            arr_16 [i_0] [i_0] [18] [i_2] [i_3] [i_1] = var_9;
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = 15;
                            arr_18 [i_1] = ((611829852 < (max(611829852, (arr_2 [i_0 + 1])))));
                        }
                        for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                        {
                            arr_22 [i_1] [i_1] [i_1 + 1] [i_2] [i_1] [i_3] [i_1] = var_9;
                            arr_23 [i_0 + 2] [8] [i_1 + 1] [i_2] [i_3] [i_0 + 2] = ((!((min(var_0, (arr_12 [i_1 + 1] [i_1 + 1] [i_1] [i_1] [i_1 + 1] [i_1]))))));
                            arr_24 [i_3] = ((3683137443 ? (~var_0) : (arr_6 [13] [i_1 + 1] [i_2] [i_1 + 1])));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                        {
                            arr_27 [i_2] [i_1] [i_2] [i_2] [i_2] = (((arr_4 [i_0]) ? (arr_8 [i_0 + 4]) : (arr_10 [10])));
                            arr_28 [i_0] [i_1] = 1;
                            arr_29 [i_0] [i_0] [20] [i_2] [i_6] = 611829852;
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            arr_32 [i_0] [i_1] = (arr_4 [i_0 - 1]);
                            arr_33 [i_0] [i_1] [i_0] [i_2] [i_3] = ((-(8 && 38)));
                            arr_34 [i_0] [i_0 + 3] [i_1] [i_1] [i_3] [i_7] = (arr_21 [i_1] [i_1] [i_0] [i_0] [i_7] [i_2] [i_0 + 4]);
                            arr_35 [i_1] = ((-1 ? 65535 : 611829845));
                        }
                        arr_36 [i_0] [i_0 - 4] [i_1] = var_2;
                    }
                }
            }
        }
        arr_37 [i_0] = -18446744073709551615;
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 12;i_8 += 1)
    {
        arr_40 [i_8] [9] = -4039;

        for (int i_9 = 1; i_9 < 9;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                for (int i_11 = 3; i_11 < 10;i_11 += 1)
                {
                    {
                        arr_47 [i_8] [i_8] [i_9 + 2] [i_10] [i_11] = (((var_6 && var_4) - ((-196727060 ? 16 : 1975815644))));
                        arr_48 [i_8] [i_9] [i_10] [i_11 + 1] = ((((var_9 >> (var_4 + 877300314523647865))) < -10));
                    }
                }
            }

            for (int i_12 = 0; i_12 < 12;i_12 += 1)
            {

                for (int i_13 = 1; i_13 < 10;i_13 += 1)
                {
                    arr_54 [i_13] = (((var_2 ? var_1 : var_8)));
                    arr_55 [i_8] [i_9 + 1] [10] [10] = (4257385860 != 4229689952994288267);

                    for (int i_14 = 0; i_14 < 12;i_14 += 1)
                    {
                        arr_60 [i_8] [i_9] [i_8] [i_13] [i_14] = (((-(arr_7 [i_8] [i_14] [i_14] [i_13] [i_14]))));
                        arr_61 [i_14] [i_13] [i_8] [i_9] [i_8] = (~611829864);
                        arr_62 [i_8] [1] [i_12] [i_14] [i_14] = 3827158384;
                    }
                }
                /* LoopNest 2 */
                for (int i_15 = 2; i_15 < 11;i_15 += 1)
                {
                    for (int i_16 = 2; i_16 < 11;i_16 += 1)
                    {
                        {
                            arr_68 [i_8] [i_8] [i_8] [i_8] [i_8] = var_0;
                            arr_69 [i_8] [i_9] [i_12] [i_15 - 2] [i_16] = (arr_26 [i_9] [i_9] [i_15] [i_15 - 2] [i_12]);
                            arr_70 [i_16 - 1] [i_15 + 1] [i_8] [i_9 + 3] [i_8] = ((var_10 ? (((arr_50 [i_8] [i_9 + 2] [7] [i_8]) ? -1 : var_3)) : ((var_7 << (var_8 - 7)))));
                            arr_71 [i_8] [i_9] [i_12] [i_9] [i_16] = ((3683137460 ? (~260181693) : 229));
                            arr_72 [i_16 - 2] [i_8] [1] [i_9] [i_8] = (~var_4);
                        }
                    }
                }
                arr_73 [i_8] [i_9] [i_12] = arr_42 [i_9] [0] [i_9 - 1];
            }
            arr_74 [i_8] = (((arr_66 [i_8] [i_8]) != (((arr_49 [i_8]) ? var_7 : var_4))));
        }
        for (int i_17 = 1; i_17 < 10;i_17 += 1)
        {
            arr_79 [4] [4] [i_17 + 2] = (((13090190226653819104 + var_6) ? 1 : (arr_56 [i_17] [i_17] [i_17 - 1] [0] [i_17 + 2] [i_17] [i_17 - 1])));
            arr_80 [i_8] = (((var_6 < 1324235389) ? (((-171085108 + 2147483647) << (467808895 - 467808895))) : (arr_3 [0])));
            arr_81 [i_17] |= (((arr_44 [i_17] [i_8]) & (((arr_12 [i_17] [i_17] [i_17] [i_17] [i_17] [11]) ? (arr_38 [i_8] [3]) : var_3))));
        }
    }
    var_12 = var_4;
    #pragma endscop
}

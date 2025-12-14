/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    var_12 = var_9;

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0 + 4] = (((!var_9) < (~var_2)));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_8 [i_1] [i_0] [i_0] = (((max(var_7, var_9)) ^ -var_5));
            arr_9 [i_1] [i_1] = var_6;
        }
        for (int i_2 = 3; i_2 < 12;i_2 += 1)
        {
            arr_12 [i_0] [i_2 - 2] [i_2] = (2426092027 / 1868875268);
            var_13 = -var_6;

            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                arr_16 [i_0 + 3] [i_2] [i_3] = ((!(~var_10)));

                /* vectorizable */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    arr_19 [i_0] [i_2 + 1] [i_3] [i_4] [i_4] [i_4] = -var_2;
                    arr_20 [i_0] = var_6;

                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        arr_23 [i_0] [i_2] [1] [i_4] [i_5] = (~var_7);
                        arr_24 [i_0] [i_0 + 4] [i_0] [i_0] [i_0] = var_0;
                        var_14 = (var_4 || var_4);
                    }
                    for (int i_6 = 1; i_6 < 11;i_6 += 1) /* same iter space */
                    {
                        arr_27 [i_4] [i_4] [i_4] [i_4] [i_4] = (var_0 * var_10);
                        arr_28 [i_4] [i_0] [11] [i_4] [i_6] [i_4] [i_2] = (!1868875271);
                    }
                    for (int i_7 = 1; i_7 < 11;i_7 += 1) /* same iter space */
                    {
                        var_15 = var_5;
                        arr_32 [i_2] = (!var_7);
                    }
                    for (int i_8 = 3; i_8 < 13;i_8 += 1)
                    {
                        var_16 = (var_6 == var_4);
                        arr_36 [i_0 + 2] [i_2] [11] [i_4] [i_8] [i_8 - 3] = (var_7 / var_2);
                    }

                    for (int i_9 = 1; i_9 < 13;i_9 += 1)
                    {
                        arr_39 [i_0 + 4] [i_2] [i_3] [i_9] = var_9;
                        var_17 = -var_7;
                        arr_40 [i_0 + 1] [i_0] [i_0] [i_0 - 1] [0] = var_8;
                        var_18 = ((var_5 == (!var_1)));
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        arr_43 [i_2] [i_2] [i_10] [i_2] [i_2] = (!var_9);
                        var_19 = var_4;
                        arr_44 [i_10] [i_10] [11] [i_10] [i_0 + 1] = ((-(var_3 + var_6)));
                        var_20 = -var_7;
                    }
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        var_21 = var_6;
                        arr_47 [i_0] [i_2 - 2] [i_2] [i_3] [i_4] [i_11] = (~var_1);
                        arr_48 [i_3] [i_11] = var_1;
                    }
                    arr_49 [i_0 + 2] [i_0 + 2] [i_3] [i_3] = ((var_2 <= (var_10 >= var_6)));
                }
            }
            arr_50 [i_0] = (min(((min(-109, 1))), var_0));
            var_22 = (((~var_0) - (((((var_9 | var_3) == ((max(var_7, var_4)))))))));
        }
        arr_51 [i_0] [i_0 + 1] = (!(~var_2));
    }
    for (int i_12 = 0; i_12 < 0;i_12 += 1)
    {

        /* vectorizable */
        for (int i_13 = 1; i_13 < 23;i_13 += 1)
        {
            arr_56 [i_12] [i_13 + 1] = -var_0;

            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                arr_60 [i_14] = -109;
                arr_61 [i_14] [i_14] [i_12 + 1] = -7792304003379795032;
                arr_62 [i_14] [i_13 - 1] [i_13 - 1] [i_14] = -var_7;

                for (int i_15 = 4; i_15 < 23;i_15 += 1)
                {
                    arr_65 [i_12] [i_12] [i_12] [i_14] [i_12] [i_12 + 1] = (~var_2);
                    arr_66 [i_14] [13] [i_13 - 1] [i_14] = -var_7;
                    arr_67 [i_12] [i_14] = var_3;
                    arr_68 [i_12] [i_13] [i_14] [i_15 - 1] [i_14] [i_14] = (var_1 == var_10);
                }
                for (int i_16 = 2; i_16 < 21;i_16 += 1) /* same iter space */
                {

                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        var_23 = -var_0;
                        arr_75 [i_12] [i_13] [i_14] [i_16 + 1] [i_17] = (4083 | 22436);
                        arr_76 [i_12 + 1] [i_13] [i_14] [i_14] [i_16] [i_16 + 2] [i_17] = -var_8;
                    }
                    for (int i_18 = 0; i_18 < 1;i_18 += 1)
                    {
                        arr_80 [i_14] [i_13] [i_14] [i_16] [20] [i_14] [i_18] = (!var_9);
                        arr_81 [i_12] [i_12 + 1] [i_12 + 1] [i_14] = (var_4 / var_10);
                        arr_82 [i_13] [i_13] [i_13 + 1] [i_13] [i_14] = (var_1 > var_8);
                        var_24 = (!var_7);
                    }

                    for (int i_19 = 0; i_19 < 1;i_19 += 1)
                    {
                        arr_85 [i_14] [i_14] = (var_0 % var_4);
                        arr_86 [i_12] [i_12 + 1] [i_14] [i_12] = (!var_0);
                        arr_87 [i_12] [i_13] [i_14] [i_16] [i_14] = (var_3 && var_9);
                    }
                    arr_88 [i_12] [i_13 + 1] [i_14] [i_14] = (~var_1);
                }
                for (int i_20 = 2; i_20 < 21;i_20 += 1) /* same iter space */
                {
                    arr_92 [i_14] [i_14] = (var_4 || var_10);
                    arr_93 [i_14] [i_14] [i_14] [i_14] [i_13] [i_14] = (var_2 == var_1);
                }
            }
            for (int i_21 = 1; i_21 < 1;i_21 += 1)
            {
                arr_96 [i_12] [i_13 - 1] = (1868875280 != -38613335);

                for (int i_22 = 0; i_22 < 1;i_22 += 1)
                {
                    var_25 = 0;
                    arr_101 [i_12] [i_22] [i_21] [i_22] [i_13] = (~var_5);
                    arr_102 [i_12] [i_12 + 1] [i_12] [i_12] [i_12] [i_12] = -var_6;
                    arr_103 [i_12] [i_13] = (30 & 18710);
                    arr_104 [i_21] [i_13 - 1] [i_13] = -var_2;
                }
                arr_105 [i_21 - 1] [13] [i_13] [i_12 + 1] = (var_1 * var_4);
            }
        }
        arr_106 [i_12] = var_9;
        arr_107 [i_12] = (!((((max(1, -563822313))) != -2490395281921626248)));
        arr_108 [i_12] = ((!((max(((max(var_1, var_9))), var_8)))));
    }
    var_26 = var_10;
    var_27 = 44978590;
    #pragma endscop
}

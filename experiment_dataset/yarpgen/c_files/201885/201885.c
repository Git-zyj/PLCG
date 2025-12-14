/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_18 = ((3757709561 && (((67 >> (255 - 229))))));
            var_19 = (min((~122), ((15 / (max(var_16, var_2))))));

            for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
            {
                arr_8 [i_0] = 255;
                arr_9 [9] [i_0] = 2122;
                arr_10 [i_0] [i_2] [0] [i_0] = var_14;
                arr_11 [i_0] [3] = var_16;
            }
            for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
            {
                arr_14 [i_0] = 1972731015;
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 7;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {
                            arr_20 [1] [i_3] [i_3] [i_0] = var_5;
                            var_20 |= (((max(-86, 255))));
                            var_21 = (max(var_21, var_12));
                            arr_21 [i_0] [i_0] [6] = (min(-25337, 9268773156975286760));
                        }
                    }
                }
            }
            for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
            {
                var_22 = 0;
                arr_24 [i_0] [i_1] [i_0] = ((~(~-1)));
            }
        }
        /* vectorizable */
        for (int i_7 = 2; i_7 < 8;i_7 += 1) /* same iter space */
        {
            arr_28 [0] [4] &= 3757709561;

            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 8;i_10 += 1)
                    {
                        {
                            arr_38 [7] [i_7 + 1] [i_0] [i_9] [i_10 + 1] = var_17;
                            arr_39 [i_0] [i_0] [i_8] [i_9] [i_0] [1] [i_7] = (~-2);
                            arr_40 [4] [i_7] |= ((1 >> (((~var_2) + 69))));
                            arr_41 [2] [6] [6] [i_9] [1] |= var_13;
                        }
                    }
                }
                var_23 = (max(var_23, (var_9 < 1148940566)));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 10;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 10;i_12 += 1)
                    {
                        {
                            arr_48 [0] [i_7] [i_0] [i_7 + 1] = (-4294967295 >= 243);
                            arr_49 [i_0] [i_11] [i_0] = var_14;
                            arr_50 [i_0] [i_8] [i_12] [i_8] [i_11] = 218;
                            arr_51 [i_0] [0] [0] [i_11] [i_11] [i_0] [i_12] = var_3;
                        }
                    }
                }
            }
            for (int i_13 = 0; i_13 < 10;i_13 += 1)
            {
                arr_56 [i_0] = (((4294967295 < var_8) && (79563178 / 2147483625)));
                arr_57 [i_0] [i_0] [i_7 + 2] [i_0] = var_12;
            }
            for (int i_14 = 0; i_14 < 10;i_14 += 1)
            {
                arr_60 [i_0] = (~238);
                arr_61 [i_0] = ((537257735 >> (1753 - 1724)));
                arr_62 [4] [4] [4] [4] &= var_1;
            }
        }
        for (int i_15 = 2; i_15 < 8;i_15 += 1) /* same iter space */
        {
            var_24 -= 7111;
            var_25 = 243;
            arr_65 [i_15] [i_15] [i_0] = (((max(1, 177))));
            arr_66 [i_0] = ((124 - (((!((min(var_9, 255))))))));
        }
        for (int i_16 = 2; i_16 < 8;i_16 += 1) /* same iter space */
        {

            for (int i_17 = 1; i_17 < 7;i_17 += 1)
            {
                arr_73 [i_0] [i_0] [i_0] [i_0] = (((var_14 != var_7) & -23));

                for (int i_18 = 1; i_18 < 8;i_18 += 1)
                {
                    arr_77 [9] [5] [i_0] [i_18] = var_11;

                    /* vectorizable */
                    for (int i_19 = 0; i_19 < 10;i_19 += 1)
                    {
                        arr_82 [i_0] [i_16 + 1] [i_0] [3] [i_19] [i_19] [i_19] = (!var_6);
                        arr_83 [i_0] [i_16] [i_0] = var_9;
                        arr_84 [i_19] [i_0] [0] [i_16] [i_16 + 2] [i_0] [i_0] = 1753;
                        var_26 += (~-7);
                    }
                    arr_85 [i_0] = (min((-2147483647 | 212), (!var_12)));
                }
            }
            for (int i_20 = 0; i_20 < 10;i_20 += 1)
            {
                var_27 = ((min(14, 13143611200382262472)));
                arr_88 [i_0] = ((~((-(min(var_7, 41))))));
                arr_89 [i_0] [1] [i_0] [i_0] = ((-var_5 / (min(var_3, 7122249657927141558))));
                var_28 = (max(var_28, ((min((((!(((13143611200382262465 >> (59450 - 59445))))))), (max(-var_1, (var_6 < 4294967295))))))));
            }
            for (int i_21 = 0; i_21 < 10;i_21 += 1)
            {
                arr_94 [i_0] [8] [3] [i_0] = (var_12 & -1228788171);
                /* LoopNest 2 */
                for (int i_22 = 0; i_22 < 10;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 10;i_23 += 1)
                    {
                        {
                            arr_99 [i_0] [i_16] [0] [i_16] [i_16] [9] = (min(-var_15, ((((var_10 | -1228788156) >= (var_15 || 212))))));
                            arr_100 [i_0] [i_0] [i_16] [i_0] [i_21] [0] [i_23] = (!24915);
                            arr_101 [i_0] [i_16 + 1] [i_0] = (var_11 | -var_3);
                        }
                    }
                }
                var_29 = (min(var_29, (max(243, var_10))));

                for (int i_24 = 1; i_24 < 9;i_24 += 1)
                {
                    arr_105 [i_0] [i_0] [i_0] [i_0] = (max(-4846141737000872884, (!-1085393095)));
                    arr_106 [i_24] [i_0] [i_0] [i_0] = (min(1228788157, (14464 <= var_12)));
                    arr_107 [i_0] [8] = 2147483646;
                }
            }
            var_30 = (min(14244120625079067480, ((((var_8 == 242) + var_0)))));
            arr_108 [i_0] [i_16 + 2] [i_16 + 1] = var_4;
        }
        var_31 = (min(var_31, (((-(((!((max(var_10, var_7)))))))))));
        arr_109 [i_0] = ((-88 <= (~374747816)));
    }
    /* vectorizable */
    for (int i_25 = 1; i_25 < 1;i_25 += 1)
    {
        arr_113 [i_25] [i_25 - 1] = 1;
        arr_114 [i_25] [i_25] = ((48 / (~2147483647)));
        arr_115 [i_25] [i_25] = 1;
    }
    var_32 = 65535;
    #pragma endscop
}

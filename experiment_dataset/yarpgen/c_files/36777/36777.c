/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_12 &= (((var_2 + 2147483647) >> (((var_2 > (var_9 > var_2))))));

                for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        var_13 = (min(var_13, var_2));
                        arr_8 [i_3] [i_3] [i_3] [i_3] = ((var_8 >> ((((((var_11 >> (var_8 - 56)))) == (var_6 * var_6))))));
                        var_14 = (var_7 ^ ((((var_1 >> (var_6 - 11840997473217906581))) ^ var_7)));
                    }
                    for (int i_4 = 1; i_4 < 16;i_4 += 1)
                    {
                        var_15 = (var_11 > var_9);

                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 14;i_5 += 1)
                        {
                            var_16 = (max(var_16, ((((((var_2 + 2147483647) << (var_0 - 123))) & (var_11 | var_2))))));
                            var_17 = var_5;
                            arr_13 [i_0] [i_1] [i_1] [i_2] [i_2] [i_0] [i_5] = ((var_6 ^ (var_3 == var_5)));
                        }
                        for (int i_6 = 3; i_6 < 17;i_6 += 1)
                        {
                            arr_16 [i_0] [i_1] [i_6] [6] [i_6 - 1] = ((var_5 / (((var_0 && var_6) ^ var_6))));
                            var_18 = (max(var_18, ((var_5 << (((var_7 | var_11) - 1364625452))))));
                            arr_17 [i_0] [i_1] [i_0] [i_0] [i_6] = ((((var_1 | (var_4 & var_1))) >> ((((var_9 - (var_1 | var_11))) + 1364625500))));
                            var_19 |= var_0;
                            var_20 ^= var_1;
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            arr_21 [i_1] [i_4] [i_7] = ((var_6 & var_3) <= var_1);
                            arr_22 [i_1] [i_1] [5] [i_1] [0] [0] = ((((var_0 >> (var_1 - 68))) > var_7));
                            var_21 = (max(var_21, var_10));
                            var_22 -= var_5;
                        }
                    }
                    arr_23 [i_0] [i_0] = (((var_10 % var_3) + var_0));
                }
                for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
                {
                    arr_27 [15] [i_1] [i_1] [i_1] = (var_7 || var_10);
                    var_23 = (min(var_23, ((((((var_8 >> (var_0 - 119))) * (var_7 ^ var_9))) <= (var_0 | var_3)))));

                    for (int i_9 = 3; i_9 < 14;i_9 += 1)
                    {
                        var_24 -= var_11;
                        var_25 = (min(var_25, var_6));
                        var_26 = var_8;
                        arr_31 [i_9] [i_1] [7] [i_9] = var_8;
                    }
                    for (int i_10 = 1; i_10 < 16;i_10 += 1)
                    {
                        arr_34 [i_1] [i_8] = var_9;

                        for (int i_11 = 0; i_11 < 18;i_11 += 1) /* same iter space */
                        {
                            var_27 = (min(var_27, var_7));
                            arr_39 [i_0] [i_0] [i_11] [i_0] [i_0] = var_5;
                        }
                        for (int i_12 = 0; i_12 < 18;i_12 += 1) /* same iter space */
                        {
                            arr_42 [i_12] [9] = var_6;
                            arr_43 [i_12] [7] [i_12] [i_0] [i_0] = (0 << (38829 - 38824));
                            var_28 = (min(var_28, (((((((var_4 > var_10) > var_6))) * (var_10 != var_4))))));
                        }
                        for (int i_13 = 0; i_13 < 18;i_13 += 1) /* same iter space */
                        {
                            var_29 -= (var_5 % var_8);
                            arr_46 [i_13] [i_10] [15] [i_8] [3] [4] [i_0] = var_9;
                            arr_47 [i_0] [i_8] [i_10 + 2] = var_9;
                            var_30 = var_0;
                        }
                        var_31 = (max(var_31, var_6));
                    }
                    arr_48 [i_0] [i_0] [i_0] [i_0] = var_3;
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 18;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 18;i_15 += 1)
                        {
                            {
                                var_32 = var_0;
                                arr_56 [i_1] [i_14] [i_1] [i_1] [i_1] [i_0] |= var_11;
                            }
                        }
                    }
                }
                for (int i_16 = 0; i_16 < 18;i_16 += 1)
                {

                    for (int i_17 = 0; i_17 < 18;i_17 += 1)
                    {

                        /* vectorizable */
                        for (int i_18 = 0; i_18 < 18;i_18 += 1) /* same iter space */
                        {
                            var_33 -= var_9;
                            arr_64 [i_0] [i_1] [i_0] [i_16] [i_17] [i_17] [11] = var_11;
                            var_34 = (min(var_34, ((((var_7 | var_8) || var_9)))));
                            var_35 *= (var_7 && var_4);
                        }
                        /* vectorizable */
                        for (int i_19 = 0; i_19 < 18;i_19 += 1) /* same iter space */
                        {
                            var_36 |= var_7;
                            var_37 = (((var_2 != var_10) & (var_7 / var_1)));
                            var_38 = ((((var_11 << (var_10 - 14609097337498972261))) / var_1));
                            var_39 = (((var_0 + var_3) * var_0));
                            var_40 = ((var_11 && var_6) % (1 > 0));
                        }
                        /* vectorizable */
                        for (int i_20 = 0; i_20 < 18;i_20 += 1)
                        {
                            var_41 = var_8;
                            var_42 = (min(var_42, var_3));
                            var_43 -= var_10;
                            arr_70 [i_0] [i_1] [i_16] [i_17] [i_20] [i_17] [i_20] = var_8;
                            var_44 -= var_10;
                        }

                        for (int i_21 = 0; i_21 < 18;i_21 += 1)
                        {
                            var_45 *= ((var_0 >> (((var_11 || (var_10 < var_1))))));
                            var_46 = (max(var_46, var_0));
                            var_47 = (var_7 / ((var_0 << (((var_7 ^ var_10) - 14609097337498972208)))));
                            var_48 -= (var_8 / var_3);
                            var_49 = var_10;
                        }
                        for (int i_22 = 0; i_22 < 18;i_22 += 1)
                        {
                            arr_76 [i_0] [i_17] [i_16] [i_17] [i_22] [i_22] [i_17] = var_11;
                            arr_77 [i_1] [i_1] [i_1] = var_3;
                            arr_78 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((0 << 0) & var_1));
                        }
                        for (int i_23 = 3; i_23 < 16;i_23 += 1)
                        {
                            arr_82 [i_0] [i_0] [i_0] [i_17] [i_17] [6] [i_16] &= (((((((var_1 != var_4) <= var_9)))) < var_6));
                            arr_83 [i_23] [i_23] [i_23] [i_23] [i_23] [i_23 - 2] [i_23] = var_10;
                        }
                    }
                    arr_84 [8] [8] = var_4;

                    for (int i_24 = 0; i_24 < 18;i_24 += 1)
                    {

                        /* vectorizable */
                        for (int i_25 = 1; i_25 < 1;i_25 += 1)
                        {
                            var_50 = var_0;
                            var_51 = (max(var_51, (((var_3 * ((var_0 >> (var_6 - 11840997473217906576))))))));
                            var_52 += (((var_5 | var_7) ^ var_0));
                            var_53 ^= var_1;
                            var_54 ^= ((var_11 >> (var_4 || var_6)));
                        }
                        for (int i_26 = 0; i_26 < 18;i_26 += 1)
                        {
                            arr_93 [i_0] [i_24] [i_24] [i_24] [i_26] = var_9;
                            var_55 += var_5;
                        }
                        var_56 ^= var_4;
                        arr_94 [i_24] [i_24] [i_16] [i_24] = (((((var_11 >= var_3) ^ var_3)) & ((((var_9 + var_7) < var_11)))));
                    }

                    /* vectorizable */
                    for (int i_27 = 1; i_27 < 16;i_27 += 1)
                    {
                        var_57 += (((var_7 && var_8) || (var_9 && var_6)));
                        var_58 = var_11;
                    }
                    /* vectorizable */
                    for (int i_28 = 0; i_28 < 18;i_28 += 1)
                    {
                        var_59 = (max(var_59, var_3));
                        var_60 = ((122 / 2268535338) >> (var_10 != var_7));
                        var_61 = var_2;
                    }
                }
                var_62 += var_5;
            }
        }
    }
    var_63 = var_8;
    #pragma endscop
}

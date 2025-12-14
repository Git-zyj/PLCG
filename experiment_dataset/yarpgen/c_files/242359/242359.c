/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_13 = (((arr_3 [i_0]) - var_1));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            arr_13 [i_0] [i_2] [i_2] [i_2] = (!4294967291);
                            var_14 ^= (((arr_12 [i_1 - 1] [i_1 - 1] [i_1]) ? (arr_4 [i_1 - 1]) : (arr_12 [i_1 + 1] [i_2] [i_4])));
                            arr_14 [i_4] [5] [i_2] [i_3] [i_4] [i_2] [i_4] = (var_9 - var_8);
                        }
                        for (int i_5 = 3; i_5 < 9;i_5 += 1)
                        {
                            arr_18 [i_0] [i_3] = ((arr_10 [i_0] [i_0]) >> (429851878 - 429851878));
                            var_15 = (max(var_15, ((((arr_17 [i_0] [i_0] [i_0] [i_1 - 1]) && var_4)))));
                        }
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_3] = (((arr_17 [i_0] [i_1 + 1] [i_2] [i_1 + 1]) >> (16962976369192335704 - 16962976369192335699)));

                        for (int i_6 = 1; i_6 < 8;i_6 += 1)
                        {
                            var_16 = ((326486971085058650 ? 18446744073709551603 : 3233725205));
                            arr_23 [i_0] [i_0] [i_0] [i_3] [4] = var_9;
                            var_17 = (min(var_17, -3494));
                        }
                        var_18 = ((-(0 > 8)));
                        var_19 &= ((~(arr_5 [i_1 + 1])));
                    }
                }
            }
        }

        for (int i_7 = 2; i_7 < 8;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 9;i_9 += 1)
                {
                    {
                        var_20 = (min(var_20, ((((arr_0 [i_7 + 3] [i_7]) + -12)))));
                        var_21 = (min(var_21, (((var_3 && (arr_17 [i_9 - 1] [i_8] [i_0] [i_0]))))));
                    }
                }
            }
            var_22 = (326486971085058679 >> 24);
        }
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 11;i_10 += 1) /* same iter space */
    {
        var_23 = (!(arr_4 [i_10]));

        for (int i_11 = 3; i_11 < 8;i_11 += 1)
        {
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 11;i_13 += 1)
                {
                    {
                        arr_42 [i_11] [i_11 - 2] = (~4294967288);

                        for (int i_14 = 1; i_14 < 9;i_14 += 1)
                        {
                            var_24 = ((var_0 - (arr_11 [i_10])));
                            var_25 = (var_5 / -1158114760);
                            var_26 = (min(var_26, 0));
                            arr_45 [i_14] [i_11] [i_11] [i_14] [i_14] [i_12] = -var_9;
                            var_27 = (arr_31 [i_10]);
                        }
                        for (int i_15 = 0; i_15 < 11;i_15 += 1) /* same iter space */
                        {
                            var_28 = (max(var_28, ((((arr_46 [i_11 + 3] [i_10] [i_10] [i_11 - 3]) ? var_1 : 697404548)))));
                            arr_50 [i_10] [i_11] [i_10] [i_13] [i_15] [i_11] [i_10] = var_1;
                            arr_51 [i_10] [i_11 + 3] [i_11] [i_13] [i_15] = ((-((~(arr_25 [i_10] [i_10])))));
                            var_29 = 3260781064;
                        }
                        for (int i_16 = 0; i_16 < 11;i_16 += 1) /* same iter space */
                        {
                            var_30 = (min(var_30, (((-(arr_8 [i_10] [i_10] [i_10]))))));
                            arr_55 [i_10] [i_11 + 2] [i_11] [i_11] = (arr_11 [i_11 - 1]);
                            arr_56 [i_10] [i_11] [i_10] [i_10] [i_10] = (~4294967295);
                            var_31 = (max(var_31, -3));
                            arr_57 [i_10] [i_11] [i_12] [i_13] [i_11] = (18120257102624492950 >= 3714639741);
                        }
                        for (int i_17 = 0; i_17 < 11;i_17 += 1)
                        {
                            var_32 = ((-(17 >= -2147483640)));
                            arr_60 [i_17] [i_13] [i_11] [i_11] [i_10] [i_10] = (((arr_12 [i_11 + 3] [i_11 - 1] [i_11 - 1]) ^ 9223372036854775807));
                        }
                    }
                }
            }
            var_33 = (((arr_29 [i_10] [i_11 - 1] [i_11 - 1] [i_10]) + var_7));
            /* LoopNest 3 */
            for (int i_18 = 0; i_18 < 11;i_18 += 1)
            {
                for (int i_19 = 1; i_19 < 8;i_19 += 1)
                {
                    for (int i_20 = 3; i_20 < 8;i_20 += 1)
                    {
                        {
                            arr_70 [i_11] [i_11] = ((arr_0 [i_11 - 1] [i_19 - 1]) ? (arr_0 [i_11 + 1] [i_19 + 3]) : (arr_0 [i_11 + 1] [i_19 + 3]));
                            var_34 -= (65517 != 14680064);
                            var_35 = (arr_59 [i_11] [i_20 + 3] [i_20 - 2] [i_19] [i_20 - 2]);
                        }
                    }
                }
            }
        }
        arr_71 [i_10] = (17 ? (arr_17 [i_10] [i_10] [i_10] [i_10]) : (arr_4 [i_10]));

        for (int i_21 = 4; i_21 < 8;i_21 += 1)
        {
            arr_74 [i_10] = -817606751;
            /* LoopNest 2 */
            for (int i_22 = 2; i_22 < 10;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 11;i_23 += 1)
                {
                    {
                        arr_83 [4] [i_21] [i_10] [i_23] [i_22] [i_23] = (arr_61 [i_21 + 3] [i_21]);
                        var_36 &= 0;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_24 = 0; i_24 < 11;i_24 += 1)
            {
                for (int i_25 = 0; i_25 < 11;i_25 += 1)
                {
                    {
                        arr_89 [0] [i_10] [4] [i_25] [i_25] = -3883744472114971068;
                        var_37 += (!var_7);
                    }
                }
            }
            var_38 = (min(var_38, 3644361235));
            var_39 &= ((0 < (arr_20 [i_21 + 2] [i_21 - 3])));
        }
    }
    #pragma endscop
}

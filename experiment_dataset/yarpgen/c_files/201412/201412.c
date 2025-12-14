/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_14 = (56 + 56);

            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                var_15 *= ((~(arr_0 [i_0])));
                arr_8 [i_0] |= 16580113763020577222;
            }
            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
                {
                    arr_14 [i_0] [i_1] [6] [i_4] [i_0] &= var_6;

                    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
                    {
                        var_16 = 1;
                        var_17 = (arr_4 [i_1]);
                    }
                    for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                    {
                        var_18 = 0;
                        var_19 = (((arr_11 [10] [10] [8] [i_3] [i_3 + 1] [10]) + var_12));
                        var_20 ^= (arr_3 [i_1] [i_3 + 2] [i_3 + 2]);
                        arr_19 [i_0] [i_1] [i_1] [i_1] [i_4] [i_4] [i_6] = 0;
                    }
                    for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
                    {
                        arr_22 [i_0] [i_1] [i_3] [i_1] [i_7] = (~(arr_7 [i_1] [i_3 + 2] [i_3 + 2]));
                        arr_23 [i_0] [i_0] [i_0] [i_1] [i_1] = (arr_20 [i_0] [i_1] [i_1] [i_4]);
                    }
                    var_21 = (min(var_21, 11));
                    arr_24 [i_1] [i_0] [i_3] [i_1] [i_1] = 1293020411;

                    for (int i_8 = 3; i_8 < 12;i_8 += 1)
                    {
                        var_22 = (!1);
                        var_23 = ((var_12 ? (((1 - (arr_9 [i_3] [i_0] [i_0])))) : ((var_5 ? (arr_4 [i_0]) : 127))));
                        var_24 = ((!(~2586174370)));
                    }
                }
                for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
                {
                    var_25 = (arr_25 [i_0] [i_1] [i_3] [i_1] [i_0]);
                    arr_32 [i_1] [i_1] [i_1] [i_9] [i_3] = (arr_0 [i_0]);

                    for (int i_10 = 0; i_10 < 13;i_10 += 1) /* same iter space */
                    {
                        var_26 = 1866630310688974378;
                        arr_35 [i_0] [i_1] [i_3] [i_1] [i_1] = (((arr_17 [i_0] [1] [i_0] [i_9]) % 121));
                    }
                    for (int i_11 = 0; i_11 < 13;i_11 += 1) /* same iter space */
                    {
                        arr_38 [i_0] [8] [i_1] [i_3 + 2] [i_9] [i_1] = var_5;
                        var_27 = (((arr_37 [i_3 + 1] [i_1]) | (arr_37 [i_3 + 1] [i_1])));
                    }
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        var_28 = 16383;
                        var_29 = 1866630310688974394;
                    }
                }
                var_30 -= (~746);
                var_31 = (arr_13 [i_0] [i_1] [i_1] [i_1] [i_1] [i_3]);
            }
            var_32 = 31998;
        }
        for (int i_13 = 0; i_13 < 13;i_13 += 1) /* same iter space */
        {
            arr_44 [1] [i_13] = (arr_41 [i_13] [i_0] [i_0] [i_13] [i_13]);
            arr_45 [i_13] [i_13] = arr_1 [i_0] [i_13];
            /* LoopNest 3 */
            for (int i_14 = 0; i_14 < 13;i_14 += 1)
            {
                for (int i_15 = 1; i_15 < 12;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 13;i_16 += 1)
                    {
                        {
                            var_33 &= 1293020411;
                            var_34 -= -255;
                            var_35 = 1782797786;
                            arr_56 [i_13] = (((~62) ? -6 : var_5));
                        }
                    }
                }
            }
            var_36 *= 54;
        }
        for (int i_17 = 0; i_17 < 13;i_17 += 1) /* same iter space */
        {
            arr_59 [i_17] = var_11;
            arr_60 [i_0] [i_0] [i_17] |= (arr_34 [5] [i_0] [i_0]);
        }
        var_37 = (arr_40 [i_0] [i_0] [i_0] [6] [6]);
        arr_61 [i_0] [i_0] = 0;

        for (int i_18 = 0; i_18 < 13;i_18 += 1)
        {

            for (int i_19 = 0; i_19 < 13;i_19 += 1)
            {
                arr_68 [i_0] [i_0] = ((~(arr_4 [i_19])));
                arr_69 [i_0] [i_0] = (((arr_31 [i_19] [i_18] [i_0] [i_0]) ? 1 : (arr_52 [i_0] [i_18] [i_0])));
            }

            for (int i_20 = 0; i_20 < 13;i_20 += 1) /* same iter space */
            {
                arr_72 [i_0] [i_0] [i_20] = (((9223372036854775807 << (85 - 85))));

                for (int i_21 = 1; i_21 < 9;i_21 += 1)
                {
                    var_38 &= -0;

                    for (int i_22 = 0; i_22 < 13;i_22 += 1)
                    {
                        var_39 = (~(0 && -24));
                        arr_78 [i_0] [i_0] [i_0] [i_18] [i_20] [i_21] [i_20] = 0;
                        var_40 = 18446744073709551586;
                    }
                    for (int i_23 = 2; i_23 < 12;i_23 += 1)
                    {
                        var_41 = (max(var_41, (((261187307 > (arr_29 [i_21 - 1] [i_23 - 2] [i_23 + 1] [i_23 - 2]))))));
                        arr_82 [i_0] [i_18] [i_20] [i_20] [i_23] = 48;
                    }

                    for (int i_24 = 1; i_24 < 10;i_24 += 1)
                    {
                        var_42 = var_8;
                        var_43 -= (arr_77 [1] [i_18] [i_24 - 1] [i_21 - 1] [i_24 + 1]);
                        arr_85 [i_0] [i_0] [i_18] [i_20] [i_21] [i_21] [i_20] = (arr_26 [i_20] [i_21] [i_20] [i_21 - 1] [i_21 + 4]);
                        var_44 = (min(var_44, 5943052840923714784));
                    }
                    arr_86 [2] [i_20] [i_20] [i_20] [i_21 + 2] [i_21 + 1] = (!var_3);
                    var_45 = (min(var_45, (((!(arr_25 [i_0] [i_18] [i_0] [i_21 + 3] [i_18]))))));
                }
                for (int i_25 = 4; i_25 < 12;i_25 += 1)
                {
                    arr_89 [i_18] &= (arr_41 [i_25] [i_18] [i_20] [i_25] [i_25]);

                    for (int i_26 = 0; i_26 < 13;i_26 += 1)
                    {
                        var_46 ^= ((-(arr_79 [i_18] [i_18] [i_20] [i_25 + 1])));
                        arr_94 [i_0] [i_18] [i_20] [9] [i_20] = var_3;
                    }
                    var_47 = (max(var_47, 115));
                }
                arr_95 [i_0] [9] [i_20] = (((arr_17 [i_0] [6] [6] [i_18]) < (-48 >= 241)));
            }
            for (int i_27 = 0; i_27 < 13;i_27 += 1) /* same iter space */
            {
                arr_100 [i_27] [i_27] [i_27] = ((((arr_74 [i_0] [i_18] [i_0] [i_0]) ? 15949804846740011535 : 1)));
                arr_101 [i_0] [i_18] [i_0] [i_27] = ((var_3 < (arr_10 [i_27] [i_27])));
            }
            for (int i_28 = 0; i_28 < 13;i_28 += 1) /* same iter space */
            {

                for (int i_29 = 0; i_29 < 13;i_29 += 1)
                {
                    var_48 = (((!(arr_92 [i_0]))));
                    arr_110 [i_18] = 0;
                    var_49 -= -73;
                }
                var_50 = 111;
            }
            for (int i_30 = 0; i_30 < 13;i_30 += 1) /* same iter space */
            {
                var_51 = -32762;
                arr_114 [i_0] [i_30] [i_30] [i_30] = (~7285717073242795533);
                arr_115 [i_0] [i_30] [i_18] [i_30] = ((((((var_7 + (arr_67 [i_30]))) + 2147483647)) << (-31979 + 31979)));
            }
            arr_116 [i_18] = -65;
        }
    }
    /* LoopNest 2 */
    for (int i_31 = 0; i_31 < 17;i_31 += 1)
    {
        for (int i_32 = 0; i_32 < 17;i_32 += 1)
        {
            {
                var_52 = (arr_119 [i_31] [i_32]);
                arr_123 [10] [i_32] &= (max((((arr_121 [6]) + (arr_122 [i_32]))), (((-11214 ? -1 : 1)))));
                arr_124 [i_32] = (((!(arr_118 [i_31]))));
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232681
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_12 = ((var_8 ? ((0 ? 3422578178 : 169)) : 87));
        var_13 = var_8;
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 14;i_2 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    var_14 &= 195;
                    arr_12 [2] [3] [i_3] [i_4] [i_3] = (arr_10 [i_4] [6] [i_2 + 1] [i_1]);
                    var_15 = ((((((13292 ? var_10 : 176)) + 9223372036854775807)) << (((arr_8 [13] [1] [i_3]) - 119))));
                    arr_13 [i_1] [4] [1] [i_4] = var_9;
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        {
                            var_16 = (arr_2 [i_1 + 1]);
                            var_17 = (max(var_17, (((24300 >> (((arr_7 [i_1]) - 2015776525)))))));
                            arr_18 [14] = (((arr_6 [i_6] [i_2 - 1]) ? var_3 : var_6));
                            arr_19 [13] [i_2] [13] [i_3] [i_5] [11] [5] = (arr_1 [i_1 + 2]);
                        }
                    }
                }
                arr_20 [i_1] [i_1] [i_1] [1] = (((arr_16 [i_1 - 1] [i_2] [i_3] [i_3] [i_3]) + -32763));
            }
            var_18 += (arr_10 [i_1] [i_1 + 1] [i_1] [i_2 - 1]);
            var_19 = 1532642828;
            var_20 = (((((1532642828 ? 190 : var_6))) ? (169 && -1872736831) : (((((min(var_11, var_4))) < var_5)))));

            /* vectorizable */
            for (int i_7 = 1; i_7 < 14;i_7 += 1)
            {
                arr_24 [14] [i_2] = (61 << var_7);
                var_21 -= 80;
            }
        }
        for (int i_8 = 1; i_8 < 14;i_8 += 1) /* same iter space */
        {
            arr_29 [i_1] = (arr_8 [i_1] [i_1] [i_1]);
            var_22 = 17072530251297293377;
        }
        var_23 += (((max(((min((arr_2 [i_1]), var_1))), (195 - 65528))) - var_2));

        /* vectorizable */
        for (int i_9 = 2; i_9 < 11;i_9 += 1) /* same iter space */
        {
            var_24 *= var_2;
            var_25 = (((arr_0 [i_1 + 2]) && 35544));
        }
        /* vectorizable */
        for (int i_10 = 2; i_10 < 11;i_10 += 1) /* same iter space */
        {
            var_26 *= var_2;
            arr_35 [i_10] = (arr_9 [5]);
            var_27 = 55;
            arr_36 [i_1] = var_3;
            arr_37 [i_1] [i_1] = ((3447 ? ((61 ? 209 : 23091)) : (arr_22 [i_10] [9] [i_1 - 1] [1])));
        }
        /* vectorizable */
        for (int i_11 = 2; i_11 < 11;i_11 += 1) /* same iter space */
        {
            arr_40 [i_1] = 32154;
            var_28 = ((var_3 ? var_5 : var_4));
            var_29 = (arr_16 [0] [i_1] [0] [2] [i_11]);
            var_30 = 147;
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 15;i_12 += 1)
            {
                for (int i_13 = 3; i_13 < 14;i_13 += 1)
                {
                    {
                        arr_46 [i_1] [i_11] [i_1] [2] = var_2;

                        for (int i_14 = 0; i_14 < 15;i_14 += 1)
                        {
                            var_31 += (((((var_1 % (arr_11 [i_1] [i_11] [i_1] [12] [i_14])))) ? ((1 ? 0 : var_11)) : var_7));
                            var_32 = 576460752303423487;
                            arr_49 [i_14] [10] [i_14] [2] [i_14] = (-23087 - (3192507165 < 4269771125));
                            arr_50 [i_1 - 1] [i_11] [i_12] |= ((84 ? var_9 : 1167933956));
                            arr_51 [i_1] [i_11] [i_14] [i_13 - 1] [10] = var_7;
                        }
                        for (int i_15 = 0; i_15 < 15;i_15 += 1)
                        {
                            var_33 = (min(var_33, (244 & 62)));
                            var_34 = var_5;
                        }
                    }
                }
            }
        }
        arr_54 [6] = (arr_52 [11] [1] [11] [i_1 - 1] [i_1] [i_1] [i_1]);
    }

    for (int i_16 = 0; i_16 < 20;i_16 += 1)
    {
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 20;i_17 += 1)
        {
            for (int i_18 = 2; i_18 < 19;i_18 += 1)
            {
                {
                    var_35 = (arr_60 [i_16]);
                    var_36 = ((max(2762324467, 62101)));
                }
            }
        }
        var_37 = (min(38942, 75));
        var_38 = ((10871026617848586772 * ((max(127, 4015940985)))));

        for (int i_19 = 0; i_19 < 20;i_19 += 1)
        {
            var_39 = max(197, (!2427));
            var_40 = (max(var_40, ((min((((+(((arr_59 [i_16] [i_16] [i_19]) % 255))))), ((var_11 ? ((((-2147483647 - 1) ? 21898 : -1465290465))) : 9223372036854775807)))))));
            var_41 = (min(var_41, (((((~var_1) & var_8))))));
        }
    }
    /* vectorizable */
    for (int i_20 = 0; i_20 < 14;i_20 += 1)
    {

        for (int i_21 = 3; i_21 < 11;i_21 += 1)
        {
            arr_69 [i_20] &= var_3;
            /* LoopNest 2 */
            for (int i_22 = 0; i_22 < 14;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 14;i_23 += 1)
                {
                    {
                        arr_76 [i_20] = var_7;
                        var_42 = (arr_42 [i_21 - 3] [i_23]);
                        var_43 = var_9;
                        var_44 = (2448 ? 65535 : 4);
                    }
                }
            }
            var_45 = 63095;
            var_46 = 5041656939221929600;
            var_47 = -21898;
        }
        for (int i_24 = 0; i_24 < 14;i_24 += 1)
        {

            for (int i_25 = 0; i_25 < 14;i_25 += 1)
            {

                for (int i_26 = 4; i_26 < 11;i_26 += 1) /* same iter space */
                {
                    var_48 = var_7;
                    var_49 = -119;
                    var_50 = (arr_81 [i_24] [i_26 - 3] [11] [i_26]);
                }
                for (int i_27 = 4; i_27 < 11;i_27 += 1) /* same iter space */
                {
                    arr_85 [i_20] [i_20] [4] [i_25] [11] [12] = 1;
                    arr_86 [i_20] [i_24] [5] [1] [i_27] = (((2147483647 < 1465290463) | 5041656939221929617));
                }
                for (int i_28 = 0; i_28 < 14;i_28 += 1)
                {
                    arr_90 [i_20] [11] [i_25] [i_28] = 117;
                    var_51 = (max(var_51, var_7));
                }
                arr_91 [i_20] [i_25] [i_25] [i_20] = (arr_73 [i_20] [i_24]);
            }
            var_52 = (((arr_61 [i_20] [18] [18]) / ((var_6 ? 21893 : 576460752303423487))));
            var_53 |= var_3;
        }

        for (int i_29 = 0; i_29 < 14;i_29 += 1)
        {
            var_54 = (min(var_54, 241));
            var_55 += 7696581394432;

            for (int i_30 = 2; i_30 < 12;i_30 += 1)
            {
                arr_97 [i_30] = var_8;
                var_56 = (((((0 ? var_5 : 1473645021))) ? var_7 : 1473645021));
                var_57 = (((-1 <= var_5) / ((var_11 ? var_6 : (arr_55 [i_20] [i_20])))));
            }
        }
        for (int i_31 = 0; i_31 < 14;i_31 += 1)
        {

            for (int i_32 = 0; i_32 < 14;i_32 += 1)
            {
                var_58 = (((arr_56 [i_20]) ? 65533 : var_11));
                var_59 = (min(var_59, (((4294967289 % 1) * (arr_100 [i_32] [i_20])))));
            }
            var_60 = (min(var_60, var_5));
            arr_104 [i_20] = (arr_22 [i_20] [i_31] [i_31] [i_31]);
        }
        for (int i_33 = 2; i_33 < 11;i_33 += 1)
        {
            var_61 = (max(var_61, ((((arr_71 [9] [1] [i_20]) ? ((((var_9 > (arr_68 [i_20] [i_33 - 2]))))) : var_10)))));

            for (int i_34 = 1; i_34 < 13;i_34 += 1)
            {
                var_62 = ((var_10 >> (arr_39 [i_34 + 1] [i_20])));
                var_63 = var_0;
                var_64 *= var_6;
                arr_111 [i_20] [i_33] [i_34] [10] = 1605820942;
            }
            var_65 = ((var_6 ? (((arr_56 [i_20]) >> (arr_6 [i_20] [i_20]))) : (arr_83 [i_20] [4])));
        }
    }
    var_66 = var_9;
    #pragma endscop
}

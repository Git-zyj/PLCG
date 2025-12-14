/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 1880176231;
    var_18 = (min(var_18, var_3));
    var_19 = (((min(65535, var_13))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            arr_5 [i_0] [i_1] [i_1] = ((((((255 ? 5467781675600892758 : (arr_4 [i_0] [i_1]))) - (arr_2 [i_0]))) < ((max(var_15, (arr_3 [i_0] [i_0]))))));
            arr_6 [i_1] [i_0] = (arr_4 [i_0] [i_1]);
            var_20 ^= var_10;
            var_21 |= (max((max(((min(31, var_12))), var_11)), ((((((-9223372036854775807 - 1) == 116)) || 9223372036854775807)))));
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
        {
            var_22 -= (((((arr_7 [i_0] [i_0] [i_2]) + 2147483647)) << (var_13 - 39)));
            var_23 ^= ((+(((((arr_2 [i_2]) * var_11))))));
            var_24 = (max(var_24, (arr_1 [i_0] [i_2])));
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_4 = 4; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        {
                            var_25 = (max(var_25, (-9223372036854775807 - 1)));
                            var_26 = (max((arr_18 [i_0] [i_3] [i_3] [i_4] [i_5] [i_6]), var_7));
                            arr_20 [i_0] [i_3] [i_4] [i_3] [i_6] [i_6] = var_0;
                            arr_21 [i_3] [i_3] [i_3] [i_3] [i_4] [i_0] [i_0] = (-2147483647 - 1);
                            arr_22 [i_0] [i_3] [i_3] [i_3] [i_5] [i_6] = (arr_15 [i_3] [i_4 + 4] [i_3] [i_6]);
                        }
                    }
                }
            }
            arr_23 [0] &= (arr_0 [i_0] [i_3]);
            arr_24 [i_3] = 1;
            var_27 -= (((max(var_2, (arr_16 [1])))) ^ (((-((1073741823 ? (arr_9 [i_0] [i_0] [i_3]) : (arr_15 [i_0] [i_0] [1] [i_3])))))));
        }
        for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
        {

            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                var_28 = (var_0 > 1210299787);
                var_29 *= (min((((((arr_9 [i_0] [i_0] [i_8]) ? 1 : var_10)) << (((min((arr_16 [i_8]), var_16)) - 49170)))), var_14));
                var_30 = (max(-3295, var_0));
            }
            for (int i_9 = 1; i_9 < 19;i_9 += 1)
            {
                var_31 &= ((arr_7 [i_0] [i_7] [i_9]) / var_1);
                var_32 += (((((var_7 | (arr_29 [i_0] [i_0] [i_0] [i_0])))) >= (arr_9 [i_0] [i_7] [i_9 - 1])));
            }
            arr_31 [10] [i_7] &= (min(var_4, (((arr_13 [i_0] [i_0] [i_7]) > (arr_14 [14] [i_0] [14])))));
            arr_32 [18] &= (arr_15 [i_0] [i_0] [6] [i_7]);
            arr_33 [i_0] [i_7] = ((var_5 ? var_1 : (arr_13 [i_0] [i_7] [i_0])));
            var_33 = var_1;
        }

        /* vectorizable */
        for (int i_10 = 0; i_10 < 22;i_10 += 1)
        {

            for (int i_11 = 4; i_11 < 19;i_11 += 1) /* same iter space */
            {
                var_34 = (max(var_34, ((((arr_38 [i_0] [i_10] [i_11] [i_11]) <= 1)))));
                arr_39 [i_0] [i_0] [i_11] = -32;
            }
            for (int i_12 = 4; i_12 < 19;i_12 += 1) /* same iter space */
            {
                var_35 -= (-4575 >= (arr_12 [i_10] [i_10]));

                for (int i_13 = 3; i_13 < 21;i_13 += 1)
                {
                    arr_46 [i_10] [i_12] [i_13] = (((((arr_41 [i_0] [i_10] [i_10]) & (arr_1 [i_12 - 1] [i_13])))) || (((var_8 & (arr_13 [i_0] [i_10] [i_13])))));
                    var_36 = (max(var_36, var_7));
                    var_37 &= 7627;
                    arr_47 [i_13] = arr_1 [i_0] [i_0];
                }
                for (int i_14 = 0; i_14 < 22;i_14 += 1)
                {
                    var_38 = (min(var_38, (-9223372036854775807 - 1)));
                    var_39 = (arr_41 [i_0] [i_0] [i_12]);
                    arr_51 [i_0] [i_10] [i_14] [i_12] [i_14] = arr_10 [i_10];
                    arr_52 [i_10] &= (((arr_13 [i_0] [i_12 + 3] [i_12]) % -1));
                }
                for (int i_15 = 0; i_15 < 22;i_15 += 1)
                {
                    arr_55 [i_15] = var_16;
                    var_40 = (min(var_40, var_2));

                    for (int i_16 = 0; i_16 < 0;i_16 += 1) /* same iter space */
                    {
                        arr_59 [i_0] [i_10] [i_0] [i_0] [i_0] [i_0] &= (arr_45 [i_0] [i_10] [i_10] [i_10]);
                        var_41 = (min(var_41, var_7));
                    }
                    for (int i_17 = 0; i_17 < 0;i_17 += 1) /* same iter space */
                    {
                        var_42 -= (((-1 - var_10) ? (arr_0 [i_0] [i_0]) : 42054));
                        arr_62 [i_15] [i_15] [i_10] [i_10] [i_15] = ((arr_48 [i_15] [i_10] [i_10] [i_10]) > (((arr_50 [i_0] [i_10] [i_12] [i_15]) | var_6)));
                        arr_63 [i_10] [i_10] [i_12] [i_15] [i_17] [i_0] |= 17728587815304446044;
                        var_43 = (min(var_43, -var_16));
                    }
                    for (int i_18 = 0; i_18 < 0;i_18 += 1) /* same iter space */
                    {
                        var_44 = (((arr_57 [i_0] [i_10] [i_12]) < var_10));
                        arr_66 [i_0] [i_10] [i_12] [i_15] [i_10] = var_0;
                        var_45 = 1;
                        var_46 = (min(var_46, var_5));
                    }
                    var_47 -= -9223372036854775807;
                }

                for (int i_19 = 0; i_19 < 22;i_19 += 1)
                {
                    var_48 += (((var_9 + var_9) == (arr_7 [i_0] [i_10] [i_12 - 1])));

                    for (int i_20 = 0; i_20 < 22;i_20 += 1)
                    {
                        arr_73 [i_20] [i_20] [i_10] [i_19] [i_12] [i_10] [i_0] = (19091 < var_10);
                        arr_74 [i_0] [i_10] [i_12] [i_0] = arr_7 [i_0] [i_19] [i_20];
                    }
                    for (int i_21 = 3; i_21 < 20;i_21 += 1)
                    {
                        arr_77 [i_12] [i_21] = (((~var_16) - ((-1 & (arr_65 [i_10] [i_19] [i_10])))));
                        var_49 = (max(var_49, (2258559943 / var_6)));
                        arr_78 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_11;
                    }
                    var_50 = (min(var_50, ((((arr_9 [i_0] [i_10] [i_12 + 1]) == var_15)))));
                }
                for (int i_22 = 4; i_22 < 21;i_22 += 1)
                {

                    for (int i_23 = 3; i_23 < 19;i_23 += 1)
                    {
                        var_51 -= var_15;
                        arr_85 [i_0] [i_23] [i_12 + 1] [i_22] [i_23] [i_23] = var_5;
                        arr_86 [i_10] [i_10] &= 0;
                        var_52 = var_13;
                    }
                    var_53 *= (((arr_17 [i_0] [i_10]) ? var_5 : (arr_81 [i_12 - 3] [i_10] [i_22 - 2] [i_12 - 3] [i_22 + 1])));
                }
                for (int i_24 = 1; i_24 < 20;i_24 += 1) /* same iter space */
                {
                    arr_89 [i_0] [i_0] = 3544859708157979381;
                    arr_90 [i_0] [i_10] [i_10] [i_10] &= 9249612438951001020;
                }
                for (int i_25 = 1; i_25 < 20;i_25 += 1) /* same iter space */
                {
                    arr_95 [i_10] [i_10] &= (((arr_61 [i_0] [i_0] [i_10]) != (arr_44 [i_0] [i_0] [i_10] [i_10] [i_12 - 2] [i_25])));

                    for (int i_26 = 1; i_26 < 21;i_26 += 1)
                    {
                        var_54 = arr_0 [i_10] [i_12];
                        var_55 = (arr_48 [i_25] [i_12] [i_26 - 1] [i_26]);
                    }

                    for (int i_27 = 2; i_27 < 21;i_27 += 1)
                    {
                        arr_103 [i_27] [i_10] &= var_12;
                        arr_104 [i_0] [i_10] [i_12] [i_25] [i_27 - 1] [i_12 - 3] [i_12] = (arr_45 [i_12 + 1] [i_12] [i_25] [i_27 - 2]);
                    }
                    for (int i_28 = 3; i_28 < 20;i_28 += 1)
                    {
                        arr_107 [i_0] [i_25] [i_12] [i_0] [i_25] [i_25] [i_0] = -0;
                        var_56 = (max(var_56, 3558180264));
                        var_57 *= var_8;
                    }
                    for (int i_29 = 2; i_29 < 20;i_29 += 1)
                    {
                        arr_111 [i_0] [i_10] [i_0] [i_12] [i_25] [i_29] [i_29 - 1] |= var_14;
                        arr_112 [i_0] [i_0] [i_0] [i_10] [i_0] [i_25] [i_29 - 1] &= (arr_43 [i_0] [i_10] [i_25] [i_29]);
                        arr_113 [i_10] [i_25] [i_25] = -83;
                    }
                }
            }
            var_58 -= (((arr_13 [i_0] [i_10] [i_10]) ? (0 / var_13) : (arr_12 [i_0] [i_10])));
            arr_114 [i_0] [i_10] [i_0] = (arr_4 [i_0] [i_10]);
        }
        for (int i_30 = 3; i_30 < 19;i_30 += 1)
        {
            /* LoopNest 3 */
            for (int i_31 = 0; i_31 < 1;i_31 += 1)
            {
                for (int i_32 = 0; i_32 < 22;i_32 += 1)
                {
                    for (int i_33 = 0; i_33 < 22;i_33 += 1)
                    {
                        {
                            var_59 ^= var_9;
                            var_60 = var_14;
                            var_61 ^= (min(9, ((var_3 % (arr_60 [i_30 + 3] [i_32] [i_30 - 2] [i_32] [i_0])))));
                        }
                    }
                }
            }
            var_62 = (min(var_62, 1851224462068371072));
            arr_128 [i_30] = (arr_101 [20] [i_0] [i_0] [i_30] [i_30]);
            var_63 *= (((arr_61 [i_0] [i_30] [1]) >> (((((((-(arr_117 [i_0])))) ? (arr_76 [i_0] [i_30]) : (arr_43 [i_30 - 2] [i_30 + 3] [i_30] [i_30 - 3]))) + 8569))));
        }
    }
    /* vectorizable */
    for (int i_34 = 0; i_34 < 1;i_34 += 1) /* same iter space */
    {

        for (int i_35 = 0; i_35 < 22;i_35 += 1)
        {
            var_64 = var_11;
            var_65 += (arr_37 [i_34] [i_35] [i_35]);
        }
        var_66 = (min(var_66, (((~(arr_4 [i_34] [i_34]))))));
        var_67 *= (arr_25 [i_34] [i_34] [i_34]);
    }
    #pragma endscop
}

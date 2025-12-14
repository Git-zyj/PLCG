/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 14;i_3 += 1)
                {
                    {
                        var_13 -= (((((arr_4 [i_2 - 1]) & (arr_4 [i_2 - 1]))) >= 255));
                        arr_11 [i_0] [i_0] [i_0] [i_0] = (arr_6 [i_0] [i_2] [i_3]);
                        var_14 = 511;
                    }
                }
            }
        }
        arr_12 [i_0] = (arr_7 [4]);
        var_15 = ((1 != (var_12 < 1)));
        var_16 &= ((((98 | (979181569 & 15))) << (-3163027189862820326 + 3163027189862820334)));
        var_17 |= (arr_8 [i_0] [5]);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                {
                    var_18 = 0;
                    arr_22 [i_4] [i_4] [i_6] [i_6] |= var_10;
                    var_19 = (((arr_10 [i_4] [i_4] [i_4] [i_4] [i_4]) / (arr_1 [i_4])));
                    var_20 = 0;
                    var_21 = (var_0 >= 4294967283);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                {
                    var_22 = (((arr_23 [i_7]) + (arr_23 [i_7])));
                    var_23 = (((((arr_28 [i_7] [i_7]) + 2147483647)) >> (3163027189862820326 - 3163027189862820321)));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 11;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 11;i_12 += 1)
                        {
                            {
                                var_24 = var_0;
                                arr_38 [i_12] [i_11] [i_10] [i_9] [i_9] [4] [i_12] = (arr_15 [i_4]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 11;i_13 += 1)
                    {
                        for (int i_14 = 3; i_14 < 8;i_14 += 1)
                        {
                            {
                                arr_43 [i_14 - 2] [i_13] [i_10] [i_9] [i_4] = (((arr_23 [i_14 - 3]) & -98));
                                var_25 += (arr_41 [i_14 + 3] [i_14 + 2] [i_14] [i_13] [i_4]);
                                var_26 += (var_2 >= var_1);
                                var_27 += arr_17 [i_14 + 1];
                            }
                        }
                    }
                    arr_44 [i_4] [i_9] [1] [i_10] = (((((var_8 != (arr_34 [i_10] [i_10] [i_9] [i_4])))) << (83 - 63)));
                    arr_45 [i_4] [4] = (arr_39 [i_4]);
                }
            }
        }
        arr_46 [i_4] = ((arr_8 [i_4] [i_4]) < (arr_8 [i_4] [i_4]));
        arr_47 [i_4] [i_4] = 85;
    }
    for (int i_15 = 0; i_15 < 1;i_15 += 1)
    {
        var_28 += 112;
        /* LoopNest 3 */
        for (int i_16 = 0; i_16 < 13;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 1;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 13;i_18 += 1)
                {
                    {
                        var_29 = var_3;
                        arr_57 [i_17] [2] [i_17] [i_18] = 100;
                        var_30 = 3163027189862820326;

                        for (int i_19 = 1; i_19 < 11;i_19 += 1)
                        {
                            var_31 -= (((arr_58 [i_19 + 1] [i_19] [9] [i_19] [i_19 + 1] [i_19] [i_19 + 1]) > (((arr_58 [i_19 + 2] [5] [i_19 - 1] [5] [i_19] [i_19] [i_19 + 2]) + var_1))));
                            var_32 = (arr_51 [i_15] [i_17] [i_19 - 1]);
                        }
                        /* vectorizable */
                        for (int i_20 = 0; i_20 < 13;i_20 += 1)
                        {
                            var_33 += ((-3163027189862820326 > (arr_58 [4] [i_16] [i_16] [i_16] [i_16] [i_16] [i_16])));
                            arr_65 [i_17] [i_15] [i_16] [1] [i_18] [i_20] [i_20] = (((arr_54 [i_17] [i_18] [i_16] [i_17]) / var_11));
                        }

                        for (int i_21 = 1; i_21 < 12;i_21 += 1)
                        {
                            var_34 = (((-80 + 2147483647) >> (80 - 76)));
                            arr_69 [i_21] [i_18] [i_17] [i_15] [i_15] = (((arr_58 [i_16] [i_16] [i_21 + 1] [i_21] [i_21 - 1] [i_21 - 1] [i_21]) >= (var_11 + var_4)));
                        }
                        for (int i_22 = 0; i_22 < 0;i_22 += 1) /* same iter space */
                        {
                            arr_72 [i_17] [i_18] [i_22 + 1] = ((((2147483647 + (arr_68 [i_22 + 1] [i_22 + 1] [i_22 + 1] [i_22] [i_22] [i_22] [i_22]))) <= var_6));
                            arr_73 [i_22] [i_18] [i_16] [i_16] [i_15] &= var_8;
                            var_35 = 2542517750;
                        }
                        /* vectorizable */
                        for (int i_23 = 0; i_23 < 0;i_23 += 1) /* same iter space */
                        {
                            var_36 ^= var_3;
                            var_37 = (max(var_37, ((((arr_9 [i_23] [i_23] [i_23] [i_23 + 1] [i_23 + 1] [i_18]) + (arr_10 [5] [i_23 + 1] [i_23 + 1] [i_23 + 1] [i_15]))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_24 = 0; i_24 < 24;i_24 += 1)
    {
        for (int i_25 = 0; i_25 < 24;i_25 += 1)
        {
            for (int i_26 = 0; i_26 < 1;i_26 += 1)
            {
                {
                    var_38 += var_3;
                    var_39 = (arr_78 [i_26] [i_25]);
                    /* LoopNest 2 */
                    for (int i_27 = 0; i_27 < 1;i_27 += 1)
                    {
                        for (int i_28 = 0; i_28 < 24;i_28 += 1)
                        {
                            {
                                arr_91 [4] [i_25] [i_25] [i_25] [i_25] [i_25] [i_25] = (arr_89 [i_28] [i_27] [14] [i_24] [i_24]);
                                var_40 += (((93 * 65535) * 0));
                                var_41 = var_0;
                                var_42 = (arr_85 [i_28] [i_25] [i_25] [20]);
                            }
                        }
                    }
                    arr_92 [16] [i_24] [i_25] [i_24] = var_7;
                }
            }
        }
    }
    #pragma endscop
}

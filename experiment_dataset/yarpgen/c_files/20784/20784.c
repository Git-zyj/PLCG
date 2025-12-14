/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_16 = arr_0 [i_0];
        var_17 ^= (arr_0 [i_0 - 2]);
        var_18 |= (arr_0 [i_0]);
    }
    var_19 = max((min((var_5 || var_15), ((var_3 ? var_9 : 8372224)))), ((((var_5 + var_14) >= var_8))));

    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_20 = (max(var_20, 1));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 8;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_21 = (((arr_8 [1] [i_2] [i_2 + 1]) << (((arr_8 [i_2 - 1] [i_2 - 2] [i_2 - 2]) - 55356))));
                    var_22 = (arr_7 [i_1]);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 9;i_5 += 1)
                        {
                            {
                                arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] |= var_9;
                                var_23 = var_11;
                                var_24 = (((arr_11 [i_2 - 2] [6] [i_2 + 2] [i_2 + 1] [i_5 + 1]) >= var_8));
                                var_25 = ((var_7 == (arr_15 [i_2 + 2])));
                            }
                        }
                    }
                    var_26 = var_9;
                    arr_18 [i_3] = ((1 ? 66584576 : (((arr_8 [i_1] [i_1] [i_1]) ? (arr_12 [i_3] [i_1] [i_2] [i_1]) : var_8))));
                }
            }
        }
        var_27 ^= 60603;
        var_28 = (max(var_28, (((~(arr_13 [i_1] [i_1] [i_1] [9] [i_1]))))));

        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            arr_21 [i_6] [i_6] = 66584576;
            var_29 = var_11;
            var_30 = (min(var_30, (arr_6 [i_6])));
        }
        for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 8;i_9 += 1)
                {
                    {
                        var_31 = ((var_3 && (arr_25 [i_1] [2])));
                        var_32 = (max(var_32, ((((arr_8 [i_9 + 1] [i_9 + 1] [i_9]) << (((arr_11 [i_9 - 1] [i_9] [i_9 - 1] [i_9] [i_9]) - 1378426255)))))));
                        var_33 = (max(var_33, 1));
                        var_34 |= ((~(arr_8 [i_1] [i_7] [i_9])));
                        var_35 = 256;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_10 = 4; i_10 < 9;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 10;i_11 += 1)
                {
                    {

                        for (int i_12 = 1; i_12 < 9;i_12 += 1)
                        {
                            var_36 = ((245 <= (var_12 + var_0)));
                            var_37 = var_5;
                            var_38 = (~(arr_38 [7] [i_10] [i_1] [0] [i_10] [i_12 + 1]));
                        }
                        arr_42 [1] [i_10] [i_1] = -739017460;
                        arr_43 [i_1] [i_1] [i_10] = ((var_5 >= (arr_10 [4] [i_10 - 3] [i_10 - 4] [i_10 - 3])));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_13 = 1; i_13 < 1;i_13 += 1)
            {
                for (int i_14 = 2; i_14 < 6;i_14 += 1)
                {
                    for (int i_15 = 1; i_15 < 8;i_15 += 1)
                    {
                        {
                            var_39 = (var_0 <= var_14);
                            var_40 = (((1 || 2924713203) >= 608672255));
                            var_41 = ((((((arr_10 [9] [i_14 + 1] [i_7] [i_1]) + var_9))) ? ((-(arr_16 [i_1] [1] [i_13] [i_1]))) : (var_9 == 266)));
                        }
                    }
                }
            }
        }
        for (int i_16 = 0; i_16 < 10;i_16 += 1) /* same iter space */
        {
            var_42 += (arr_36 [i_1]);
            var_43 = (max(var_43, ((((arr_19 [i_16] [i_1]) ? (arr_37 [i_16] [i_16] [i_16] [i_1]) : ((~(arr_6 [i_1]))))))));

            for (int i_17 = 0; i_17 < 10;i_17 += 1)
            {
                var_44 = var_3;
                arr_59 [i_1] [i_1] = -var_7;
                var_45 = 32739;
            }
            for (int i_18 = 0; i_18 < 10;i_18 += 1)
            {
                arr_62 [i_16] |= (16 >= 66584572);
                var_46 = (max(var_46, ((((arr_37 [i_1] [i_1] [i_1] [i_1]) || var_0)))));
                var_47 ^= var_0;
                var_48 = var_1;
            }
            for (int i_19 = 0; i_19 < 10;i_19 += 1)
            {
                var_49 = 2097151;
                var_50 = (max(var_50, (arr_20 [i_1])));
                var_51 = 1414634948;
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 10;i_20 += 1)
                {
                    for (int i_21 = 2; i_21 < 9;i_21 += 1)
                    {
                        {
                            arr_71 [i_19] [i_16] [i_19] [i_20] [i_21] [i_1] &= (!60592);
                            var_52 |= ((var_6 >= (arr_69 [i_21] [i_21 - 2] [i_21 - 2] [i_21 - 2] [i_21 - 2])));
                        }
                    }
                }
            }
            for (int i_22 = 0; i_22 < 10;i_22 += 1)
            {
                arr_74 [i_22] = var_11;
                var_53 = var_6;
                arr_75 [i_16] [i_16] [i_16] [i_1] = 1412514206;
            }
            /* LoopNest 3 */
            for (int i_23 = 2; i_23 < 6;i_23 += 1)
            {
                for (int i_24 = 0; i_24 < 10;i_24 += 1)
                {
                    for (int i_25 = 0; i_25 < 1;i_25 += 1)
                    {
                        {
                            arr_83 [i_1] [i_23] [i_23] [i_24] = var_0;
                            arr_84 [i_1] [i_16] [i_23] [i_1] [i_23] = (~16128);
                            arr_85 [6] [8] [i_23] = ((52641 | (arr_10 [i_23] [i_23] [i_23 + 3] [i_23 + 2])));
                            var_54 = 556425011;
                        }
                    }
                }
            }
        }
    }
    for (int i_26 = 0; i_26 < 10;i_26 += 1) /* same iter space */
    {
        var_55 = (max(var_55, -449324322));
        var_56 = ((((var_1 | (arr_27 [i_26] [6] [i_26]))) > (min(52641, 2772027544))));
    }
    /* vectorizable */
    for (int i_27 = 0; i_27 < 10;i_27 += 1) /* same iter space */
    {
        arr_90 [i_27] = -1839288040;

        for (int i_28 = 0; i_28 < 10;i_28 += 1)
        {
            arr_94 [2] [i_28] [5] = (((arr_72 [i_27]) / var_0));
            arr_95 [i_27] [2] = (((arr_48 [i_27] [i_28]) >> (((arr_48 [i_27] [i_28]) - 58557))));
        }
        var_57 = (max(var_57, 4));
    }
    for (int i_29 = 0; i_29 < 10;i_29 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_30 = 1; i_30 < 9;i_30 += 1)
        {
            for (int i_31 = 0; i_31 < 10;i_31 += 1)
            {
                {
                    var_58 = var_5;
                    var_59 = ((-(var_15 >> 1)));
                    arr_104 [i_29] [i_29] [1] = (max((((arr_58 [i_30 - 1]) ? 12894 : var_1)), (~7889)));
                }
            }
        }
        var_60 = (max(var_60, ((((arr_48 [i_29] [i_29]) ^ (~52641))))));
        /* LoopNest 2 */
        for (int i_32 = 2; i_32 < 9;i_32 += 1)
        {
            for (int i_33 = 0; i_33 < 10;i_33 += 1)
            {
                {
                    var_61 -= ((((arr_13 [i_33] [i_33] [i_32 + 1] [i_32 - 1] [8]) ? (arr_13 [i_33] [i_32 - 1] [i_32 - 1] [i_32 - 1] [i_32]) : 28)) / ((-(arr_38 [i_29] [i_29] [i_32 + 1] [i_29] [i_33] [i_29]))));
                    var_62 &= (min((3738542284 & -2147483643), 26));
                    /* LoopNest 2 */
                    for (int i_34 = 3; i_34 < 9;i_34 += 1)
                    {
                        for (int i_35 = 3; i_35 < 9;i_35 += 1)
                        {
                            {
                                arr_121 [i_29] [i_29] [i_29] [i_34] [i_29] [i_29] = var_2;
                                var_63 = ((var_3 * ((~(((var_13 > (arr_4 [i_34]))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_36 = 0; i_36 < 10;i_36 += 1)
                    {
                        for (int i_37 = 0; i_37 < 10;i_37 += 1)
                        {
                            {
                                var_64 &= ((((1 / (arr_33 [i_29] [1] [i_29])))) > (~1));
                                var_65 |= (max((1 >> var_10), -16135));
                            }
                        }
                    }
                    var_66 = (var_3 ^ 480);
                }
            }
        }
        var_67 -= (arr_16 [i_29] [i_29] [i_29] [i_29]);
    }

    for (int i_38 = 0; i_38 < 22;i_38 += 1)
    {
        var_68 = ((var_9 % (((arr_129 [i_38]) << (((-var_7 + 172) - 21))))));
        var_69 = (arr_128 [i_38] [4]);
    }
    #pragma endscop
}

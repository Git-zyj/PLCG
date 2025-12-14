/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 153;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_18 = -1492293980541420462;
        var_19 *= ((((arr_1 [i_0]) || var_6)) ? (!var_5) : 129233868986082989);
        arr_3 [i_0] = ((1008806316530991104 >= var_5) | (arr_0 [i_0]));
    }
    for (int i_1 = 3; i_1 < 12;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        arr_17 [i_1] [i_2] [i_1] [i_3] [i_4] = var_8;

                        for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                        {
                            var_20 = (max(((-1008806316530991105 ? (((arr_10 [0] [i_2]) ? var_5 : (arr_13 [i_3] [i_3] [i_3]))) : (arr_16 [i_1]))), -var_9));
                            var_21 ^= ((-1008806316530991105 | (arr_19 [i_3 + 1])));
                            var_22 &= var_8;
                            var_23 = -5225810104468131676;
                            var_24 = (arr_5 [i_2]);
                        }
                        for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                        {
                            arr_24 [i_1] = (~var_5);
                            arr_25 [3] [i_2] [i_3 - 3] [i_1] [i_6] = ((-60547038 >= (min((arr_11 [i_4] [i_3]), ((var_13 ^ (arr_10 [i_1] [i_2])))))));
                            var_25 = (((var_7 == var_0) ? (((!(arr_5 [i_3 - 3])))) : (var_2 != -231483163)));
                        }
                        for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                        {
                            arr_29 [i_1] [i_2] [12] [i_3] [i_2] [10] |= var_16;
                            var_26 = (min(var_13, (~var_5)));
                        }
                        var_27 = (min(var_27, (((1885318708 ? (((((var_13 ? (arr_20 [i_1] [i_2] [3] [3] [i_2]) : -60547038))) / (arr_0 [i_3]))) : (min(var_10, -var_4)))))));
                        var_28 ^= 210;
                    }
                }
            }
        }
        var_29 = 255;
        arr_30 [i_1] = (arr_2 [i_1]);
    }
    for (int i_8 = 3; i_8 < 12;i_8 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 12;i_11 += 1)
                {
                    {
                        var_30 = (((~-1885318711) | (arr_0 [i_9])));
                        var_31 = (max(var_31, (((!(arr_32 [i_8 - 2]))))));
                        arr_40 [i_8 + 3] [10] [i_8 + 3] [i_8 + 3] = ((+(((arr_10 [i_9] [i_9]) ? 15 : var_5))));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 15;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 15;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 14;i_14 += 1)
                    {
                        {
                            var_32 = ((!(arr_9 [i_14 + 1])));
                            arr_49 [i_9] [i_9] = 1;
                            var_33 = (187 ? -1836147905 : 1008806316530991104);
                            var_34 = ((var_5 ? ((-1 ? var_14 : var_6)) : (((-(arr_18 [i_8] [i_9] [i_12] [i_13] [i_9]))))));
                            arr_50 [1] [i_9] [6] [i_12] [i_13] [11] [i_14] = ((arr_12 [i_8] [1] [i_8 + 1] [i_14 + 1]) ? (arr_22 [i_8] [i_13] [i_14 + 1] [i_8] [i_13] [i_8]) : (65534 + 9));
                        }
                    }
                }
            }
            var_35 = var_0;
            var_36 ^= ((arr_44 [i_8 + 1]) ? 254 : (arr_44 [i_8 + 2]));
        }
        for (int i_15 = 0; i_15 < 15;i_15 += 1) /* same iter space */
        {
            var_37 = (min(var_37, var_10));
            arr_53 [2] = max(((-4546703683835570508 ? (arr_47 [i_8 - 2] [i_8] [i_15] [i_8] [i_8]) : -1836147905)), var_8);
        }
        arr_54 [i_8] [i_8] = var_1;
        /* LoopNest 2 */
        for (int i_16 = 2; i_16 < 12;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 15;i_17 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 15;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 15;i_19 += 1)
                        {
                            {
                                arr_65 [i_16 + 2] [i_19] &= ((+((((!6) || -326432543)))));
                                arr_66 [i_16] [i_16] = ((((arr_11 [i_16] [i_16]) ? (((13 ? -2 : var_14))) : (arr_43 [i_8 + 3] [i_8] [i_8] [i_8]))) % (max(-326432543, var_7)));
                                arr_67 [i_16] [i_16] [i_18] [i_18] [i_18] = (((((((9 < (arr_19 [i_8]))) ? 255 : (((arr_34 [0]) ? 9223372036854775795 : 976969754))))) ? ((~(arr_51 [i_16 - 2]))) : (((~(7 == 255))))));
                                arr_68 [i_16] [i_17] [i_16] = ((((((((arr_6 [i_8]) ? var_11 : var_13))) || var_9)) ? (~246) : (!114)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_20 = 0; i_20 < 15;i_20 += 1)
                    {
                        for (int i_21 = 3; i_21 < 14;i_21 += 1)
                        {
                            {
                                var_38 = (max(var_38, ((max((((arr_52 [i_16] [i_20]) ? 150 : -976969754)), ((209 ? 242 : var_9)))))));
                                var_39 ^= ((var_14 ? (max((9223372036854775807 && 242), ((var_11 ? 110 : (arr_72 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17] [i_17]))))) : (((-3444373866476704152 / 254) ? (1090279926 <= var_9) : 255))));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_22 = 0; i_22 < 15;i_22 += 1)
        {
            for (int i_23 = 2; i_23 < 14;i_23 += 1)
            {
                {
                    var_40 *= ((!(((var_5 ? ((1 ? -1885318711 : var_15)) : (((0 ? (arr_19 [i_8]) : -326432543))))))));
                    /* LoopNest 2 */
                    for (int i_24 = 0; i_24 < 15;i_24 += 1)
                    {
                        for (int i_25 = 1; i_25 < 12;i_25 += 1)
                        {
                            {
                                var_41 = var_13;
                                var_42 |= ((-((((((var_13 ? var_11 : (-9223372036854775807 - 1)))) && (((var_16 ? -3960914633540956333 : -827045818))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

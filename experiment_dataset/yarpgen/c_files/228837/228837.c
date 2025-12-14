/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_13 ^= 1;
                    var_14 = (min(10072043243711235442, ((-(arr_4 [i_0 + 4] [i_0 + 1] [i_0 + 4])))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_15 *= ((-(max((((arr_3 [i_0] [i_1]) ? var_8 : (arr_5 [16] [16] [16] [i_3]))), (arr_8 [i_0])))));
                                var_16 = (min(var_16, 0));
                            }
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
    {
        var_17 = (min(var_17, (1 | 58272414297081404)));
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    {
                        var_18 -= (~var_9);
                        var_19 = (max(var_19, (((-var_7 ? ((((var_5 && (arr_16 [i_5] [i_5] [i_7]))))) : ((1 ? 0 : -1)))))));
                        arr_23 [i_6] [20] [i_7] [i_8] = ((!((((arr_22 [i_6] [i_6] [i_6] [i_6 - 1] [i_6 + 1]) ? (arr_18 [i_6] [i_6]) : var_6)))));
                        var_20 = ((arr_17 [i_5] [i_5]) ^ (((58272414297081388 == (arr_18 [i_7] [i_7])))));
                    }
                }
            }
        }
        var_21 *= (arr_14 [1]);
        var_22 = (~-32764);
        var_23 = (max(var_23, ((((7895441365370964120 ? (arr_20 [i_5] [i_5] [i_5] [i_5]) : -100382992))))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
    {
        var_24 = (min(var_24, (-58272414297081413 / -58272414297081404)));
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 22;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 22;i_12 += 1)
                {
                    {
                        var_25 |= ((((((arr_20 [i_9] [20] [20] [8]) ^ var_10))) ? var_0 : (!32767)));
                        var_26 -= (((127 ? -66 : -32753)));
                        var_27 = ((-(((arr_21 [i_9] [i_9] [14] [i_11] [14] [i_11]) ? (arr_26 [i_9]) : var_7))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 22;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 22;i_14 += 1)
            {
                {
                    var_28 = (arr_14 [i_14]);
                    arr_38 [i_9] [i_9] [14] = (--32764);
                    var_29 *= (~32758);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 0;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                {
                    arr_44 [i_9] [i_15] [i_15] = ((+(((arr_40 [i_15]) ? (arr_36 [i_16]) : 125829120))));
                    var_30 = (min(var_30, ((((((arr_39 [i_9] [i_16]) ? 106 : var_8)) / (~0))))));
                }
            }
        }
    }
    for (int i_17 = 0; i_17 < 16;i_17 += 1)
    {
        var_31 |= (((arr_31 [i_17]) >= (((arr_31 [i_17]) ? (arr_31 [i_17]) : (arr_31 [i_17])))));

        for (int i_18 = 1; i_18 < 15;i_18 += 1)
        {
            arr_50 [i_17] [i_17] [i_17] |= 1;
            /* LoopNest 2 */
            for (int i_19 = 4; i_19 < 14;i_19 += 1)
            {
                for (int i_20 = 2; i_20 < 15;i_20 += 1)
                {
                    {
                        var_32 ^= ((+(((27322 & -106) ? (arr_27 [i_17]) : var_3))));
                        var_33 = (min(var_33, ((((58272414297081398 && 60) ? (!127) : 2047)))));
                    }
                }
            }
        }
        var_34 = (((max(58272414297081412, -32767)) <= 58272414297081368));
    }
    for (int i_21 = 1; i_21 < 6;i_21 += 1)
    {
        var_35 -= ((~(min(var_11, -58272414297081388))));
        var_36 = (min(var_36, (((((((arr_52 [1] [i_21] [i_21 - 1]) | 449601509))) ? (min(58272414297081376, 106)) : ((((min(30016, 13408))))))))));
        arr_60 [i_21] = (((max(var_3, (arr_53 [i_21] [i_21])))) + var_4);
        /* LoopNest 3 */
        for (int i_22 = 1; i_22 < 8;i_22 += 1)
        {
            for (int i_23 = 0; i_23 < 1;i_23 += 1)
            {
                for (int i_24 = 1; i_24 < 1;i_24 += 1)
                {
                    {
                        var_37 = (min(var_37, ((((arr_1 [i_22] [i_22]) << (((((((~(arr_4 [i_22] [i_22] [i_22])))) ? (arr_12 [4] [i_22 + 1]) : (((((-9223372036854775807 - 1) || var_4)))))) - 6480150641624516819)))))));
                        var_38 = 0;
                        arr_68 [i_21] = (((((-(min((arr_7 [i_21] [i_22] [i_22] [i_22 - 1]), (arr_47 [i_23])))))) ? (((!(!var_2)))) : (((((((!(arr_9 [i_22]))))) >= (min(-472399994, 58272414297081364)))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}

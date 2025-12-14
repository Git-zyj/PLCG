/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= 2617497407300290789;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((~(((arr_1 [i_0] [i_0]) ? 60 : (-16293 % -27)))));

        /* vectorizable */
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                var_16 ^= ((!(arr_3 [i_1 - 1] [i_1 + 1] [i_1 + 2])));
                var_17 = (((var_5 == (arr_0 [i_2]))));
            }
            arr_7 [i_0] [i_0] [i_0] = (arr_5 [i_0] [i_1] [5]);
        }
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 8;i_3 += 1)
    {
        arr_10 [i_3] = ((((~(arr_0 [8]))) + ((var_12 ? (arr_9 [i_3]) : 60))));
        var_18 = (var_8 ? (arr_3 [i_3] [i_3] [i_3]) : (((((arr_1 [i_3] [i_3 - 1]) >= 475158565)))));

        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            arr_13 [i_3] = ((31 - ((var_9 - (arr_4 [i_3] [i_3] [i_3])))));
            var_19 = ((arr_6 [6]) ? (arr_11 [i_3 - 1] [i_3]) : ((768 ? var_6 : var_9)));
            arr_14 [6] [i_4] |= ((~(arr_4 [i_3 - 1] [i_3 - 1] [i_4])));
            var_20 += (60 ? (arr_12 [i_3 + 1] [2] [i_3 + 1]) : (arr_12 [i_3 + 1] [10] [i_3 + 2]));
        }
        for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
        {
            arr_18 [i_3] [i_3 - 1] [i_3] = (((((var_14 * (arr_17 [i_3 + 1] [6])))) ? (arr_8 [i_5]) : (arr_15 [i_3] [i_3 + 2] [3])));
            arr_19 [i_3] [i_3] = (~221);
            arr_20 [8] [i_3] [i_5] = (((arr_1 [i_3 + 2] [i_3 + 2]) == (arr_16 [i_3 + 2])));
        }
        for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
        {
            var_21 *= (((arr_5 [i_3 + 2] [i_3 + 3] [i_3 - 1]) < (arr_5 [i_3 + 2] [i_3 + 3] [i_3 + 3])));
            arr_23 [i_3] [i_3] [i_3] = 36028796884746240;
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        {
                            arr_32 [i_3] [i_9] [i_3] [i_3] [6] [i_3] = (~var_5);
                            arr_33 [i_3] [i_9] |= (((~(arr_17 [i_6] [i_6]))));
                            arr_34 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = (((136 + var_6) ? (var_4 + 180) : (arr_29 [i_9] [i_8] [i_3] [i_7] [i_3] [i_3] [i_3])));
                            var_22 = (min(var_22, var_14));
                            arr_35 [i_3] [i_8] [i_3] [i_6] [1] = 255;
                        }
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {

            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                var_23 = ((arr_39 [i_3 + 2]) ? (arr_25 [i_3]) : var_9);
                arr_42 [i_3] [1] [i_3] [i_10] = ((var_0 ? var_0 : 252));
                var_24 = 1;
            }
            var_25 &= (((!(arr_26 [i_3] [i_10] [i_3 + 2] [i_10] [i_10] [i_3 + 2]))));
            var_26 = (max(var_26, (((!(arr_28 [8] [i_3] [i_3] [8] [i_10] [8] [i_10]))))));
            var_27 = (~1);
            var_28 ^= (((((arr_30 [i_3] [i_3] [i_3 + 2] [i_3] [i_3 + 2]) + 9223372036854775807)) << (((((arr_30 [i_3] [i_3] [i_3 - 1] [i_3] [i_3 + 1]) + 7064062579853583986)) - 15))));
        }
        arr_43 [0] [i_3] = ((((17 ? -543444867 : (arr_22 [i_3] [i_3]))) != 118));
        /* LoopNest 3 */
        for (int i_12 = 2; i_12 < 10;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 11;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 11;i_14 += 1)
                {
                    {
                        arr_55 [i_3] [i_3] [i_13] [i_3] [i_14] [i_14] = 192;
                        var_29 = ((!(((arr_24 [i_3]) == (arr_41 [i_3] [i_12 + 1] [i_3] [i_14])))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 0;i_15 += 1)
    {
        arr_59 [i_15] = ((4822596044589769355 | (arr_57 [i_15 + 1])));
        /* LoopNest 2 */
        for (int i_16 = 3; i_16 < 14;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 15;i_17 += 1)
            {
                {
                    arr_66 [i_15] [i_15 + 1] [i_15 + 1] [i_15] = (var_2 % (arr_60 [i_17]));
                    var_30 += ((255 > (!8796093022207)));
                }
            }
        }
        var_31 *= ((-(arr_58 [i_15 + 1])));
    }
    for (int i_18 = 0; i_18 < 21;i_18 += 1)
    {
        var_32 = (max(var_32, (((!(arr_69 [i_18]))))));
        arr_71 [17] = (((((arr_69 [i_18]) + 2147483647)) >> (((((arr_69 [10]) ? (max(var_4, 57022)) : var_9)) - 1186572633228263600))));
    }
    var_33 ^= 0;
    var_34 = (((-var_12 ? var_4 : (~801481149))));
    #pragma endscop
}

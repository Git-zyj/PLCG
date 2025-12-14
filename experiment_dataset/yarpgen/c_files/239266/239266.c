/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_16 += (arr_5 [10]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_17 = ((((var_9 ? (((arr_0 [i_3]) ? (arr_3 [i_0]) : 0)) : (((max((arr_12 [i_3] [i_2] [i_0 - 1]), (arr_5 [i_1]))))))) << (((arr_5 [i_1]) ? (((!(arr_7 [i_0] [i_0] [i_0] [i_0 - 2])))) : (!var_0)))));
                            arr_13 [13] [i_2] [i_1] [i_1] [i_1] [i_0] = var_10;
                        }
                    }
                }
                arr_14 [i_1] = (((arr_11 [i_1] [i_1 - 1] [i_1] [i_1]) ? ((((!((!(arr_5 [i_1]))))))) : (((((arr_9 [i_1] [i_1] [i_1]) < var_12)) ? ((((arr_1 [i_0]) ? var_11 : (arr_3 [i_0])))) : ((~(arr_0 [i_1])))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            {
                arr_19 [i_4] [i_5] [i_5] = 44;
                arr_20 [i_5] [i_4] [i_4] = ((!((!(arr_16 [i_4])))));
                var_18 = ((((((!(arr_9 [i_4] [2] [i_4]))))) | ((((max(0, (arr_11 [i_4] [12] [i_5] [1])))) ? (~4269824312684604108) : ((((arr_16 [9]) ? (arr_9 [i_4] [i_4] [i_4]) : var_3)))))));
                arr_21 [i_4] [i_5] [i_5] = 25043;
                var_19 *= (arr_12 [i_4] [i_5] [i_5]);
            }
        }
    }

    for (int i_6 = 4; i_6 < 15;i_6 += 1)
    {
        var_20 = var_8;
        arr_24 [i_6] [i_6] |= 14;
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 9;i_7 += 1) /* same iter space */
    {
        var_21 -= ((!(arr_1 [i_7 + 2])));
        arr_27 [i_7] = ((arr_22 [i_7]) != (arr_22 [i_7 + 1]));
        arr_28 [0] |= (arr_22 [i_7 + 1]);
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 9;i_8 += 1) /* same iter space */
    {

        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {

            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                var_22 = (((arr_17 [i_8] [5] [0]) || (arr_4 [i_10] [10] [i_8])));
                arr_38 [i_9] [i_10] [i_9] [i_9] = ((~(~32746)));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 10;i_12 += 1)
                    {
                        {
                            var_23 = var_0;
                            var_24 -= -20;
                            var_25 = (((arr_16 [i_12 - 1]) != (arr_16 [i_12 + 2])));
                        }
                    }
                }
                arr_43 [i_10] [i_9] [i_8 + 2] = (((((var_11 ? var_4 : (arr_9 [i_9] [i_9] [i_9])))) >= (arr_15 [i_8 + 1] [i_10])));
            }
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                arr_47 [i_8] [i_9] = (arr_31 [i_9]);
                var_26 -= ((~((~(arr_7 [i_8 - 1] [i_8 - 1] [i_13] [i_13])))));
                arr_48 [i_8] [i_8] [i_9] [i_8] = ((+((var_2 ? (arr_3 [i_9]) : (arr_39 [i_8] [i_9] [i_13] [i_9] [i_8] [i_8])))));
            }
            for (int i_14 = 0; i_14 < 12;i_14 += 1)
            {
                arr_51 [i_8] [8] [i_9] [1] = ((((arr_22 [i_8]) ? -4 : (arr_17 [i_8] [i_8] [i_8]))));
                var_27 = ((var_1 || (arr_49 [i_8 + 1] [i_9] [i_9])));
                var_28 -= (((-989021588000222700 ? 14 : (arr_12 [i_8] [i_9] [i_9]))));
                var_29 *= ((var_0 | (arr_40 [i_8 + 2] [i_14])));
            }
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 12;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 12;i_16 += 1)
                {
                    {
                        var_30 = (min(var_30, (arr_37 [i_9] [i_15] [0])));

                        for (int i_17 = 0; i_17 < 12;i_17 += 1)
                        {
                            var_31 ^= (((arr_31 [i_16]) & (arr_61 [i_8] [i_9] [i_15] [i_17] [0])));
                            var_32 ^= ((!(arr_2 [i_8 - 1])));
                            var_33 = (max(var_33, (arr_22 [i_8])));
                        }
                    }
                }
            }
        }
        arr_62 [0] [0] = (((arr_32 [i_8 + 3] [i_8 + 3] [i_8 - 1]) ? var_1 : (arr_11 [14] [i_8] [i_8] [14])));
        arr_63 [3] = ((!(arr_23 [i_8] [i_8 + 2])));
        arr_64 [i_8] &= (!1);
        arr_65 [i_8] [i_8 + 2] &= (((arr_35 [i_8 - 1]) ? (arr_35 [i_8 - 1]) : var_10));
    }
    #pragma endscop
}

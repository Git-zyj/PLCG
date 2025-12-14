/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_17 = ((((((-1 ? -1 : 3247476947931040806)) + 9223372036854775807)) << (((((arr_3 [i_0 - 4] [i_0 + 1] [i_0 - 3]) + 29623)) - 15))));
                arr_6 [i_1] = var_14;
                arr_7 [i_0] |= ((~((var_16 ? (arr_2 [i_0] [i_0]) : (arr_0 [i_0] [i_1])))));
                arr_8 [i_0 + 2] [i_1] [i_1] = ((+((var_6 - (((arr_5 [i_0] [i_0] [i_1]) % (arr_4 [i_0] [i_1] [i_1])))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_18 += (max(((((var_14 ? var_8 : (arr_2 [i_1] [i_0]))))), (((arr_11 [i_0 + 3]) << (((((arr_2 [24] [24]) ? var_14 : (arr_3 [i_0 + 3] [i_2] [i_0 + 3]))) - 19340))))));

                            /* vectorizable */
                            for (int i_4 = 1; i_4 < 24;i_4 += 1)
                            {
                                arr_16 [i_2] [i_4] [i_4 + 1] [i_4] [i_4] [i_1] = (arr_5 [i_2] [i_4] [i_0 + 3]);
                                var_19 = var_5;
                                arr_17 [i_0] [i_1] [i_2] [i_2] [i_2] [i_4] [i_4] = ((~(arr_5 [i_2] [i_2] [i_0 + 1])));
                                arr_18 [i_0] [i_1] [i_0] [i_2] [9] [i_4] [i_4] = ((!(!var_8)));
                            }
                            /* vectorizable */
                            for (int i_5 = 3; i_5 < 24;i_5 += 1)
                            {
                                arr_22 [i_0] [i_0] [1] [i_0] [i_0] = arr_19 [11] [11] [i_2];
                                var_20 = (max(var_20, var_0));
                            }
                            arr_23 [i_1] [0] [i_1] [13] [i_1] = (-1 - 4893806839505901824);
                            var_21 += (arr_10 [i_0 - 3] [i_0] [i_0] [i_0 - 3]);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 3; i_6 < 20;i_6 += 1)
    {
        for (int i_7 = 3; i_7 < 20;i_7 += 1)
        {
            {
                arr_30 [i_6] [i_7] = ((!((((arr_20 [i_6] [i_6] [i_7] [i_7 - 3] [i_7]) ? -0 : 240)))));
                arr_31 [i_6] [i_6] [i_7] = (arr_9 [i_7] [i_7] [i_6] [i_6]);
                var_22 = ((((((!((max((arr_4 [i_6] [i_7] [i_6]), var_4))))))) % ((((-3150457507015761032 ? 9 : (-9223372036854775807 - 1))) ^ (((((arr_0 [i_6] [i_7]) || var_15))))))));
            }
        }
    }
    var_23 = (min(var_23, var_11));

    /* vectorizable */
    for (int i_8 = 0; i_8 < 20;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                {
                    arr_38 [i_9] [i_9] [i_9] [i_10] = var_15;
                    arr_39 [i_9] [i_9] [i_10] = (((((~(arr_5 [i_8] [i_9] [i_10])))) ? (arr_29 [i_8] [i_8] [i_9]) : (arr_0 [i_8] [i_8])));
                    var_24 -= ((+(((arr_4 [i_8] [i_8] [i_8]) ? (arr_9 [i_8] [i_8] [i_9] [i_10]) : var_0))));
                    arr_40 [i_8] [i_9] [i_10] = ((-(arr_19 [i_10] [i_10] [i_10])));
                }
            }
        }
        var_25 -= ((~(arr_27 [i_8] [20])));
        var_26 -= ((var_2 ? var_1 : ((var_16 ? var_14 : var_4))));
    }
    for (int i_11 = 0; i_11 < 11;i_11 += 1)
    {
        arr_43 [i_11] = arr_24 [i_11];
        arr_44 [i_11] [i_11] = (((-1321478475136657362 + -25862) != (((~(arr_37 [i_11] [i_11] [i_11] [i_11]))))));

        for (int i_12 = 3; i_12 < 8;i_12 += 1)
        {
            arr_49 [i_12] = ((var_14 >> (arr_45 [i_12 - 2] [i_11])));
            arr_50 [i_11] = min(var_6, (!-25009));
        }
    }
    for (int i_13 = 2; i_13 < 20;i_13 += 1)
    {
        /* LoopNest 3 */
        for (int i_14 = 2; i_14 < 18;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 22;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 22;i_16 += 1)
                {
                    {
                        var_27 = ((-(min(-1, 5691989763959045119))));
                        var_28 = ((max((((var_6 || (arr_19 [i_13] [i_13] [i_13]))), ((var_3 ? var_13 : (arr_3 [3] [i_15] [i_16])))))));
                    }
                }
            }
        }
        arr_62 [i_13] [i_13] = ((((!(var_16 || var_10))) ? ((((!(arr_61 [i_13] [i_13 - 1] [i_13 - 1]))))) : (((arr_4 [i_13 - 1] [i_13 - 2] [i_13]) ? (arr_4 [i_13 + 1] [i_13 + 1] [i_13]) : var_4))));
        arr_63 [i_13] |= ((((~(~39))) ^ ((((max(var_12, (arr_55 [i_13] [i_13 + 1] [i_13] [i_13 + 2])))) << ((((~(arr_3 [i_13] [i_13] [i_13]))) - 29597))))));
    }
    #pragma endscop
}

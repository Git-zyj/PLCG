/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, ((((var_10 ? var_9 : (65533 - 1)))))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_21 = ((~(arr_7 [i_0 - 3] [i_0 + 2] [i_0 + 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_9 [i_0]) == var_14));
                                arr_15 [i_4 - 4] [i_0] [i_0 - 1] [i_2] [i_0] [i_0 - 1] = var_10;
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    {
                        var_22 = (((((~(arr_9 [i_0])))) ? (var_9 * var_13) : (arr_13 [i_0 - 2] [i_0 + 1] [i_0] [i_5] [i_7 - 1])));
                        var_23 = (max(var_23, var_14));
                    }
                }
            }
        }
        arr_23 [i_0] [i_0] = var_16;
        var_24 -= (!var_13);
    }
    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 23;i_10 += 1)
            {
                {
                    var_25 = (max(((var_4 ? 1 : (max((arr_25 [i_8]), var_10)))), (arr_27 [i_10 + 2])));
                    arr_31 [i_8] [1] [i_10 - 1] = ((~((var_19 ? (65531 & 4) : (~var_17)))));

                    for (int i_11 = 1; i_11 < 24;i_11 += 1)
                    {
                        var_26 = ((((-var_13 | (((var_14 ? (arr_33 [i_8] [i_9] [i_10] [i_11] [21] [i_11 - 1]) : (arr_30 [i_8] [i_8] [i_8])))))) == ((((!(arr_26 [i_10 + 1])))))));
                        var_27 = ((4 % (~-var_16)));
                        arr_35 [i_8] [i_11] = ((((((var_6 ? 65530 : var_13)))) ? -1 : ((min(65531, var_2)))));
                    }
                    /* vectorizable */
                    for (int i_12 = 1; i_12 < 1;i_12 += 1)
                    {
                        var_28 = 1713112929;
                        arr_38 [i_9] [i_9] [i_9] [i_9] |= ((((var_1 ? 33888 : (arr_36 [i_8] [i_8] [i_8] [i_8])))) ? (((752193533 > (arr_32 [i_8] [i_8] [15] [15] [i_12])))) : var_18);
                    }
                }
            }
        }
        arr_39 [i_8] = (var_14 ? (((arr_36 [i_8] [i_8] [i_8] [i_8]) ? var_14 : var_17)) : (arr_36 [i_8] [i_8] [i_8] [i_8]));
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 25;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 25;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 25;i_15 += 1)
                {
                    {
                        arr_51 [i_14] = arr_27 [i_14];
                        var_29 = (min(var_29, ((((arr_46 [22] [i_8]) == var_18)))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_16 = 2; i_16 < 14;i_16 += 1)
    {
        /* LoopNest 3 */
        for (int i_17 = 3; i_17 < 15;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 17;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 1;i_19 += 1)
                {
                    {

                        for (int i_20 = 0; i_20 < 17;i_20 += 1)
                        {
                            var_30 = ((var_9 * (arr_52 [i_19])));
                            arr_64 [i_17] [i_17] [i_20] [i_20] [i_20] [i_20] [i_20] = (((((arr_57 [6] [6] [i_18] [6]) + 2147483647)) << (var_5 - 181)));
                        }
                        arr_65 [1] [i_17] [i_17] [i_17] [i_17] = ((-4945561003995641794 && (arr_52 [i_16])));
                        arr_66 [i_19] [i_18] [i_17] [i_17] [i_16] [i_16] = (((arr_42 [i_18] [i_16 + 3] [i_16]) ? (arr_43 [i_17] [i_16 + 3] [i_16]) : var_3));
                        var_31 = ((var_19 ? (arr_36 [i_16 - 2] [i_16 + 3] [i_17 + 1] [i_17 - 2]) : var_15));
                    }
                }
            }
        }
        arr_67 [i_16] [i_16] = (((1 < var_8) > (var_17 >= var_9)));
        var_32 = ((~var_3) ? (arr_50 [i_16] [i_16] [i_16] [i_16]) : (arr_46 [i_16 + 2] [i_16]));
        var_33 = -var_1;
    }
    #pragma endscop
}

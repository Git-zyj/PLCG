/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = (min(((min(((var_8 ? (arr_1 [i_0]) : (-127 - 1))), (((var_6 ? var_4 : (arr_0 [i_0]))))))), ((min(var_13, (arr_1 [i_0]))))));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_6 [i_0] = 26;
            var_18 = (min((arr_5 [i_1] [i_0]), (((min((arr_1 [i_1]), (arr_1 [i_1])))))));
            var_19 = (((arr_0 [i_0]) ? ((min((arr_0 [i_0]), var_5))) : ((min(9, (arr_0 [i_1]))))));
            var_20 = var_12;
            arr_7 [i_0] [20] = (min((((arr_0 [i_0]) ? var_16 : (min((arr_5 [6] [0]), var_14)))), ((var_16 ? (((245 ? (arr_1 [i_0]) : 3157716776))) : 1008))));
        }
    }
    for (int i_2 = 2; i_2 < 11;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    arr_17 [i_2] [1] [i_3] = ((((min((arr_5 [i_2 - 2] [i_4]), var_14))) ? var_11 : 1));
                    var_21 = (arr_5 [i_3] [i_3]);
                    arr_18 [i_2] [i_2] = (min(18446744073709551595, 268173312));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_22 -= var_1;
                        arr_21 [i_2] [i_2] [i_3] [i_5] = ((((((arr_8 [i_2]) ? (arr_0 [i_4]) : var_8))) ? (arr_14 [i_2]) : ((128 ? (arr_11 [i_2] [i_2]) : 4294443008))));
                        var_23 = (arr_12 [i_2 - 1] [i_2 - 1]);
                        var_24 = (arr_12 [i_4] [i_5]);
                        var_25 = (203 ? (-9223372036854775807 - 1) : var_13);
                    }
                }
            }
        }
        var_26 = ((((((((min((arr_0 [i_2]), (arr_0 [i_2]))))) == (min(3900297672, (arr_13 [i_2])))))) / (((1110694680 ? (arr_5 [10] [i_2]) : 4294967282)))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                {
                    var_27 = (((((-((min(1, var_13)))))) ? var_17 : 845550420));
                    var_28 += (arr_11 [i_6] [i_6]);
                    var_29 = var_0;
                    arr_27 [10] [i_2] [i_2] [1] = ((arr_24 [i_6] [i_6] [i_2]) ? ((-8597034301109012887 ? 3153568290 : (((var_0 / (arr_22 [i_2 + 1])))))) : ((2340389760 * (arr_14 [i_2]))));
                    arr_28 [i_6] [i_2] [i_6] = var_7;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 13;i_10 += 1)
            {
                {
                    var_30 = (min(((((((arr_32 [i_8]) ? -125 : var_16))) ? (min((arr_1 [i_8]), 1152358554653425664)) : (arr_29 [i_8] [i_8]))), (((min(3587383650, 244))))));
                    /* LoopNest 2 */
                    for (int i_11 = 2; i_11 < 12;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 16;i_12 += 1)
                        {
                            {
                                arr_44 [i_8] [i_11] [i_10 + 2] [i_9] [i_8] = (min(((((arr_33 [i_9] [13] [i_10 + 1]) ? (arr_33 [i_8] [i_8] [i_10 + 3]) : (arr_33 [i_8] [i_12] [i_10 + 1])))), (((arr_30 [i_8] [i_12]) ? var_16 : var_15))));
                                var_31 = ((((min((arr_37 [i_8]), (arr_0 [i_11 - 1])))) == (arr_43 [i_8] [12] [i_8] [i_12])));
                            }
                        }
                    }
                    var_32 = min(var_6, (((arr_30 [i_8] [i_9]) - ((min(41, 1))))));
                }
            }
        }
    }

    for (int i_13 = 0; i_13 < 15;i_13 += 1)
    {
        arr_49 [i_13] = (((min((((arr_46 [i_13]) | var_2)), var_17)) - ((min(((-(arr_48 [i_13] [i_13]))), var_5)))));
        /* LoopNest 2 */
        for (int i_14 = 1; i_14 < 12;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 15;i_15 += 1)
            {
                {
                    var_33 += var_16;
                    arr_57 [i_13] [i_14] [i_13] = (min((min(var_6, (arr_54 [i_13] [i_14 - 1] [i_15]))), ((min((arr_54 [i_13] [i_14 + 2] [i_15]), (arr_54 [i_14] [i_14] [i_13]))))));
                }
            }
        }
        arr_58 [i_13] [i_13] = (min(((var_5 ? 15 : var_0)), (min((((arr_4 [i_13] [i_13]) ? (arr_54 [i_13] [i_13] [1]) : (arr_55 [i_13] [i_13]))), 1))));
        var_34 = (min((((var_0 == (arr_50 [i_13])))), (arr_30 [4] [4])));
    }
    for (int i_16 = 0; i_16 < 19;i_16 += 1)
    {
        arr_61 [i_16] = ((~(min(var_12, (((20732 - (arr_3 [i_16]))))))));
        var_35 = ((((min(192, (arr_4 [i_16] [i_16])))) ? (min((min(var_11, (arr_0 [i_16]))), (arr_5 [i_16] [i_16]))) : (arr_59 [i_16])));
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 19;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 19;i_18 += 1)
            {
                {
                    var_36 = var_6;
                    var_37 = (-2147483647 - 1);
                }
            }
        }
    }
    #pragma endscop
}

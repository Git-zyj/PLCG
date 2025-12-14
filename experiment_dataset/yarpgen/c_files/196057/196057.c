/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            arr_5 [6] [12] [i_1] = ((((((5503 ? 0 : 7260)))) ? (((-((var_12 ? var_1 : var_6))))) : ((var_8 ? (arr_3 [i_1 - 1]) : var_1))));
            var_13 = (max(var_13, ((~((-((((arr_1 [i_0]) == -1458444188)))))))));
        }
        var_14 = (min(var_14, (((+((-64 ? (((arr_0 [i_0] [i_0]) ? (arr_3 [i_0]) : (arr_1 [i_0]))) : 15225)))))));
        var_15 -= (min((((-(((1 == (arr_0 [i_0] [i_0]))))))), (arr_1 [i_0])));
    }
    var_16 = ((((((var_9 ? var_1 : var_8))) ? ((var_10 ? var_3 : 63)) : (var_10 < var_10))));

    /* vectorizable */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_17 = ((!(arr_8 [i_2] [i_2])));
        var_18 = (var_5 == var_0);
        var_19 = (arr_8 [i_2] [15]);
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {

                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            arr_27 [i_3] [i_4] [i_3] [i_3] [6] [8] [9] = (((((((arr_21 [2] [i_4] [i_4] [i_4]) ? 18446744073709551615 : var_4)) == (arr_11 [i_4]))) ? (((arr_13 [5] [i_5]) ? var_9 : (arr_13 [i_3] [i_4]))) : (arr_20 [i_3] [i_3] [4] [i_3] [i_3])));
                            arr_28 [i_3] = (arr_25 [i_3] [i_5] [i_6] [i_7]);
                            var_20 = ((((((((arr_8 [i_3] [i_4]) < var_9))) == (((-21689 < (arr_9 [i_3])))))) ? (((arr_18 [i_3]) ? (arr_18 [i_3]) : var_8)) : 19774));
                        }
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            var_21 = (((((0 ? 18446744073709551615 : 16515072))) ? 18736 : (-16383 == -67)));
                            var_22 = var_9;
                            arr_31 [i_3] [i_4] [i_4] [i_3] [i_3] [i_6] [2] = ((var_5 ? ((3059858872 ? 1287408822 : 18446744073709551593)) : 16382));
                            var_23 = var_1;
                        }
                        /* vectorizable */
                        for (int i_9 = 4; i_9 < 9;i_9 += 1) /* same iter space */
                        {
                            arr_34 [i_3] [i_3] [i_5] [i_6] [i_9] = (arr_4 [9] [i_6]);
                            var_24 = (min(var_24, ((((arr_26 [i_9 + 3] [i_9 + 1] [i_9]) == (arr_14 [i_9]))))));
                        }
                        /* vectorizable */
                        for (int i_10 = 4; i_10 < 9;i_10 += 1) /* same iter space */
                        {
                            var_25 ^= ((32767 ? 49109 : 1697263655));
                            arr_38 [i_3] [i_4] [i_3] [i_6] [i_4] = (((((~(arr_17 [i_6] [i_3] [i_3] [i_3])))) ? (arr_25 [i_3] [i_4] [i_5] [i_6]) : var_10));
                        }
                        var_26 = (((arr_21 [i_3] [i_3] [i_4] [i_6]) ? (((~92) ? (((arr_30 [i_4] [i_5] [i_4] [i_4] [i_4] [i_3]) ? (arr_12 [i_4]) : (arr_13 [i_6] [10]))) : (arr_10 [i_3]))) : var_8));
                        var_27 = (max(var_27, (arr_3 [i_3])));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 12;i_11 += 1)
        {
            for (int i_12 = 4; i_12 < 11;i_12 += 1)
            {
                {
                    arr_46 [i_3] [i_3] = ((+((((((((arr_8 [16] [i_12]) < var_3)))) == (arr_30 [i_12] [i_12] [i_11] [i_11] [i_11] [i_3]))))));

                    for (int i_13 = 0; i_13 < 12;i_13 += 1)
                    {
                        var_28 = (min(var_28, ((((((((arr_21 [i_13] [i_11] [i_13] [i_13]) ? -4880615391329022378 : (arr_9 [i_3]))) - (var_1 + var_12)))) ? (((((arr_23 [i_11] [i_11] [i_13]) == (arr_40 [i_3] [i_11]))) ? ((27461 ? (arr_45 [i_3] [i_3] [i_3]) : (arr_35 [i_3] [i_11] [i_12 + 1] [i_13] [i_13]))) : ((min(-6236346858739641999, (arr_19 [i_3] [i_11] [i_12])))))) : (arr_23 [i_11] [i_11] [i_11])))));
                        arr_49 [i_3] [i_3] [i_3] [i_13] [i_13] = ((49109 ? (((((((arr_43 [i_12]) < -15225))) == (9223372036854775792 == 8388607)))) : var_5));
                    }
                    arr_50 [i_3] [i_3] [i_3] [i_3] = ((((arr_30 [i_12] [i_12] [i_12] [i_12] [i_12 - 1] [i_12 - 2]) ? (arr_37 [i_12 - 2] [i_12] [11] [i_12 - 3] [i_12 - 2]) : (arr_30 [i_12] [i_12] [i_12] [i_12] [i_12 - 1] [i_12 - 2]))));
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -var_4;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            var_19 = (-15946487439241078027 - var_16);

            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                var_20 = var_15;

                for (int i_3 = 1; i_3 < 21;i_3 += 1)
                {
                    var_21 |= -30;
                    arr_12 [i_0] [8] [i_2] = ((((!(arr_4 [1]))) && (~var_5)));
                }

                /* vectorizable */
                for (int i_4 = 1; i_4 < 20;i_4 += 1)
                {
                    arr_15 [i_0] [i_1] [i_1] [i_0] [i_4] = var_6;
                    var_22 = ((!(((var_10 ? (arr_7 [i_0] [i_1] [i_1 - 1]) : (arr_10 [i_0] [i_1] [i_2 + 1] [i_2 + 1]))))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        arr_21 [i_0] [i_0] [i_0] = var_16;
                        var_23 = (!var_4);
                        var_24 = var_10;
                    }
                    for (int i_7 = 2; i_7 < 22;i_7 += 1)
                    {
                        var_25 = ((~((((arr_14 [i_7] [i_5] [i_1]) <= var_12)))));
                        var_26 = var_6;
                    }
                    var_27 = ((var_6 >= (arr_18 [i_1] [i_1 + 2] [i_1] [i_1 + 2] [i_1 + 2])));
                    var_28 = (var_17 && var_11);
                }
            }
            /* LoopNest 3 */
            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        {
                            arr_31 [i_0] [i_1] [i_8] [i_9] [i_9] [i_9] [i_10] = ((!(((var_16 | ((((arr_20 [i_0] [22] [i_0] [i_9] [i_0]) ? (arr_17 [i_0] [16] [i_0] [19]) : var_6))))))));
                            var_29 = (((((-(arr_5 [i_0])))) ? (arr_5 [i_0]) : (((arr_5 [i_0]) * (arr_14 [i_0] [i_0] [i_9])))));
                        }
                    }
                }
            }
        }
        for (int i_11 = 2; i_11 < 21;i_11 += 1)
        {

            for (int i_12 = 2; i_12 < 23;i_12 += 1)
            {
                var_30 = (max(var_30, (((((((((var_0 ? var_12 : var_14))) ? ((var_11 ? var_7 : var_4)) : var_15))) < -var_3)))));
                arr_37 [i_0] [i_11] [i_12] [i_12] = ((!(arr_36 [i_0] [i_0] [15])));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 24;i_14 += 1)
                    {
                        {
                            var_31 = (((0 * var_10) ? var_5 : ((((var_16 > (~var_5)))))));
                            var_32 ^= -32767;
                            var_33 = (max(var_33, var_5));
                            arr_43 [i_0] [i_0] = (((((var_13 ? var_13 : var_0))) ? var_6 : var_9));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 24;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 24;i_16 += 1)
                {
                    {

                        for (int i_17 = 0; i_17 < 24;i_17 += 1) /* same iter space */
                        {
                            var_34 = (((((~(arr_7 [i_0] [i_11 + 3] [i_11])))) ? (var_10 - var_10) : (arr_13 [i_0] [i_0] [i_0] [i_16] [i_17])));
                            var_35 = (~var_4);
                        }
                        for (int i_18 = 0; i_18 < 24;i_18 += 1) /* same iter space */
                        {
                            var_36 |= (arr_42 [i_11] [11] [11] [i_11] [i_11 + 2]);
                            var_37 = var_5;
                        }
                        var_38 = (((((-(((arr_53 [8] [i_11] [8] [i_15] [i_15] [i_16]) ? (arr_42 [i_11] [23] [i_15] [i_16] [i_11]) : var_17))))) < var_8));
                        arr_54 [10] [i_11 + 1] [i_0] [i_16] = var_2;
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_19 = 2; i_19 < 22;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 24;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 24;i_21 += 1)
                    {
                        {
                            var_39 = (arr_39 [i_0] [4] [i_11 + 1] [i_19] [i_0] [i_21]);
                            var_40 = (i_0 % 2 == 0) ? (((var_12 ? (((((arr_59 [i_0] [i_20] [i_0] [i_0] [i_21] [i_19] [16]) + 9223372036854775807)) >> ((((0 ? var_16 : 2500256634468473588)) - 2500256634468473525)))) : var_9))) : (((var_12 ? (((((((arr_59 [i_0] [i_20] [i_0] [i_0] [i_21] [i_19] [16]) - 9223372036854775807)) + 9223372036854775807)) >> ((((0 ? var_16 : 2500256634468473588)) - 2500256634468473525)))) : var_9)));
                        }
                    }
                }
            }
        }
        arr_62 [i_0] = ((var_1 && (~var_14)));
    }
    #pragma endscop
}

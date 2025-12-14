/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((var_7 != var_2) + ((~((4196863733 ? var_15 : var_15))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_20 = (var_3 ? -9223372036854775797 : ((((arr_1 [i_0] [i_0]) ? (arr_2 [i_0]) : var_18))));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_5 [i_0] = 9223372036854775807;
            var_21 = var_3;
            var_22 = (-9223372036854775797 ? 536870912 : 9223372036854775807);
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
        {
            arr_9 [i_0] = ((~(-6799445128167396146 / var_1)));
            /* LoopNest 3 */
            for (int i_3 = 2; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        {
                            arr_16 [i_5] [i_0] [i_5] [i_0] [i_5] [i_5] = ((var_10 ? (arr_10 [i_0]) : (arr_8 [i_3] [i_2] [i_3 - 1])));
                            var_23 = ((var_3 < (arr_4 [i_3 + 2] [23] [i_3 - 2])));
                            var_24 = arr_4 [i_3 - 2] [i_3 + 1] [i_3];
                            arr_17 [i_5] [i_5] [i_3] [8] [10] &= 3239491269;
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_5] [i_0] [1] = 2147483647;
                        }
                    }
                }
            }
            arr_19 [i_0] [i_2] [i_0] = (!var_4);
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        {
                            var_25 = ((-27768 || -375091745) ? var_12 : (((!(arr_20 [i_8] [i_8])))));
                            arr_30 [i_0] [i_0] = (((arr_10 [i_0]) / var_10));
                            var_26 = (min(var_26, var_14));
                            var_27 = ((~(var_3 < var_9)));
                        }
                    }
                }
            }
            var_28 = (var_13 != 1055476026);
        }
        for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
        {
            var_29 = ((arr_20 [i_0] [i_9]) ? (arr_20 [i_0] [i_9]) : var_18);
            /* LoopNest 3 */
            for (int i_10 = 2; i_10 < 22;i_10 += 1)
            {
                for (int i_11 = 4; i_11 < 23;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        {
                            var_30 = (~(arr_40 [i_10 - 2] [i_10 - 1] [i_0] [i_11] [i_11 + 2] [i_0]));
                            var_31 *= (((arr_4 [5] [13] [i_10 + 1]) / var_17));
                            arr_43 [i_0] [i_10] [i_0] = var_11;
                        }
                    }
                }
            }

            for (int i_13 = 0; i_13 < 25;i_13 += 1)
            {
                var_32 = (min(var_32, (((var_5 ? ((27785 ? 3239491270 : (arr_12 [i_0] [i_0] [i_0] [i_13]))) : (var_12 != var_18))))));
                arr_46 [13] [i_0] [i_13] = (((((var_17 ? 3239491269 : (arr_26 [i_0] [i_13])))) ? (((var_13 ? (arr_40 [i_0] [i_0] [i_0] [i_9] [i_13] [20]) : 333559257))) : (arr_14 [i_0] [i_13])));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 25;i_14 += 1)
                {
                    for (int i_15 = 1; i_15 < 24;i_15 += 1)
                    {
                        {
                            var_33 ^= (1965363908 ? (arr_41 [i_15] [12] [i_15] [i_15 + 1] [i_15 - 1]) : 4165451092);
                            arr_53 [i_0] [i_15] = (arr_49 [10] [i_15] [i_15 + 1] [i_15 - 1] [i_15 + 1]);
                        }
                    }
                }
                var_34 = (((arr_21 [i_13] [i_9] [23] [i_0]) && var_5));
            }
            var_35 = (min(var_35, (arr_6 [i_9])));
        }
        var_36 = ((~((var_3 ? var_18 : (-9223372036854775807 - 1)))));

        for (int i_16 = 0; i_16 < 25;i_16 += 1)
        {
            arr_56 [i_0] = var_4;
            /* LoopNest 3 */
            for (int i_17 = 0; i_17 < 25;i_17 += 1)
            {
                for (int i_18 = 1; i_18 < 24;i_18 += 1)
                {
                    for (int i_19 = 2; i_19 < 22;i_19 += 1)
                    {
                        {
                            var_37 = (min(var_37, var_10));
                            var_38 = (max(var_38, (((!(arr_13 [i_16] [i_16]))))));
                            var_39 = (((arr_27 [i_19 + 1] [i_18 + 1] [i_17] [i_18] [15]) ? var_18 : (arr_22 [i_19 + 2] [i_18 + 1] [i_18 + 1] [i_0])));
                        }
                    }
                }
            }
            var_40 = var_5;
        }
    }
    #pragma endscop
}

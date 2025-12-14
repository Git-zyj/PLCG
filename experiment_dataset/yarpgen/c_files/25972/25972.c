/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = max(3890114255, ((((max(var_0, var_1))) ? ((var_7 ? var_0 : 18446744073709551615)) : var_11)));
    var_21 = (var_17 * var_18);
    var_22 |= var_7;

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_6 [1] = (((arr_2 [i_0 + 1]) | 0));
            arr_7 [i_0] &= (((arr_3 [i_0 + 1] [i_0 - 4]) * (arr_3 [i_0 - 1] [i_0 - 4])));
            arr_8 [7] &= (((arr_2 [i_1]) ? (arr_2 [i_1]) : (arr_2 [i_0 + 2])));

            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                arr_12 [i_0] = 2927288902;
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 13;i_4 += 1)
                    {
                        {
                            arr_17 [i_0] [i_4] = (((((arr_14 [i_4] [i_3] [i_0 - 2] [i_0 - 2]) & (arr_4 [i_0]))) - (arr_2 [i_2 + 1])));
                            arr_18 [i_0] [i_0] [i_4] [i_4] [i_4] = (((arr_3 [i_4 - 2] [i_4 - 2]) ? (arr_14 [i_0] [i_2 + 1] [i_2] [i_4 - 2]) : var_15));
                        }
                    }
                }
                var_23 = (max(var_23, (175 - 1367678394)));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 0;i_6 += 1)
                    {
                        {
                            arr_24 [1] [i_1] [i_2] [i_5 + 2] [i_6] = ((!(arr_23 [i_6] [i_6] [i_6 + 1] [i_6] [1])));
                            var_24 = (min(var_24, (arr_19 [i_0] [i_0])));
                            var_25 = (min(var_25, ((((arr_11 [i_0 - 4] [i_1] [i_2 + 1]) ? (arr_11 [i_6 + 1] [i_1] [i_0 - 3]) : (arr_11 [i_0 + 2] [i_0] [i_0 + 2]))))));
                            var_26 = 1;
                            var_27 = (((171 * 0) ? (arr_14 [i_0] [9] [i_0 - 2] [i_0]) : (64 != 6094290356053928822)));
                        }
                    }
                }
            }
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                var_28 = ((!(arr_20 [i_0 - 1] [12])));
                arr_29 [i_1] [i_1] [i_1] [i_0] = (~0);

                for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
                {
                    arr_32 [i_0] [i_1] [i_7] = (((arr_11 [i_0 - 4] [i_0 - 4] [i_0 + 2]) ? (arr_11 [i_0 - 3] [i_0 - 3] [i_0 + 2]) : (arr_21 [i_0 + 2])));
                    var_29 = (6993794913461247696 != 64);
                    arr_33 [i_0] [i_1] [i_7] [i_8] [i_7] [i_8] = (((arr_13 [i_0] [i_0] [i_7] [i_8]) << (11452949160248303920 - 11452949160248303893)));
                }
                for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
                {
                    var_30 *= 1247572471;

                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        var_31 = (((arr_10 [i_0 + 2] [i_0 - 4]) && (arr_3 [i_1] [i_0 + 2])));
                        arr_38 [i_0] [13] [i_7] [13] [13] [i_10] = var_8;
                    }
                }
            }
        }
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 14;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 14;i_13 += 1)
                {
                    {
                        var_32 = ((!(arr_36 [i_0 - 3] [i_0 - 3] [i_12] [i_13] [i_13])));
                        var_33 = (min((arr_22 [i_0 + 2] [i_0 - 4]), (((arr_22 [i_0 - 4] [i_0 + 2]) / (arr_22 [i_0 - 1] [i_0 + 2])))));
                        arr_47 [i_0] [6] [1] = (arr_4 [i_0]);
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_14 = 1; i_14 < 10;i_14 += 1)
            {
                for (int i_15 = 2; i_15 < 11;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        {
                            var_34 = ((var_6 % ((max((arr_21 [i_0 - 3]), 1)))));
                            var_35 += 232;
                            arr_57 [i_16] [i_11] [i_11] [i_11] [i_11] [i_11] = (min((((arr_39 [i_14 + 3] [i_0 + 2]) ? 1 : var_5)), ((min(var_18, (arr_28 [i_0] [i_11] [i_16]))))));
                            arr_58 [i_0 - 2] [i_11] [i_16] [i_15] [i_16] [i_14] [8] = ((min((arr_28 [i_0 - 1] [i_0 - 3] [i_15 + 2]), (min(1, 223)))));
                            arr_59 [i_16] [i_16] [i_16] = (~156943559);
                        }
                    }
                }
            }
        }
        arr_60 [i_0] = (max(79, 13));
        arr_61 [i_0] = ((((var_1 * (arr_45 [i_0 + 1] [i_0 + 1] [i_0] [i_0])))) ? ((((min((arr_44 [i_0 - 3]), (arr_10 [i_0 + 2] [i_0])))) * (arr_16 [3] [i_0 - 2] [i_0 - 4] [i_0 - 2] [i_0 - 4]))) : (((63 / var_11) ? (arr_22 [i_0] [i_0]) : ((var_16 ? var_11 : (arr_5 [i_0] [i_0] [i_0]))))));
    }
    #pragma endscop
}

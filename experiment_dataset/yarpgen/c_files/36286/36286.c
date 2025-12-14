/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_2] [i_1] = min((arr_0 [i_1 + 1] [i_3 + 1]), (arr_11 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_3 - 1]));
                                var_15 *= arr_3 [i_0] [i_1] [1];
                            }
                        }
                    }
                    var_16 *= min(var_4, (0 > 22469));
                }
                for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 24;i_7 += 1)
                        {
                            {
                                var_17 = arr_8 [i_1] [i_1];
                                var_18 *= 22457;
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        var_19 |= (((arr_11 [i_1] [i_1] [i_1] [i_1 + 1] [i_1] [8] [i_5]) ? (arr_4 [i_0] [i_1 - 1] [i_0] [i_1 - 1]) : var_6));
                        var_20 = (max(var_20, (51603 / var_6)));
                        arr_25 [i_0] [i_1] [7] [i_1] [i_5] [i_8] = ((-var_14 ? 65024 : (arr_9 [14] [14] [14] [i_1 + 1])));

                        for (int i_9 = 2; i_9 < 23;i_9 += 1)
                        {
                            var_21 *= ((0 ? 22464 : 29525));
                            var_22 = (min(var_22, -var_8));
                            var_23 += (arr_18 [i_0] [22] [i_0] [22] [17] [i_9]);
                        }
                        arr_29 [i_1] [i_0] [i_8] [i_8] &= (((arr_7 [i_8] [i_1 - 1] [i_1 - 1] [i_8]) ? 43059 : 12));
                    }
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        var_24 = ((!((((min((arr_30 [i_0] [i_0] [i_5] [4]), 62139))) || (var_4 % var_13)))));
                        var_25 = 62139;
                        var_26 += (((arr_24 [i_0] [i_0] [i_5]) + (((arr_12 [i_0] [i_1] [20] [12] [i_0] [i_0] [i_0]) ? (42193 & var_1) : var_0))));
                        var_27 -= ((((var_5 ? var_3 : 24)) == (((arr_27 [i_0] [i_1] [i_5] [7] [i_0] [i_1] [i_1]) ? (arr_27 [i_0] [i_0] [1] [i_0] [i_5] [i_5] [18]) : (arr_27 [i_0] [i_0] [i_1] [i_0] [i_0] [i_10] [i_10])))));
                    }
                }
                for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
                {
                    var_28 = ((~(((arr_6 [i_1 - 1] [i_1 - 1]) / (var_3 | 29505)))));
                    var_29 ^= ((+((((arr_9 [i_11] [19] [i_0] [i_0]) == var_12)))));
                }
                var_30 += 27073;
                var_31 = (max(var_31, ((min(((51045 ? 4699 : (!128))), 32825)))));
                /* LoopNest 2 */
                for (int i_12 = 2; i_12 < 23;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {
                        {
                            arr_40 [i_1] [i_12 + 2] = ((((38463 > (arr_31 [i_12] [i_1] [i_1] [i_0]))) ? (((34797 >= (arr_31 [i_1 + 1] [i_1] [i_1] [i_0])))) : (arr_28 [i_12 + 1] [i_1] [7] [i_1 - 1] [i_1] [i_1])));
                            arr_41 [i_13] [i_13] [i_13] [i_13] [i_1] [i_1] = ((((((min(12696, var_2))) ? 44286 : ((min(65524, (arr_28 [i_0] [i_0] [i_0] [i_1] [i_1] [i_13])))))) + ((var_5 ? ((27073 ? 448 : (arr_5 [15] [i_1]))) : ((((arr_17 [i_0] [i_0] [6] [11]) > var_8)))))));
                            arr_42 [i_0] [14] [i_1] [i_13] = (((arr_22 [i_1] [23] [i_1] [i_1 - 1] [0]) | (((arr_22 [i_1] [i_1] [i_1] [i_1 - 1] [i_1]) ? (arr_4 [i_12 + 2] [2] [9] [i_12 + 2]) : (arr_4 [i_12 - 2] [i_13] [i_13] [i_13])))));
                            var_32 ^= min(54624, (max(65532, (min((arr_17 [i_0] [4] [4] [i_13]), 22469)))));
                        }
                    }
                }
            }
        }
    }
    var_33 = ((var_6 < (((var_8 % var_11) ? ((14329 ? var_2 : 14)) : var_4))));
    var_34 = var_8;
    #pragma endscop
}

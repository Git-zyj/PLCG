/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        var_20 = (min(var_20, 1));
                        var_21 = (min(var_21, ((((arr_5 [i_3 + 1] [i_3 + 1]) << (var_11 + 49))))));

                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            arr_11 [i_0] [i_2] [i_0] [i_3 - 1] [i_4 + 3] = (((((arr_4 [i_0 - 2]) + 2147483647)) >> (((arr_0 [i_2]) + 53))));
                            var_22 = (((arr_2 [i_2]) << 1));
                            var_23 -= ((~(arr_2 [i_0])));
                        }
                        for (int i_5 = 2; i_5 < 13;i_5 += 1)
                        {
                            var_24 = (((arr_0 [i_3 - 1]) / (arr_0 [i_3 - 1])));
                            var_25 = (min(var_25, var_3));
                        }
                    }

                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        arr_17 [i_2] [i_1] [1] [i_1] [i_2] = (1 <= 63);
                        var_26 = (max(var_26, (max(1, 1))));
                        var_27 ^= (((arr_0 [i_0 - 2]) ? (arr_0 [i_0 - 2]) : (arr_0 [i_0 - 2])));
                        var_28 = ((((max(var_16, (arr_3 [2] [11])))) >> 1));
                    }

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        arr_22 [i_2] [9] [i_1] [i_2] = ((arr_5 [i_0] [i_0 - 4]) >= -1);
                        var_29 = (arr_1 [i_0 - 4]);
                    }
                    for (int i_8 = 3; i_8 < 13;i_8 += 1)
                    {
                        var_30 = 8;
                        arr_25 [i_2] = (arr_1 [i_0 - 2]);
                        arr_26 [i_2] = (~1);
                    }
                    for (int i_9 = 1; i_9 < 13;i_9 += 1)
                    {
                        arr_30 [i_0] [i_1] [i_1] [i_2] = (((((var_6 ? (((((arr_23 [i_0] [i_1] [i_1] [i_0] [1]) || -80)))) : ((var_5 ? (arr_2 [i_0]) : var_3))))) ? (((min(1, 1)))) : (((~1) ? var_3 : (arr_6 [i_0])))));

                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            var_31 = ((1 ? -30 : 1));
                            var_32 = (arr_12 [6] [i_1] [i_1] [14] [1] [i_10]);
                            var_33 = arr_0 [10];
                        }
                        for (int i_11 = 3; i_11 < 12;i_11 += 1)
                        {
                            arr_36 [i_0 + 2] [5] [i_0] [i_2] [i_0 + 2] [i_0 - 2] = (((arr_27 [i_0] [i_0] [i_11 - 2] [i_2]) ? var_8 : (arr_27 [i_1] [i_1] [i_11 - 3] [i_2])));
                            var_34 = (((((arr_5 [i_0 + 1] [i_0]) || (arr_5 [i_0] [i_1]))) ? ((-5 ? (-127 - 1) : -125)) : ((((((arr_9 [i_0] [i_0] [i_2] [i_9] [i_11 + 3] [i_0]) ? 1 : var_8))) ? ((-19 / (arr_0 [i_1]))) : (arr_15 [i_0] [1] [i_2] [i_9 + 2] [i_9 + 2])))));
                            var_35 = (((min(var_1, ((1 ? 1 : var_12)))) ^ (((arr_31 [i_0 - 2] [i_9 - 1] [i_0 - 2] [i_9] [i_11 - 3]) ? ((min(1, (arr_3 [i_0] [8])))) : ((max((arr_10 [0] [0] [0] [1] [i_11]), var_1)))))));
                            var_36 = var_3;
                            var_37 = ((!(arr_3 [i_0 - 2] [i_0 - 3])));
                        }

                        for (int i_12 = 3; i_12 < 12;i_12 += 1)
                        {
                            arr_40 [i_0] [i_1] [i_1] [i_2] [i_9] [4] = (min(((-(arr_38 [i_9] [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9]))), ((((arr_13 [i_0] [i_1] [i_2] [i_2] [i_0] [i_9] [i_2]) ? (arr_7 [i_0] [i_0] [i_0] [i_2] [i_2] [i_12 - 2]) : ((1 ? 81 : 120)))))));
                            arr_41 [i_12 - 3] [1] [i_12] [i_12] [i_12] [i_2] [i_12 - 3] = (min((var_9 > var_9), (79 * 93)));
                            arr_42 [i_0] [i_2] [i_2] [i_2] = (((((arr_4 [i_9 + 2]) ? (arr_4 [i_9 + 2]) : (arr_4 [i_9 + 2]))) != -1));
                        }
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            arr_45 [i_2] = (((-42 ? -6 : 0)));
                            arr_46 [i_0] [i_1] [i_2] [i_9] [i_0] = ((268111036 * (arr_15 [i_0] [i_0] [i_2] [i_0] [13])));
                            var_38 = (-10 | 48);
                        }
                    }
                }
            }
        }
    }
    var_39 = (!-var_7);
    var_40 = ((var_15 ? 1 : var_1));
    /* LoopNest 2 */
    for (int i_14 = 2; i_14 < 15;i_14 += 1)
    {
        for (int i_15 = 2; i_15 < 14;i_15 += 1)
        {
            {
                var_41 = var_2;
                var_42 = (min(var_42, ((((arr_49 [i_15 - 2]) / (((arr_49 [i_15 + 2]) + (arr_49 [i_15 + 2]))))))));
                arr_52 [i_15] [i_15] &= arr_48 [i_15];
            }
        }
    }
    var_43 = var_10;
    #pragma endscop
}

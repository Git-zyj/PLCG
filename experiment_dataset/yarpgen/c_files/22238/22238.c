/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, ((max(var_11, var_5)))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] = ((((((arr_7 [i_2]) >> (var_4 - 4149059158)))) ? 109 : (max((arr_7 [i_0]), var_8))));
                    arr_9 [i_0] [i_1] = max(27, (((arr_7 [i_0]) - (arr_7 [i_1]))));
                    var_13 = ((((max(var_1, (arr_2 [i_0])))) ? ((45 ? (var_0 | 1650722700) : 206)) : var_1));

                    for (int i_3 = 2; i_3 < 7;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
                        {
                            var_14 ^= (((((max((arr_3 [i_0]), 50)) == (arr_6 [i_3] [i_2] [i_1] [10]))) ? (max((arr_2 [i_0]), 42553)) : (arr_12 [i_0] [i_2] [0] [i_4])));
                            var_15 = (max(var_15, (arr_10 [i_0] [i_1] [i_2] [i_3])));
                        }
                        for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                        {
                            arr_19 [i_0] [i_1] [i_1] [i_2] [i_5] [i_3] [i_5] = (((arr_16 [i_5]) / (max((((arr_5 [i_0] [i_0] [4]) | (arr_13 [i_0] [i_0] [i_2] [6] [5]))), (arr_3 [i_3 + 3])))));
                            var_16 = var_1;
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                        {
                            var_17 = (((arr_4 [i_3 + 3] [i_3 + 2]) ? (arr_0 [i_3 + 2]) : (((var_7 == (arr_16 [i_6]))))));
                            var_18 = (max(var_18, ((((arr_5 [i_0] [4] [i_2]) * (arr_5 [i_0] [i_0] [3]))))));
                            arr_22 [i_6] [i_3] [i_2] [i_6] = arr_20 [i_6] [i_3] [i_2] [i_1] [i_0];
                            var_19 = arr_18 [i_0] [9] [i_2] [3] [i_3];
                            var_20 = ((arr_4 [10] [i_3 - 2]) * (arr_14 [i_3] [i_1] [i_2] [i_3 + 4] [i_6]));
                        }
                        var_21 = (((arr_2 [i_1]) ? ((((((arr_17 [10] [i_1] [i_2] [6] [i_2]) / (arr_3 [i_0])))) ? (252 > var_11) : (arr_6 [i_0] [i_1] [i_2] [i_3]))) : 3));
                        var_22 = (((((arr_10 [i_0] [i_0] [i_0] [i_0]) == var_5)) ? (max(((max((arr_11 [i_0] [i_1] [i_0] [i_3]), (arr_7 [i_2])))), (((arr_17 [i_0] [i_1] [i_1] [i_2] [1]) | var_3)))) : (((211 ^ (arr_11 [i_3 + 4] [i_3] [i_3 + 2] [i_3 + 1]))))));
                        var_23 = (((((var_3 ^ (arr_1 [i_3 + 2])))) ? 4 : (arr_1 [i_3 + 3])));

                        for (int i_7 = 2; i_7 < 8;i_7 += 1) /* same iter space */
                        {
                            arr_25 [i_0] [i_0] [i_7] [i_0] [i_0] [i_0] [10] = (((211 > 233) * (arr_13 [i_3 + 1] [i_7 + 2] [i_7 + 1] [i_7 + 1] [i_7 + 3])));
                            var_24 |= 252;
                            var_25 += (arr_5 [i_3] [i_3] [i_3]);
                            var_26 = (arr_21 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]);
                        }
                        for (int i_8 = 2; i_8 < 8;i_8 += 1) /* same iter space */
                        {
                            var_27 += ((-(arr_23 [i_3 + 4] [i_3] [i_2] [2] [i_0] [i_8 + 3])));
                            var_28 += (((47 && 142) == ((max(81, var_0)))));
                        }
                    }
                }
            }
        }
        var_29 = (max((197 ^ -116), (((arr_14 [i_0] [i_0] [1] [i_0] [i_0]) + (arr_16 [i_0])))));
        var_30 ^= ((-(((arr_18 [i_0] [1] [i_0] [i_0] [i_0]) * (((arr_15 [i_0] [i_0]) ? (arr_15 [2] [i_0]) : var_2))))));
        arr_28 [2] [9] = 62;
    }
    for (int i_9 = 3; i_9 < 8;i_9 += 1) /* same iter space */
    {
        var_31 = (max(var_31, var_1));

        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            var_32 = max((arr_27 [i_9 + 1] [i_9 - 2]), (arr_6 [i_9] [i_9 - 2] [i_10] [7]));
            var_33 *= (max((arr_27 [i_9] [i_10]), (max((arr_27 [i_9 - 2] [i_10]), (arr_27 [i_9 + 2] [i_10])))));
        }
    }
    /* vectorizable */
    for (int i_11 = 3; i_11 < 8;i_11 += 1) /* same iter space */
    {
        arr_37 [i_11] [i_11] = (((arr_30 [i_11 + 1]) ? var_4 : (arr_30 [i_11 + 2])));
        var_34 = (min(var_34, (((255 ? (arr_27 [i_11 - 2] [i_11]) : (((arr_17 [i_11] [i_11] [i_11 - 3] [i_11] [i_11]) ? 659623944 : var_11)))))));
    }
    var_35 += var_8;
    #pragma endscop
}

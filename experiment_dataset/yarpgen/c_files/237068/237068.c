/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237068
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_5 [i_0 - 1] [i_1] [i_0] = (max((min((arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1]), (arr_4 [i_0] [i_0 - 1] [i_0 - 1]))), (arr_3 [i_1])));

            for (int i_2 = 4; i_2 < 13;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        {
                            var_10 *= 31;
                            var_11 = var_6;
                        }
                    }
                }
                var_12 -= ((0 ? (arr_1 [i_0]) : 252));
            }
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    {
                        arr_17 [i_0] = 7;
                        var_13 = (min(var_13, ((max((((arr_13 [i_0 - 1] [i_0]) ^ (arr_14 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0]))), (arr_14 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))))));
                        var_14 *= ((-(((arr_2 [i_1] [i_0 - 1]) - var_2))));
                        var_15 = (var_8 || ((var_0 && (arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0]))));
                    }
                }
            }

            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                var_16 = arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1];
                var_17 = (((arr_1 [i_0]) ? 2147483640 : (((arr_18 [i_0 - 1] [i_0 - 1]) * 255))));
            }
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    {
                        arr_25 [i_0] [i_8] [i_1] [i_1] [i_0] = ((((((arr_11 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1]) ? ((-(arr_8 [i_0 - 1] [i_1] [i_8] [i_8] [i_8]))) : var_8))) ? (((-var_8 ? (arr_24 [i_0] [i_1] [i_0]) : (var_3 >= 255)))) : 2984497591));
                        var_18 = (arr_13 [i_1] [i_9]);
                    }
                }
            }
        }
        var_19 = 35;
        var_20 = (min(255, var_6));
    }
    /* vectorizable */
    for (int i_10 = 1; i_10 < 1;i_10 += 1) /* same iter space */
    {
        var_21 = (max(var_21, ((((arr_27 [i_10 - 1]) ? 14680064 : var_0)))));
        var_22 = 1193279456;
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            for (int i_12 = 3; i_12 < 15;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 16;i_13 += 1)
                {
                    {
                        var_23 = (((((-(arr_3 [i_11])))) ? (arr_2 [i_10 - 1] [i_12 - 1]) : var_0));
                        arr_37 [i_11] [i_11] = ((-705 ^ (((arr_12 [i_10] [i_11] [i_12]) ? (arr_3 [4]) : (arr_11 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10 - 1] [i_10])))));
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_14 = 0; i_14 < 11;i_14 += 1)
    {
        var_24 = (arr_4 [0] [i_14] [0]);
        var_25 *= (arr_9 [i_14] [i_14] [i_14] [0] [i_14]);
        var_26 = (((arr_7 [i_14]) ? (arr_20 [i_14] [i_14] [i_14] [i_14]) : -3764018607926527624));
    }
    for (int i_15 = 2; i_15 < 19;i_15 += 1)
    {
        arr_44 [i_15] = var_1;
        var_27 = ((!(arr_41 [i_15])));
        var_28 = ((~(arr_42 [i_15 - 1])));
        arr_45 [i_15] = ((~(arr_42 [i_15 + 3])));
    }
    var_29 = (max(var_29, var_9));
    var_30 = min(var_2, var_8);
    #pragma endscop
}

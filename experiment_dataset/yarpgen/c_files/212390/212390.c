/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_14 = 1132304570813431364;
        var_15 = (((arr_0 [i_0] [6]) * (arr_0 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 14;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 12;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_13 [i_1] [i_2] [i_3] [i_4 + 1] [1] = 17314439502896120274;
                            arr_14 [i_2] [i_2] [13] [i_4] [i_5] = ((var_12 ? (((arr_9 [i_1] [i_1] [i_3] [i_4] [i_5]) ? 17314439502896120250 : var_13)) : (arr_4 [i_1 + 1] [10] [1])));
                            var_16 = (1 < var_5);
                            var_17 = (min(var_17, (((~(!1))))));
                        }
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            var_18 = ((arr_5 [i_1 + 2] [i_1 + 2]) ? (arr_5 [i_1 - 2] [i_1 - 3]) : 15277258397975291567);
                            var_19 = ((arr_8 [13] [i_4 - 2] [i_4 - 2] [i_1 - 2]) ? var_5 : (arr_8 [i_4 + 1] [i_1 - 2] [i_4 + 1] [i_1 - 2]));
                            var_20 += (((arr_6 [i_1 + 2]) & var_3));
                        }
                        arr_18 [i_2] [i_2] [1] = 3169485675734260049;
                        var_21 = (max(var_21, ((((var_8 * var_9) >> (var_8 - 10433362397953344878))))));
                    }
                }
            }
        }

        for (int i_7 = 3; i_7 < 15;i_7 += 1) /* same iter space */
        {
            var_22 = (((arr_4 [i_1 - 2] [i_1 - 2] [i_7 - 1]) ? var_7 : ((var_2 & (arr_11 [i_7] [i_1] [i_1])))));
            var_23 = ((var_11 ? var_13 : (arr_2 [i_7 + 1])));
        }
        for (int i_8 = 3; i_8 < 15;i_8 += 1) /* same iter space */
        {
            var_24 = (max(var_24, (((!1) ? 0 : (arr_16 [i_1] [i_1] [i_1] [i_1] [i_1])))));
            arr_23 [i_1 - 3] [i_1 - 3] [i_8] = (((arr_12 [i_1 - 1] [i_1 - 1] [i_1 - 1] [1] [i_1 - 1] [i_8 + 1] [i_8]) ? var_7 : var_4));
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            var_25 = (arr_10 [i_1 + 2]);
            var_26 = ((arr_22 [i_1 - 3]) ? (~1685869799829544146) : 0);
            var_27 = (((((!(arr_8 [i_1 - 2] [i_9] [1] [i_9])))) << (var_8 - 10433362397953344863)));
            var_28 = (max(var_28, var_10));
            var_29 = (0 >= 1);
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            arr_30 [i_1] = var_3;
            var_30 = (((arr_22 [i_1 + 1]) ? (var_2 || 1) : (arr_15 [i_1 + 2] [i_1 - 1])));
            arr_31 [i_1] [i_10] [i_1] = ((0 ? 1 : (arr_20 [i_1] [i_1] [i_10])));
            arr_32 [1] [i_10] [i_10] = (arr_27 [i_1 - 2]);
        }
        var_31 |= var_9;
    }
    var_32 = (min(var_32, (var_5 | 12594349914696075572)));
    var_33 = (((var_10 ^ var_2) | var_3));
    #pragma endscop
}

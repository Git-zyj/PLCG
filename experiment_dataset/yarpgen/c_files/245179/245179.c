/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        var_19 = (min(var_19, (((~(arr_1 [i_0] [i_0]))))));
        var_20 -= (max(var_3, (88 || var_3)));
        arr_2 [i_0] = var_0;
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    {
                        arr_13 [i_2] [i_2] [6] = (arr_1 [i_1] [i_1]);
                        var_21 = ((var_16 ? (min((var_4 / var_7), -32757)) : 251));
                        arr_14 [i_2] [i_2] = (arr_8 [i_2] [i_3] [i_2]);
                    }
                }
            }
        }
        var_22 = (((!var_8) ? ((min((arr_8 [i_1] [i_1] [i_1]), 114))) : ((min((arr_8 [i_1] [i_1] [2]), (arr_5 [0] [i_1] [0]))))));
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
    {
        arr_17 [i_5] |= (max(4064, ((max((min(114, (arr_5 [i_5] [i_5] [i_5]))), 0)))));
        var_23 |= 179;
    }
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 13;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 10;i_7 += 1)
        {
            {
                var_24 = ((((!0) >> (179 - 170))));
                arr_24 [11] = max(((-28270 ? (arr_7 [i_7 + 2]) : var_12)), var_15);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 3; i_8 < 21;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            {
                arr_30 [i_8] [i_8] = (max(var_11, -59867));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    for (int i_11 = 3; i_11 < 19;i_11 += 1)
                    {
                        {
                            arr_37 [i_10] [i_11] |= ((var_11 ? (((arr_36 [4] [i_9] [i_8] [1] [i_9] [i_8]) ? 0 : 32761)) : var_16));
                            var_25 = (min(var_25, (((((((-(((arr_32 [i_10]) ? 30791 : 32761)))) + 2147483647)) >> ((((max(var_8, (arr_29 [i_8] [i_9] [i_11 - 1])))) - 5857)))))));
                            var_26 = ((-var_3 < (!var_9)));
                        }
                    }
                }
                var_27 = (min(var_27, ((((((!(arr_15 [i_8 - 2] [i_9])))) * (((((arr_31 [i_8] [i_8] [i_9] [i_9]) && 0)))))))));
                var_28 = ((!(arr_1 [0] [i_8])));
            }
        }
    }
    #pragma endscop
}

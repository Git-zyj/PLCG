/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((214 ? 25 : 18))) / var_16));
    var_18 = var_4;
    var_19 = (max(var_19, var_4));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (~var_6);
        var_20 = (((var_9 - var_9) ? ((var_11 ? var_7 : var_8)) : ((200 ? var_7 : 234))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    arr_7 [i_0] [4] [i_0] = var_13;
                    var_21 ^= ((var_9 ? var_6 : var_13));
                    arr_8 [11] [i_0] [i_2 + 3] [i_0] = var_11;
                }
            }
        }

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            arr_12 [i_3] [i_3] [i_3] = ((var_4 ^ (var_9 == var_4)));
            var_22 = ((var_8 ? var_5 : var_6));
        }
        for (int i_4 = 1; i_4 < 13;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 10;i_6 += 1)
                {
                    {
                        arr_19 [i_0 - 1] [8] [i_5] [i_5] [i_5] [i_5] = ((var_5 ? (var_6 || var_2) : ((var_15 ? var_0 : var_9))));
                        var_23 = ((var_15 ? var_7 : ((var_2 ? var_10 : var_4))));
                    }
                }
            }
            arr_20 [i_4 - 1] |= (var_2 <= var_9);
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 13;i_9 += 1)
                    {
                        {
                            arr_28 [i_9] [i_8] [i_7] [i_8] [2] = var_5;
                            arr_29 [i_0] [i_9] [i_0] [i_8] [13] [i_0] [i_0] = ((((var_9 ? var_14 : var_4))) ? (var_10 && var_14) : (var_9 * var_8));
                        }
                    }
                }
            }
            var_24 = (min(var_24, (var_8 || var_6)));
        }
    }
    for (int i_10 = 0; i_10 < 15;i_10 += 1)
    {
        arr_33 [i_10] = ((!((((var_13 & var_7) + (var_9 > var_6))))));
        arr_34 [i_10] = (((((var_1 ? ((var_13 ? var_5 : var_1)) : var_14))) > ((-(max(var_8, var_12))))));
    }
    for (int i_11 = 0; i_11 < 22;i_11 += 1)
    {
        var_25 = var_4;
        arr_39 [i_11] [i_11] = 46;
    }
    for (int i_12 = 1; i_12 < 16;i_12 += 1)
    {
        var_26 = (max(var_26, (((((~(var_0 + var_7))) >= var_11)))));
        arr_42 [9] [i_12 - 1] = var_1;
        arr_43 [i_12] = var_1;
        var_27 = (min((min((((var_12 ? var_16 : var_3))), ((var_7 >> (var_8 - 682593255))))), ((((min(var_6, var_1))) ? var_16 : (max(var_7, var_4))))));
    }
    #pragma endscop
}

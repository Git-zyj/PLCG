/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= ((var_0 ? var_4 : var_15));
    var_20 = var_4;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_2 [7] = (arr_1 [i_0]);
        arr_3 [i_0] [i_0] = var_12;
        arr_4 [11] = (arr_0 [i_0 + 1] [i_0 + 1]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_21 = ((var_13 ? (arr_0 [i_1] [i_1]) : (arr_0 [i_2] [i_1])));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    {
                        var_22 = (arr_13 [i_1] [i_1] [i_4]);
                        var_23 -= (((((var_1 ? var_12 : (arr_10 [i_2])))) ? (arr_6 [11] [i_4]) : ((var_18 ? (arr_1 [i_2]) : (arr_13 [i_1] [i_3] [i_4])))));
                        var_24 = var_4;
                        arr_14 [i_1] [15] [i_1] = (((arr_0 [i_3] [i_1]) ? (arr_13 [i_1] [i_2] [15]) : var_12));
                    }
                }
            }
            arr_15 [0] [10] [i_1] = var_7;
        }
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            var_25 -= var_15;
            arr_19 [i_5] [i_1] [i_5] = (((arr_18 [i_5]) ? (arr_18 [i_5]) : (arr_18 [i_5])));
            var_26 = (arr_1 [i_1]);
        }
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            var_27 = var_7;
            arr_22 [i_1] [i_6] [i_6] = (arr_21 [i_1] [i_6] [i_6]);
        }
        arr_23 [i_1] = ((var_7 ? (arr_9 [i_1] [4] [i_1] [i_1]) : (arr_16 [i_1] [i_1] [4])));
        arr_24 [i_1] = arr_13 [1] [i_1] [1];
        var_28 = var_12;
    }
    for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 13;i_9 += 1)
            {
                {
                    arr_35 [i_7] [i_7] [9] [6] = (((arr_27 [i_9] [i_7]) ? var_8 : (arr_28 [5] [5])));
                    var_29 = var_11;
                    arr_36 [i_7] [i_8] [i_9] = (((arr_34 [i_9 + 1]) ? var_9 : (((((var_2 ? var_0 : var_10))) ? var_10 : (arr_11 [i_9] [i_9] [i_9] [i_9] [i_9 - 1] [i_9 - 1])))));
                }
            }
        }
        var_30 = var_1;
        var_31 *= (arr_30 [i_7] [9]);
        var_32 = ((var_11 ? (arr_10 [3]) : ((var_4 ? (arr_26 [i_7] [i_7]) : (arr_8 [i_7])))));
    }
    for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            for (int i_12 = 3; i_12 < 14;i_12 += 1)
            {
                for (int i_13 = 3; i_13 < 13;i_13 += 1)
                {
                    {
                        var_33 = var_6;
                        var_34 = (arr_5 [10]);
                    }
                }
            }
        }
        var_35 = (arr_1 [i_10]);
    }
    var_36 = var_11;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((var_8 ? (arr_0 [i_0] [8]) : var_7)));
        var_18 &= ((0 ? (arr_2 [i_0 + 3]) : (((arr_1 [i_0]) ? var_12 : var_0))));
        var_19 = ((!(arr_2 [i_0])));
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        var_20 = min(var_11, ((~(arr_1 [i_1 + 1]))));
        arr_6 [i_1] [i_1] = (!-var_7);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_21 = (!1);
                    var_22 = (max(var_22, ((((max((arr_7 [i_1 - 2] [i_1 + 2]), var_5)) + var_6)))));
                    var_23 = -var_13;
                }
            }
        }
        var_24 = -561775172993698617;
    }
    for (int i_4 = 1; i_4 < 9;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                {
                    arr_20 [i_4] = (((var_17 || var_16) || ((min(((var_13 ? var_4 : var_17)), var_9)))));
                    arr_21 [0] [i_5] [i_4] = (0 & -561775172993698634);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 8;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                {
                    arr_28 [i_8] [i_7] [i_8] = var_4;
                    arr_29 [8] [i_7] [i_4] = (-var_2 ? ((-(min(var_1, var_3)))) : 6693510656116493495);
                    arr_30 [i_4] [i_7] = (1909949554 || 11301791636317722392);
                    arr_31 [i_8] [i_7] [i_7] [i_4] = (!(arr_0 [i_7 - 1] [i_7 + 1]));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 4; i_10 < 9;i_10 += 1)
            {
                {
                    arr_37 [i_4] [1] = var_10;
                    var_25 = (max(var_25, (max(((~((var_15 ? var_0 : var_5)))), (((-561775172993698654 ? 1 : 0)))))));

                    for (int i_11 = 1; i_11 < 8;i_11 += 1)
                    {
                        var_26 ^= (((((((min(var_3, (arr_11 [i_9] [i_9])))) ? ((var_5 ? var_15 : var_9)) : var_0))) ? 4722164596350533900 : var_0));
                        var_27 = (min(var_27, ((((!((!(arr_5 [i_4] [i_4])))))))));
                    }
                }
            }
        }
    }
    var_28 = ((min(var_2, ((var_4 ? var_5 : var_11)))));
    var_29 = (max(var_9, var_10));
    #pragma endscop
}

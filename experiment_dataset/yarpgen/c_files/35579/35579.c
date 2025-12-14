/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_13;
    var_19 += (min(((~((69 ? var_6 : 32767)))), var_2));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_20 = (arr_0 [i_0]);
                                var_21 = (arr_3 [i_0] [i_1]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 8;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_22 = 32767;
                                arr_18 [i_1] [i_1] [i_6] = (201 ? -32767 : (arr_12 [i_0 + 1] [i_0 - 3] [i_1] [i_5 - 1]));
                            }
                        }
                    }
                }
            }
        }
        arr_19 [4] = (((((var_5 ? 66977792 : (arr_5 [i_0] [i_0] [4] [i_0])))) ? (((arr_13 [i_0] [i_0] [i_0]) ? (arr_16 [i_0] [9] [i_0 - 1] [i_0]) : var_6)) : -249));
    }
    /* vectorizable */
    for (int i_7 = 3; i_7 < 22;i_7 += 1)
    {
        /* LoopNest 3 */
        for (int i_8 = 1; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    {
                        arr_32 [i_7] [i_7] = ((((((arr_21 [i_7] [i_7]) ? 32767 : var_7))) ? -var_6 : -55));
                        var_23 = ((((((arr_23 [i_7]) ? var_7 : (arr_29 [i_7] [7] [i_9] [7])))) ? (((arr_29 [i_10] [i_9] [i_7 - 2] [i_7 - 2]) ? var_2 : (arr_29 [i_8] [i_8] [i_9] [i_10]))) : ((201 ? var_9 : (arr_26 [i_7] [i_7] [i_10])))));
                        arr_33 [i_7] = (((arr_23 [i_10]) ? ((var_1 ? -9069 : var_0)) : (((55 ? 4294967295 : var_3)))));
                        arr_34 [20] [1] [i_7] [i_7] [i_7] [i_7] = (~1);
                        arr_35 [i_7] [i_8] [i_7] [i_7] = (185 > var_12);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 24;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                {
                    var_24 = (max(var_24, var_10));
                    arr_40 [i_7 - 1] [i_7] [1] [i_12] = var_7;
                }
            }
        }
        var_25 = 0;
        var_26 = (max(var_26, var_5));
    }
    /* vectorizable */
    for (int i_13 = 1; i_13 < 10;i_13 += 1)
    {
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 12;i_14 += 1)
        {
            for (int i_15 = 2; i_15 < 10;i_15 += 1)
            {
                for (int i_16 = 1; i_16 < 11;i_16 += 1)
                {
                    {
                        var_27 -= (((!-99) ? var_11 : -var_15));
                        var_28 = (arr_43 [i_13] [1]);
                        arr_56 [i_13] [i_13] [i_15] [i_13] = var_15;
                    }
                }
            }
        }
        var_29 = (min(var_29, (((!(arr_41 [i_13 - 1] [i_13]))))));
    }
    #pragma endscop
}

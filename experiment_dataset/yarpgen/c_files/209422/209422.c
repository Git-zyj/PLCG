/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_13;
    var_16 = (((((min(var_10, var_5)) ? var_13 : var_10))));
    var_17 = ((-var_10 % var_14) ? (((((((-1899760228 ? 1 : 1))) && (((var_8 ? var_9 : var_7))))))) : (((!var_6) ? var_7 : (((var_2 ? var_3 : var_3))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (-((((min(var_13, var_8))) ? (1 | 969491747) : var_7)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] [i_2] = (var_9 ? (((((var_8 ? var_8 : var_4))) / ((var_5 ? var_11 : var_12)))) : ((min(var_12, var_0))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_2] [1] = (((-(var_0 && var_6))) < ((((!var_8) > ((var_8 ? var_6 : var_3))))));
                                arr_15 [i_0] [0] [i_0] [i_0] [i_0] [i_0] [i_2] = var_9;
                                arr_16 [i_0] [i_1] [i_1] [i_1] [i_4] |= ((var_4 ? ((var_7 / (var_1 >= var_0))) : var_6));
                            }
                        }
                    }
                }
            }
        }
        arr_17 [5] = var_7;
        arr_18 [i_0] = ((!((!(var_1 && var_7)))));
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        arr_22 [i_5] [i_5] = (min(var_1, (((var_6 ? var_8 : var_6)))));
        arr_23 [i_5] = ((((var_7 | (var_5 < var_9))) >> ((((var_6 | ((var_3 ? var_12 : var_4)))) - 18446744073709550052))));
        arr_24 [i_5] = (((var_12 || var_1) / (min(var_0, var_14))));
        arr_25 [i_5] = ((((var_13 ? var_2 : var_9))) ? (var_9 / var_10) : (var_14 / var_9));
        arr_26 [i_5] [i_5] = var_4;
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        arr_30 [11] [i_6] |= ((var_11 && (var_8 + var_13)));
        arr_31 [i_6] [i_6] = var_3;
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                {
                    arr_36 [i_6] [i_7] [11] [i_8] |= (var_6 % var_10);
                    /* LoopNest 2 */
                    for (int i_9 = 4; i_9 < 16;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            {
                                arr_44 [i_6] [i_7] [i_6] [i_6] [i_10] = -var_7;
                                arr_45 [i_6] [i_6] [i_6] [i_6] = var_13;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

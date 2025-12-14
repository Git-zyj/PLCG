/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_0 ? ((-var_18 ? var_1 : -6074566962786378176)) : ((((!(((var_12 ? var_15 : var_18)))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_2] = (((!var_10) != var_3));
                        var_21 = (arr_4 [i_0] [i_0]);
                        var_22 = (arr_7 [i_2] [i_1] [i_1 + 1] [i_1 - 2]);
                    }
                }
            }
        }
        var_23 = 127;
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 23;i_5 += 1)
            {
                {
                    arr_16 [i_0] [i_4] [i_5 + 1] = (arr_5 [13] [i_4] [i_5 - 1]);
                    var_24 -= (((113 ? var_1 : (arr_9 [i_0] [i_0] [0] [i_4] [i_4] [14]))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
    {
        var_25 = var_5;
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                {
                    var_26 -= (((arr_20 [0] [i_8] [i_7 - 1]) <= (arr_20 [i_6] [i_8] [i_7 - 1])));
                    arr_23 [i_7] = (((var_17 ? 32 : var_8)));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 10;i_10 += 1)
                        {
                            {
                                var_27 = ((var_4 ? (((arr_20 [i_8] [i_7] [i_8]) ? (arr_6 [i_6] [i_7]) : 1)) : ((80 ? 16383 : 115))));
                                var_28 = (min(var_28, var_19));
                            }
                        }
                    }
                    arr_30 [i_7] = (((arr_27 [i_6] [i_7 - 1] [i_7 - 1] [i_7]) ? var_0 : (arr_11 [i_7 - 1] [i_7 - 1])));
                }
            }
        }
        arr_31 [i_6] = -var_16;
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 13;i_11 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 0;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 13;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 13;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 13;i_15 += 1)
                        {
                            {
                                arr_45 [i_11] [i_11] [1] [i_14] [i_15] [i_15] = (((((var_15 ? var_1 : 4294967284))) ? 971816620 : (arr_25 [i_12 + 1] [i_13] [i_13])));
                                arr_46 [i_14] [i_15] = (~1);
                                var_29 = ((var_11 ? var_16 : (arr_41 [i_11] [7] [i_12 + 1] [7] [i_15] [i_15])));
                                var_30 ^= (arr_36 [1] [i_14]);
                                arr_47 [i_15] [9] = (~var_0);
                            }
                        }
                    }

                    for (int i_16 = 0; i_16 < 13;i_16 += 1)
                    {
                        var_31 = (max(var_31, var_19));
                        var_32 = (min(var_32, (arr_4 [i_11] [i_11])));
                    }
                    var_33 = ((((arr_41 [i_11] [i_12 + 1] [i_13] [i_11] [i_13] [2]) ? var_16 : (arr_42 [6] [i_13] [i_13] [6] [i_12 + 1] [i_13]))) > var_8);
                }
            }
        }
        var_34 -= (((!var_6) ? (arr_2 [i_11] [i_11] [1]) : ((var_14 ? var_1 : -57))));
    }
    #pragma endscop
}

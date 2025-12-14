/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (-10 * var_1);
    var_14 = 0;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (((arr_0 [i_0] [i_0]) || ((((((127 ? var_4 : (arr_2 [7] [i_0])))) ? 9 : -4884406735283772396)))));
        var_15 = (min(var_15, ((min((arr_2 [i_0] [4]), 9)))));
        var_16 = (min(var_16, var_4));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 12;i_4 += 1)
                    {
                        {
                            arr_13 [i_0] [i_0] = (arr_9 [i_0] [i_0] [i_2] [i_1] [i_2] [14]);
                            var_17 = (var_3 == 152);
                            arr_14 [i_0] [0] [i_0] [i_1] [i_4] = (((0 >= 164) ? ((((!(arr_2 [i_0] [i_0]))))) : ((var_12 ? (arr_1 [i_0] [i_1]) : var_3))));
                        }
                    }
                }
            }
            arr_15 [i_0] [i_1] = (arr_7 [i_1] [i_0] [i_1]);
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    {
                        arr_23 [i_0] = var_12;
                        var_18 = (((!6761475240765330254) ? ((max(var_2, ((((arr_10 [i_0] [i_0] [i_6] [i_7] [i_6]) && var_8)))))) : (((!(((var_8 ? (arr_11 [i_0] [3] [3] [3] [3]) : 236))))))));
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
    {
        arr_26 [4] &= ((~(((arr_12 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]) << (var_11 - 30172)))));
        arr_27 [i_8] = (max(125, (((!(~120))))));
        arr_28 [i_8] = var_7;
        arr_29 [12] |= 542114618568333740;
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 0;i_10 += 1)
            {
                {
                    var_19 = (min(var_19, (((-(min((var_9 * 65535), -5450947511844575173)))))));
                    var_20 = (~-17100192142294450437);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
    {
        var_21 |= ((((((arr_19 [i_11] [i_11] [i_11]) ? var_5 : 253))) / (arr_21 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])));
        /* LoopNest 3 */
        for (int i_12 = 1; i_12 < 11;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 15;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 15;i_14 += 1)
                {
                    {
                        arr_45 [9] [i_11] [i_12] [i_14] [i_12] [i_12] = (arr_21 [i_12 - 1] [i_12 - 1] [i_11] [i_13] [i_12 - 1] [i_12 - 1]);
                        arr_46 [i_11] [i_12] [i_12 + 3] [i_14] = (arr_8 [i_11]);
                        var_22 += (!(arr_10 [10] [4] [1] [i_13] [i_11]));
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_15 = 0; i_15 < 10;i_15 += 1)
    {
        for (int i_16 = 2; i_16 < 9;i_16 += 1)
        {
            for (int i_17 = 2; i_17 < 7;i_17 += 1)
            {
                {
                    var_23 = (((((max(20, -4859695776649627491)))) ? (((min((arr_42 [6] [i_16] [i_16] [i_16]), (var_8 || 11))))) : var_1));
                    var_24 = (max(var_24, 21));
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 10;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 10;i_19 += 1)
                        {
                            {
                                var_25 = (((((-var_0 - (arr_41 [i_17 + 3] [i_16 - 2])))) ? ((var_0 * ((min(78, 0))))) : (arr_1 [i_16 - 2] [i_17 - 1])));
                                arr_60 [i_17] [6] [i_17] [6] &= ((((min(193, 15))) ? var_1 : (min((arr_36 [0] [i_17]), var_11))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

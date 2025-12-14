/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((1 ^ (max(36769, 2747828923))))) ? (min(121, (min(2747828932, 1547138398)))) : (((((min(2747828931, 253)) > (((var_2 ? 1 : 2621)))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_15 = ((~(15182734191930804206 >= 152)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_16 = (max(var_16, var_8));
                                arr_16 [i_0] [i_0] [i_0] = ((((((arr_0 [i_0 + 1]) ? 154 : 127))) ? 49511 : (((arr_4 [i_0 + 1]) ^ (arr_0 [i_0 + 1])))));
                            }
                        }
                    }
                    var_17 |= ((((var_7 ? 2747828920 : 255)) != ((((((117 ? 1 : 81)) != (arr_6 [i_0 + 1] [i_0 + 1])))))));
                    arr_17 [i_0] [11] [i_0] = ((48 ? (arr_7 [i_0 - 1] [i_0 - 1] [i_0]) : (min(var_10, (arr_7 [i_0 + 1] [i_0 + 1] [i_0])))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        {
                            arr_29 [i_5] [i_5] = var_11;
                            arr_30 [i_5] [i_5] [16] [i_7] [i_5] [i_5] = var_3;
                        }
                    }
                }
                arr_31 [0] [i_5] = (max((~var_10), var_11));
                var_18 = (((((~(max(1547138347, 1547138373))))) >= var_10));
                var_19 |= (((arr_7 [i_5] [i_6] [20]) ? (((!(arr_8 [i_5] [i_5] [16])))) : (((~(81 % var_11))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 17;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 13;i_11 += 1)
            {
                {
                    var_20 = ((~((53141 ? 12394 : 12394))));
                    var_21 = (max(var_21, 1));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 17;i_12 += 1)
                    {
                        for (int i_13 = 3; i_13 < 16;i_13 += 1)
                        {
                            {
                                var_22 = ((~((~(arr_43 [i_11 + 2] [i_13] [i_13 + 1] [i_13] [i_13] [i_13 + 1])))));
                                arr_45 [i_9] [i_9] [i_9] [1] [i_9] [i_9] = (max((min(var_10, var_10)), (((~(~var_7))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 17;i_14 += 1)
                    {
                        for (int i_15 = 2; i_15 < 15;i_15 += 1)
                        {
                            {
                                var_23 = (((var_4 / var_1) == (max((arr_7 [i_11 + 1] [i_11 - 2] [i_14]), 1547138367))));
                                var_24 = (min((~1), (((var_8 <= var_4) ? ((var_2 ? (arr_36 [i_14] [i_15 + 2]) : 1547138364)) : var_13))));
                                var_25 = (max(var_25, var_3));
                            }
                        }
                    }
                    var_26 = (min(((max(var_13, (arr_20 [i_11 - 1] [i_11 + 2] [i_11 + 2])))), (arr_35 [i_9])));
                }
            }
        }
    }
    #pragma endscop
}

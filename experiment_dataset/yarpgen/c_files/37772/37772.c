/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    arr_6 [i_1] [i_1] [i_1] = (~var_1);
                    arr_7 [i_0] [i_1] [i_1] = (max(9, var_4));
                }
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    var_11 = (min(var_11, (((9 ? (arr_8 [i_0] [i_0] [i_0]) : (((arr_4 [i_0] [i_0]) ? (((arr_4 [i_0] [i_0]) ? var_1 : var_8)) : ((var_4 ? (arr_4 [i_3] [i_3]) : (arr_9 [i_0] [i_1] [i_3]))))))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            {
                                var_12 = ((((((arr_12 [i_0] [i_0]) | var_6)) & (162 / 1))));
                                var_13 = -14787;
                                var_14 = (max(((((max((arr_2 [i_5]), var_10))) ? (max(13175194970082382015, 96)) : (arr_15 [i_1] [i_1] [i_3] [i_4] [i_5]))), (((-((((arr_13 [i_0] [i_3] [12]) || (arr_1 [4])))))))));
                                var_15 = (min(var_15, (max(((((arr_0 [i_4]) ? var_8 : 93))), var_1))));
                            }
                        }
                    }
                }
                for (int i_6 = 1; i_6 < 24;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            {
                                var_16 &= var_4;
                                var_17 = var_1;
                                var_18 &= ((+(((arr_0 [i_1]) ? var_7 : (max(13175194970082382015, var_2))))));
                                arr_23 [i_1] = (arr_9 [21] [i_1] [i_0]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 24;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 21;i_10 += 1)
                        {
                            {
                                var_19 = (max((((arr_14 [i_10 + 1] [i_10] [i_10 + 4] [i_10] [i_10 - 1]) ? var_7 : (arr_14 [i_10 + 2] [i_9] [0] [i_9] [i_9]))), -4));
                                var_20 ^= (arr_17 [i_0] [4] [i_0] [i_10]);
                                arr_30 [2] [i_10] [i_9 - 1] |= (((((~((121 ? -1693831699 : -14777))))) ? (max((0 / 58705), var_2)) : 93));
                            }
                        }
                    }
                }
                for (int i_11 = 2; i_11 < 24;i_11 += 1)
                {
                    var_21 = ((!((!(0 | 3338168278)))));
                    var_22 = var_3;
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 25;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 25;i_13 += 1)
                        {
                            {
                                var_23 = (max(((-96 ? 2051 : 18279484792563241808)), var_2));
                                var_24 = (min(var_24, (arr_2 [12])));
                                var_25 = var_6;
                                arr_41 [i_0] [i_0] [i_0] [i_1] [i_0] = (max(((~(arr_37 [i_0] [i_0] [i_11] [i_1] [i_13]))), ((((~var_7) & (max(-914614271639677283, var_4)))))));
                            }
                        }
                    }
                    var_26 = (max(var_26, ((((((~(((arr_24 [i_0] [18] [i_11 - 2]) ? 0 : var_8))))) ? (arr_26 [i_0] [i_0] [i_0]) : (max((arr_24 [i_0] [8] [i_0]), (max(0, var_7)))))))));
                }
                var_27 *= arr_22 [i_0] [i_0] [i_0] [i_0];
                arr_42 [i_1] = (((arr_29 [i_0] [i_0] [i_1] [i_1] [i_1]) / 1023));
                arr_43 [i_1] = 9;
            }
        }
    }
    var_28 = (max((((((var_3 ? 13175194970082382015 : 17288658941178559037))) ? (-14787 | 13175194970082382015) : 0)), var_10));
    var_29 = (max(((((917188415 ? 32763 : 4294967295)))), var_1));
    #pragma endscop
}

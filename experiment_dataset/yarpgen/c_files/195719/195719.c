/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;
    var_15 = ((~((~(~var_5)))));
    var_16 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] [i_0] = ((((!(arr_0 [i_0]))) ? 1 : 3932160));

                /* vectorizable */
                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_2] [i_4] |= (((arr_15 [i_0] [i_2 + 1] [i_2 + 1]) ? var_5 : 28450));
                                arr_18 [i_4] [11] [i_2] [i_0] [i_0] = (((arr_11 [i_2 - 2] [i_1] [i_2] [i_3]) ? (arr_11 [i_2 - 2] [i_1] [i_2 + 1] [i_1]) : (arr_11 [i_2 - 2] [i_1] [i_2] [i_2])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_26 [i_6] [i_6] [i_6] [i_6] [i_0] = 0;
                                arr_27 [i_6] [i_6] [i_2] [i_2] [i_1] [i_6] [i_0] = (((arr_8 [i_0]) ? ((1 ? 0 : -3065303334490192815)) : (((var_4 ? (arr_5 [i_0]) : 1538443386)))));
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    arr_30 [i_1] = ((1 && ((((arr_2 [i_0] [i_1]) ? (arr_2 [i_0] [i_1]) : (-127 - 1))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            {
                                var_17 = ((1012249698994060427 ? ((max(1336577199, 1))) : (max(1, 3065303334490192814))));
                                arr_35 [11] [7] [1] [1] [i_1] [11] [i_0] = (2827367217 ? (arr_32 [i_1] [i_7]) : var_13);
                            }
                        }
                    }
                    arr_36 [i_7] = (arr_14 [i_1] [5]);
                }
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 23;i_12 += 1)
                        {
                            {
                                arr_45 [i_11] = 1867931933;
                                var_18 = (~-24);
                                arr_46 [i_11] [1] [i_10] [1] [i_11] = ((((min((arr_29 [i_0] [i_0] [i_0] [i_11]), (arr_39 [i_0] [i_1])))) ? (((arr_37 [22] [i_1] [i_10]) ? 1442868869 : ((-3065303334490192832 ? 18032172919972857090 : var_2)))) : var_2));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 2; i_13 < 20;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            {
                                var_19 = (arr_21 [10] [i_1] [10] [i_10] [i_13] [i_14]);
                                arr_52 [i_14] [i_13 + 2] [i_10] [0] [i_0] = (!-94);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 0;i_15 += 1)
                    {
                        for (int i_16 = 2; i_16 < 20;i_16 += 1)
                        {
                            {
                                arr_60 [i_0] [i_0] [i_0] [i_15 + 1] [1] = (arr_24 [i_0] [i_1] [i_10]);
                                var_20 = 655610016;
                                var_21 = 414571153736694545;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

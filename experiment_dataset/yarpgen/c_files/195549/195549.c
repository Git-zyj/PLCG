/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0 + 1] = (!var_3);
        arr_3 [i_0 - 2] = (arr_1 [i_0]);
    }
    /* LoopNest 3 */
    for (int i_1 = 4; i_1 < 12;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 13;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            {
                                var_11 += (arr_9 [i_1] [i_2] [i_2] [i_2]);
                                var_12 = (min(2325746934, 221));
                            }
                        }
                    }

                    for (int i_6 = 2; i_6 < 13;i_6 += 1)
                    {
                        arr_18 [i_1] [i_6] = ((((arr_11 [i_1] [i_1] [i_2 - 2] [i_6]) != (arr_11 [i_1] [i_2] [i_2 - 2] [i_6]))) ? (((max(var_0, 128)))) : (((arr_11 [i_1] [i_2] [i_2 + 1] [i_6]) * (arr_11 [i_1 + 1] [i_1 + 1] [i_2 + 1] [i_3]))));
                        arr_19 [i_1] [i_2] [i_1] [i_2] = (arr_8 [i_3 + 1] [i_2 + 2] [i_1]);

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 0;i_7 += 1) /* same iter space */
                        {
                            arr_22 [i_1] = 7130849680187808655;
                            var_13 = (max(var_13, 191));
                            arr_23 [i_1] [i_1] [7] [i_1] [i_7] = ((45 ? 15863394751219184389 : 13359525641146259878));
                            arr_24 [i_1] [1] [i_1] [i_1] [1] = (((((var_1 ? var_6 : var_7))) || 18198406076565031778));
                        }
                        for (int i_8 = 0; i_8 < 0;i_8 += 1) /* same iter space */
                        {
                            arr_29 [i_8] [i_1] [i_3] [i_1] [i_1] = (arr_12 [i_1] [i_1 + 2] [i_1] [i_3] [i_6] [i_8 + 1]);
                            var_14 = 2548423446;
                        }
                        for (int i_9 = 0; i_9 < 0;i_9 += 1) /* same iter space */
                        {
                            var_15 &= max((arr_7 [i_6]), (max(var_8, (arr_7 [i_6]))));
                            var_16 = (min(((42 | (arr_13 [i_1]))), (((var_0 | (arr_14 [i_3 - 1] [i_3 - 1]))))));
                            arr_33 [i_1] [i_1] [i_3] [i_1] [i_6 - 2] [i_9] [i_9] = (((~4622947713663849062) ? (((!(249 && 1746543868)))) : (arr_17 [i_1] [i_1 - 1] [i_9 + 1] [i_9])));
                            var_17 = var_3;
                        }
                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            arr_36 [i_1 - 1] [i_2 + 2] [i_3] [i_3] [i_1] = ((2548423465 ? 127 : 34));
                            var_18 = (((((arr_10 [i_2 - 2] [i_3 - 1]) > 255)) && (~-2939228701105964534)));
                        }
                        arr_37 [i_1] = ((-(-var_6 && 498651521462945750)));
                    }
                    /* vectorizable */
                    for (int i_11 = 1; i_11 < 11;i_11 += 1)
                    {
                        arr_41 [i_1] [i_2 + 1] [i_3 - 1] [12] &= (((((arr_6 [i_1] [i_2] [8]) % (arr_14 [i_2] [i_1])))) ? 41 : ((11330023113280301690 ? 213 : (arr_13 [6]))));

                        for (int i_12 = 2; i_12 < 13;i_12 += 1)
                        {
                            arr_46 [i_12 + 1] [i_12 + 1] [i_1] [i_1] [i_2] [8] = (2243909323203709496 & 16237);
                            var_19 |= (((arr_26 [i_1] [i_1] [i_2 - 2] [i_3] [i_11 + 2] [i_12]) != 4622947713663849056));
                        }
                        arr_47 [i_1] [i_2 - 2] [i_1] = var_1;
                        arr_48 [2] [i_1] [i_3] = (~32);
                    }
                    var_20 += ((((((var_8 && 144) | ((4622947713663849076 ? (arr_5 [10]) : var_7))))) ? (((-((((arr_15 [0] [0] [0] [i_2] [0]) < (arr_12 [8] [i_1 - 2] [i_2] [i_3] [i_3] [i_3]))))))) : ((10228716887361484464 ? 9 : 3170985066))));
                }
            }
        }
    }
    #pragma endscop
}

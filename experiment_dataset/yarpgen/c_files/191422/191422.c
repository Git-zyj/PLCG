/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] [i_0] [i_4] = ((((min(55619, (arr_11 [i_0 - 1] [i_2 - 1] [i_0 - 1] [i_2] [5])))) ? (((arr_11 [i_0] [i_2 - 2] [i_2 - 2] [i_3] [i_4]) / 56)) : ((max((arr_11 [i_0] [i_2 + 1] [i_2] [i_3 + 2] [i_4]), (arr_11 [i_0] [i_2 + 3] [i_0 - 1] [0] [i_4]))))));
                                var_12 -= (((min(var_10, var_6)) - ((var_4 * (6 / 57126)))));
                                arr_14 [11] [11] [i_0] [i_3 + 3] [11] = ((((((arr_0 [i_0 + 1]) == (arr_0 [i_0 - 1])))) + (arr_0 [i_0 - 1])));
                                arr_15 [i_1] [1] [7] [i_1] [3] [i_0] = ((~232) ? (((38 / 44) ? (arr_10 [i_0] [i_1] [i_2] [i_3 + 1] [3] [i_0]) : (arr_9 [i_1] [i_2] [i_2] [4]))) : ((((200 > ((min(var_7, var_11))))))));
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            {
                                var_13 = min(213, 1024);
                                arr_24 [i_7] [10] [i_7] [i_7] [i_7] [i_7] |= (((((min(0, 158)))) && (((54 + ((((arr_1 [0]) || var_2))))))));
                            }
                        }
                    }
                    var_14 += (((((((arr_1 [4]) + (arr_10 [i_5] [i_5] [i_1] [i_0] [i_0 + 1] [i_0]))) / ((-(arr_12 [i_0] [i_5] [i_5] [12] [8] [12]))))) ^ (~var_9)));
                }
                /* vectorizable */
                for (int i_8 = 2; i_8 < 13;i_8 += 1)
                {
                    arr_28 [i_0] [i_0] [i_8] = 17052147213960589823;
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 10;i_10 += 1)
                        {
                            {
                                arr_34 [i_0] [i_1] [i_8] [i_0] = (((((arr_1 [i_0]) && var_2)) ? ((((var_0 > (arr_9 [i_0] [i_0] [i_9] [i_10]))))) : var_5));
                                var_15 = arr_25 [i_9] [i_9] [i_9] [i_9];
                            }
                        }
                    }
                    var_16 = var_3;
                    var_17 = (-44008 == -var_0);
                    var_18 -= arr_26 [i_0 + 1];
                }
                for (int i_11 = 1; i_11 < 13;i_11 += 1)
                {
                    var_19 = (min((((arr_30 [i_0] [6] [i_0] [i_0] [i_0 + 1] [i_0 - 1]) / (arr_30 [1] [1] [i_0] [i_0] [1] [9]))), ((((arr_30 [i_0 - 1] [i_0] [i_0] [i_0 + 1] [i_0] [i_0]) && (arr_30 [11] [8] [i_0] [i_0 - 1] [i_0] [11]))))));
                    var_20 -= var_7;
                    var_21 -= ((((min(((76 ? 31 : 13327)), (var_10 + var_11)))) ? var_3 : (min((65524 % 54), (var_0 <= 7546)))));
                    arr_38 [i_0] = ((174 ? 13 : ((var_1 ? ((47724 ? var_3 : (arr_27 [i_11] [i_1] [9]))) : (((arr_4 [i_1] [i_1]) ? 17795 : var_8))))));
                }
                for (int i_12 = 0; i_12 < 14;i_12 += 1)
                {
                    arr_41 [i_0] [i_0] [3] = ((58317 % ((9 ? -64 : 65524))));
                    var_22 ^= (((((52 + (arr_8 [i_0 + 1] [i_0 - 1])))) ? (min(var_6, ((var_5 << (-123 + 150))))) : var_7));
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 14;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 13;i_14 += 1)
                    {
                        {
                            var_23 = (min(var_4, ((((arr_43 [i_14 - 1] [i_14 + 1] [i_0 + 1] [i_0]) == (arr_33 [i_0]))))));
                            var_24 = ((!((min(var_9, (arr_37 [i_0]))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_15 = 3; i_15 < 20;i_15 += 1)
    {
        for (int i_16 = 4; i_16 < 21;i_16 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_17 = 3; i_17 < 22;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 23;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 23;i_19 += 1)
                        {
                            {
                                arr_59 [5] [5] [i_17 + 1] [i_19] = 7680;
                                var_25 = var_5;
                            }
                        }
                    }
                }
                var_26 = (min(((min((arr_51 [i_15 + 1] [8]), 92))), (((min(var_7, var_5)) | (((195 ? (arr_55 [i_15] [2] [i_15]) : (arr_51 [20] [i_16 - 4]))))))));
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_10 [i_0] = (((arr_9 [i_0] [i_1 + 1] [i_2] [i_0]) | (!4093921634484352562)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_0] [i_0] [i_0] = (((arr_8 [i_0] [9]) << 1));
                                arr_18 [i_0] [i_0] = (((((((4093921634484352562 >> (arr_14 [6] [6])))) ? (max(1, 265052891)) : (!1178460703))) << ((((-4324035533375531257 & ((((arr_6 [i_1]) ? 31 : (arr_8 [i_0] [i_1])))))) - 4))));
                                arr_19 [i_0] [i_0] = min(222, 14352822439225199049);
                                var_10 = (min(var_10, (arr_12 [i_2] [i_1] [8] [4] [4] [i_1 + 1])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                arr_25 [i_0] [i_0] [i_2] [i_2] [i_0] = ((var_3 ? (arr_6 [i_0]) : (arr_6 [i_6])));
                                arr_26 [i_0] [i_5] [i_5] [i_2] [i_0] [i_0] = 28;
                                var_11 |= ((-((var_2 % (arr_12 [i_2] [i_2] [i_1 + 2] [i_1] [i_1 + 1] [i_2])))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 1; i_7 < 19;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 1;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 21;i_11 += 1)
                        {
                            {
                                var_12 = (min(var_12, ((((((~3001587243662684522) << (((((arr_30 [i_7]) ? (arr_30 [i_7 + 1]) : var_2)) - 17039843527044423384)))) > (((max((arr_34 [i_10] [i_10] [i_7 + 2]), (arr_34 [i_10] [i_9 - 1] [i_7 + 2]))))))))));
                                var_13 = (7 * var_0);
                            }
                        }
                    }
                    arr_40 [i_7] [i_7] [i_7] = arr_32 [i_7] [i_7];
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        for (int i_13 = 4; i_13 < 17;i_13 += 1)
                        {
                            {
                                arr_47 [i_8] [i_7] = 32704;
                                var_14 = (((arr_38 [i_7 - 1]) ^ (arr_32 [i_7] [i_7])));
                                arr_48 [i_13 + 2] [i_8] [i_7] [i_8] [i_7] = (min(140737488355327, ((min((var_8 - 0), (arr_27 [i_7] [i_7]))))));
                                var_15 = ((126 ? 268173312 : -946307163));
                                arr_49 [i_7] [i_8] [i_7] [1] [i_12] [i_7] [i_13] = (max((arr_42 [10] [i_8] [i_9]), var_2));
                            }
                        }
                    }
                    arr_50 [i_7] [i_8] [i_8] [i_7] = (min(2103526213557991169, (((!(((arr_34 [i_7] [2] [i_9 - 1]) > (arr_46 [i_7] [i_8] [i_7]))))))));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 21;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 21;i_15 += 1)
                        {
                            {
                                var_16 &= var_4;
                                arr_55 [i_7] [i_8] [i_8] [i_14] [i_7] [i_8] = (min(34, var_0));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = ((min((var_7 || 75), (max(var_5, var_9)))));
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 18;i_16 += 1)
    {
        for (int i_17 = 3; i_17 < 15;i_17 += 1)
        {
            {
                var_18 = (min((min((((arr_30 [i_16]) ? var_9 : 1964088468)), (max(1969697825, 1782353097)))), var_8));
                var_19 = (max(var_19, ((max(((min(19, (arr_56 [7] [i_17])))), (arr_58 [i_16] [i_17]))))));
                var_20 ^= (!-35);
                /* LoopNest 2 */
                for (int i_18 = 1; i_18 < 16;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 18;i_19 += 1)
                    {
                        {
                            arr_69 [i_18] [i_19] [i_18 + 1] [i_17 - 2] [i_18] [i_18] = (max(var_8, (arr_58 [i_17 - 3] [i_18 + 1])));
                            var_21 = (min((min((((arr_38 [i_16]) ? (arr_43 [i_16] [i_17] [19] [i_19] [i_19] [i_16] [i_19]) : 4093921634484352548)), 1782353097)), (arr_68 [16] [i_17] [i_18 - 1] [i_18 + 2] [i_18] [i_17 - 2])));
                            arr_70 [i_16] [i_17] [i_17] [i_18] [i_19] [i_19] = ((-((-(arr_58 [i_17 + 2] [i_17 - 3])))));
                            var_22 = ((!(((((-54 ? var_6 : 34))) || 43))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

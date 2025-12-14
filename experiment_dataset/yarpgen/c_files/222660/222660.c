/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (arr_0 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_15 |= (((((((arr_6 [i_3] [i_0]) ? (arr_0 [i_1]) : (arr_8 [i_3] [i_3] [i_3] [i_3] [4])))) ? ((~(arr_7 [6] [i_1] [i_1] [i_3]))) : ((~(arr_7 [i_0] [i_0] [i_0 + 2] [i_0]))))));
                            arr_9 [i_0] [i_1] [i_2 + 3] [i_0] [i_2 - 2] [7] = (0 != 14764);
                            arr_10 [i_0] [i_0] [i_2] [i_0] [i_2] = (max((min((arr_6 [i_0 - 1] [i_0 - 1]), (arr_6 [10] [i_0 - 1]))), ((min(14748, -22)))));
                            var_16 = (max(var_16, var_6));
                        }
                    }
                }
            }
        }
    }
    var_17 = ((var_7 ? var_2 : ((~(!var_10)))));
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                {
                    var_18 *= (((((((arr_12 [i_6]) != (((arr_15 [i_6] [i_5]) & var_14)))))) % var_11));
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            {
                                arr_22 [i_4] [i_4] [i_4] [i_4] [1] = (((((~(arr_16 [i_4] [i_4] [i_4])))) ? (arr_16 [1] [i_5] [3]) : (((15 ? -2918 : 33)))));
                                var_19 *= (((((!((max(-7, 32392)))))) < (arr_21 [i_4] [i_8] [i_6] [i_4] [i_4])));
                                var_20 -= 4193663925;
                            }
                        }
                    }
                    var_21 |= ((var_4 ^ (arr_17 [i_4] [i_4] [i_5] [2] [i_6])));
                    var_22 ^= ((~((~(((arr_15 [i_5] [i_4]) ? var_7 : 2070554526))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            {
                var_23 = (max(var_23, 14748));
                var_24 = (max(var_24, (arr_24 [i_10])));
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 12;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 14;i_12 += 1)
                    {
                        {
                            var_25 = (min(var_25, ((min((arr_24 [i_11 + 2]), (arr_24 [i_11 - 1]))))));
                            arr_33 [i_12] [i_12] [i_11] [i_12] [i_12] |= (((arr_27 [i_9]) ? (arr_24 [i_9]) : (84 <= -28)));
                            arr_34 [i_11] [i_11 + 2] [i_12] = ((((((!(arr_11 [0]))) ^ (((arr_17 [i_9] [i_9] [i_10] [i_11 + 1] [i_9]) ? (arr_31 [i_11] [11] [i_10] [i_11]) : var_14))))));
                            var_26 = (min(var_26, (arr_11 [i_11])));
                            var_27 = (max(var_27, ((((var_6 + 2147483647) >> (((!(var_3 % 713673306)))))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_13 = 1; i_13 < 19;i_13 += 1)
    {
        for (int i_14 = 2; i_14 < 20;i_14 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_15 = 2; i_15 < 20;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 21;i_16 += 1)
                    {
                        {
                            var_28 ^= (max((((-(arr_11 [i_16])))), (((arr_17 [i_13 + 2] [i_14 - 1] [i_15 - 1] [i_13 - 1] [i_14 - 1]) ? 713673319 : 50773))));
                            var_29 -= (max((((arr_39 [0] [i_14 - 2]) ? 877511989 : 171)), (arr_17 [18] [0] [1] [i_16] [i_16])));
                            var_30 ^= var_6;
                            var_31 = (min(var_31, ((((235 ? 46246 : 15))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 1;i_17 += 1)
                {
                    for (int i_18 = 1; i_18 < 1;i_18 += 1)
                    {
                        {
                            arr_49 [i_18] [i_14 - 2] [i_17] [i_18 - 1] [i_13] = (arr_21 [i_13] [i_13 + 1] [i_13 + 1] [i_13] [i_18]);
                            arr_50 [i_13] [3] [i_17] [i_18] [i_17] = (max(((!(arr_43 [i_13] [i_13 - 1] [i_13 + 1] [i_13] [i_13 - 1] [i_13 + 2]))), (((arr_37 [i_13 + 2] [i_14 + 1] [i_18 - 1]) != (arr_14 [i_13 - 1] [i_14 + 1] [i_18 - 1])))));
                        }
                    }
                }
                var_32 = (min(var_32, ((((min((arr_45 [i_14 + 1] [i_14 - 1] [i_14 - 1] [i_14 + 1]), (arr_45 [i_14] [i_14 - 1] [i_14 - 1] [i_14 + 1]))) & 9)))));
                var_33 *= 19284;
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_17 = (max(var_17, ((((arr_3 [i_0] [12] [i_0]) != (arr_0 [i_0]))))));
                            arr_9 [i_1] [i_2] [4] [i_1] = arr_3 [i_0] [i_2] [i_2];
                            arr_10 [i_1] = (((((~(((arr_7 [i_3] [i_1] [i_1] [i_0]) ? (arr_7 [i_0] [i_1] [i_0] [i_0]) : (arr_6 [i_1])))))) && (((max(41461, 4194303)) != ((3 ? -73 : 1448560151))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        {
                            arr_15 [i_1] = (max((((((arr_13 [3] [i_1] [i_1] [i_1] [i_1] [i_0]) ^ (arr_4 [i_0]))) & (48707 & -4194326))), (((~((~(arr_8 [i_0] [i_1] [i_4] [i_5]))))))));
                            arr_16 [7] [i_1] [i_4] [i_5] [i_4] = ((~((-((~(arr_8 [i_0] [i_0] [i_0] [i_0])))))));
                            var_18 = (arr_8 [i_1] [i_1 + 1] [i_1 - 1] [i_1 + 1]);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            {
                                var_19 = (max(var_19, ((((((~(arr_8 [i_6] [i_6] [i_7] [i_1 - 1])))) ? (((arr_3 [i_0] [i_0] [i_6]) ? (arr_3 [i_0] [i_1] [i_6]) : var_0)) : ((((arr_8 [i_0] [i_1] [i_6] [i_1 - 2]) < (arr_3 [i_0] [i_1] [i_1 + 3])))))))));
                                arr_26 [i_1] = (arr_6 [i_1]);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        {
                            arr_32 [i_0] [i_1] = max(((var_2 ? (arr_23 [i_0] [1] [i_1 - 2] [i_1 - 1] [i_0] [i_0]) : var_5)), (((arr_23 [i_1] [i_1] [i_1 - 1] [i_1] [i_10] [i_1]) ? (arr_23 [10] [i_1] [i_1 + 3] [6] [i_9] [i_1]) : (arr_23 [i_0] [i_9] [i_1 + 1] [i_10] [i_1 + 1] [i_10]))));
                            arr_33 [i_0] [i_1] [i_1 + 1] [13] [i_1 + 1] [i_1 - 1] = ((((((((arr_24 [i_1] [i_1] [i_10]) & (arr_30 [i_0] [i_1 + 1] [i_9] [i_10])))))) != ((~(((arr_11 [i_0] [i_0]) ? (arr_24 [i_1] [i_1] [i_1]) : 50))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_11 = 0; i_11 < 24;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 24;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 1;i_13 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 1; i_14 < 21;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 24;i_15 += 1)
                        {
                            {
                                var_20 = 4194325;
                                var_21 += (((4194325 ^ 18446744073709551613) ? ((((!(((~(arr_35 [i_11])))))))) : (max((arr_40 [i_14] [i_12] [i_11]), (arr_43 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 24;i_16 += 1)
                    {
                        for (int i_17 = 2; i_17 < 22;i_17 += 1)
                        {
                            {
                                arr_55 [i_12] [i_11] &= -4194326;
                                arr_56 [i_11] [i_12] [i_13] [i_13] = (arr_54 [i_12] [i_13] [i_17]);
                                arr_57 [i_11] [i_12] [i_13] [i_16] [i_16] [i_11] [i_17] |= (arr_35 [i_12]);
                                var_22 ^= ((((((!(arr_44 [i_11] [i_12] [i_13] [i_11]))) ? (arr_44 [i_11] [i_17 - 2] [i_13] [i_16]) : (~var_14)))) && (arr_50 [i_11] [i_17]));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 24;i_18 += 1)
                    {
                        for (int i_19 = 2; i_19 < 22;i_19 += 1)
                        {
                            {
                                var_23 = (max((((26988 / 25) ? (!var_2) : (arr_42 [i_11] [i_12] [i_13]))), ((~(~252)))));
                                var_24 = 24531;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_20 = 3; i_20 < 21;i_20 += 1)
                    {
                        for (int i_21 = 1; i_21 < 21;i_21 += 1)
                        {
                            {
                                arr_69 [i_13] [i_20] [i_13] [i_13] = (!-1);
                                arr_70 [i_13] = (max(45, (arr_49 [i_11] [i_12] [i_13] [i_13] [i_21])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

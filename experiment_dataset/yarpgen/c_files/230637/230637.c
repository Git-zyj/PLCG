/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_12 = (max(var_12, 390501499689235759));
                                var_13 = (min(var_13, ((min((((arr_5 [i_0] [i_1] [i_3]) % (arr_5 [i_0] [i_1] [i_0]))), ((min((var_11 <= var_0), (arr_3 [i_0] [i_1] [i_2])))))))));
                                var_14 = (arr_5 [2] [i_4] [2]);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        {
                            var_15 += ((-(~18056242574020315866)));
                            var_16 = ((15816133802705966105 >= (((((max(16, 144))) ? (((390501499689235749 || (arr_16 [i_0] [i_0] [i_5] [i_0])))) : (min((arr_1 [i_6] [i_0]), 97)))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 4; i_7 < 16;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 15;i_8 += 1)
                    {
                        {
                            var_17 = (max(var_17, 2054643936));
                            var_18 = (min(-379114355, -22629));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 4; i_9 < 17;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        {
                            var_19 = 0;
                            var_20 = (max(var_20, var_0));
                            var_21 *= -6084150128671762959;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 16;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 16;i_12 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_13 = 2; i_13 < 13;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 14;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 16;i_15 += 1)
                        {
                            {
                                arr_37 [i_14] = 281529773;
                                var_22 = (((!var_1) % (((((46 & (arr_21 [i_11] [i_11] [i_14] [i_15])))) ? (var_2 + var_4) : var_7))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_16 = 2; i_16 < 14;i_16 += 1)
                {
                    for (int i_17 = 3; i_17 < 14;i_17 += 1)
                    {
                        {
                            arr_43 [i_17] = -3084596213;
                            var_23 ^= (min(var_6, ((min(1276, 99)))));
                            var_24 = (max(var_24, ((min((((arr_9 [i_17 + 1] [i_11] [8] [i_17] [8]) % (arr_11 [i_17 + 1] [i_12] [i_16] [i_12] [i_12]))), ((((arr_11 [i_17 + 1] [i_12] [i_11] [i_16 + 2] [17]) ? (arr_9 [i_17 + 1] [15] [i_16] [i_17] [i_11]) : 48493))))))));
                            var_25 = (min(var_25, (((!((((var_10 - var_10) << ((((var_8 ? 2147483625 : (arr_15 [i_11] [17] [14] [i_17 - 1]))) - 2147483604))))))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_18 = 1; i_18 < 15;i_18 += 1)
                {
                    for (int i_19 = 1; i_19 < 15;i_19 += 1)
                    {
                        for (int i_20 = 4; i_20 < 15;i_20 += 1)
                        {
                            {
                                var_26 = (((arr_5 [i_11] [i_20] [i_18]) + (((((var_3 ? var_11 : (arr_26 [i_19])))) ? ((((arr_30 [i_11] [i_12] [i_18] [i_20]) <= (arr_44 [i_11] [i_11] [1])))) : 1))));
                                arr_53 [i_11] [i_12] [i_18 - 1] [i_18] [i_20] = (min((((!(arr_4 [i_11] [i_12] [i_18 + 1] [i_19])))), ((255 ? (0 || 1) : 64260))));
                                arr_54 [i_11] [i_12] [i_18] [i_19 + 1] [i_20] = 65;
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_21 = 2; i_21 < 13;i_21 += 1)
                {
                    for (int i_22 = 1; i_22 < 14;i_22 += 1)
                    {
                        for (int i_23 = 0; i_23 < 16;i_23 += 1)
                        {
                            {
                                arr_63 [7] [i_23] = (47 / 46);
                                arr_64 [i_23] [i_23] [i_21] = 18056242574020315856;
                                arr_65 [i_11] [i_11] [15] [i_23] [i_11] = (min(((-58 % (((arr_16 [i_11] [4] [i_21] [i_23]) ? 2189428967 : (arr_6 [i_21]))))), ((((((arr_7 [i_21] [i_21]) || var_8)) || ((max(195, 2147483647))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

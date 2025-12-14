/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= ((-(max(((max(233, var_0))), (max(5525433273874704959, 244233017))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_17 = (min(var_17, ((max(37, 244233016)))));
                                arr_16 [i_0] [i_0] [i_2] &= (((((min(226, var_14)))) * ((min(((10533 > (arr_14 [i_0] [i_1] [i_2] [i_3] [i_1] [i_1] [20]))), (!1))))));
                                arr_17 [i_0] [i_0] [i_1] [i_4] [i_3] [i_4] = (arr_1 [i_0]);
                                var_18 = (max(var_18, -4065631571372879486));
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    arr_20 [i_0] [15] = ((arr_9 [i_0] [i_1] [i_5]) ^ (((max((arr_0 [i_0] [i_0]), (arr_14 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] [i_5]))) | (arr_3 [i_0] [i_1]))));
                    var_19 = (min((min((arr_6 [i_0] [i_1] [i_5]), -var_10)), -4050734297));
                }

                for (int i_6 = 2; i_6 < 22;i_6 += 1)
                {
                    var_20 = (min(var_20, (((-(max(10, -1)))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        for (int i_8 = 4; i_8 < 21;i_8 += 1)
                        {
                            {
                                var_21 = (((var_6 & var_5) ^ ((((min(var_12, 244233029)))))));
                                arr_28 [i_1] = ((~((max((max(60829, var_1)), -1202876478)))));
                            }
                        }
                    }
                }
                for (int i_9 = 1; i_9 < 20;i_9 += 1)
                {
                    var_22 = (max(((11514871685103388110 ? 0 : -2028413555961649573)), (var_13 != 32746)));
                    var_23 -= ((!((max((174 <= 1), (max(8848659336302408604, var_11)))))));
                    var_24 = (arr_29 [i_9] [i_9]);
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 23;i_11 += 1)
                        {
                            {
                                var_25 = ((+(((((((arr_4 [i_1]) == var_13))) < ((((arr_31 [i_9] [i_9] [i_9]) <= 1009675508))))))));
                                var_26 = (min(var_26, ((max((((~var_7) * (-12 | 5451585113009318225))), ((max(var_2, 4591393610943294969))))))));
                                var_27 = (min(((~((max((arr_13 [i_0] [i_9] [i_9] [i_10]), 157))))), ((((((arr_32 [i_11] [i_1] [2] [2]) & var_7))) ? (arr_1 [i_0]) : (0 & var_15)))));
                                var_28 = ((((max((max(-4000859474174409535, 1)), var_4))) ? (((((arr_10 [i_11]) && 3285291787)) ? var_0 : (((122 ? (arr_34 [i_10] [1] [18] [18]) : 0))))) : ((((((min(var_10, 11846705942410574695))) && ((max(2917795547892941302, 12846140402999170688)))))))));
                            }
                        }
                    }
                }
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    arr_38 [i_0] [i_0] [15] [i_12] = (i_12 % 2 == zero) ? (((-(max(((774669470 >> (((arr_36 [8] [i_12] [i_12] [i_0]) - 89)))), var_4))))) : (((-(max(((774669470 >> (((((arr_36 [8] [i_12] [i_12] [i_0]) - 89)) + 114)))), var_4)))));
                    var_29 = ((~((((413012509 ? 413012495 : 1)) & (((var_1 ? -37 : 27788)))))));
                }
            }
        }
    }
    #pragma endscop
}

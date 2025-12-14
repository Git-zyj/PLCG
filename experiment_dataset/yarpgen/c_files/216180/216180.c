/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [10] = 1;
                var_16 = var_9;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_11 [1] = ((((max(31658, var_15)) ? var_14 : ((max(112, 1))))));
                            var_17 = (max(-434444829, 63));
                            var_18 = (arr_6 [i_3] [i_2] [i_1]);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_19 = (min(var_19, ((min(18446744073709551615, 7)))));
                                arr_19 [i_0] [1] [i_4] [i_0] [20] = (min((min((arr_0 [i_0 - 1]), (arr_7 [i_4 + 1]))), ((((-5 + 2147483647) << (((var_3 + 1871) - 25)))))));
                                arr_20 [i_0] [i_0] [i_4] [i_5] [i_4] = var_5;
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 &= var_6;
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 13;i_8 += 1)
        {
            {
                var_21 = (min(((((((arr_23 [i_8] [i_8]) ? 159117368 : var_1))) ? (arr_7 [i_8 + 3]) : (149 > 0))), 1));
                arr_25 [i_8] = ((((max(1134907106097364992, var_7))) >> ((((2047 + (arr_8 [i_8 - 1] [i_8 - 1] [i_8] [5]))) + 4270335295994103549))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 14;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_11 = 3; i_11 < 13;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        {
                            arr_39 [i_9] [i_10] [i_12] = (max((~var_12), (1 + -6505260202732452546)));
                            var_22 = (min(var_22, 4));
                        }
                    }
                }
                arr_40 [i_9] [i_10] [i_10] = var_10;
                /* LoopNest 3 */
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 15;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 15;i_15 += 1)
                        {
                            {
                                arr_49 [i_9] [i_9] [i_10] [5] [i_13] [i_14] [i_15] = (min((min(-var_13, ((max(var_7, var_15))))), ((max((arr_42 [i_9 + 1] [i_9 + 1]), (arr_42 [i_9 + 1] [i_9 + 1]))))));
                                var_23 += arr_31 [1] [i_10];
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 15;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 15;i_17 += 1)
                    {
                        {
                            arr_56 [i_9] [i_9] [i_9] [0] [i_9] = (!var_4);
                            arr_57 [i_9] [13] [i_16] [i_17] [i_17] [13] = (min(((((((-14 + 2147483647) >> (-100611101 + 100611121)))) ? (arr_36 [i_9 - 1] [i_9 - 1]) : (max(1233968743, 1783939239)))), (arr_23 [0] [i_10])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

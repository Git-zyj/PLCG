/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_13 = (min(var_13, (~3)));
        var_14 = -82;
        var_15 = (max(var_15, ((((((arr_1 [i_0] [i_0]) >> (((arr_1 [i_0] [i_0]) - 2117430688))))) ? (((arr_1 [10] [i_0]) * (arr_1 [i_0] [i_0]))) : ((min(29771, -372385955)))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_16 += ((((!(((var_7 ? 85 : var_0))))) ? ((max((arr_8 [i_0] [i_0] [i_0] [i_4 - 1]), ((((arr_3 [i_3] [i_1] [i_1]) ? var_1 : -85)))))) : (max((min(var_2, (arr_14 [i_3]))), (-75 && var_2)))));
                                var_17 = var_9;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_18 = ((~((var_11 ? (arr_19 [i_5 + 1]) : var_2))));
                                var_19 = ((~(((arr_5 [i_1] [i_1 - 1] [i_2 - 1] [i_1]) ? 1818303287 : 0))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 12;i_9 += 1)
            {
                {
                    arr_27 [i_7] [i_8] [i_9] = ((-(!var_5)));

                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        var_20 -= 3;
                        var_21 -= (((((((arr_16 [i_10] [i_9 - 2] [i_9 - 3] [i_9 - 3]) > var_11)))) & 4294967295));
                    }
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        var_22 = var_10;
                        arr_34 [i_11] [i_11] [i_9] = (min((((-(~var_5)))), (min(var_2, var_3))));
                        var_23 = ((((!((((((arr_31 [5]) + 2147483647)) >> (((arr_1 [15] [i_8]) - 2117430697))))))) ? var_9 : ((~(max((arr_22 [i_8] [i_11]), var_9))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}

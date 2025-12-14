/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_13 = var_5;
                var_14 = (max(var_14, var_12));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            {
                var_15 = (max(var_15, var_2));
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 9;i_5 += 1)
                    {
                        {
                            arr_15 [i_2] [i_4] [i_5 + 3] = var_1;
                            var_16 = (min(var_16, (((var_9 - ((((var_8 - var_7) != (arr_2 [i_4])))))))));
                            arr_16 [i_2] = ((var_11 / ((var_9 ? (arr_13 [i_2 + 3] [i_4 - 2] [i_5 + 1] [i_5 + 3]) : (arr_13 [i_2 + 3] [i_4 - 2] [i_5 + 1] [i_5 + 3])))));

                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 12;i_6 += 1)
                            {
                                var_17 -= var_5;
                                arr_19 [i_2] [10] [i_2] [i_3] [i_6] = (((var_1 > var_6) / ((var_7 ? var_2 : var_9))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = ((((((var_4 && var_1) - var_10))) ? ((((max(var_12, var_4)) >= ((var_10 ? var_10 : var_5))))) : (8863813045352669571 < -243506125)));
    /* LoopNest 2 */
    for (int i_7 = 2; i_7 < 11;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 10;i_8 += 1)
        {
            {
                arr_25 [1] = ((var_7 | ((61073 ? 4 : 3197011270))));

                for (int i_9 = 1; i_9 < 9;i_9 += 1)
                {
                    arr_29 [i_7] [i_9] [i_8 - 2] [i_9] = (((((((arr_8 [i_9]) ? (arr_0 [i_9]) : var_5)) << ((((min((arr_13 [i_7] [9] [i_8] [i_9]), var_3))) - 67)))) != (4459 || 1)));
                    arr_30 [i_9] [i_9] = var_9;
                    arr_31 [6] [i_9] [0] = var_2;
                }
                /* vectorizable */
                for (int i_10 = 2; i_10 < 11;i_10 += 1)
                {

                    for (int i_11 = 2; i_11 < 11;i_11 += 1)
                    {
                        var_19 -= (arr_7 [i_7] [i_10] [i_10]);
                        arr_38 [i_11] [i_7] [i_11] = (((((arr_3 [i_10]) ^ (arr_23 [i_7]))) - var_7));
                    }
                    var_20 = ((var_7 + (arr_1 [i_8])));
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_8 [i_0 + 1] [i_1] [i_2] = var_5;
                    var_20 = (min(var_20, (!-8736)));
                    var_21 = (max(var_21, (~20906)));
                }
            }
        }
        var_22 ^= ((-1 ? -1 : 134184960));
        arr_9 [i_0] [i_0] = (((arr_2 [i_0 + 1] [i_0 + 1]) != 1989473949761753875));
    }
    var_23 = ((!(var_18 - var_11)));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            {
                arr_15 [i_4] [i_4] [8] = (arr_6 [7] [i_4]);
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 0;i_7 += 1)
                        {
                            {
                                arr_22 [i_3] [2] [i_4] [i_6] [i_7] = ((~(((((-106 ? 134184960 : var_4))) ? var_5 : -1))));
                                var_24 = (min(var_24, ((min(var_15, var_2)))));
                                arr_23 [i_4] [9] = (var_1 || 0);
                                arr_24 [i_3] [i_4] [i_4] [i_6] [i_6] [i_7] [i_7 + 1] = (arr_21 [i_3] [1] [i_3] [i_5] [i_6] [i_7 + 1]);
                            }
                        }
                    }
                }
                arr_25 [i_3] [i_4] [5] = ((max((arr_5 [i_3] [i_3] [i_3]), var_13)) * ((var_1 ? ((var_15 ? (arr_11 [6]) : var_6)) : (var_4 / var_1))));
            }
        }
    }
    var_25 = var_5;
    var_26 = (min(var_26, (((var_13 != ((min(var_9, ((3783563247 ? var_2 : var_1))))))))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_17 = -var_1;
        var_18 = ((~(arr_1 [i_0 + 1])));
        var_19 = var_8;
    }
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        var_20 = (min(var_20, ((((((((arr_1 [i_1]) && var_1)))) ? ((max(var_10, (arr_1 [i_1])))) : ((((arr_1 [i_1 + 2]) ? (arr_1 [i_1]) : ((~(arr_3 [i_1])))))))))));
        var_21 = (min((((!(arr_1 [i_1 + 2])))), (arr_2 [i_1])));
    }

    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_22 &= (max((((arr_5 [i_2]) ? var_4 : (arr_0 [i_2] [i_2]))), ((((~var_11) ? var_6 : var_2)))));
        arr_6 [i_2] = (min((((((~(arr_3 [i_2])))) ? var_4 : ((((arr_0 [i_2] [i_2]) ? (arr_0 [i_2] [i_2]) : var_0))))), (arr_1 [i_2])));
        var_23 *= ((var_15 ? var_5 : var_3));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_18 [i_2] [i_2] = (max((((arr_10 [i_6] [i_6] [i_6 + 3] [i_6 - 2]) ? var_8 : ((var_4 ? (arr_17 [i_6] [i_3]) : (arr_0 [i_5] [i_2]))))), (arr_9 [i_2] [i_2])));
                                var_24 = var_9;
                                var_25 = (max(var_25, (((-((((min(var_10, var_3))) ? (((min(var_15, var_11)))) : (var_12 & var_4))))))));
                                arr_19 [i_6] [i_5] [i_4] [i_3] [i_3] [i_3] [i_2] = (((max(var_16, var_4))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 1;i_8 += 1)
                        {
                            {
                                arr_26 [i_8] [i_4] [i_4] [i_4] [i_4] [i_4] = ((((((arr_23 [i_8] [i_8] [i_8 - 1] [i_8] [i_8] [i_8 - 1] [i_8]) ? (arr_23 [i_8] [i_8] [i_8 - 1] [i_8] [i_8] [i_8 - 1] [i_8]) : (arr_23 [i_8] [i_8] [i_8 - 1] [i_8] [i_8] [i_8 - 1] [i_8])))) ? (((arr_23 [i_8] [i_8] [i_8 - 1] [i_8] [i_8] [i_8 - 1] [i_8]) ? (arr_23 [i_8] [i_8] [i_8 - 1] [i_8] [i_8] [i_8 - 1] [i_8]) : (arr_23 [i_8] [i_8] [i_8 - 1] [i_8] [i_8] [i_8 - 1] [i_8]))) : var_7));
                                var_26 = ((var_7 ? var_5 : var_2));
                                var_27 = (arr_25 [i_8] [i_3]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 12;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            {
                                arr_32 [i_9] = ((var_4 ? ((((!((((arr_16 [i_10] [i_9] [i_4] [i_3] [i_3] [i_3] [i_2]) ? (arr_15 [i_10] [i_4]) : (arr_11 [i_9])))))))) : (max((((125 ? (-2147483647 - 1) : 33482))), (((arr_14 [i_2] [i_2] [i_2] [i_2]) ? var_12 : var_9))))));
                                var_28 = (max((((arr_12 [i_9 + 2]) & ((var_0 ? var_8 : var_3)))), 0));
                            }
                        }
                    }
                    var_29 = (((((var_3 + (arr_25 [i_4] [i_2])))) ? -var_15 : (arr_20 [i_4] [i_4] [i_3] [i_3] [i_2])));
                }
            }
        }
    }
    #pragma endscop
}

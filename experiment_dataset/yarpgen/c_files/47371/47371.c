/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_20 = (arr_5 [i_0] [i_1] [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_21 = (((arr_0 [i_3 + 2]) ? (arr_0 [i_3 - 2]) : (((arr_0 [i_3 - 2]) ? (arr_0 [i_3 + 2]) : var_13))));
                            arr_13 [i_1] = 73502473;

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 24;i_4 += 1)
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_1] [i_3] [10] [i_4] = (arr_8 [i_0] [1] [i_3] [i_1]);
                                var_22 = (((arr_6 [i_1]) < (arr_5 [i_0] [i_1] [i_1])));
                                var_23 = (((arr_10 [i_1]) ? var_11 : (arr_10 [i_1])));
                                var_24 = (((1 ? (arr_5 [i_0 + 3] [i_1] [i_0]) : -716584289118999010)));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                {
                    arr_24 [i_5] = (max(var_6, (((arr_18 [5] [5]) ? (arr_18 [i_5] [i_5]) : (arr_19 [i_7] [i_6] [i_5])))));
                    arr_25 [i_6] [i_5] = (arr_19 [i_7] [i_6] [i_5]);
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            {
                                arr_31 [i_5] [i_6] [i_7] [i_9] = (8 ? 27765 : ((69 ? (((arr_20 [i_8] [i_5]) ? (arr_22 [i_6] [i_6] [i_5]) : 1277783241)) : (arr_19 [i_9] [i_6] [i_6]))));
                                arr_32 [i_5] [i_5] [i_6] [i_5] [6] [i_8] [i_9] = ((((arr_20 [i_5] [i_9]) ? -45 : (arr_29 [i_5] [i_5] [i_7] [i_7] [i_8 - 1] [3]))));
                            }
                        }
                    }
                    arr_33 [i_5] = ((((!(arr_30 [i_7] [i_6] [20] [i_7] [15] [1]))) ? (((arr_27 [i_7] [i_6]) ? (max(var_13, -1277783241)) : 2147483626)) : (((arr_27 [i_7] [2]) ? (arr_20 [i_5] [i_5]) : (arr_27 [i_6] [i_7])))));
                }
            }
        }
    }
    var_25 = (((((-114 ? var_8 : ((var_0 ? var_15 : var_1))))) ? var_9 : ((((min(var_5, var_16))) ? var_1 : var_19))));
    #pragma endscop
}

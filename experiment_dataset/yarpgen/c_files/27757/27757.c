/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_0] [i_1] [i_0] [i_0] [i_1] = (((arr_4 [i_0]) ? var_0 : (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])));
                                arr_15 [5] [i_2] [i_0] = (arr_1 [i_0 + 1] [i_0 + 1]);
                                arr_16 [i_3] [0] [9] [i_4] [7] [i_0] [i_0] = arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0];
                                arr_17 [i_0] [i_0] [3] [i_3] [7] = var_10;
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                    {
                        var_12 = ((~(arr_2 [i_0] [i_2 - 1])));
                        arr_20 [i_0] [i_1] [i_0] [i_0] [i_5] = arr_12 [1] [i_1] [i_1] [i_1] [i_1] [i_1];
                    }
                    for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
                    {
                        var_13 = (((-9223372036854775807 - 1) ? (arr_6 [i_0] [i_1] [i_1] [i_1]) : (!-3626152767815417880)));
                        var_14 = 4294967295;
                    }
                    for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
                    {
                        var_15 = 6;
                        arr_26 [i_0] [i_0] [i_2] [1] [i_0] = ((((((97 ? 91448343 : 50151)))) ? ((4294967274 ? 149 : (arr_1 [i_2] [i_7]))) : ((-972339196937733550 ? -1 : (arr_21 [i_0] [i_0] [i_2 + 2] [i_1] [i_2])))));
                    }
                    for (int i_8 = 1; i_8 < 8;i_8 += 1)
                    {
                        arr_31 [i_0] [i_0] [i_2] [1] [i_1] = arr_5 [i_0 + 1] [i_0];
                        arr_32 [i_0] [i_2] [i_0] [i_0] = ((1 ? -5961114175817788679 : var_10));
                        var_16 = (arr_4 [i_2]);
                        var_17 = -5;
                    }
                }
            }
        }
    }

    for (int i_9 = 0; i_9 < 13;i_9 += 1)
    {
        arr_35 [i_9] = (arr_34 [i_9]);
        arr_36 [i_9] = (((((((arr_34 [i_9]) ? var_1 : var_0))) ? (arr_34 [i_9]) : ((11126940766017701530 ? 3600417 : (arr_34 [11]))))));
    }
    var_18 = var_0;
    var_19 = var_8;
    #pragma endscop
}

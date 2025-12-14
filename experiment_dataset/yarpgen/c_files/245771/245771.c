/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(((var_1 ? var_11 : var_11)), (((~var_5) ^ var_10))));
    var_18 = var_13;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_16 [i_4] [i_3] [i_1] [i_2] [i_1] [i_0] [i_0] = ((((arr_9 [i_1 - 2] [i_1 - 2] [i_1 - 1] [i_2 + 1] [i_4 - 1]) && (arr_9 [i_1 - 1] [i_2] [i_2] [i_2 + 4] [i_4 - 1]))) ? (((!(arr_9 [i_1 - 1] [i_1] [i_2] [i_2 + 3] [i_4 - 2])))) : (((!(arr_9 [i_1 - 1] [i_2] [i_2] [i_2 + 4] [i_4 - 3])))));
                                arr_17 [0] [i_1] [i_1] [i_3] = (((min(-1950450959, var_8)) <= ((((arr_0 [7] [i_0]) ? (arr_8 [i_0] [i_0] [i_1] [i_0]) : 255)))));
                            }
                        }
                    }
                    var_19 = (max(var_19, (min((min((arr_15 [i_1 - 2] [i_1 - 1] [i_1 - 2] [i_1 + 1] [i_2 + 2] [i_2 + 1]), 169)), (arr_6 [i_1 + 1] [i_1 - 1] [i_1 - 2])))));
                }
            }
        }
        arr_18 [i_0] = var_5;
        /* LoopNest 3 */
        for (int i_5 = 4; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 11;i_7 += 1)
                {
                    {
                        var_20 = (max(var_20, (arr_9 [i_6 - 1] [i_6 - 1] [i_6 - 1] [1] [i_7])));
                        var_21 = var_11;

                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            var_22 = var_13;
                            arr_30 [i_8] [10] [8] [i_5] [11] = arr_5 [i_5 - 2] [i_5 - 2];
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 21;i_9 += 1)
    {
        arr_33 [i_9] = (arr_32 [i_9 + 1]);
        arr_34 [i_9] [i_9] = (arr_31 [i_9]);
        arr_35 [i_9] [i_9] = 2287828610704211968;
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 12;i_10 += 1)
    {
        arr_40 [i_10] = (45486 || 128);
        arr_41 [i_10] [i_10] = var_3;
        arr_42 [i_10] [i_10] = -var_9;
    }
    var_23 = -var_0;
    var_24 -= -111;
    #pragma endscop
}

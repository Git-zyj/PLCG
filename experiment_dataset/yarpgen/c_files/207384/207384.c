/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_7 [i_0] [i_0] [i_1] [1] = ((-(arr_3 [i_0] [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_12 [i_2] [i_2] [i_2] = 2885392635;
                                arr_13 [i_0] [i_0] [i_2] [i_3] [i_4] [i_1] = (2885392652 / -4718621860533952365);
                            }
                        }
                    }
                    arr_14 [i_0] [i_1] [i_2] = min(((max((arr_10 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]), var_9))), ((var_8 ? ((-1410579559181704712 ? (arr_1 [i_0]) : 875340050)) : var_1)));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            {
                                arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_17 [i_1] [i_1] [i_7]);
                                var_12 = (((((var_10 ? (arr_18 [i_6] [i_1] [i_5] [i_6]) : var_1))) ? ((var_2 ? var_2 : var_6)) : 27424));
                                arr_24 [12] [i_1] [i_1] [i_1] [i_1] [12] [i_1] = 23;
                                var_13 = ((-(arr_17 [i_0] [i_1] [i_5])));
                                var_14 = -67;
                            }
                        }
                    }
                    arr_25 [i_0] [11] = ((arr_9 [i_0] [i_1] [i_1] [i_5]) ? 23 : ((-(arr_19 [12] [i_1] [i_5] [i_1]))));
                }
                var_15 = (max((((!(arr_21 [i_1] [i_0] [i_0] [i_1] [i_0] [i_1] [i_0])))), (((arr_21 [i_1] [i_1] [i_1] [i_0] [i_0] [i_0] [i_0]) ? (arr_21 [i_1] [i_1] [i_1] [i_0] [i_1] [i_1] [5]) : 14))));
            }
        }
    }
    #pragma endscop
}

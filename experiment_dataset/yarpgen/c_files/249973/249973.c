/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1] = -var_9;
                arr_5 [i_0] [i_1] [i_1] = ((((-(arr_3 [i_0] [i_1] [i_1]))) >> ((var_3 ? var_3 : (min((arr_2 [i_1] [i_0]), 559325288))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_15 = (((-(arr_12 [i_2] [i_3]))));
                                arr_21 [i_2] [i_3] [i_3] [i_6] = (!var_11);
                                var_16 |= ((max(-5607086287177485089, 2282716731)));
                                arr_22 [i_2] [i_3] [i_4] [i_5] [i_6] = var_10;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 17;i_8 += 1)
                        {
                            {
                                arr_29 [i_8 - 1] [i_3] [i_4] [i_8 - 1] [i_2] = (((((16383 ? 16404 : var_9))) ? (arr_20 [i_8 + 3] [i_8 - 1] [i_8] [i_8 + 2] [i_8 + 2] [i_8 + 2] [i_8 + 2]) : ((((arr_28 [i_8 - 1] [i_8 + 2] [i_8 + 2] [i_8 + 3] [i_8 - 1] [i_8 + 3]) <= (arr_28 [i_8 + 3] [i_8 - 1] [i_8] [i_8] [i_8 - 1] [i_8 + 3]))))));
                                var_17 |= var_8;
                                var_18 &= (-(arr_9 [0] [0] [i_4]));
                            }
                        }
                    }
                    var_19 &= var_7;
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            {
                                arr_38 [i_2] [19] [i_10] [i_9] [i_3] = 16404;
                                arr_39 [i_2] [i_3] [i_4] [i_4] [i_3] [i_4] = ((((((arr_10 [i_9] [i_9] [i_9]) ? (arr_13 [1] [i_4]) : var_2))) ? (arr_16 [i_3]) : ((-(arr_34 [i_2] [i_2] [i_4] [i_9] [i_10])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

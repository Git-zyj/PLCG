/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 9;i_3 += 1)
                    {
                        {
                            arr_9 [i_3] [i_3] [i_2] [i_3] [i_2] = (((((((var_12 ? 0 : (arr_2 [i_3] [i_2] [i_0])))) ? (1852988945195822481 | 6005642316495918785) : var_8))) ? (arr_8 [8] [i_2] [i_3]) : (((arr_5 [i_3]) ? 7 : (((arr_0 [i_2]) ? var_15 : 32505856)))));
                            var_17 = ((-((84 ? (min(var_10, var_14)) : (min(70231305224192, (arr_3 [i_0] [i_2] [i_3 - 3])))))));
                        }
                    }
                }
                arr_10 [6] [i_1] [i_0] &= (((((-(arr_3 [i_1 - 1] [i_1 + 1] [i_1 - 2])))) ? (arr_1 [i_1 - 2]) : (!16593755128513729107)));
                var_18 ^= (arr_0 [i_0]);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 21;i_6 += 1)
            {
                {
                    var_19 |= arr_11 [0];
                    arr_17 [i_4] [1] [i_6 + 1] &= 1125899890065408;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 3; i_7 < 9;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 10;i_8 += 1)
        {
            {
                var_20 = (arr_19 [i_7]);
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 11;i_11 += 1)
                        {
                            {
                                var_21 = (max(var_21, (arr_0 [i_7 - 2])));
                                var_22 = (-98 ? (arr_2 [i_9] [2] [i_11]) : var_8);
                                var_23 ^= arr_21 [i_10] [i_8 - 1];
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

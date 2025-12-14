/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_8;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = (min(((-(0 - 1))), (((arr_2 [i_0]) ? (((arr_1 [i_0] [i_0]) ? 1 : 1)) : 0))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_16 [1] [0] [i_3] [11] [i_3] [i_3] [i_4] = (((min(1, -1)) * (~1)));
                                var_20 ^= ((((arr_8 [i_0] [i_1] [i_4]) ? ((min(var_12, 1))) : (!var_15))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                arr_21 [i_5] [i_1] [i_2] [i_5] [i_6] = (max(1, 1));
                                var_21 = (((((arr_10 [1] [i_6] [14] [i_1 - 1]) ? 1 : (arr_10 [i_6] [i_6] [1] [i_1 - 2]))) - (((!(~-9))))));
                            }
                        }
                    }
                }
            }
        }
        arr_22 [i_0] = 0;
        arr_23 [i_0] = 31;
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                {
                    var_22 = 0;
                    arr_33 [i_8] [i_7] = (((((arr_32 [i_7]) ? 1 : -32)) << (((arr_28 [i_7] [i_8]) + 53))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                {
                    arr_42 [i_10] [i_11] = -90;
                    arr_43 [1] [1] &= ((7 ? 0 : 1));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 0;i_12 += 1)
                    {
                        for (int i_13 = 2; i_13 < 21;i_13 += 1)
                        {
                            {
                                var_23 *= (1 - 1);
                                arr_50 [1] [1] [i_10] [i_11] [10] [i_11] [i_13] = (arr_32 [i_13 + 1]);
                                arr_51 [i_11] [i_10] [i_11] [1] [i_13] = arr_37 [6] [6] [i_11];
                                var_24 = ((-(arr_30 [i_10] [i_11] [i_12])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

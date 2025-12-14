/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    var_12 &= ((min(((var_5 ? var_7 : 34585), (max(17, var_7))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_13 = min(-114, (max(22, (min(-25129, var_6)))));
                                var_14 *= ((((((arr_6 [i_1 - 2] [i_3] [i_4]) ? 169 : var_10))) / (max((arr_11 [i_0] [i_1] [i_2] [i_1] [i_4] [i_3]), (min((arr_5 [i_0] [i_1 + 1] [i_2]), var_3))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 4; i_5 < 9;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_15 += ((-(min(26, ((~(arr_3 [i_5] [i_7])))))));
                                var_16 = (((9844296274301327629 > (((-10452 ? (arr_2 [i_6]) : (arr_18 [i_7] [2] [i_5] [i_1] [i_0])))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 ^= min(var_8, var_2);
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 14;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 12;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 4; i_11 < 12;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 11;i_12 += 1)
                        {
                            {
                                var_18 = (min(var_18, ((max(((((arr_28 [i_9] [i_10 + 1] [0] [i_12] [i_12 + 2]) ? 255 : -25869))), (((arr_23 [i_11 + 1]) / 1705945707)))))));
                                var_19 = (min(var_19, ((((min(((-(arr_20 [i_10] [i_12]))), -2578)) == -2428275)))));
                            }
                        }
                    }
                    arr_34 [i_8] [i_9] [i_8] &= min((min((arr_29 [i_10] [i_10 + 2] [i_10 - 1] [i_10] [i_10] [i_10]), var_1)), var_10);
                    var_20 ^= ((~((var_7 ? var_5 : (arr_21 [i_10])))));
                }
            }
        }
    }
    #pragma endscop
}

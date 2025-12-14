/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_9 [11] = 40212;
                            var_17 = (max(12, 40354));
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_17 [i_4] = (((-3388 < 25182) ? (var_0 + 0) : (arr_3 [i_4 + 1] [i_4])));
                                var_18 -= arr_10 [3] [i_6];
                                arr_18 [6] [i_5] [i_4] [i_1] [i_4] [i_1] [i_0] = 33833;
                                arr_19 [i_0] [i_1] [i_4] [i_4 + 1] [i_5] [i_4] = (arr_8 [i_0] [i_1] [i_1] [i_4 + 1]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 2; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            {
                                var_19 += ((32761 ? (arr_11 [i_0] [i_0 + 3]) : (arr_6 [2])));
                                arr_24 [i_0] [i_1] [i_4] [i_0] [i_4] = -var_16;
                            }
                        }
                    }
                    var_20 = (((arr_20 [i_0 + 2]) ? 3 : (arr_20 [i_0 + 2])));
                }
                var_21 = (max(var_21, ((min(((-((min(25182, 22437))))), 32743)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 15;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                {
                    var_22 = ((9858 ? (((arr_26 [i_9]) / (arr_26 [i_9]))) : (arr_26 [i_9])));
                    var_23 = ((((((var_16 ^ (arr_30 [i_11] [i_9] [i_9])))) ? ((~(arr_29 [i_11] [i_10]))) : ((min((arr_29 [i_9] [i_11]), 9933))))));
                    var_24 = min((min(var_6, (arr_26 [i_11]))), (arr_26 [i_9]));
                }
            }
        }
    }
    var_25 = ((-1 ? 32743 : 22341));
    #pragma endscop
}

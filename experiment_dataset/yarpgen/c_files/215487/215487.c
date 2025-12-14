/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_3] [i_2] [i_4] [i_4] |= ((+(min(((-4596 ? (arr_5 [i_3]) : var_2)), -4616))));
                                var_16 = -4598;
                                var_17 -= (arr_13 [i_3]);
                                var_18 = (arr_1 [i_0] [i_1]);
                                arr_15 [i_0] [i_1] [i_1] [i_1] [i_4] = (min(17825178475936270439, 4597));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 14;i_7 += 1)
                        {
                            {
                                var_19 += (min(var_0, ((-(arr_11 [i_6] [i_7 - 2] [i_0] [i_0 - 3])))));
                                arr_23 [8] [8] [16] [i_6] [i_1] [8] [i_0] = ((-((-31581 ? -122 : 32767))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        for (int i_9 = 3; i_9 < 9;i_9 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        {
                            var_20 += (max(84, var_0));
                            var_21 = ((!((min(((-1349215650 ? 31580 : (arr_11 [i_9] [i_9] [i_10] [i_11]))), var_10)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 13;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 12;i_13 += 1)
                    {
                        {
                            var_22 |= ((var_9 < ((min((arr_33 [i_8] [i_13 - 1] [8] [i_13] [i_8]), 16305)))));
                            arr_39 [i_9] [i_9] [i_12] [i_13 + 1] [i_8] = arr_5 [i_9];
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

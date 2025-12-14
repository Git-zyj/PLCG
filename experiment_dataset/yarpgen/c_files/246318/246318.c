/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_19 = (arr_3 [i_1] [i_1] [i_1 - 1]);
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_20 = (((arr_5 [i_0]) ^ var_0));
                                var_21 -= ((((max((arr_6 [i_1 - 1] [i_2] [i_3] [i_3]), var_7))) ? (arr_6 [i_1 - 1] [i_3] [i_3] [3]) : ((-(arr_6 [i_1 - 1] [i_3] [0] [i_4])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (max(var_22, (min(77933372, var_18))));
    /* LoopNest 3 */
    for (int i_5 = 3; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 21;i_7 += 1)
            {
                {
                    var_23 = (arr_11 [i_6]);

                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        var_24 = (((~2089369637) << (((((arr_16 [i_6] [i_7 - 3] [i_5 + 1]) ? var_14 : (arr_16 [i_5] [i_7 - 4] [i_5 - 3]))) - 6692011710944856032))));
                        var_25 = (((max((~var_5), (arr_18 [i_5] [i_5 - 2] [i_5])))) ? (((-(arr_18 [i_7 - 3] [i_6] [i_6])))) : (arr_17 [i_5 - 3] [i_6] [i_7] [i_7] [i_8] [i_8]));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        var_26 = (arr_17 [i_5] [2] [10] [i_5] [1] [i_5]);
                        var_27 = ((arr_18 [i_7 - 4] [i_9] [i_9]) ? ((-(arr_15 [1] [i_6] [i_5] [i_7]))) : ((((arr_11 [i_5 - 2]) / (arr_18 [i_9] [i_6] [i_9])))));
                    }
                    var_28 = var_8;
                }
            }
        }
    }
    #pragma endscop
}

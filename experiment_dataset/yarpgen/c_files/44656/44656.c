/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((var_17 ? var_5 : (~5)))) ? var_16 : var_10));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    arr_9 [i_0] [16] = 1;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_19 = (max(var_19, (120 * 165)));
                                arr_15 [17] [i_1] [i_1] [i_3] [i_4] = -169;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_20 = (max(var_20, (((((((arr_18 [i_0] [i_1] [i_2] [i_0] [1]) ? (arr_11 [i_6] [i_2] [i_2] [i_1] [i_0]) : (arr_2 [i_5])))) ? (((arr_20 [i_1] [i_2 - 2] [i_2 - 2] [i_6]) ? ((var_17 ? (arr_18 [i_0] [3] [i_0] [i_0] [15]) : var_7)) : (arr_19 [13] [13] [11] [i_6]))) : ((((((arr_6 [i_1] [23] [i_6]) >> (183 - 156)))) ? 70368677068800 : -70368677068777)))))));
                                arr_21 [8] = (arr_14 [i_0] [i_1] [i_2 - 1] [i_2] [i_5 - 2] [i_1]);
                                var_21 = (arr_17 [i_5 + 1] [i_1] [i_2 - 2] [i_5] [i_6]);
                                arr_22 [i_1] [i_2] [i_5] [i_6] = ((((arr_17 [i_5 - 1] [i_2 - 2] [i_0] [i_0] [12]) > (arr_6 [i_5 - 3] [i_2 - 2] [i_2 - 2]))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

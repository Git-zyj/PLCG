/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_1] = 1349611219;
                arr_6 [i_0] [i_1 - 3] = 1;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 9;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_14 = 63;
                                var_15 = ((var_0 || ((!(((0 ? -24 : 65535)))))));
                                var_16 = 0;
                                var_17 = (min((max((!65522), (((arr_9 [i_5] [i_5] [i_4]) ? var_3 : var_10)))), 3));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            {
                                arr_26 [i_2 + 1] [i_3] [i_4] [i_3] = ((((min((max(-32757, var_0)), (((var_0 ? (arr_3 [i_4]) : 24)))))) ^ (max(1341064934, var_6))));
                                var_18 = (max((max((arr_16 [i_3] [i_3] [i_3] [i_4] [i_7] [i_8]), (arr_1 [i_8]))), ((max(var_7, var_2)))));
                                arr_27 [i_2] [i_8] [i_7] [i_3] [i_2] [i_2] [i_2] = (arr_15 [i_2] [i_3] [i_7] [i_7 - 2] [i_2]);
                                arr_28 [i_3] [i_4] [i_3] = (((!var_1) ? (arr_1 [i_7]) : var_9));
                                var_19 = 22474;
                            }
                        }
                    }
                    arr_29 [i_3] [0] [i_3] = (arr_4 [i_4] [i_4 + 4] [10]);
                }
            }
        }
    }
    #pragma endscop
}

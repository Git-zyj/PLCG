/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;
    var_14 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_15 = ((((((var_8 ? (arr_12 [i_0] [i_1] [i_2] [i_3] [i_1]) : var_10)) % (arr_2 [i_2] [5]))) << (((((arr_6 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1]) ? (arr_6 [i_0 + 1] [17] [i_0 - 1] [i_0 - 1] [i_0 + 1]) : (arr_6 [i_0 - 1] [i_0] [i_0 + 1] [i_0 - 1] [i_0 - 1]))) - 33838))));
                                var_16 = ((((((arr_11 [i_4 - 1] [i_4 - 3] [i_4 - 3] [i_4 - 1] [i_4 - 3]) ? (arr_11 [i_4 - 2] [i_4 + 1] [17] [i_4 - 2] [i_4 - 2]) : (arr_11 [i_4 - 1] [i_4 - 1] [i_4] [i_4] [i_4])))) ? (((arr_0 [i_4 - 1]) & (arr_4 [i_1]))) : (((((~(arr_2 [i_1] [i_1]))) | ((var_6 ? (arr_12 [i_0] [i_0] [i_0] [i_0 - 1] [i_0]) : (arr_12 [10] [5] [6] [i_1] [i_0]))))))));
                            }
                        }
                    }
                }
                arr_13 [19] [i_1] = (((var_10 / ((-(arr_1 [i_0]))))));
                arr_14 [i_1] [i_1] = var_2;
                var_17 += ((arr_9 [i_0 - 1]) ? (((arr_3 [i_0 + 1]) ? (arr_10 [i_0 - 1] [i_0 - 1]) : var_10)) : (arr_10 [i_0 + 1] [i_0 + 1]));
                arr_15 [i_1] = (arr_4 [i_0]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            {
                arr_21 [i_5] [i_5] [i_5] = (arr_19 [i_6]);
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 8;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 8;i_8 += 1)
                    {
                        {
                            arr_29 [i_6] [4] [i_6] [i_7] = (((-(arr_23 [i_5] [i_5] [i_7] [i_7]))));
                            arr_30 [7] [i_7] [i_7] [1] = ((var_0 && (arr_12 [i_5] [i_5] [i_5] [i_5] [i_5])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

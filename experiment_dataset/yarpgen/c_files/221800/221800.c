/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (((arr_1 [i_0] [i_1]) ? (arr_1 [i_0] [i_1]) : (arr_4 [i_0] [i_0] [i_1])));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_18 [i_4] [10] [i_2] [i_0] [i_4 + 1] [i_1] [i_2] = (arr_17 [1] [i_0] [i_3 + 1]);
                                var_18 *= arr_6 [i_0] [i_1] [i_2] [i_3];
                                var_19 = (((((arr_12 [1]) ? (arr_14 [i_3] [i_4 + 1] [i_2] [i_3] [i_2]) : (arr_9 [i_0] [i_0] [i_0] [i_0])))) ? ((-(arr_14 [i_3 - 1] [i_1] [15] [i_4 + 1] [i_1]))) : (((arr_6 [i_3 - 2] [i_4 + 2] [i_4] [i_4 + 1]) ? (arr_6 [i_3 - 1] [i_4 + 1] [i_4 + 1] [i_4 + 1]) : (arr_9 [i_3 + 1] [i_4 + 2] [i_0] [i_4 + 2]))));
                                var_20 = (arr_7 [i_0] [i_2] [i_0]);
                            }
                        }
                    }
                }
                arr_19 [i_0] [i_1] [i_0] = (arr_1 [i_0] [i_0]);
                var_21 = ((-((((-(arr_3 [i_0] [i_0])))))));
                arr_20 [i_0] = (arr_0 [i_0]);
            }
        }
    }
    var_22 = (max(var_22, var_2));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            {
                var_23 = (arr_26 [i_5]);
                var_24 = (min(var_24, (arr_22 [i_5] [2])));
            }
        }
    }
    var_25 = ((~((var_7 ? var_2 : (!var_7)))));
    #pragma endscop
}

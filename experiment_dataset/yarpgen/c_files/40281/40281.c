/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_2] = var_9;
                    var_19 = ((var_8 / (arr_0 [i_0] [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_2] [i_1] [i_4] = ((((-(var_13 | 1))) * (((arr_5 [i_2] [i_2] [10] [i_2]) ? var_17 : (arr_1 [i_0 - 1] [i_0 - 1])))));
                                var_20 -= ((-(((arr_5 [i_1] [i_1] [i_2] [i_3]) - 3))));
                                var_21 *= ((max((arr_6 [i_0] [i_1]), var_11)));
                            }
                        }
                    }
                    var_22 = (arr_5 [i_2] [1] [1] [i_0]);
                }
            }
        }
    }
    var_23 = var_11;
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            {
                var_24 = (max(var_24, ((((arr_13 [i_5] [i_5]) ? (arr_14 [i_5] [i_6 - 1]) : (min(var_14, (arr_15 [i_6 - 1] [i_6 - 1] [i_6 - 1]))))))));
                arr_18 [i_5] = (((5036559931266345809 ? var_18 : (arr_17 [i_5]))) >> (((((arr_17 [i_5]) ? var_18 : (arr_17 [i_5]))) - 8973042218794540013)));
            }
        }
    }
    #pragma endscop
}

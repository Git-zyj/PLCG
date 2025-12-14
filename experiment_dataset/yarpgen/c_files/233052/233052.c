/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_18 ^= ((var_13 >> (var_7 - 3622716633)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_19 *= (((((((max(-9209, (arr_6 [7] [7] [7])))) ? (((arr_2 [i_0]) ? 9208 : var_4)) : var_3))) ? ((((1 < 1156745311) ? var_2 : 1))) : ((9213 ? (-32767 - 1) : 6916883979294269666))));
                                var_20 = (32749 + 2553889152837515707);
                                var_21 = (((((+((min((arr_9 [12] [i_3] [i_3] [22] [i_1] [17]), var_17)))))) ? 2598229250514328657 : (max((arr_0 [i_0]), ((min(95, 0)))))));
                                var_22 = 1;
                            }
                        }
                    }
                    var_23 = (min(((var_6 ? 15202 : (arr_1 [i_0]))), (((!((((arr_4 [2] [2]) ? (arr_4 [i_0] [i_1]) : 9211))))))));
                }
            }
        }
    }
    var_24 = var_12;
    #pragma endscop
}

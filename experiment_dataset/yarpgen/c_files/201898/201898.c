/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_15;
    var_19 = ((-((var_0 ? ((max(var_7, var_4))) : 1756891805))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_20 = ((~(((min((arr_4 [i_1]), var_7))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_21 = ((((min(((27298 ? (arr_5 [i_0]) : -27289)), (var_6 ^ var_17)))) ? (((arr_1 [i_0] [i_0]) ? ((((arr_11 [i_0] [i_1] [i_1]) ? var_4 : (arr_9 [i_0] [i_1] [i_2] [i_1] [i_3] [i_4])))) : ((-(arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (((var_7 ? ((27298 ? (arr_4 [i_0]) : var_15)) : var_13)))));
                                var_22 = (max(var_22, (((!(arr_10 [i_1] [i_1] [i_2] [i_2] [i_3]))))));
                                var_23 = (((((((min(27298, var_10))) != (arr_2 [i_0])))) << (-1756891833 + 1756891846)));
                                var_24 = ((((min((arr_0 [i_2]), (arr_5 [i_0])))) ? (min((min(var_5, (arr_10 [i_0] [i_1] [i_1] [i_0] [i_0]))), 114)) : (((var_9 ? (((-9223372036854775807 - 1) ? (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : 2261939923)) : (((((arr_2 [i_0]) == -27298)))))))));
                                var_25 = 9223372036854775807;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

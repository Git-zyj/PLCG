/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_3] [i_2] [i_1] [i_1] [i_0] = (min((~var_9), ((min((((arr_7 [6] [6] [i_3] [i_4]) + (-127 - 1))), ((((arr_12 [i_0] [i_1] [i_2] [i_3 - 2] [i_4]) ? var_7 : -605772046))))))));
                                arr_15 [i_0] [i_0] [i_1] [i_0] [i_3 - 3] [i_4] [i_4] = var_16;
                            }
                        }
                    }
                }
                var_19 = -605772045;
                arr_16 [i_0] [i_1] [i_0] = ((-(((arr_3 [i_0] [i_1] [i_0]) ? (arr_3 [i_0] [i_0] [i_0]) : var_3))));
                arr_17 [i_0] [i_0] = ((((min((((arr_12 [8] [8] [i_1] [i_0] [i_0]) + (arr_10 [4] [i_0] [i_1] [i_1]))), (((arr_4 [i_0] [i_0] [i_1]) - var_11))))) ? ((((((arr_5 [i_0] [i_0]) ? (arr_8 [i_0] [i_0] [i_1] [i_0]) : (arr_12 [i_0] [i_0] [i_0] [i_0] [i_1])))) ? (max(-11199, 17873606379361009301)) : -605772054)) : (arr_10 [i_1] [i_1] [11] [11])));
            }
        }
    }
    var_20 = ((((min(((var_17 ? var_2 : (-127 - 1))), (~var_10)))) ? (max((~var_6), (var_7 || 605772024))) : var_4));
    var_21 = var_3;
    #pragma endscop
}

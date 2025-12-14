/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, ((min(var_5, (!0))))));
    var_12 = -21726;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            arr_14 [i_0] [i_0] [i_2] [i_0] [i_4] [i_4] [i_2] = (arr_9 [i_0] [i_0] [i_1 + 2] [i_4]);
                            arr_15 [i_1] [i_0] = arr_7 [i_0] [i_0] [i_2] [i_3];
                        }
                        arr_16 [i_0] [i_1] [i_0] [i_1] [i_2] [i_3] = ((!(arr_1 [i_1 + 2] [i_1 + 1])));
                    }
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        arr_20 [i_0] [i_1] [12] [i_2] [11] [i_0] = 0;
                        arr_21 [i_0] [i_0] [14] [1] [i_0] [i_0] = ((((min(((min(73, var_2))), (min((arr_17 [13] [i_0] [i_0] [6]), 4247465152278618138))))) ? (min((min(-21844, (arr_9 [i_0] [i_0] [5] [i_5]))), -4247465152278618149)) : -1391260383));
                    }
                    arr_22 [i_0] [i_1] [i_1] [i_2] = (min((((-(!6752917740290414584)))), (min(var_4, (min(var_6, 4247465152278618142))))));
                }
            }
        }
    }
    #pragma endscop
}

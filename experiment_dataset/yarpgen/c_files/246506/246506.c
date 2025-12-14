/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max((((((var_11 ? var_6 : var_5))) ? var_0 : var_10)), var_1));
    var_16 = (~var_1);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = (min((max((arr_3 [i_0] [i_1] [i_1]), (max((arr_4 [16]), 460364242)))), (~var_14)));
                    arr_9 [i_0] [i_0] [i_2] = var_2;
                    var_17 = ((+(((((min((arr_5 [i_1] [i_0] [i_2] [i_2]), (arr_1 [i_0]))))) - (arr_7 [i_2] [i_1] [i_1] [i_1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_18 = ((max(var_3, var_12)));
                                arr_16 [i_2] [i_2] = (arr_13 [i_0]);
                            }
                        }
                    }
                    arr_17 [i_1] [i_1] = ((max((arr_10 [i_0] [12] [i_2] [i_2] [i_2]), ((var_1 ? 10569879811886169383 : 10569879811886169385)))));
                }
            }
        }
    }
    #pragma endscop
}

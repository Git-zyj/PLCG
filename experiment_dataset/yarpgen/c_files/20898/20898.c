/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_13 = 140;
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_17 [15] [i_1] [i_1] [i_2] [i_3] [i_3] = (max((((max((arr_7 [i_0] [i_2] [13]), (arr_3 [i_3 - 2] [i_1]))) % var_2)), ((((max((arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_3]), -2135266778))) - var_0))));
                                arr_18 [i_0] [i_3] [i_0] = (((((((-2135266772 + 2147483647) >> (var_11 - 14213282321222636409))))) == (max((arr_4 [i_0 + 2] [i_3 - 2]), (((arr_12 [i_4] [i_4] [i_3] [i_4]) << (((arr_10 [i_0] [i_0] [i_0]) + 130))))))));
                                arr_19 [14] [i_4] [i_1] [i_1] [i_1] [i_0] &= (max((arr_1 [i_0 + 3]), ((((arr_11 [i_0 + 2] [0]) ? (!-2135266750) : var_4)))));
                            }
                        }
                    }
                    var_14 = (min(var_14, (((var_5 ? 62 : 902792084)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 24;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            {
                var_15 = (max(var_15, 2135266787));
                arr_24 [i_6] = var_12;
            }
        }
    }
    #pragma endscop
}

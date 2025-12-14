/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= (max(var_6, var_11));
    var_14 = (max(var_8, var_6));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [14] |= (max((arr_8 [i_2 - 1]), -1626748875));
                    var_15 = var_5;
                    var_16 = ((-((max((arr_3 [i_1] [i_1 - 2] [i_2]), 205)))));
                }
            }
        }
    }

    for (int i_3 = 2; i_3 < 18;i_3 += 1)
    {
        arr_12 [i_3] = (((arr_10 [i_3 - 1]) ? (arr_10 [i_3 - 1]) : (arr_10 [i_3 - 1])));
        arr_13 [i_3 + 1] = (max((arr_11 [i_3 + 4]), (max(var_12, -183))));
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            {
                var_17 |= max(((~(arr_15 [i_4]))), 3011931077);
                var_18 = (-127 - 1);
            }
        }
    }
    #pragma endscop
}

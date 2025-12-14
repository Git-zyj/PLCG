/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        arr_2 [4] |= (min((max((arr_0 [i_0 + 4]), 536870912)), ((min(var_3, var_16)))));
        var_18 = (min(var_18, ((max((min(var_3, (arr_1 [i_0 + 4] [i_0]))), (!var_15))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_19 |= ((~((max(0, 105)))));
                    arr_7 [i_0] [i_1] [i_2] [i_2] = (~8140079681431359738);
                    var_20 ^= (((-((min(255, 10244))))));
                }
            }
        }
        var_21 = (min(-var_11, (min((arr_6 [i_0 + 3] [i_0 + 4] [i_0]), var_7))));
    }
    var_22 |= (min(242, 1));
    var_23 = min((min(var_10, (min(var_12, var_5)))), var_12);
    var_24 = var_16;
    #pragma endscop
}

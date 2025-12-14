/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = var_5;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    arr_10 [i_0] [1] [i_1] [i_0] = (((max((((arr_7 [i_0]) ? (arr_6 [i_2 - 2] [i_1 - 2] [i_0]) : var_5)), (var_15 && var_12))) & (((arr_8 [9] [i_1 + 3] [i_0]) ? ((~(arr_9 [i_0] [10] [10] [i_2]))) : (max(var_1, var_8))))));
                    var_20 = max(var_19, (min((arr_2 [i_0] [i_1 + 4]), var_2)));
                }
            }
        }
        var_21 += (+(((arr_8 [i_0 - 1] [i_0] [0]) ^ (arr_1 [i_0 + 1]))));
    }
    var_22 = var_0;
    #pragma endscop
}

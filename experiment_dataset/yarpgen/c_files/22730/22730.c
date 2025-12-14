/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (arr_0 [10] [7]);
        var_15 = (max((max(16384, (arr_1 [i_0 - 2]))), (max((!-16360), (arr_0 [15] [15])))));
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 14;i_3 += 1)
            {
                {
                    var_16 = var_9;
                    var_17 = ((((max((arr_7 [i_2] [6] [i_3 + 1]), (~var_6)))) - (var_0 & -16385)));
                }
            }
        }
        arr_11 [i_1] = ((~((max((arr_3 [i_1 + 1]), 16366)))));
        var_18 = (min(var_18, (arr_4 [i_1 + 2] [i_1 + 1])));
    }
    var_19 = -16382;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_0] = 4393751543808;
                    var_15 = -2147483624;
                    var_16 *= ((((((((arr_1 [i_2]) ? 7 : var_1)) ^ (var_10 - var_5)))) ? var_10 : (((arr_3 [i_2 - 3] [18]) ? (arr_3 [i_2 + 1] [i_0]) : (arr_3 [i_0] [i_1])))));
                    arr_9 [7] [i_1] [i_0] = (max((arr_3 [3] [i_1]), 1023));
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((0 >> (31360 - 31340)));
    var_21 = (((min((var_0 * var_2), var_6)) < (-31357 - var_9)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_22 += ((var_7 + (((arr_3 [i_1 - 1] [i_1 + 1] [i_1 + 1]) ? (arr_3 [i_1 + 1] [i_1 - 1] [i_1 - 1]) : (arr_3 [i_1 + 1] [i_1 + 1] [i_1 - 1])))));
                var_23 &= (arr_0 [i_0]);
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_9;
    var_20 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_21 = (((arr_3 [i_0] [i_0]) ? (arr_6 [i_0 + 3] [i_0 - 2] [i_0 + 3]) : (arr_4 [i_0 - 1])));
                var_22 = -17766;
            }
        }
    }
    var_23 = (min(var_23, var_1));
    #pragma endscop
}

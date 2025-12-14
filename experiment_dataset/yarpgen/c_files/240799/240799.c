/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_11 = arr_0 [2];
                var_12 = (!-2935);
            }
        }
    }
    var_13 = ((((((1 ^ var_3) ? 40 : (var_9 | var_10)))) & (max((max(var_0, -10659)), 65))));
    #pragma endscop
}

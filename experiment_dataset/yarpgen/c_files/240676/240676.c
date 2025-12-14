/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = min(var_3, var_8);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_16 = ((max((arr_4 [i_1 + 1]), var_14)));
                var_17 = (arr_5 [i_1] [i_1 - 1]);
            }
        }
    }
    var_18 = (max(var_18, var_12));
    #pragma endscop
}

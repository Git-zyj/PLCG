/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_11 = -9;
                var_12 += (((arr_3 [i_0]) || (~65535)));
            }
        }
    }
    var_13 = ((14300825149179617666 >> (((min((~896954111), (781228519 >= -21392))) + 896954169))));
    var_14 = var_7;
    #pragma endscop
}

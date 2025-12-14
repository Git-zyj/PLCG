/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_17 = (arr_3 [i_0] [i_1]);
                var_18 = (arr_4 [i_1] [i_0]);
            }
        }
    }
    #pragma endscop
}

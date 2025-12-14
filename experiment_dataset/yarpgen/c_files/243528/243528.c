/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_19 *= max((max((-9085102068040714218 || 9085102068040714218), (arr_1 [i_0 - 1]))), (arr_0 [i_1]));
                var_20 *= (((arr_1 [i_0]) % (arr_1 [i_0])));
            }
        }
    }
    var_21 = var_3;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_16 = (((((((arr_2 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : var_4))) ? (arr_2 [i_1 - 1] [i_1 - 1]) : 0)));
                var_17 = min(var_8, ((2196 << (((-127 - 1) + 138)))));
            }
        }
    }
    var_18 -= (((((min(-66, (var_11 + var_15))) + 9223372036854775807)) >> (((min(255, ((125 ? -15450 : 55088)))) + 15510))));
    #pragma endscop
}

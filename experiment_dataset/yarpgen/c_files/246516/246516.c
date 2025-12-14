/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((max(var_13, var_5))) ? var_11 : ((((~var_4) ? ((-2003775011394014551 ? -30 : 17)) : var_4))));
    var_15 = var_9;
    var_16 |= ((((min(203, (49719491 & -535368367)))) ? var_12 : ((((~67108863) && var_11)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_17 ^= ((((-32 ? (arr_1 [i_1]) : 0)) ^ (!1)));
                arr_4 [15] [i_1] [i_1] = ((!((min(14, -10)))));
            }
        }
    }
    #pragma endscop
}

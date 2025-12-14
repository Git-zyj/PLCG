/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((max((~643956750), 23578))) ? (min(1265981076, 1265981076)) : var_14);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_16 &= (min(0, 23600));
                var_17 -= (((arr_1 [3]) ? (min(47429, 2686407976)) : var_7));
                var_18 += 1265981076;
            }
        }
    }
    #pragma endscop
}

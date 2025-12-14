/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_13 = ((~((60 ? 7774386370431581687 : 57))));
                var_14 |= (!-62);
                var_15 = 72;
            }
        }
    }
    var_16 = 13223;
    var_17 |= (min(var_6, (max((127 * 1), (~122)))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((34359738367 | ((var_5 ? (~var_4) : (4398046511103 | var_0)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_11 = 1;
                var_12 *= var_9;
            }
        }
    }
    #pragma endscop
}

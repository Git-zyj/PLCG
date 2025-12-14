/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_18 = (min(var_18, (15354 && -15355)));
                var_19 = ((-((~(-2147483647 - 1)))));
            }
        }
    }
    var_20 = (((min((var_9 ^ 1), 64)) - var_0));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_13 = (min(((max(var_7, 1429872264811284168))), var_5));
                var_14 = (((-9223372036854775807 - 1) | 0));
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;
    var_15 = (((min(var_5, var_1))));
    var_16 = (max(((max((max(-59, -18662)), var_0))), (~var_7)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_17 ^= (~5265337207614582147);
                var_18 = -106;
            }
        }
    }
    #pragma endscop
}

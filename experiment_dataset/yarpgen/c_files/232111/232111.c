/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232111
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_12;
    var_19 = 8723931118654657878;
    var_20 = (max(var_17, (min(var_11, (min(-8723931118654657864, -1))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_21 = (max(1, -2));
                var_22 &= ((~(1 != 4249376377)));
                var_23 = 260412174534128901;
            }
        }
    }
    #pragma endscop
}

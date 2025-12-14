/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_17 = (max(var_17, -143));
                var_18 += (max((((((~var_2) + 2147483647)) >> (var_7 || 42))), (!120)));
            }
        }
    }
    var_19 &= var_10;
    #pragma endscop
}

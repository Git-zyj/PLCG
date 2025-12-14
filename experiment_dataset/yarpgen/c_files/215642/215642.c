/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_14 |= (1 ^ -1);
                var_15 = (min(var_15, (~1018908888)));
            }
        }
    }
    var_16 = var_8;
    #pragma endscop
}

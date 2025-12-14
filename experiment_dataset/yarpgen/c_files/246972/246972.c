/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_15 = (max(var_15, (((var_14 * (((var_8 ? var_1 : 397248526))))))));
                var_16 = (max(var_16, ((((((max(3133065120805281003, -20188)))) > (((var_6 - -20188) | var_4)))))));
            }
        }
    }
    var_17 -= var_9;
    var_18 ^= ((39147 ? -18674 : 19665));
    #pragma endscop
}

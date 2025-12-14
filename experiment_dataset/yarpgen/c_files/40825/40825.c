/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_19 = ((!(~-762481347)));
                    var_20 = (min(var_20, (((var_4 ? -55 : 166)))));
                }
            }
        }
    }
    var_21 = var_1;
    var_22 |= var_7;
    var_23 &= var_17;
    #pragma endscop
}

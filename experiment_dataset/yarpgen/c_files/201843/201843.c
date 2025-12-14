/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, var_19));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_21 = (~-var_6);
                    var_22 = ((((min(-1929227835, var_7)))) ? -1096006612 : var_15);
                }
            }
        }
    }
    #pragma endscop
}

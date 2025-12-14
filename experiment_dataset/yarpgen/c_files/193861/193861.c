/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1] = 65535;
                arr_5 [i_0] [i_0] [i_1] = (min(-1795731763, var_16));
                arr_6 [i_1] = -6098375425394734424;
            }
        }
    }
    var_19 = (min(var_19, -8117648572865990448));
    #pragma endscop
}

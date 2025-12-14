/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = (max(var_16, (((((min(-23836, 16069284387935367085))) * ((((max(var_13, 0)) | (!16069284387935367085)))))))));
                var_17 = ((-(max((arr_3 [i_0 + 2] [i_0] [i_0 - 1]), var_10))));
            }
        }
    }
    var_18 = var_11;
    var_19 = (~var_6);
    #pragma endscop
}

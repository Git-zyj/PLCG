/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;
    var_15 = (max((((var_11 ? 13925674721641915099 : -124))), var_12));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_16 = ((((124 ? 4521069352067636517 : ((min(65535, 9223372036854775807))))) < (((1 ? 3274896053646675564 : -127)))));
                var_17 = (~-283752025158109588);
                var_18 = ((max((~-124), -1597542653)));
            }
        }
    }
    #pragma endscop
}

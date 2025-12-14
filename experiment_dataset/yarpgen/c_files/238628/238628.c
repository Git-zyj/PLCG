/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_12 = (max(var_12, (arr_6 [i_1])));
                var_13 = ((+(max((arr_5 [i_0] [i_1 - 1] [i_1 - 2]), var_7))));
                var_14 -= min((~1), (((!(arr_0 [i_0] [i_1 - 2])))));
                var_15 = 7558;
            }
        }
    }
    var_16 += (((((var_10 ? ((min(var_9, -7570))) : (~21205)))) & (((!121) | var_3))));
    #pragma endscop
}

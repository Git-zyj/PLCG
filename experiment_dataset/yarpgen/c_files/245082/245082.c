/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(((951074297 ? ((min(var_6, (-9223372036854775807 - 1)))) : ((var_8 ? -8203753698256474080 : 18446744073709551607)))), 951074291));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_16 = 11;
                    arr_6 [i_0] [14] [5] [14] = ((((min((arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 1]), var_9))) ? (max(185, 803582674240735710)) : ((max((((arr_5 [i_0] [i_1]) ? var_2 : var_6)), (arr_2 [i_2 + 1] [i_2 + 2] [i_2 + 1]))))));
                }
            }
        }
    }
    var_17 = ((var_4 ? var_0 : (max(var_0, (((-3721855127546109492 + 9223372036854775807) >> (126 - 110)))))));
    var_18 = var_2;
    #pragma endscop
}

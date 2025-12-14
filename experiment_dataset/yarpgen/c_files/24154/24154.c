/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += 0;
    var_16 = var_14;
    var_17 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_18 = ((-(((arr_0 [i_1]) * (((arr_1 [i_0] [i_0]) ^ 2511667259))))));
                arr_6 [i_0] [1] &= ((1 ? (((((arr_0 [i_0]) ? (arr_2 [i_0] [i_0] [i_0]) : 1622921428)))) : -1529486909));
            }
        }
    }
    var_19 = var_6;
    #pragma endscop
}

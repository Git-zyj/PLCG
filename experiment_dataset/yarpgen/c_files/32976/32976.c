/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 *= (arr_0 [i_0] [i_1]);
                var_19 = (max(var_19, ((((61205 != (var_14 - var_5)))))));
                arr_4 [i_0] [i_0] = ((max((((arr_2 [i_0] [i_1] [i_0]) ? (arr_0 [i_1] [i_1]) : var_13)), var_16)));
            }
        }
    }
    var_20 &= (((-1 ? ((var_9 ? var_17 : var_11)) : ((min(1, var_2))))));
    var_21 = ((var_10 ? 1 : 255));
    var_22 = (min(var_5, ((var_1 ? (var_2 && 1) : (~var_9)))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_17 ? (39343 / var_4) : var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_21 = ((((max((arr_0 [i_0]), 39343))) ? (((((31258 ? 62462 : 32764))) ? ((min(40972, var_3))) : 4)) : (max(((~(arr_3 [i_0] [i_1] [i_0]))), ((var_10 ? 16352 : var_6))))));
                var_22 = var_11;
                var_23 ^= (max((!var_12), -4808));
            }
        }
    }
    var_24 = (max(var_8, (max((47012 - 12288), ((max(var_15, 19159)))))));
    #pragma endscop
}

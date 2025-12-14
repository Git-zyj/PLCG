/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    var_11 = ((~((((var_5 % 64302) <= (((-9223372036854775807 - 1) ? var_3 : var_9)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_12 = (~(max((arr_2 [i_0 + 3] [i_1 + 1]), var_9)));
                var_13 = (((((1 ? (arr_0 [i_0 - 2]) : (-9223372036854775807 - 1)))) ? (((~(arr_6 [i_0] [12] [i_0])))) : (((28672 ^ var_6) * (53 & -2058744230922941269)))));
            }
        }
    }
    var_14 = var_7;
    var_15 = var_1;
    #pragma endscop
}

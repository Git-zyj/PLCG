/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_11 ^= ((((min(3454804097, (!1)))) ? (min(-var_8, var_5)) : (((((var_1 ^ var_2) >= 1437442305))))));
                var_12 = (min((((min(5720074587522581325, var_9)) / (arr_5 [i_1 - 1] [i_1] [i_1]))), (((((var_5 ? var_6 : var_4))) ? (arr_2 [i_1 + 2]) : (10912338421132800601 - var_8)))));
            }
        }
    }
    #pragma endscop
}

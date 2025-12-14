/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = min(var_9, (((-63 ? -66 : 4294967293))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = var_11;
                var_20 += ((+((4294967293 ? (arr_0 [i_0 + 1]) : (arr_3 [i_1] [1] [i_0 - 2])))));
            }
        }
    }
    var_21 = (max(66, 1));
    var_22 = (max(var_22, ((min(var_13, var_5)))));
    var_23 ^= ((((((2 == -62) ^ var_17))) ? (min(var_5, -3)) : var_9));
    #pragma endscop
}

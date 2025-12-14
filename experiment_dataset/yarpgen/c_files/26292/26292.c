/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= var_11;
    var_14 = var_3;
    var_15 = var_2;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = -27;
                    arr_10 [i_0] [i_0] = (arr_4 [i_0] [i_0]);
                    var_16 = (arr_5 [i_0]);
                    arr_11 [i_1] |= (arr_8 [i_2 - 3] [i_0]);
                }
            }
        }
        arr_12 [6] &= ((~(-25868 + 8884757670930580175)));
    }
    #pragma endscop
}

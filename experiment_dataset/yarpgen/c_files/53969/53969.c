/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= (((((((min(65535, var_2))) ? -1 : var_3))) ? (((var_5 == var_8) ? 1040187392 : (~9214))) : ((var_6 % ((var_1 ? var_1 : var_5))))));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0 - 1] = -1;
        var_14 = ((max(268427264, var_11)));
        var_15 = (arr_3 [i_0 - 1] [i_0 - 1]);
        arr_5 [i_0] [i_0] = -25967;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_16 = ((((268427264 ? var_6 : (arr_6 [i_1])))) | (((min(-25967, -1)))));
        var_17 -= 14;
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    var_18 *= (var_2 ? (min((arr_3 [i_4] [i_3 + 2]), 110)) : ((min(6325, 1023))));
                    var_19 ^= (~9097520283695416313);
                }
            }
        }
        var_20 ^= ((var_9 ? (arr_17 [1]) : var_7));
    }
    #pragma endscop
}

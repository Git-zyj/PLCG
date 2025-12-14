/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53440
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_11 [1] [i_3] [i_2] [2] = (((18446744073709551615 >= 18446744073709551615) / 17089544677414591534));
                        arr_12 [i_0] [i_0] [i_0] [i_3] = 127;
                    }
                }
            }
        }
        var_14 = var_9;
    }
    for (int i_4 = 3; i_4 < 13;i_4 += 1)
    {
        arr_16 [i_4] = (var_3 / -19094);
        var_15 = (((max(20790, 1357199396294960081))));
    }

    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_16 = (min(var_16, (((-(((117 / 1) ? 16874546721527490813 : (16874546721527490813 + 1572197352182060802))))))));
        var_17 = ((1834876900 * (min(1357199396294960081, 1))));
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (14623159281188321350 + (max((65530 / var_13), 6359688464163476015)));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 23;i_3 += 1)
                {
                    {
                        var_15 -= (max(((((var_0 - 65530) ? (((arr_9 [8] [8] [i_0] [8] [8] [8]) / 1)) : -25653))), (((~-6359688464163476022) ? (~var_2) : (arr_9 [i_0] [i_0] [i_0] [12] [i_2 - 1] [i_2 - 1])))));
                        arr_10 [i_0] [i_1] [19] [i_1] [19] = ((6 ^ (((~2720495432432278774) ? (arr_0 [i_2 - 1] [i_1 - 1]) : (max((arr_1 [10]), 2720495432432278774))))));
                        arr_11 [i_0] [i_1] [i_1] [i_3] = (14623159281188321350 ? 1 : 174);
                    }
                }
            }
        }
        var_16 = ((max(6359688464163476009, -6359688464163476039)) - var_6);
        var_17 = (min(var_17, ((((((arr_3 [i_0] [i_0] [i_0]) - (arr_3 [i_0] [i_0] [i_0])))) ? (min((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_9 [18] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (55271 * 14623159281188321334)))));
        arr_12 [i_0] = (min(var_3, (arr_7 [i_0] [i_0])));
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        arr_17 [i_4] = var_9;
        arr_18 [i_4] = max((((arr_0 [i_4] [i_4]) ? (((arr_6 [i_4] [i_4] [i_4]) ? var_0 : 6277)) : -6359688464163475993)), ((((((arr_6 [i_4] [i_4] [i_4]) ? 11673839851200545158 : (arr_6 [i_4] [i_4] [i_4])))) ? var_9 : var_5)));
    }
    for (int i_5 = 1; i_5 < 16;i_5 += 1)
    {
        arr_23 [i_5] [14] = (((~((min(var_4, (arr_19 [0])))))));
        arr_24 [i_5] = (min(28089, (arr_5 [i_5 + 2] [i_5] [i_5])));
    }
    #pragma endscop
}

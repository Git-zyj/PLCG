/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_15 = ((((((arr_3 [i_0] [19] [i_1 + 2]) / 32754)) / (var_4 * 32758))) * ((-(((arr_2 [i_0]) ? var_12 : (arr_3 [i_0] [i_1] [i_1 + 2]))))));
                var_16 = ((((((0 << (((arr_2 [16]) - 79)))))) >> (var_10 + 3567667223945978300)));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                {
                    var_17 = (arr_5 [i_2] [i_2]);
                    var_18 = ((-(((((arr_6 [i_2]) != 0)) ? (min((arr_4 [i_3]), (arr_10 [i_2 - 2]))) : ((((arr_12 [i_2] [i_2] [i_2] [i_4]) >= 1)))))));
                }
            }
        }
    }
    var_19 = -6323354538274040108;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_7 == (((((var_6 ? var_5 : var_9))) ? (var_10 & 29743) : var_3))));
    var_12 += ((((((-29743 ? -29742 : 29741)) + 2147483647)) << (var_4 - 8610)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {
                        var_13 = (min(var_13, ((((((((299332971002636803 ? 120 : (arr_9 [i_0] [i_0] [4] [i_0] [i_2] [i_3 + 3]))) / (arr_6 [i_0] [i_1] [0])))) ? (((arr_2 [i_0]) & ((29741 ? 179 : (arr_1 [0] [i_1]))))) : ((min((-9223372036854775807 || 16723167361203120575), (arr_0 [i_0])))))))));
                        var_14 -= (min((max((arr_2 [i_1 - 1]), 9223372036854775794)), ((max((arr_7 [0]), (arr_7 [0]))))));
                        arr_10 [i_0] [i_3] [i_2] [i_3 + 1] = ((~(min(-186925023, 125))));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            {
                                var_15 += -9223372036854775794;
                                arr_16 [i_0] [i_0] &= (min(4294967295, (arr_0 [i_0])));
                            }
                        }
                    }
                    arr_17 [i_0] [i_1] [1] [i_2 - 1] = ((((((10366 ^ 43274) ? ((-991629815 ? (arr_12 [i_0] [i_1] [i_0] [i_0] [i_2] [i_0]) : (arr_11 [i_0] [i_0] [i_2] [i_0] [i_2 - 1] [8]))) : 29741))) + (max((((arr_9 [8] [i_2] [6] [6] [i_0] [i_0]) & 3486566063)), -659621504))));
                }
            }
        }
    }
    var_16 = 551453841;
    var_17 = (min(var_17, 2136762688));
    #pragma endscop
}

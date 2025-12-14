/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_11 [i_1] [i_1] [i_2] [i_2] = ((~(max(var_13, (arr_8 [i_3])))));
                            arr_12 [i_0] [i_1] [i_0] = var_4;
                            arr_13 [i_1] [i_0] [i_1] [6] [i_0] [i_0] = ((((17348 ^ 1) > -var_9)) ? (((var_11 ^ 1956655566) << (((max(-2144463144, 2144463147)) - 2144463124)))) : ((((~-5469325467415180169) ? (((arr_9 [i_0] [i_1] [i_1] [i_2] [9] [i_3]) ? var_12 : var_6)) : -1956655557))));
                            var_14 = (max(var_14, (((((-2144463141 ? 65530 : var_7)))))));
                            arr_14 [i_1] [i_1] [i_1] [i_1] = (((((~((var_6 ? var_8 : var_11))))) ? (((1956655555 ^ (((var_13 + 2147483647) << (var_10 - 46)))))) : (((~var_11) | var_10))));
                        }
                    }
                }
                var_15 = (max(var_15, (((min(((((arr_5 [i_0] [i_0] [i_1]) ? var_12 : 175538450))), (~var_6)))))));
                var_16 = (min(var_16, 1));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    arr_24 [i_4] [i_6] [i_4] [i_6] = (((((((arr_15 [6] [6]) + 9223372036854775807)) << (((~-2144463132) - 2144463131)))) >> ((((var_3 ? ((var_7 ? -27964 : var_8)) : ((31733 ? var_2 : 255)))) + 27999))));
                    var_17 ^= (var_11 ? (min(234, var_6)) : (((arr_15 [i_5 + 2] [11]) ? (arr_15 [i_5 - 1] [i_5]) : 1956655561)));
                }
            }
        }
    }
    var_18 += (((((var_10 ? var_7 : var_3))) && ((((var_5 ? var_12 : var_7)) >= (min(var_0, -1956655567))))));
    #pragma endscop
}

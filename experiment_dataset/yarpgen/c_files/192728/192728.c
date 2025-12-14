/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [i_0] = ((((min((arr_3 [i_0]), (arr_6 [i_0] [i_1] [i_2])))) ? ((((min(-22, 15546))) ? 7221224710231992300 : ((var_2 >> (((arr_7 [i_0] [6] [i_1] [i_2]) - 114)))))) : (((arr_5 [i_1]) ? (var_8 != 49) : (var_10 ^ 45)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_12 = ((16320 ? -28 : (arr_13 [i_0] [i_0] [i_4])));
                                arr_16 [2] [0] [i_0] = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 8;i_6 += 1)
        {
            {
                arr_21 [i_5 + 1] [i_5] [i_6 - 1] = (min((((arr_17 [5] [i_5 + 1]) ? (arr_18 [i_5]) : 37)), (~var_6)));
                var_13 = (min(var_13, ((((((~((var_8 ? (arr_18 [i_5 - 1]) : var_1))))) != (var_4 ^ 0))))));
            }
        }
    }
    var_14 = (min((~var_5), (max(((min(var_2, 137))), var_4))));
    var_15 |= ((var_7 ? ((var_0 ? ((min(0, var_10))) : (var_6 | 218))) : (((var_8 <= ((var_10 ? -1 : var_6)))))));
    #pragma endscop
}

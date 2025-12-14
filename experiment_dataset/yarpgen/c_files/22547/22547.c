/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_0] [i_0] = ((+(((arr_0 [i_0 - 2] [i_1 - 1]) ? (arr_4 [i_0 - 2]) : (arr_0 [i_0 - 2] [i_1 + 1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_10 = ((((var_4 ? (arr_2 [13]) : 3899203632))) ? ((min((arr_0 [i_0] [i_3]), 17343658830974601960))) : (18407339519356267960 | 17317308137472));
                                var_11 = ((~(-32767 - 1)));
                                arr_14 [i_4] = -109;
                                var_12 = (max(var_12, ((~((-68 ? 1403086136 : var_4))))));
                                var_13 = (min(var_13, ((min(var_8, (var_6 & -70))))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 1; i_5 < 14;i_5 += 1)
    {
        arr_17 [i_5] [i_5] = var_2;
        var_14 = ((((!((min(var_8, (arr_9 [i_5] [i_5] [i_5] [i_5])))))) ? var_3 : (arr_1 [i_5 + 1])));
    }
    var_15 = 67;
    #pragma endscop
}

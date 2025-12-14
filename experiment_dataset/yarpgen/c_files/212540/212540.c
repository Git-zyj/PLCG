/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_2] = ((-(arr_1 [i_0])));
                    var_18 = ((((((-(arr_7 [i_1]))) + ((((arr_6 [i_1] [i_2]) + var_3))))) - (var_16 <= 104)));
                    arr_11 [i_0] [i_1] [i_2] [i_2] = ((((min(((96 ? (arr_5 [i_0]) : (arr_7 [i_1]))), -106))) ? (arr_0 [i_2] [i_1]) : (min(var_9, (((var_10 ? var_8 : 270279414)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_18 [i_2] [i_1] [i_2] [i_3] [i_4] = (arr_17 [i_0] [i_1] [i_2] [i_3]);
                                arr_19 [i_2] = ((((!((max(-1353017861, -106))))) ? var_9 : ((((!82) << (((max(var_13, var_7)) - 18446744073709551475)))))));
                                arr_20 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] = (((((0 ? -1353017861 : 23))) ? (max(var_12, var_15)) : -7851));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 1; i_5 < 13;i_5 += 1)
    {
        arr_24 [i_5] = (min((~-7), ((min((arr_5 [i_5 - 1]), (arr_5 [i_5 + 3]))))));
        var_19 = 105;
    }
    #pragma endscop
}

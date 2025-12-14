/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((~(-32767 - 1)))) ? (min((((-12224 ? var_10 : var_6))), var_7)) : var_10));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((((min((arr_1 [i_0] [i_0]), var_1)))) > (((((min((arr_1 [i_0] [i_0]), (arr_0 [i_0]))))) + var_3))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_12 = ((!((min(((min(-5321, var_5))), (min(231, 52843)))))));
                                var_13 = (min((min(var_1, (arr_14 [i_1 + 1] [i_1]))), (arr_9 [i_0] [i_1 + 1] [i_2] [i_3])));
                            }
                        }
                    }
                    var_14 = (min(((min((arr_9 [i_1 + 1] [i_1 + 1] [i_2] [i_2]), 1602197247))), 2703615758));
                    var_15 = (arr_3 [5] [i_1]);
                }
            }
        }
    }
    for (int i_5 = 2; i_5 < 18;i_5 += 1)
    {
        var_16 = ((((((((min(32752, (arr_15 [i_5 - 2]))))) + (min((arr_15 [i_5]), var_7))))) ? (arr_16 [i_5]) : 2147483647));
        var_17 = (!68719411200);
        arr_17 [i_5] [i_5] = ((((min((arr_15 [i_5 - 1]), (arr_15 [i_5 + 1])))) ? var_8 : (arr_15 [i_5 - 2])));
    }
    #pragma endscop
}

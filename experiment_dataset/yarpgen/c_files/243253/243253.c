/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_16 *= ((((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0])))) ? (arr_0 [11]) : ((32767 << (27730284291492892 - 27730284291492889)))));
        var_17 = (min(var_17, (((arr_1 [19] [19]) ? ((~(min((arr_0 [i_0]), (arr_0 [8]))))) : (arr_1 [i_0] [8])))));
        var_18 = ((((arr_0 [1]) ? var_2 : (arr_1 [i_0] [i_0]))));
    }
    var_19 = (min(var_19, ((max(-280083789, -1)))));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            {
                var_20 *= (~(max(3561983006, -1)));
                /* LoopNest 3 */
                for (int i_3 = 2; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 15;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            {
                                var_21 = -31240;
                                arr_16 [i_1] [i_1] [i_3] [8] [i_1] [i_1] = 1107211730;
                                arr_17 [i_3] = (((min((arr_1 [i_1] [i_4]), 1107211725)) >> (var_13 + 3113)));
                                var_22 *= max(var_4, (arr_8 [i_3 - 1] [i_2] [i_4 + 2]));
                            }
                        }
                    }
                }
                var_23 = ((1 / (((arr_9 [i_2]) ? 99 : 610014077))));
            }
        }
    }
    var_24 |= var_6;
    #pragma endscop
}

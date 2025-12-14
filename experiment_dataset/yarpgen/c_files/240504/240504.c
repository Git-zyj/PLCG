/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((min(var_0, 0))) ? ((((((7 ? -97 : -97))) ? var_5 : var_8))) : (((1 <= var_18) ? 9223372036854775800 : (-9223372036854775807 - 1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_20 = (((arr_2 [i_0]) && ((max(-80, 66)))));
                var_21 = (((((2731744481 + 2147483647) << ((((3979317240 << (var_10 - 29291))) - 2415394816))))) ? 1 : ((((arr_1 [i_0] [i_1]) != (1 || var_14)))));

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_22 = (((var_0 ? ((var_14 << (var_18 - 74)) : var_4))));
                                var_23 = (((~128) ? var_14 : ((((min((arr_1 [i_4] [i_1]), 1563222800))) ? (((arr_12 [i_0] [i_1] [i_2] [i_3] [i_4]) ^ (arr_11 [i_1]))) : ((var_4 ? var_13 : var_1))))));
                                var_24 = (((((~(min((arr_9 [i_0] [i_0]), var_15))))) ? (min(0, (arr_6 [i_2] [i_1] [i_2] [i_3]))) : (max((~var_7), (((arr_9 [i_2] [i_4]) ? var_14 : (arr_1 [i_1] [i_0])))))));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = var_7;
                                var_25 = (((~14839) ? (min(2147483647, 31118)) : 0));
                            }
                        }
                    }
                    var_26 = -97;
                }
            }
        }
    }
    #pragma endscop
}

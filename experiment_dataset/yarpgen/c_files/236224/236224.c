/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((!(!167)))) >> (var_0 + 25304)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                var_15 = (((!((min(var_10, var_12))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_13 [4] [i_1] = (((((81 ? 2946529220 : -105))) ? 1 : 44096));
                            arr_14 [i_0] [i_1] [1] [i_0] = (max(var_8, (((-(max(-244839191, 119)))))));
                            arr_15 [i_1] [1] [i_2] [i_2] [1] [i_1] = (arr_7 [i_3 - 3] [i_2] [i_1] [i_0]);
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    arr_19 [i_0] [i_1] = (arr_11 [i_0] [i_0] [i_0] [i_0]);
                    arr_20 [i_1] [i_1] = var_1;
                    arr_21 [i_0] [i_1] [1] [i_1] = ((((((arr_17 [i_1 - 1] [i_1 - 1] [i_1 - 1]) ? (min((arr_12 [6] [1] [i_1 - 3] [i_1 - 3] [1] [i_4]), 82838069)) : (arr_5 [i_1] [i_4])))) ? (arr_5 [i_1] [i_1 + 1]) : (max(((15843674672324813514 ? var_13 : (arr_8 [i_0] [i_1] [i_4]))), (!var_8)))));
                }
                for (int i_5 = 1; i_5 < 14;i_5 += 1)
                {
                    var_16 = min(-8594, (!101));
                    arr_24 [i_1] [i_1] = (((arr_18 [i_1 + 1] [i_1]) ? (min((arr_9 [i_1]), 0)) : ((min((arr_22 [4] [i_1] [i_5 + 1] [i_5 + 1]), (max(var_0, var_8)))))));
                }
                var_17 = var_2;
                arr_25 [i_0] [2] &= (-(!var_4));
            }
        }
    }
    var_18 = ((((((50410 ? var_1 : var_9)) ? (var_9 || var_2) : -601335176))));
    #pragma endscop
}

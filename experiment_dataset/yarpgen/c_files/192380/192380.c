/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_13 ^= ((((((arr_8 [i_3 - 1] [i_3 + 1] [i_3] [i_3 + 1]) + (arr_9 [i_3 + 1] [i_3 - 2] [i_3 - 2] [i_3 + 1])))) ? (((arr_8 [i_3 - 2] [i_3 - 1] [0] [i_3 - 2]) ? (arr_8 [i_3 - 1] [i_3 + 1] [i_3] [i_3 - 1]) : 12971368048840053685)) : (arr_8 [i_3 - 1] [i_3 + 1] [i_3] [i_3 + 1])));
                            arr_10 [i_0] [i_3] [i_0] = (((max((var_0 / var_7), (max((arr_4 [i_0]), (arr_9 [12] [i_0] [i_1] [i_0]))))) <= ((((26692 == (arr_1 [i_0])))))));
                            var_14 = var_12;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                arr_19 [i_5] [i_0] = (((arr_13 [i_1 + 4] [i_1 + 2]) ? (((((arr_14 [3] [i_1 + 1] [i_4] [i_5] [i_6]) & (arr_11 [i_1 + 3] [i_4] [i_6]))))) : (min((18385119881533939444 ^ 32762), (arr_3 [i_1 + 2] [17] [i_0])))));
                                var_15 |= (((((-(arr_17 [i_1] [i_5] [i_6])))) ? ((min((arr_3 [5] [i_6] [i_6]), (((9882642993502786043 < (arr_9 [i_1] [17] [i_1] [i_0]))))))) : var_2));
                                var_16 = ((var_10 ? ((max((max(-32763, -32763)), (arr_5 [i_0] [i_5])))) : ((min((!var_1), (max((arr_7 [i_0] [i_0] [i_0]), var_4)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = var_7;
    var_18 |= ((-((~((var_9 ? 32765 : var_7))))));
    var_19 |= min(((var_10 << ((((var_6 ? -6 : var_12)) + 54)))), ((~(min(14147771184612314890, var_9)))));
    #pragma endscop
}

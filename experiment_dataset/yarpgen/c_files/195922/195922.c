/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= (max((max(1334270136, ((-1334270153 ? 110 : var_1)))), (((~-1334270153) ? ((var_13 ? 62165 : var_14)) : (var_9 && var_1)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_14 [i_4 - 1] [i_1] [i_1] [i_0] [i_0] = ((997946082 > ((((arr_1 [i_0]) >= var_7)))));
                                arr_15 [i_0] [1] [5] [i_2] [i_0] [i_4] = ((1028817853 ? (~-57) : (((((var_0 ? 25101 : (arr_0 [i_3])))) ? ((var_14 << (((-51 + 63) - 12)))) : -57))));
                                arr_16 [i_3] [i_2] [i_2] [i_2] [4] = ((-1334270136 != (((((arr_6 [i_0] [4] [i_1]) ? (arr_12 [i_0] [i_1] [i_2] [i_3] [i_3]) : var_14))))));
                                arr_17 [i_0] = (arr_5 [i_0]);
                            }
                        }
                    }
                    arr_18 [i_2] [i_1 - 1] = (((1 + 1565000965) ? (max((arr_5 [i_1]), ((var_1 ? var_7 : (arr_1 [i_0]))))) : (((var_12 || var_9) ? (arr_6 [i_1] [i_1 - 1] [i_1]) : 62172))));
                    arr_19 [i_0] = (i_0 % 2 == 0) ? (((var_14 >> (((arr_11 [i_2] [i_0] [i_2]) - 24939))))) : (((var_14 >> (((((arr_11 [i_2] [i_0] [i_2]) - 24939)) + 17623)))));
                }
            }
        }
    }
    var_16 |= var_7;
    #pragma endscop
}

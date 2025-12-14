/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= (((((-557326343 ? -var_15 : var_2))) ? var_15 : 72));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            arr_11 [6] [i_2] [i_2] [i_3] = (((arr_9 [i_3] [i_1] [24] [i_3] [i_2]) <= (((~(arr_2 [i_0 + 3]))))));
                            var_20 -= 43187;

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 25;i_4 += 1)
                            {
                                arr_14 [i_0] [5] [i_1] [i_2] [13] [i_2] [i_4] = (var_9 && var_9);
                                var_21 = (~-29278);
                            }
                            arr_15 [1] [i_2] [4] [i_3] = (((((135 ? ((137 ? 3047961581860477530 : -29278)) : var_0))) ? (((var_3 ? var_13 : -27184))) : ((1976 ? 9385920205183257679 : var_5))));
                            arr_16 [i_2] [i_1] [i_2] [i_2] [5] [i_1] = (((((129 & (arr_6 [i_2])))) ? ((((arr_13 [i_0] [i_0] [i_0] [i_0 + 3] [i_2] [16] [i_2]) ? var_7 : var_3))) : (arr_6 [i_2])));
                        }
                    }
                }
                arr_17 [i_0] [i_0] [i_0] = (~var_10);
                arr_18 [10] [10] = (((((~var_12) ? 3260363074 : var_3))) ? 137 : ((((var_10 ? 1 : (arr_0 [23] [1]))) / (var_4 + 3636073792))));
            }
        }
    }
    var_22 ^= ((((((var_9 | var_14) ^ (~var_8)))) ? ((var_4 & (var_18 | var_10))) : var_16));
    #pragma endscop
}

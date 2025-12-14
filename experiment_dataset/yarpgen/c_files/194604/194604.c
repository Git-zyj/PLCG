/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_17 = (-(((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (((arr_3 [i_2]) ? (arr_2 [i_3] [i_3]) : var_2)) : (arr_4 [i_2 + 1]))));
                            arr_10 [i_0 + 2] [i_1 + 2] [i_0 + 2] [i_0] = ((var_1 ? var_2 : var_6));
                            var_18 -= (((((var_10 ? (arr_2 [i_1] [i_1]) : var_11)) | (arr_6 [i_1] [i_1] [1]))));
                        }
                    }
                }
                var_19 = (((var_10 ? -20359 : (-171084180 & -20359))));
                var_20 = (max(var_20, (((~(((((arr_6 [i_0] [i_1 + 1] [4]) | (arr_9 [i_0] [i_0 - 1] [i_1 + 1] [i_0] [i_0]))))))))));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        {
                            var_21 = (min(var_21, (((((((~(arr_8 [i_4 - 1]))) + 2147483647)) << (119 - 119))))));
                            arr_15 [i_0] [i_0] [i_0] [i_0] = (((~16339363401906069018) ? (arr_12 [i_1 + 2] [i_5] [i_0]) : (((20359 ? 1840570498 : -18480)))));
                            arr_16 [i_0] [i_0] [i_0] [i_0] = ((arr_11 [i_1]) ? -1 : (((((-(arr_8 [i_0 + 2]))) > -18472))));
                            var_22 = (((!1) ? (((~(arr_12 [i_0] [i_0 - 1] [i_0])))) : (((((arr_7 [i_0] [i_0] [i_1 + 1] [i_0]) && 20756)) ? (arr_14 [i_0] [i_0] [i_0] [i_1 + 2]) : (arr_0 [i_5])))));
                            var_23 *= ((!(((((((arr_14 [i_0] [i_0 + 2] [8] [i_0 - 3]) ? 18472 : -1))) & (((arr_6 [i_0] [i_0] [10]) & var_11)))))));
                        }
                    }
                }
                arr_17 [i_1 - 1] [i_0] = (((-(max(5245963528628969027, 7579001059231154508)))));
            }
        }
    }
    var_24 = (((-1 ? (~20359) : ((var_16 ? var_0 : var_11)))));
    #pragma endscop
}

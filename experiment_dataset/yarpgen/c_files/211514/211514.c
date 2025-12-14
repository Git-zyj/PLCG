/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_9;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        {
                            var_13 = arr_6 [i_2 + 2] [i_1] [i_1];
                            var_14 &= (arr_12 [i_0] [i_1] [i_2] [i_1] [i_1] [i_3] [i_0]);
                        }
                    }
                }
            }
            var_15 = (var_10 ^ -0);
            arr_13 [i_0] = -538111352;
        }
        for (int i_5 = 3; i_5 < 20;i_5 += 1)
        {
            var_16 = (((arr_6 [i_5] [i_0] [i_0]) ? (((arr_10 [i_0] [i_5 + 2] [i_5 + 2] [i_0]) ? (arr_10 [i_0] [i_0] [i_5 - 2] [i_5]) : (arr_10 [i_0] [i_0] [i_5 - 1] [i_5 - 1]))) : (max((~var_2), ((79 ? var_7 : 18446744073709551601))))));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    {
                        var_17 ^= (arr_16 [i_0] [i_0] [i_0] [i_0]);
                        var_18 = ((6147738060820794435 ? (arr_15 [i_0] [i_5 - 2]) : (((arr_12 [i_0] [i_0] [i_0] [i_5 - 1] [i_5 - 1] [i_6] [i_0]) & (1 < 27)))));
                        var_19 = (((((111 & (arr_9 [i_5] [i_6] [i_5] [i_7])))) ? (((!((((arr_18 [i_6]) & 18446744073709551604)))))) : var_4));
                    }
                }
            }
            var_20 = (max(var_20, var_0));
        }
    }
    var_21 = ((-(max(-18446744073709551601, (((var_10 ? var_5 : var_6)))))));
    var_22 = var_0;
    var_23 = ((var_11 ? (min(2457548726, 88)) : (max(var_5, ((var_12 ? var_5 : var_3))))));
    #pragma endscop
}

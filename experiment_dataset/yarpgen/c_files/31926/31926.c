/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= ((((~var_6) ? ((max(var_3, var_0))) : var_6)));
    var_12 = var_3;
    var_13 |= (~-118);

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_14 = (max(1521701737, -18));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_15 = (max(var_15, ((max((arr_10 [i_2]), (arr_7 [i_0] [i_1] [i_2] [i_3] [i_4]))))));
                                var_16 = ((-(arr_8 [i_0] [i_0])));
                                arr_11 [i_0] [i_0] [i_0] [i_2] [i_3] [i_4] = var_1;
                                var_17 = (max(var_17, (((-1521701737 ? 18446744073709551615 : ((max(-1521701737, 298149293))))))));
                                var_18 = (((((arr_4 [6] [i_0]) ? (arr_6 [i_3] [i_0] [i_3] [i_3]) : (arr_6 [i_0] [i_0] [i_2] [i_4]))) / (arr_6 [i_0] [i_0] [i_2] [i_3])));
                            }
                        }
                    }
                    var_19 *= (((((var_5 ? ((max(var_10, 1))) : (((arr_1 [i_1] [i_2]) ? (arr_3 [i_1] [i_1] [i_1]) : (arr_5 [i_0] [i_0] [i_2] [i_0])))))) - (max((((arr_2 [i_2] [i_1]) - (arr_6 [i_0] [i_1] [i_2] [18]))), var_5))));
                }
            }
        }
        arr_12 [i_0] = (arr_4 [1] [i_0]);

        /* vectorizable */
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            var_20 *= (((arr_1 [i_5] [i_5]) >= var_7));
            var_21 ^= 8991987667339456159;
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    {
                        var_22 = ((~(arr_3 [i_0] [i_7 - 1] [i_0])));
                        arr_22 [i_0] [i_0] [i_7] [i_8] = 298149293;
                    }
                }
            }
        }
    }
    for (int i_9 = 1; i_9 < 6;i_9 += 1)
    {
        var_23 *= ((max(((var_0 <= (arr_13 [0] [i_9 + 2] [0]))), (arr_1 [i_9 + 3] [4]))));
        var_24 = (min((((!(arr_2 [4] [i_9 + 1])))), (((~((var_2 / (arr_6 [i_9 + 3] [4] [4] [i_9]))))))));
    }
    var_25 = (min((max(var_9, var_4)), ((((var_4 | 1) ? (~var_3) : -7090969019441480785)))));
    #pragma endscop
}

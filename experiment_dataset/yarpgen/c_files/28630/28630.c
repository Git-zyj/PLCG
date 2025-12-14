/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28630
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((((var_4 ? var_4 : var_1))) ? var_12 : var_13))) ? 7204 : ((var_6 ? ((14843184356387911025 ? var_12 : var_1)) : var_1))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_16 = var_12;
        var_17 = var_4;
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_4 [i_1] = ((-(min(2305843009213693952, -0))));

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_18 = (min(1, ((~(arr_5 [i_2])))));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_19 = min(((var_13 ? var_4 : (arr_5 [1]))), var_4);
                            var_20 = (min((max((arr_12 [i_1] [i_2] [i_5] [i_5] [i_4]), 15116)), 18446744073709551598));
                            var_21 = min((arr_10 [i_1] [i_2] [i_2] [1]), var_11);
                            arr_13 [i_1] [i_1] [i_1] [i_1] [4] [1] = 16140901064495857660;
                        }
                    }
                }
            }
        }
        var_22 = ((min((arr_3 [i_1]), (arr_6 [i_1] [i_1] [i_1]))));
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                {
                    var_23 = (min(16140901064495857664, 0));
                    var_24 = (max(var_24, (((((((arr_15 [i_6 + 1] [i_6 + 1]) ? var_9 : (arr_15 [i_6 - 2] [i_6 + 1])))) ? ((min((arr_15 [i_6 + 1] [i_6 - 2]), (arr_15 [i_6 - 2] [i_6 - 1])))) : 54)))));
                }
            }
        }
    }
    #pragma endscop
}

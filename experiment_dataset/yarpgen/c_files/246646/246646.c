/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_20 = ((((max(1, 65533)))));
                var_21 = (((((-(arr_2 [i_0] [i_0] [1])))) || 108));
                var_22 = (((max(65535, var_14)) ^ (arr_2 [i_0] [i_0] [i_1])));
            }
        }
    }

    for (int i_2 = 2; i_2 < 20;i_2 += 1)
    {
        var_23 ^= ((-((-(arr_6 [1])))));
        var_24 = (min(var_24, (arr_5 [i_2])));
    }
    for (int i_3 = 2; i_3 < 14;i_3 += 1)
    {

        for (int i_4 = 3; i_4 < 14;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 2; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 13;i_7 += 1)
                    {
                        {
                            var_25 = ((var_3 ? (min(var_19, 117)) : (((((((arr_12 [i_3] [i_4 + 1] [i_3]) ? (arr_19 [10] [i_4] [i_4] [i_6] [i_7] [i_7]) : -5103845051847781903)) > var_15))))));
                            arr_22 [i_3] [i_4] [i_3] [i_4] [i_5] [i_6] [i_7] = ((((~(((((arr_10 [i_4]) + 2147483647)) >> (var_17 - 3218))))) & ((~(arr_16 [i_4] [i_6] [i_4] [i_4])))));
                            arr_23 [i_4] = -28552;
                        }
                    }
                }
            }
            var_26 = (((((~(arr_4 [i_4] [i_4] [i_4 - 3])))) ? (((arr_19 [i_4 + 1] [i_4] [i_4] [1] [i_4 - 2] [i_4 - 1]) ? (arr_16 [i_4] [12] [i_4 - 3] [12]) : (arr_4 [i_4] [i_4] [i_4 - 3]))) : (arr_4 [i_4] [i_4] [i_4 - 3])));
        }
        arr_24 [i_3] = var_15;
    }
    for (int i_8 = 1; i_8 < 11;i_8 += 1)
    {
        var_27 = (((((-(1 | 39)))) ? 2398307787 : 14939418559837866335));
        arr_28 [i_8] = (((max((arr_11 [i_8 - 1]), (arr_11 [i_8 + 3]))) ? var_16 : (arr_15 [i_8] [i_8 + 4])));
        var_28 = (min(var_28, var_10));
    }
    /* vectorizable */
    for (int i_9 = 2; i_9 < 16;i_9 += 1)
    {
        var_29 = (((arr_2 [i_9] [i_9] [i_9 - 2]) != ((((arr_29 [i_9 - 2]) ? (arr_31 [i_9 + 1] [i_9 + 1]) : 3910969014)))));
        /* LoopNest 3 */
        for (int i_10 = 4; i_10 < 16;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 17;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 17;i_12 += 1)
                {
                    {
                        var_30 = (((!383998281) ? var_19 : (!var_17)));
                        var_31 = (((arr_35 [i_9] [i_9 - 1] [i_9] [i_9 - 2]) | (arr_35 [i_9] [i_9 - 1] [i_9] [i_9 + 1])));
                        arr_39 [i_11] [i_10] [i_10] [i_12] [i_12] = var_16;
                        var_32 = (arr_29 [i_9 - 1]);
                    }
                }
            }
        }
        var_33 &= -5140;
        arr_40 [i_9 + 1] = ((~(arr_36 [i_9] [i_9 + 1] [i_9] [i_9 - 1])));
        arr_41 [5] = ((53 + (arr_3 [i_9 - 2] [i_9 + 1] [i_9 + 1])));
    }
    var_34 = 1;
    #pragma endscop
}

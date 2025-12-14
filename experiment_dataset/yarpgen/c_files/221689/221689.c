/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min((~var_18), (((~var_16) & (~var_10)))));
    var_20 = (max(var_12, ((min(var_15, (min(18708, 58175)))))));
    var_21 = ((((min(((65527 ? 52376 : 1)), var_2))) ? (((((~var_11) + 2147483647)) >> (var_5 - 55775))) : (!var_2)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_12 [i_1] |= (max((((arr_6 [i_0] [i_0] [i_0] [i_1]) ? (~var_10) : ((min((arr_10 [1] [i_1] [i_1] [i_2] [2]), var_14))))), ((~((max(var_5, var_0)))))));
                                var_22 = (((max(((max((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), var_9))), ((~(arr_4 [i_0]))))) % (max(((~(arr_9 [i_3 + 1] [i_3 + 1] [i_0] [i_0] [i_1] [i_0]))), ((var_8 ? (arr_9 [i_0] [i_1] [i_0] [i_3] [i_0] [i_3]) : (arr_10 [i_0] [i_1] [i_0] [i_4] [i_2])))))));
                                arr_13 [i_0] = (arr_3 [i_0] [i_3]);
                            }
                        }
                    }
                    var_23 = (min(var_23, ((((((~(arr_7 [i_1] [i_2])))) ? (arr_3 [i_2] [i_1]) : 39954)))));

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_24 = (max(var_13, (max(((~(arr_4 [i_1]))), (~var_15)))));
                        var_25 |= ((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) || (((var_4 ? (arr_5 [9] [9] [9] [i_1]) : var_3))));
                        var_26 = ((~((((var_12 ? (arr_1 [i_5]) : var_6))))));
                    }
                    var_27 = (arr_11 [i_0] [i_0] [i_1] [i_1] [i_2]);
                }
            }
        }
        arr_17 [i_0] = var_7;
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        var_28 = (min(var_28, (((~(((((((arr_19 [i_6] [i_6]) ? (arr_19 [i_6] [i_6]) : var_9))) || var_0))))))));
        arr_20 [i_6] |= ((!(((+(((arr_19 [i_6] [i_6]) | var_17)))))));
        /* LoopNest 2 */
        for (int i_7 = 3; i_7 < 18;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 15;i_8 += 1)
            {
                {
                    arr_25 [i_7] [i_8] = (min((min(var_14, -var_15)), (((arr_24 [15] [i_7] [i_6]) ? (((arr_21 [i_8 + 1] [i_7] [i_6]) ? var_9 : var_5)) : (((arr_24 [i_6] [i_7 + 1] [i_6]) ? (arr_18 [1] [i_6]) : var_7))))));
                    arr_26 [i_6] [i_6] [i_8] = ((-(max((((arr_18 [i_6] [i_8 + 2]) ? (arr_23 [i_6] [i_7] [i_8] [i_6]) : (arr_24 [i_6] [i_7] [i_8]))), var_18))));
                    var_29 = var_6;
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        var_30 = (min(var_30, 39954));
        arr_30 [i_9] [i_9] = (((((-((min(57447, (arr_28 [i_9]))))))) ? (arr_22 [i_9] [i_9]) : (arr_27 [i_9])));
        arr_31 [i_9] [i_9] |= ((arr_19 [i_9] [i_9]) >= ((-(((arr_22 [i_9] [i_9]) ? var_18 : (arr_21 [i_9] [i_9] [i_9]))))));
        arr_32 [i_9] [i_9] = (((arr_27 [i_9]) ? ((~(arr_22 [i_9] [i_9]))) : (((min((arr_24 [i_9] [i_9] [i_9]), var_12))))));
    }
    /* vectorizable */
    for (int i_10 = 2; i_10 < 11;i_10 += 1)
    {
        arr_35 [i_10] [i_10] = (arr_34 [i_10]);
        var_31 = var_15;
    }
    var_32 -= (max(-0, (min(((var_5 ? var_15 : var_1)), var_13))));
    #pragma endscop
}

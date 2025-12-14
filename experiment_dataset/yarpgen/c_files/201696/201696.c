/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= 1;

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0 + 1] [i_0 - 2]);
        arr_3 [i_0] [i_0] = 3828124264;
        var_20 = (min(var_20, (((var_8 ? (max(4294967277, var_7)) : ((((min(-650246480, var_4))) ? (((~(arr_1 [i_0] [i_0])))) : 24)))))));
        var_21 &= (arr_0 [i_0 + 1] [9]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_22 = (var_2 >> 9);
        arr_8 [i_1] [i_1] = (arr_7 [i_1]);
        var_23 &= (((var_4 > -8698301014023265446) ? (arr_6 [i_1]) : (arr_0 [i_1] [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 6;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 9;i_4 += 1)
            {
                {
                    var_24 = var_0;
                    var_25 -= (arr_5 [i_2]);
                }
            }
        }
        var_26 = var_12;
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 9;i_5 += 1)
    {
        arr_23 [i_5] = (((arr_15 [i_5]) ? (~var_5) : -16));
        var_27 &= 4294967277;
    }
    var_28 -= 4294967286;

    /* vectorizable */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_29 = (max(var_29, ((((arr_7 [i_6]) ? 0 : var_10)))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            {
                                var_30 *= ((var_5 ? (arr_7 [i_9]) : 19));
                                var_31 |= (arr_5 [i_6]);
                                var_32 = (((arr_26 [i_10] [i_6]) ? (arr_35 [i_6] [i_7] [i_8] [i_6] [i_9]) : (arr_35 [i_7] [i_7] [i_8] [i_9] [i_6])));
                            }
                        }
                    }
                    arr_36 [i_6] = (~10899);
                }
            }
        }
        var_33 = var_13;
        var_34 -= var_1;
        var_35 = (min(var_35, (arr_5 [i_6])));
    }
    for (int i_11 = 3; i_11 < 12;i_11 += 1)
    {
        var_36 = (min(var_36, (((((((arr_6 [i_11]) ? var_14 : ((var_3 ? var_0 : var_9))))) ? (arr_34 [i_11 + 2] [i_11] [i_11 + 2]) : (((((var_14 ? 4294967277 : 15)) / (~3324427487)))))))));
        var_37 |= ((((max((arr_32 [i_11 + 1]), 3610408713))) ? (56830 + 2010807898) : 148));
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 0;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 13;i_13 += 1)
            {
                {
                    var_38 = (((((-24932 ? (min(684558582, var_3)) : var_2))) ? var_12 : ((((((arr_35 [i_11 + 2] [i_12 + 1] [i_13 + 1] [i_13] [i_13 + 1]) | var_7))) ? 26 : var_3))));
                    var_39 = ((((((arr_24 [i_13 - 1]) / (arr_35 [i_11] [i_12 + 1] [i_11 - 1] [i_13 - 1] [i_13 + 1])))) ? 4294967295 : (((~var_2) ? var_12 : 1))));
                    var_40 = ((-18317 ? (arr_5 [i_11 + 1]) : ((1 ? 32026 : 2))));
                }
            }
        }
    }
    #pragma endscop
}

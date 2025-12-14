/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_0 [i_0]) ? (arr_0 [i_0]) : ((((arr_0 [i_0]) == (arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_2] [i_0] = max((((!(((var_6 ? (arr_1 [i_2] [i_1]) : 1)))))), (min((((arr_2 [i_0]) ? 3041100192 : (arr_0 [i_0]))), (arr_0 [i_0]))));
                    arr_11 [i_0] [i_1] [i_0] [i_0] = max((arr_1 [i_1] [i_0]), ((var_7 ? (arr_7 [7] [i_0]) : (arr_7 [i_0] [i_0]))));
                }
            }
        }

        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            arr_15 [i_0] = (~(((((arr_14 [i_0] [10] [i_0]) <= var_4)) ? (((17716 != (arr_4 [i_0])))) : (arr_4 [i_0]))));
            arr_16 [i_0] = (arr_8 [i_0] [i_3] [i_0] [i_0]);
        }
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    {
                        var_11 += ((~(min(18446744073709551615, var_3))));
                        var_12 *= (((-107 > -314913510) * (min(1470305830, (!34345)))));
                        var_13 = ((~((var_10 ? (arr_22 [i_0] [i_0] [i_0] [i_0]) : ((((arr_8 [i_0] [i_0] [i_0] [i_0]) ? var_8 : -17717)))))));
                    }
                }
            }
            var_14 = (min(var_14, ((((((arr_2 [i_4]) ? 2625373631411233018 : 1402329580)) == (arr_20 [i_0] [i_0] [i_0] [i_4]))))));
            arr_24 [i_0] [i_0] [i_0] = ((((((arr_8 [i_0] [i_0] [i_0] [i_0]) ? 1657509602604882734 : (arr_12 [i_0] [i_0])))) || (!1172613710)));
            var_15 = (min(var_15, ((max((arr_20 [i_4] [i_0] [i_0] [i_0]), (arr_12 [i_0] [i_4]))))));
        }
    }
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        arr_29 [i_7] = (max(((-(max((arr_5 [i_7] [i_7] [i_7]), (arr_26 [1] [i_7]))))), ((1710075527 ? ((-(arr_26 [i_7] [i_7]))) : ((var_0 ? (arr_7 [i_7] [1]) : var_4))))));
        var_16 ^= var_2;
        var_17 += 119;
        arr_30 [i_7] = (min(-12087, ((~(arr_17 [i_7] [4])))));
    }
    for (int i_8 = 0; i_8 < 10;i_8 += 1)
    {
        arr_33 [i_8] = ((var_9 ? (((!var_1) ? ((~(arr_1 [i_8] [i_8]))) : (max((arr_13 [i_8]), var_7)))) : (!var_8)));
        var_18 = (~((-(arr_25 [10]))));
        arr_34 [i_8] = (var_0 ? 2147483647 : (min(((-(arr_4 [i_8]))), (arr_12 [i_8] [i_8]))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                {
                    var_19 ^= (arr_21 [i_8] [i_9] [i_10]);
                    arr_39 [i_8] [i_8] = var_3;
                }
            }
        }
        var_20 = ((((1 ? 18446744073709551615 : -21297)) <= (((((314913512 ? 60 : (arr_25 [i_8])))) ? var_5 : (((arr_20 [i_8] [i_8] [i_8] [i_8]) ? 3281642378639062836 : var_3))))));
    }

    /* vectorizable */
    for (int i_11 = 0; i_11 < 25;i_11 += 1)
    {
        arr_42 [i_11] = ((arr_41 [i_11]) ? (~var_1) : 29551);
        var_21 = (arr_41 [i_11]);
        var_22 *= ((arr_41 [i_11]) ? (arr_41 [i_11]) : (!var_3));
    }
    #pragma endscop
}

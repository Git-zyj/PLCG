/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_11 = 539309515;
                    arr_6 [i_2 + 1] [i_2] [i_1] = -4;
                    var_12 += (min((arr_3 [i_1 - 1] [i_1 + 1]), (min(var_7, var_1))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
    {
        var_13 |= var_1;
        var_14 = var_5;
        arr_9 [i_3] = ((2047 ? 2082662407 : -109));
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
    {
        arr_12 [i_4] = var_4;

        for (int i_5 = 1; i_5 < 20;i_5 += 1)
        {
            var_15 = (!3755657780);
            arr_15 [i_4] [i_4] [i_4] |= ((min((arr_14 [i_5 - 1] [i_5 + 1] [20]), var_4)) + 11861003681028789446);
            arr_16 [i_5] [i_4] = ((((+(((arr_7 [i_4]) ? (arr_14 [i_4] [i_5] [i_5]) : (arr_10 [8]))))) != 6585740392680762169));
        }
        arr_17 [3] = (max(64, ((((max(-23, 758819901)) != 10)))));
        /* LoopNest 3 */
        for (int i_6 = 3; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 18;i_8 += 1)
                {
                    {
                        arr_25 [i_6] [i_6] = min((((((((arr_20 [i_4] [i_4] [i_4] [i_4]) & (arr_13 [i_7] [i_6] [i_4])))) ? ((((!(arr_22 [9] [i_8] [9] [9] [i_8 + 2] [i_8]))))) : (((arr_10 [i_6]) ? (arr_11 [8]) : 55))))), (min(((-(arr_24 [19] [10] [i_4] [i_8] [i_8] [i_4]))), var_6)));
                        var_16 = var_3;
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
    {
        var_17 = 2305843009213693951;
        var_18 = ((min(((65 ? (arr_10 [15]) : var_3)), 0)) >> (((min(3052064823, 67)) - 48)));
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 21;i_10 += 1)
        {
            for (int i_11 = 3; i_11 < 20;i_11 += 1)
            {
                for (int i_12 = 2; i_12 < 19;i_12 += 1)
                {
                    {
                        arr_36 [i_10] = 539309515;
                        var_19 = ((-((((min(var_8, -122))) ? (min(4120706295, var_1)) : (var_8 + var_8)))));
                    }
                }
            }
        }
    }
    var_20 = var_7;
    var_21 = (-(min(8, (min(var_1, var_9)))));
    var_22 = (var_9 ? ((var_3 ? var_3 : var_0)) : (min((min(var_0, var_0)), ((max(539309515, 92))))));
    #pragma endscop
}

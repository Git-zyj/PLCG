/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = (((~var_7) && (((-28540 ? 65534 : -4371)))));
        var_13 = arr_0 [1];
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_14 = (arr_5 [i_1] [i_1]);
        arr_8 [i_1] = ((((max(var_3, 127))) ? ((((arr_4 [i_1]) ? 98 : 1))) : (arr_1 [i_1 + 1] [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    var_15 -= ((~(min((1 && -1), ((65530 ? (arr_10 [i_2]) : var_1))))));
                    var_16 = (arr_12 [i_3] [i_1] [i_1] [i_1 + 1]);
                    arr_15 [i_3] [i_1] [i_1] = (~(var_4 == var_6));
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < 16;i_4 += 1) /* same iter space */
    {
        arr_19 [i_4] = (arr_11 [8] [8]);
        var_17 = (max((arr_16 [i_4 - 1] [i_4 + 1]), (min((arr_0 [i_4 + 1]), ((1 ? 156 : 51821))))));
    }
    for (int i_5 = 1; i_5 < 16;i_5 += 1) /* same iter space */
    {
        arr_22 [i_5] = (arr_11 [i_5] [i_5]);
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    {
                        var_18 = var_8;
                        arr_32 [i_5] [i_5] [i_5] = ((~(arr_23 [i_5] [i_5])));
                        var_19 = (((((((1 - (arr_28 [i_5] [i_6] [i_7] [i_6])))) || (arr_2 [i_6 + 1]))) ? (max(var_11, ((max(1, 18))))) : ((max(-1902595578, (arr_17 [i_7]))))));
                        var_20 &= -1;
                        var_21 ^= ((var_1 ? 1 : ((var_9 ? (((arr_17 [i_5]) ? (arr_26 [i_8]) : (arr_11 [i_5 + 1] [i_8]))) : var_4))));
                    }
                }
            }
        }
        var_22 = (+-96);
    }
    var_23 = 16155561888014027410;
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 14;i_9 += 1)
    {
        for (int i_10 = 3; i_10 < 12;i_10 += 1)
        {
            {
                arr_38 [i_9] = ((-(max(var_6, (max((arr_28 [i_9] [2] [i_10] [i_10]), var_9))))));
                var_24 = (min(var_24, (((~3555602683) ? 51823 : (((~var_0) ? (var_4 & var_2) : var_8))))));
            }
        }
    }
    #pragma endscop
}

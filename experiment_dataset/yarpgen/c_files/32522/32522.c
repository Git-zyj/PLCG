/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((!var_3) ? (((var_6 ^ var_6) ? var_11 : (max(var_6, 2031951994)))) : (--1)));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 24;i_3 += 1)
                {
                    {
                        var_13 = ((-(!-336836101)));
                        var_14 = ((-((2263015315 + (var_2 + var_9)))));
                    }
                }
            }
        }
        arr_11 [i_0] [i_0] = (((arr_10 [i_0] [i_0] [i_0] [i_0]) ? ((((max(44055, 4294967295))) ? ((2263015302 ? var_0 : var_9)) : -3827226330)) : (21481 - 19879)));
        var_15 = (max(var_15, (((((max(var_0, (336836094 | var_4)))) ? (((~(var_7 ^ 15287)))) : var_2)))));
    }
    var_16 = var_11;

    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        var_17 &= var_1;
        arr_14 [i_4] = (((arr_9 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]) ? ((max(44055, 1))) : ((var_3 ? var_3 : (arr_9 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])))));
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 8;i_5 += 1)
    {
        var_18 = (arr_8 [i_5 - 2] [i_5 + 3] [i_5 + 3]);

        for (int i_6 = 1; i_6 < 10;i_6 += 1)
        {
            var_19 = 29496;
            var_20 = var_10;
            var_21 = (arr_7 [i_5 + 2] [i_5 + 2] [i_5 + 3] [i_5 + 1]);
        }
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            var_22 = (((arr_1 [i_5 + 1]) ^ 1258633613));
            var_23 = (arr_3 [i_7]);
        }
        arr_22 [i_5] = (arr_20 [i_5] [i_5 + 1]);
        var_24 = 16384;
    }
    #pragma endscop
}

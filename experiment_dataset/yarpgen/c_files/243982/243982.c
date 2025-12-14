/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] &= (((max(var_7, (max((arr_0 [i_0]), 1762881347)))) > ((((!var_13) ? var_11 : (65535 ^ 4504))))));
        arr_3 [i_0] = ((((4488 ? ((43 ? (arr_1 [i_0]) : 1762881368)) : (arr_1 [i_0 - 1])))) ? (max((arr_1 [i_0]), (((-4 ? -50 : 24710))))) : ((56 ? (2482472468 / var_7) : ((((arr_1 [i_0]) ? (arr_0 [1]) : var_2))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_6 [i_1] [i_0] = ((((((arr_5 [1]) ? var_16 : -12))) ? (arr_5 [i_0 + 3]) : -4488));
            arr_7 [i_0] [i_0] [i_0] = (((arr_5 [i_0]) == (arr_1 [i_0 + 3])));
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {
                            arr_17 [i_5] [i_4] [i_0] = (!1023);
                            var_20 = (max(var_20, (((((30656 ? 7629 : ((384 ? (arr_15 [i_4] [i_5] [9] [i_4] [i_3] [i_2] [i_0]) : var_5)))) | (((((2491849727 ? var_6 : var_13))) ? 65534 : ((-4483 ? (arr_12 [i_0] [i_0]) : -4515)))))))));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        {
                            arr_27 [i_0] [i_2] [12] [i_7] [i_0] = (((arr_16 [0] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6] [i_6]) << ((((max((arr_24 [i_0] [i_2] [i_0] [i_0 + 3] [i_6 - 1]), (arr_24 [i_0] [i_2] [i_2] [i_0 + 3] [i_6 - 1])))) - 17067))));
                            var_21 = (max((!-4524), ((((1 ? (arr_11 [i_6]) : 46838)) <= var_9))));
                        }
                    }
                }
            }
        }
        var_22 = var_12;
    }
    for (int i_9 = 1; i_9 < 10;i_9 += 1) /* same iter space */
    {
        var_23 = ((var_4 / (((max((arr_11 [i_9]), (arr_23 [i_9] [i_9] [i_9] [i_9]))) ? var_6 : ((max(-10458, (arr_20 [i_9] [i_9] [i_9]))))))));
        arr_30 [i_9] [i_9] = ((((((4485 ? 52480 : (arr_13 [i_9] [6] [i_9] [i_9]))))) - ((((((arr_12 [i_9] [i_9]) ? -34 : var_15))) ? ((((arr_16 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]) <= 4495))) : (arr_4 [i_9 + 2] [i_9] [i_9])))));
    }
    var_24 ^= ((1 ? (39 || 147) : 1));
    var_25 = (min(var_25, ((var_12 ? (((((4096 ? var_19 : var_4))) ? (var_5 && var_16) : var_10)) : var_11))));
    var_26 = ((-(max(2040, ((var_18 ? var_3 : 14755))))));
    var_27 = var_19;
    #pragma endscop
}

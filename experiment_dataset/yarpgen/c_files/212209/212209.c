/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_14 *= (arr_0 [i_2]);
                    arr_7 [i_0] [i_0] [i_0] = (arr_5 [i_0] [i_1] [i_2 + 4]);
                }
            }
        }

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_15 = (min(var_15, (((-(arr_8 [i_0] [i_3] [i_3]))))));
            var_16 &= ((((((arr_9 [i_3] [i_0] [i_0]) - (arr_9 [i_3] [i_0] [i_0])))) ? ((((((arr_3 [i_0] [i_0]) ? (arr_5 [i_0] [i_0] [i_0]) : (arr_8 [i_0] [i_3] [i_3])))) ? (((arr_5 [i_0] [i_0] [i_0]) ? var_5 : 3700345842775688290)) : (((var_9 ? 13526 : var_1))))) : ((min(((var_12 ? var_7 : var_4)), (((!(arr_1 [i_3])))))))));
            var_17 &= ((!(!75)));
            arr_10 [i_0] [i_3] [i_0] = (((((0 ? 3792226474 : 502740814))) ? ((var_7 | (arr_6 [i_3] [i_3] [i_0] [i_0]))) : (((arr_9 [3] [i_3] [i_0]) ? (arr_5 [i_0] [i_0] [i_0]) : (arr_9 [i_0] [i_3] [i_3])))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            arr_15 [i_0] = ((-(arr_11 [i_0])));
            arr_16 [i_0] [i_4] = (502740800 & 3);
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    {
                        arr_22 [i_4] = ((502740787 ? 3782219980 : 502740831));
                        arr_23 [i_6] [i_5] [14] [14] = (((arr_19 [i_4] [i_4] [i_4] [i_4]) ? (arr_19 [i_6] [i_5] [i_4] [i_0]) : (arr_19 [i_0] [i_0] [i_0] [i_0])));
                        arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_2 [3]);
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            arr_28 [i_7] [i_7] [i_7] = (arr_5 [i_7] [i_7] [i_0]);
            var_18 = (max(var_18, (((!(var_13 | var_10))))));
        }
        arr_29 [i_0] = ((((min((arr_0 [i_0]), var_3))) && (arr_9 [i_0] [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 10;i_8 += 1)
    {
        arr_32 [i_8] [i_8] = ((1 ? 568264093 : (((var_11 ? var_9 : 1)))));
        var_19 = (arr_4 [i_8] [i_8]);
        arr_33 [i_8] = var_5;
        arr_34 [i_8] [i_8] = ((!(arr_17 [i_8] [i_8] [i_8])));
    }
    for (int i_9 = 0; i_9 < 19;i_9 += 1)
    {
        arr_37 [i_9] = ((min((((arr_36 [i_9] [i_9]) && (arr_36 [i_9] [i_9]))), (9771868389206158150 && var_9))) ? ((min(-49, 16721))) : var_5);

        /* vectorizable */
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            arr_40 [i_9] [i_10] = -5100167834744511779;
            var_20 = -60401757;
        }
    }
    var_21 = ((1 ? (((65504 ? 1132711227 : var_12))) : var_10));
    #pragma endscop
}

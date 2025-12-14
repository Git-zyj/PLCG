/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_13 = (max(var_13, ((max(((((var_11 & var_1) > -var_3))), (((max(var_11, 100663296)) ^ (arr_4 [i_1] [i_0]))))))));
                var_14 += var_1;
            }
        }
    }

    for (int i_2 = 3; i_2 < 24;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 23;i_4 += 1)
            {
                {
                    var_15 = (max(var_15, (arr_14 [10])));
                    var_16 = 223;
                }
            }
        }

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 3; i_6 < 24;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 24;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        {
                            arr_25 [i_2] [i_2] = var_8;
                            var_17 = (min(var_17, 229));
                            var_18 = ((-(arr_5 [i_2])));
                            var_19 = (((((var_6 / (84 % var_4)))) ? (1 <= var_1) : -2807565969));
                        }
                    }
                }
            }

            /* vectorizable */
            for (int i_9 = 1; i_9 < 24;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 23;i_11 += 1)
                    {
                        {
                            var_20 = (((arr_29 [14] [i_2] [14] [i_10] [15]) || (var_8 && 24133)));
                            var_21 = arr_17 [i_10] [i_2] [i_9 - 1];
                            arr_32 [i_2] [i_10] = var_5;
                            var_22 = (arr_23 [i_2] [23] [22] [0] [i_2] [i_2]);
                            var_23 = (!var_7);
                        }
                    }
                }
                var_24 = (max(var_24, (((-342362051 ? var_7 : var_7)))));
            }
            /* vectorizable */
            for (int i_12 = 0; i_12 < 25;i_12 += 1)
            {
                arr_37 [i_2] [i_2] = (((((var_7 ? (arr_30 [i_2] [i_2] [i_5] [i_5] [i_5] [i_2] [i_12]) : var_7))) ? (arr_29 [i_2] [i_2] [i_2] [i_2] [i_2]) : var_2));
                var_25 = ((((0 != (arr_16 [i_2] [i_12]))) && ((((arr_13 [i_2] [i_2]) ? -125 : (arr_11 [i_5]))))));
                /* LoopNest 2 */
                for (int i_13 = 4; i_13 < 23;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 25;i_14 += 1)
                    {
                        {
                            arr_43 [i_2] [12] [i_12] [i_2] [i_2] [i_12] [i_2] = (arr_11 [i_2]);
                            arr_44 [i_2] [i_2] [i_2] [i_13] [i_2] [i_14] [i_14] = var_3;
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 25;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 25;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 25;i_17 += 1)
                {
                    {
                        var_26 = (((~var_3) && ((min((var_5 > -32766), ((-(arr_19 [i_17] [i_2] [5] [i_15] [i_2] [i_2]))))))));
                        var_27 = (i_2 % 2 == zero) ? (((((min((arr_35 [i_2] [14] [i_16] [23]), 6))) >> (((arr_8 [i_2]) - 471059486790641237))))) : (((((min((arr_35 [i_2] [14] [i_16] [23]), 6))) >> (((((arr_8 [i_2]) - 471059486790641237)) - 17009302909200947264)))));
                        var_28 = (min(var_28, 4294967285));
                    }
                }
            }
        }
    }
    var_29 = (min(var_29, (((~(~var_4))))));
    #pragma endscop
}

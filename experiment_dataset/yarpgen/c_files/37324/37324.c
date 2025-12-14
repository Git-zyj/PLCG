/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_11 = 0;

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_12 *= ((!((min(var_7, var_0)))));
                    arr_11 [i_1] [i_1] [13] = ((-(!var_5)));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                {
                    var_13 = (max(var_13, var_4));
                    arr_14 [i_0] [6] [i_3] [i_1] = (((1 | -817533315) / var_7));
                }
                for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_14 = (((31 % -26) == var_0));
                                var_15 = ((!(arr_1 [i_0])));
                                var_16 = var_8;
                                var_17 -= var_2;
                            }
                        }
                    }
                    arr_24 [i_4] [i_4] [i_1] [i_4] = (max((arr_17 [i_0] [i_0] [i_0]), (!var_6)));
                    var_18 = var_2;
                    var_19 = (arr_10 [i_1] [i_1] [i_1] [i_1]);

                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        var_20 = ((-((min(28, 817533304)))));
                        var_21 = (max(var_21, (arr_2 [i_0] [i_1])));
                    }
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        arr_32 [i_1] [1] [3] [i_4] = ((((var_1 ? var_5 : (((arr_9 [i_8] [8] [i_1] [i_0]) % var_7)))) | (((+(((arr_31 [i_0]) & var_9)))))));
                        var_22 = (((((1 >> (((arr_13 [i_0] [i_0] [i_4] [i_8]) + 3503115713247940897))))) == (((((max(var_4, (arr_2 [i_4] [i_0]))))) % (arr_16 [i_1] [i_1])))));
                        var_23 = (max(-5994797039481548828, -var_4));
                    }
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        var_24 = (arr_4 [i_4] [i_1]);
                        arr_36 [i_0] [i_1] [i_4] [i_9] = arr_16 [i_0] [i_1];

                        for (int i_10 = 1; i_10 < 1;i_10 += 1)
                        {
                            var_25 &= (var_7 ? ((max((!var_6), var_9))) : (var_1 != var_5));
                            var_26 = (max(var_26, (((-(min(1, 0)))))));
                        }
                        arr_39 [i_0] [i_1] [i_1] [i_1] = (((max(((~(arr_23 [i_0] [2] [i_4] [i_1] [i_0] [i_0]))), var_7)) % ((min(((max((arr_22 [i_0] [i_0] [14] [i_4] [i_4]), var_1))), (min((arr_21 [i_0] [i_4] [i_4] [i_9] [i_9]), 216)))))));
                        var_27 = (((((((arr_8 [i_0] [i_1] [i_1]) | (arr_27 [i_1] [i_1] [i_1])))) ? var_1 : (var_1 % var_1))));
                    }
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        var_28 &= 1922015122;
                        var_29 = (((((arr_16 [i_0] [i_1]) ? ((var_7 ? (arr_27 [i_1] [i_1] [i_4]) : (arr_20 [i_0] [3] [i_11] [i_0] [i_0]))) : (((((arr_17 [i_4] [1] [i_0]) == (arr_31 [i_0]))))))) & ((((arr_30 [i_0] [11] [i_4] [0] [i_1]) / (max(var_0, var_2)))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}

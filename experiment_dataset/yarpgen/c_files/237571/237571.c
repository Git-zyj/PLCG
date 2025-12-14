/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((var_9 ? var_4 : var_7))));
    var_11 = ((max((~var_4), ((min(var_1, var_4))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_12 = ((((((var_6 && var_0) ? (((!(arr_0 [i_1])))) : var_8))) >= (arr_2 [i_1] [i_0 + 1] [i_1])));

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    arr_8 [i_1] = ((25018 ? 18446744073709551615 : 6));
                    arr_9 [i_1] [i_1] [i_1] = var_6;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_13 = (((var_8 ? ((var_8 ? var_7 : (arr_10 [3] [3] [i_2] [i_2]))) : ((var_4 ? var_1 : (arr_2 [i_0 - 1] [i_0 + 1] [i_1]))))));
                                arr_16 [i_1] [1] [i_2] [i_1] [i_1] [5] [i_1] = ((((max((arr_5 [i_0 - 1] [i_1]), (arr_5 [i_0] [i_1])))) ? (((!(arr_1 [i_1] [i_1 + 3])))) : ((((var_9 & (arr_0 [i_2])))))));
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                {
                    arr_21 [i_1] [i_1] [5] = var_4;
                    var_14 = (arr_20 [i_0 - 1] [i_1] [i_5] [i_5]);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_15 = (max(var_15, var_7));
                                var_16 = var_5;
                                var_17 |= ((min(9269838713486904747, 3642683964349378106)));
                                arr_26 [i_0] [i_0 + 1] [i_6] |= ((((((var_7 ? var_7 : var_7)))) ? (((arr_24 [i_0] [5] [i_0] [i_0 + 1] [i_0 - 1]) ? ((var_4 ? var_7 : var_4)) : (arr_1 [i_0 - 1] [i_0 - 1]))) : var_7));
                            }
                        }
                    }
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                {
                    var_18 = (arr_25 [i_1 + 3] [i_1 - 1] [i_1 + 2] [i_1] [i_1 + 3]);
                    arr_29 [i_1] [i_1] [i_1] [i_0] = 0;
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                {
                    var_19 = ((var_0 ? (arr_10 [i_0] [i_0] [i_0 + 1] [i_0]) : (arr_25 [i_0 + 1] [i_0] [i_9] [i_9] [i_9])));
                    var_20 |= (arr_25 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 - 1]);
                    var_21 = (min(var_21, (arr_5 [i_0] [8])));
                }
                var_22 = (((arr_5 [i_1] [i_1]) ? (min((arr_7 [i_0] [i_1 + 3] [i_0] [i_1]), var_0)) : (arr_0 [i_0])));
                arr_32 [i_1] = ((+(max((var_4 + var_9), (arr_30 [3] [3] [i_0])))));
            }
        }
    }
    var_23 -= (+((var_8 ? (!var_9) : (var_3 ^ var_5))));
    #pragma endscop
}

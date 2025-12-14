/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_12 += (((min(var_11, (arr_1 [i_1 + 1])))));
                    var_13 = (arr_4 [i_0] [i_0]);
                    var_14 = ((((3740457919320516971 - (((138 ? (-9223372036854775807 - 1) : -1))))) + var_1));
                }
            }
        }
        var_15 = ((((min(((((arr_2 [i_0] [i_0 - 4] [i_0]) ? 69 : var_9))), (min(18446744073709551615, (arr_5 [i_0 - 2] [i_0] [i_0] [i_0])))))) ? ((((min(1585269779, 0)) >= (((var_2 ? 16629 : (arr_2 [i_0] [i_0] [i_0]))))))) : (((((arr_2 [i_0] [8] [i_0 - 2]) ? var_1 : var_4)) & var_2))));
    }
    for (int i_3 = 2; i_3 < 19;i_3 += 1)
    {
        var_16 = (((65535 & 1) >= ((var_3 ? (var_3 == var_2) : (arr_7 [i_3 + 1] [i_3 + 1])))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    {
                        var_17 = ((((((var_6 & 19) <= ((min(1827944102, 32760)))))) >= 10));

                        for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
                        {
                            var_18 -= ((!(((((var_11 ? var_4 : var_0)) / var_2)))));
                            var_19 = (arr_13 [i_3] [i_4] [i_3]);
                            var_20 = (max(-3999994290345635618, (arr_11 [i_4] [i_7])));
                        }
                        for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
                        {
                            var_21 = var_10;
                            var_22 &= -211304094582865646;
                        }
                        for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
                        {
                            var_23 = (max(var_23, 65509));
                            var_24 = (min((arr_15 [i_3] [i_3] [i_3] [i_3 - 2] [i_3] [i_3 - 2]), (max(var_8, 0))));
                            var_25 *= (39056 / -10);
                            var_26 = (~1749522680);
                        }
                        var_27 = (min(var_27, (((2892337471 ? 140 : 15)))));
                        var_28 = (-1 - 11808831142623250528);
                        var_29 = 65535;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 21;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 21;i_13 += 1)
                        {
                            {
                                var_30 = (!(((((((!(arr_13 [i_10] [i_11] [i_10]))))) & var_6))));
                                var_31 = 5165482084932098360;
                                var_32 = ((~(((arr_23 [i_3] [i_3 + 2] [i_3 + 2] [i_3] [i_10] [i_11]) ? (arr_23 [7] [i_3 + 2] [i_11] [7] [7] [i_11]) : 1))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 21;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 21;i_15 += 1)
                        {
                            {
                                var_33 = ((arr_25 [i_3]) ? ((var_7 ? var_10 : (arr_37 [i_15] [i_15] [i_15] [i_15] [i_3 - 2] [i_3 + 1]))) : ((((!(arr_25 [i_3]))))));
                                var_34 = var_5;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_16 = 0; i_16 < 1;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 18;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 18;i_18 += 1)
            {
                {
                    var_35 = ((~(max((arr_19 [i_16] [i_16] [i_16] [i_16] [i_16]), (arr_42 [i_18])))));
                    /* LoopNest 2 */
                    for (int i_19 = 0; i_19 < 18;i_19 += 1)
                    {
                        for (int i_20 = 2; i_20 < 17;i_20 += 1)
                        {
                            {
                                var_36 = ((0 ? 0 : 0));
                                var_37 = ((~((-70543765 ? 32759 : (arr_21 [i_16] [i_17])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_38 = ((((((!var_2) >> (var_2 - 20997)))) ? (min(7831768871986988162, (-32767 - 1))) : ((((~var_1) % var_10)))));
    var_39 = (max(var_9, (min(var_10, var_10))));
    #pragma endscop
}

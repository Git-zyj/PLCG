/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_11 = (max(var_11, (((11098201986707752473 ? (arr_1 [i_0]) : (arr_2 [i_0]))))));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 8;i_4 += 1)
                    {
                        {
                            var_12 = 272692775;
                            var_13 = 3817226760;
                        }
                    }
                }
            }

            for (int i_5 = 2; i_5 < 7;i_5 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 10;i_7 += 1)
                    {
                        {
                            arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_17 [i_5] [i_5] [i_6] [i_5] [i_5]);
                            arr_23 [i_0] [i_0] [i_0] [i_0] [i_7] = (((((15565 ? var_0 : var_4))) ? -1134323159527671182 : (arr_7 [i_1] [i_5 + 3])));
                        }
                    }
                }
                arr_24 [i_0] [i_0] = (((((18446744073709551615 ? (arr_11 [i_0]) : -1143065917))) <= 1585399165801573550));
            }
            for (int i_8 = 2; i_8 < 7;i_8 += 1) /* same iter space */
            {
                var_14 = (min(var_14, (((!(((-864170023 ? var_9 : -1))))))));
                var_15 = (((((arr_7 [i_1] [i_1]) - (arr_15 [i_0] [i_1] [i_0]))) <= -2132426761));
                var_16 = ((var_9 ? ((((arr_15 [i_1] [i_1] [i_1]) & (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0])))) : ((-1 ? 3488239802499696501 : 6696))));
                arr_27 [i_1] [i_8] = 3793;
            }
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                var_17 = ((((arr_14 [i_1]) / var_1)));
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 7;i_10 += 1)
                {
                    for (int i_11 = 2; i_11 < 7;i_11 += 1)
                    {
                        {
                            arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] [i_9] [i_10] = ((((((arr_12 [i_1] [i_1] [i_10]) < var_6))) + -11929));
                            var_18 = (((var_5 << (var_3 - 99))));
                            var_19 = (arr_8 [i_0] [i_10 + 4] [i_9] [i_10]);
                        }
                    }
                }

                for (int i_12 = 1; i_12 < 9;i_12 += 1)
                {
                    arr_37 [i_0] [i_9] = (((55218 & (arr_30 [i_9]))));
                    arr_38 [i_0] [i_9] [i_0] = -15882313475906230528;
                }
                var_20 = (arr_5 [i_0] [i_0] [i_0]);
            }
            var_21 = -281474976710655;
        }
    }
    var_22 = (max(var_22, var_8));
    var_23 = 33;
    #pragma endscop
}

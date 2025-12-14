/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    var_11 = 50584;

    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_0] [i_2] [18] = ((var_9 << ((((var_1 ? var_0 : 17896892285332644476)) - 114627785))));

                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            var_12 = (var_9 ? var_7 : 549851788376907170);
                            var_13 = (!var_1);
                        }
                        for (int i_5 = 3; i_5 < 20;i_5 += 1)
                        {
                            arr_15 [i_0 + 3] [i_1] [i_0] [i_2] [12] [i_3] [i_5] = ((var_4 ? (43158 && 254) : ((var_2 ? 61548 : var_4))));
                            var_14 = (4004 & var_4);
                            arr_16 [i_2] [i_2] [i_2] [i_2] [i_2] [i_0] = (var_7 / 61548);
                            arr_17 [i_0] [12] [i_2] [i_2] [i_0] = var_1;
                        }
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            var_15 = (128 / 22378);
                            var_16 = (8074538543108729664 < var_6);
                            arr_21 [i_0] [i_0] [i_0 + 2] [i_0] [i_0] = ((61536 ? 4 : -16));
                        }
                        for (int i_7 = 1; i_7 < 20;i_7 += 1)
                        {
                            var_17 = (((var_9 ? 22383 : 2194743187)));
                            var_18 = (min(var_18, (18446744073709551615 > var_8)));
                            var_19 = var_8;
                        }
                    }
                }
            }

            for (int i_8 = 2; i_8 < 19;i_8 += 1)
            {

                for (int i_9 = 1; i_9 < 17;i_9 += 1)
                {
                    arr_30 [i_0] [i_1 + 1] [2] [i_0] = var_7;
                    var_20 = (min(var_20, ((((((var_9 ? 3990 : -8074538543108729665))) ? var_9 : (var_4 + var_9))))));
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 21;i_11 += 1)
                    {
                        {
                            arr_37 [i_0] [i_10] [i_11] = (17896892285332644459 && var_1);
                            var_21 -= ((((((var_7 ? var_2 : var_8)) + 2147483647)) << (var_9 - 1731904677)));
                            var_22 = ((3986 ? 7 : 549851788376907170));
                        }
                    }
                }
                arr_38 [i_0] [17] [i_0] = (((((1 << (var_1 - 43600)))) + var_1));
            }
            for (int i_12 = 0; i_12 < 21;i_12 += 1)
            {
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 21;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 21;i_14 += 1)
                    {
                        {
                            var_23 = var_0;
                            arr_50 [i_0] [i_0] [14] [i_0] [i_0] = ((var_3 ? var_7 : 549851788376907112));
                            var_24 = (((((-44 ? -27789 : 5920702499598642572))) ? 64872 : ((1793633023 ? 3983 : 4000))));
                            arr_51 [i_0] [i_0] [i_0] [i_0] [i_0] = (((var_4 == var_0) ? (3800478967 && var_1) : 25944));
                        }
                    }
                }
                var_25 = var_6;
            }
            /* LoopNest 2 */
            for (int i_15 = 1; i_15 < 17;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {
                    {
                        arr_59 [i_0] [i_0] [i_15] [i_15 + 2] [i_16] = 110;
                        var_26 = (min(var_26, (((4294967295 && (var_1 % var_0))))));
                        arr_60 [2] [4] [6] [i_16] |= var_4;
                    }
                }
            }
            var_27 += (((var_5 * var_4) / (51 * var_3)));
        }
        arr_61 [i_0] [i_0] = ((-(var_9 - var_4)));
    }
    var_28 -= ((-((var_0 / (((var_1 ? var_3 : var_6)))))));
    #pragma endscop
}

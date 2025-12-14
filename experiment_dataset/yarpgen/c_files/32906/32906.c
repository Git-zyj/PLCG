/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 += (max((min((arr_3 [i_0] [i_0] [i_0 + 1]), ((((arr_2 [i_0] [i_1] [i_2]) * var_7))))), var_6));
                                var_16 = (((arr_4 [i_0 + 1] [i_0 + 1]) / ((min((arr_4 [i_0 + 1] [i_0 + 1]), (arr_4 [i_0 + 1] [i_0 + 1]))))));
                            }
                        }
                    }
                }
                arr_12 [i_0 + 1] = (4 * 4294967289);
            }
        }
    }

    for (int i_5 = 2; i_5 < 19;i_5 += 1)
    {
        var_17 = (max(var_3, (((var_13 ? 0 : var_11)))));
        arr_15 [i_5 - 1] [i_5] = (arr_14 [i_5 - 1]);
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                {
                    arr_21 [i_5 - 1] [i_5] [i_5 - 2] [i_5 - 1] = (((1 <= (!var_2))));
                    arr_22 [i_5 - 2] [i_5] [i_7] = ((((!((((arr_14 [i_5 - 2]) ? var_2 : 4294967292))))) ? (((((arr_18 [i_5 - 1] [i_7] [i_5] [i_7]) && (arr_18 [i_5 - 1] [i_6 + 3] [i_5] [i_6 + 1]))))) : ((~(max((arr_17 [i_5 + 1] [i_7]), var_4))))));
                    var_18 = ((~(arr_20 [i_7] [i_6] [i_5 - 1])));
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 12;i_8 += 1)
    {
        arr_26 [i_8] |= (max(((((var_13 < (arr_11 [i_8] [i_8] [i_8] [i_8]))) ? var_10 : ((5642367523324336546 ? -308736369 : 12875623149840723241)))), ((min((arr_8 [i_8]), 1)))));
        arr_27 [i_8] = ((-var_1 ? var_5 : (max((arr_11 [i_8] [i_8] [i_8] [i_8]), ((min((arr_13 [i_8]), -83)))))));
    }
    for (int i_9 = 0; i_9 < 12;i_9 += 1)
    {
        arr_30 [i_9] = var_12;

        for (int i_10 = 0; i_10 < 0;i_10 += 1) /* same iter space */
        {
            var_19 = (min((min((((arr_18 [i_9] [i_9] [i_9] [i_9]) ? 2672662676821659108 : var_9)), var_9)), ((min((var_3 && 1), (min(-4211, -10034)))))));
            arr_33 [i_9] [i_10 + 1] = (min(var_0, var_6));

            for (int i_11 = 0; i_11 < 12;i_11 += 1)
            {
                arr_38 [i_10 + 1] [i_11] &= (((((((-32767 - 1) ? (arr_24 [i_9]) : 0)))) ? (((18 >> (((max(17179958521314971858, 2515782814)) - 17179958521314971839))))) : var_0));
                /* LoopNest 2 */
                for (int i_12 = 2; i_12 < 9;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 11;i_13 += 1)
                    {
                        {
                            arr_43 [i_9] [i_9] [i_10 + 1] [i_11] [i_12] [i_13] [i_13 - 2] = ((((arr_40 [i_9] [i_10 + 1] [i_13 - 1] [i_12 + 3] [i_13 + 1]) ? 520093696 : (arr_40 [i_9] [i_13 - 1] [i_11] [i_12] [i_13 + 1]))));
                            arr_44 [i_13 - 2] [i_12 + 1] [i_11] [i_10 + 1] [i_9] = (max((((arr_6 [i_9] [i_10] [i_12 + 3]) ? (((arr_40 [i_9] [i_10 + 1] [i_11] [i_12] [i_13]) ? 14564239750719508727 : (arr_18 [i_9] [i_9] [i_11] [i_9]))) : (arr_18 [i_9] [i_9] [i_9] [i_9]))), ((min((max(-60, var_5)), var_9)))));
                            var_20 = (max(var_8, var_4));
                            var_21 |= (((18810 / -58) ? ((((!1) * ((min(var_8, (arr_1 [i_11] [i_12 - 2]))))))) : var_14));
                        }
                    }
                }
            }
        }
        for (int i_14 = 0; i_14 < 0;i_14 += 1) /* same iter space */
        {
            var_22 = (min(var_22, ((((((arr_4 [i_14 + 1] [i_14 + 1]) > var_1)) ? (~0) : (((arr_10 [i_9] [i_14 + 1] [i_14 + 1] [i_14] [i_14] [i_14 + 1] [i_9]) & var_4)))))));
            var_23 = min((var_8 * var_14), var_12);
            var_24 = (min(var_24, (max(var_3, (((arr_45 [i_14 + 1] [i_14 + 1] [i_14 + 1]) ? ((var_10 ? 2263817814 : 10014)) : (((min(var_7, var_5))))))))));
        }
    }
    #pragma endscop
}

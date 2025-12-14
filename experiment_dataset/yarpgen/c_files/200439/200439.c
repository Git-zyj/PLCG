/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_20 = (((!var_3) <= (!var_15)));
                            var_21 = var_13;
                            arr_9 [i_3] [2] [i_1] [i_3] [i_1] [i_0] = 163;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_22 = ((~(max(((~(arr_8 [i_0] [i_1] [i_4] [i_4] [i_4] [i_5]))), var_6))));

                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 11;i_6 += 1)
                            {
                                arr_16 [i_1] [i_5] [i_1] [i_0] [i_6] = (((arr_5 [i_6] [i_1] [i_6]) >= var_12));
                                var_23 = var_14;
                                arr_17 [i_5] [i_1] [i_4] [i_5] [i_1] = ((var_12 >= var_3) <= (arr_2 [i_0] [i_0]));
                            }
                            arr_18 [i_0] [i_0] [i_0] [10] &= (arr_13 [2] [i_1] [i_4] [i_5]);
                            var_24 = (((((var_15 ? (arr_13 [i_1] [i_4] [i_1] [i_1]) : -16930))) ? (min((-1707009280 / var_9), (var_11 < var_8))) : (((!(var_2 <= 256))))));
                        }
                    }
                }
            }
        }
    }

    for (int i_7 = 3; i_7 < 19;i_7 += 1)
    {
        arr_22 [i_7] [i_7] = (((((((min(1707009280, var_3))) + 16929))) || ((min(var_13, ((var_10 ? (arr_19 [i_7] [i_7]) : (arr_20 [i_7]))))))));
        var_25 -= (16929 / 161);
        var_26 = ((((((16930 ? var_3 : var_3))) ? (arr_19 [7] [i_7]) : ((max((arr_19 [11] [i_7 + 1]), var_4))))) / (256 ^ -736306311));
        var_27 &= ((((((((1197597593 ? -736306311 : 1507833361))) ? 2781547270 : 1))) ? var_15 : 1));
        arr_23 [i_7] = ((((max(((var_7 ? 1 : var_3)), (max(-736306311, var_0))))) ? var_7 : (((((max(-736306327, -16931))) >= var_5)))));
    }
    var_28 = ((1 < (((~var_1) ? ((var_13 ? var_3 : var_15)) : var_16))));
    #pragma endscop
}

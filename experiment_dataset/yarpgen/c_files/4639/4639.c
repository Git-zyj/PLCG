/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4639
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_9 ? var_13 : var_14));
    var_16 = (max(var_16, (((((((var_8 ? var_8 : var_14)))) ? (((((min(4294967295, 1))) ? -var_6 : var_2))) : ((-var_11 ? var_3 : var_9)))))));
    var_17 = var_13;
    var_18 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_19 = ((+(min((1 * var_2), (arr_0 [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 12;i_4 += 1)
                            {
                                var_20 = (max(var_20, (arr_2 [i_0] [i_2] [i_3])));
                                var_21 = (arr_9 [i_0] [i_0] [i_0] [i_0]);
                            }
                            for (int i_5 = 4; i_5 < 10;i_5 += 1)
                            {
                                var_22 = ((4209109790623853014 ? 1 : 1));
                                var_23 = (min(var_23, (~1)));
                                arr_16 [i_0] [i_0] [i_2] [i_2] [i_5] = ((((min((arr_15 [i_5 - 1] [i_0] [i_5 - 3] [i_0] [i_5 + 1]), (arr_13 [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5 - 3] [i_5 - 4] [i_5 + 1])))) ? (((arr_13 [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5 - 3] [i_5 - 4] [i_5 + 1]) ? var_6 : var_10)) : 15));
                            }

                            for (int i_6 = 1; i_6 < 11;i_6 += 1)
                            {
                                var_24 -= (max(var_0, ((+(max((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), var_4))))));
                                arr_20 [5] [i_0] [i_0] [i_0] = (+-35101);
                                var_25 = (((~var_11) ? (((~(arr_3 [i_0])))) : var_8));
                            }
                            arr_21 [i_0] [i_1] [i_1] [i_0] [i_2] [i_3] = ((((!(arr_17 [i_3] [i_0] [i_0] [i_0]))) ? (min(var_2, (((arr_18 [i_0] [i_3]) ? (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : var_8)))) : ((((!(1 - var_2)))))));
                        }
                    }
                }
                var_26 = (max(7231146105268190159, 18060));
                arr_22 [i_0] [11] = ((((!(arr_10 [i_0]))) ? var_2 : (((arr_0 [i_0]) ? (arr_10 [1]) : (arr_10 [i_0])))));
            }
        }
    }
    #pragma endscop
}

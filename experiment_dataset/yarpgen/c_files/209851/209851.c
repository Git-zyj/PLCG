/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_14 = (max(var_14, 22693));
                var_15 += ((~(max(10460770355694979587, 511))));
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_4] [i_1] [i_1] [i_1] [3] = 405190236187471160;
                                arr_15 [i_1] [i_3] [i_2 - 1] [12] [12] [i_1] = (((~-22698) * ((~((-22707 ? -22693 : -22716))))));
                                var_16 |= ((((((min(149, 22696))) ? (!var_9) : (18884 || 1)))) ? ((min(-653031685, var_1))) : -6874);
                                arr_16 [i_0] [i_0] [i_1] [i_0] = ((arr_9 [i_4] [i_3] [i_2] [i_1]) / var_9);
                            }
                        }
                    }
                }
                arr_17 [i_1] [i_1] [i_1 - 3] = (!var_2);
                var_17 = (((((arr_11 [i_0 + 1] [9] [i_1 + 1] [i_1 - 2] [i_1]) <= var_7)) ? (((min(63, 126)))) : var_10));
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 3; i_5 < 22;i_5 += 1)
    {
        arr_20 [i_5] = (~-121);
        var_18 -= ((var_11 == (arr_18 [10] [10])));
        var_19 += ((var_10 | ((((!(arr_18 [18] [i_5])))))));
    }
    #pragma endscop
}

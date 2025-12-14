/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += ((!((!(~1)))));
    var_21 = var_19;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_22 = 10353;

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_23 = (max(var_23, (((!(((var_17 ? 18446744073709551599 : var_19))))))));

            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        {
                            arr_14 [i_0] [20] [20] [i_0] [i_0] [i_2] = ((~(arr_9 [i_2] [i_2] [i_2 - 1] [i_2])));
                            arr_15 [i_4] [i_2] [i_0] [23] [i_2] [i_2] [i_0] = 22965;
                        }
                    }
                }
                var_24 = var_6;
            }
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    {
                        arr_23 [i_0] [i_1] [i_5] = ((-34 ? 40 : 2663262982469826468));
                        var_25 = (min(var_25, 65535));
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        arr_26 [i_7] [1] = ((+((((arr_6 [2] [i_7] [2]) != 17865174569374327440)))));
        var_26 = (arr_5 [12] [i_7] [i_7] [i_7]);
    }
    var_27 -= ((var_15 ? (max((((var_5 ? var_11 : var_16))), (2769099977 / var_18))) : var_4));
    #pragma endscop
}

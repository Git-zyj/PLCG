/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = arr_1 [i_0 - 1];
        arr_3 [i_0] = (((((((((126 ? -126 : -108)) + 2147483647)) << (((57 | var_10) - 125))))) ? var_6 : (min((arr_0 [i_0 - 1] [i_0]), ((-126 ? (arr_1 [i_0]) : var_12))))));
        var_13 = ((45 ? (((~0) ? ((min((arr_0 [1] [i_0]), (arr_0 [i_0] [i_0])))) : (-118 < 106))) : (arr_1 [i_0])));
        arr_4 [i_0] = (((((((var_0 ? 125 : var_2)) & ((var_10 ? 126 : 18))))) ? (!108) : (((arr_1 [i_0]) ? var_10 : ((1 ? 22 : 6))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = arr_5 [i_1] [i_1];
        arr_9 [i_1] [i_1] = ((127 ? (-5 | -106) : -126));
        arr_10 [i_1] [i_1] = (((arr_1 [i_1]) % (var_0 || var_2)));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                {
                    arr_16 [i_2] [i_2] [i_2] = 3;

                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        arr_21 [i_1] [i_2] [i_1] [0] = ((((!(arr_14 [i_2 - 1] [13] [13] [i_2]))) ? -1 : var_0));
                        var_14 = -87;
                        arr_22 [i_2] = (((arr_19 [i_2] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2]) ? (arr_19 [i_2] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2]) : (arr_19 [i_2] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2])));

                        for (int i_5 = 1; i_5 < 14;i_5 += 1)
                        {
                            var_15 = (((arr_24 [i_1] [i_2] [i_5 - 1] [i_4] [i_5]) / ((-28 ? (arr_11 [i_1]) : 0))));
                            var_16 = (!127);
                            var_17 = (!-11);
                        }
                        var_18 = ((((((arr_23 [i_4] [i_3] [i_2] [1] [i_1]) ? (arr_13 [i_2]) : var_1))) ? (((28 == (arr_18 [i_1] [12] [i_2] [i_3] [i_4])))) : (arr_11 [i_3])));
                    }
                }
            }
        }
    }
    var_19 = (min(((((var_1 ? var_0 : var_6)) - var_3)), var_3));
    #pragma endscop
}

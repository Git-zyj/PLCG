/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (6134281247036603599 && 38216);

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_20 = (((!(~46))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_21 = (((max(-17, (-9223372036854775807 - 1))) >= ((var_9 ? ((var_1 | (arr_4 [i_3]))) : 3))));
                                arr_16 [i_0] [i_1 + 3] [i_2] [i_3] [i_1] = (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                            }
                        }
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            arr_20 [i_5] = (((((7814 ? -6 : (arr_1 [i_0])))) ? (arr_13 [7] [3] [i_0] [i_5] [3] [i_5]) : 1390734875));
            var_22 &= (~var_9);
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    {
                        var_23 = -19;
                        var_24 = ((-846073867 || (!25225)));
                        var_25 = (max(var_25, (((var_6 | (((arr_10 [i_7] [i_7] [i_7] [i_0]) ? 73 : 119567611)))))));

                        for (int i_8 = 1; i_8 < 13;i_8 += 1)
                        {
                            var_26 = var_9;
                            var_27 &= ((~(153 + -25590)));
                            var_28 = ((((((arr_24 [i_0] [2] [i_0] [i_0] [i_0] [2]) & 1873733787))) ? (arr_26 [i_8] [i_5] [i_6] [i_5] [i_5]) : (~43642)));
                        }
                        for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
                        {
                            var_29 += 780069494;
                            var_30 = ((var_5 != (arr_19 [i_0] [i_0] [i_0])));
                            arr_30 [i_0] [i_5] [i_6] [i_6] [i_7] [i_9] = ((var_0 ? var_17 : var_15));
                            arr_31 [i_9] [i_9] = (((arr_13 [i_0] [i_5] [i_6] [i_7] [i_7] [i_9]) ? (arr_10 [i_0] [i_9] [i_6] [i_7]) : var_5));
                        }
                        for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
                        {
                            arr_34 [i_10] [i_5] [i_6] [3] [i_10] = (arr_7 [i_5] [i_7]);
                            var_31 = (min(var_31, var_3));
                        }
                        arr_35 [i_5] [i_5] [13] = (arr_21 [i_6]);
                    }
                }
            }
        }
    }
    var_32 = (max(var_32, ((-(min(24, var_11))))));
    var_33 = (!var_7);
    #pragma endscop
}

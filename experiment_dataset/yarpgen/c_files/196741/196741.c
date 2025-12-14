/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_3] |= 8388480;
                                var_14 = (max(var_14, (arr_3 [i_2] [i_2] [i_0])));
                                var_15 = ((((min(-19400, (arr_11 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0] [i_0 + 1] [i_4 + 1])))) ? ((28266 + (((!(arr_6 [i_0])))))) : (arr_0 [i_0 - 1])));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 20;i_5 += 1) /* same iter space */
                    {
                        var_16 = (((((21634 ? 19400 : (-32767 - 1)))) ? 19399 : 0));
                        arr_17 [i_0] [i_0] [i_2] = (~632799155);
                        var_17 = var_8;
                        var_18 = (max(var_18, (((!(arr_10 [i_2] [i_5 - 1]))))));
                    }
                    for (int i_6 = 1; i_6 < 20;i_6 += 1) /* same iter space */
                    {
                        var_19 = ((~(((((30948 ? var_9 : (arr_5 [i_2]))) != (arr_7 [i_0 - 1] [i_1]))))));
                        var_20 ^= (((((arr_2 [i_6 - 1] [i_6]) ? 252 : var_13)) ^ (max((max((arr_8 [i_0] [i_1] [i_1]), (arr_11 [i_0 - 1] [i_0] [i_0] [i_0] [i_0 + 1] [i_0 - 1] [i_0]))), var_3))));

                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            var_21 |= 1047108340;
                            var_22 = ((!(((((min((arr_7 [i_2] [i_0]), (arr_22 [16] [13])))) ? (arr_20 [i_0] [i_0 + 1] [i_0] [i_6 + 2]) : ((((arr_7 [i_0] [i_2]) == -19394))))))));
                        }
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            arr_28 [i_0] [i_1] [i_0] [i_6] [i_8] = (58 * (-32767 - 1));
                            var_23 *= (max(0, -16));
                        }
                    }
                    for (int i_9 = 3; i_9 < 20;i_9 += 1)
                    {
                        var_24 += var_8;
                        arr_33 [i_0] [19] [i_0] [i_2] [i_9 + 2] [i_9] = (((arr_19 [i_0 + 1] [i_2] [i_9] [i_9 + 2]) >= (((var_2 >= (arr_19 [i_0 + 1] [i_2] [i_2] [i_9]))))));
                        arr_34 [i_0] [i_0] [i_0] = ((-19405 | -19402) ? (arr_10 [i_0] [i_9 - 1]) : 127);
                        var_25 = (((((((arr_12 [i_0] [i_1] [i_2] [i_2] [i_2] [i_2]) + 2147483647)) >> ((((19399 ? 38 : -19394)) - 28)))) >> (((arr_6 [i_0]) + 275208268))));
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 1; i_10 < 17;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 19;i_11 += 1)
        {
            for (int i_12 = 3; i_12 < 15;i_12 += 1)
            {
                {
                    arr_41 [i_10] = (!-118);
                    arr_42 [i_11] [i_12] [i_12] [i_11] = ((max((arr_36 [i_12 + 3] [i_12]), var_11)));
                }
            }
        }
    }
    #pragma endscop
}

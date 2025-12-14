/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_4 [i_0] = (var_10 <= -var_7);
        var_16 = var_7;
        arr_5 [i_0] = 1;
        arr_6 [i_0] = (var_9 - var_0);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_1] [i_2 - 3] = (-7 < var_5);
                    arr_12 [i_0] = ((-(arr_0 [i_0])));

                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        arr_16 [i_2 + 1] [i_1] [i_0] [i_0] = 1;
                        var_17 = (((~var_13) ^ (-4158667015694548834 ^ var_13)));
                    }

                    for (int i_4 = 1; i_4 < 10;i_4 += 1)
                    {
                        var_18 *= ((31 ? 1 : (!7)));
                        var_19 &= (!var_13);
                        var_20 *= 63;
                        arr_20 [i_0] [i_2] [i_0] = (((-293955549 >= 225) ? (var_0 >= var_8) : 240));

                        for (int i_5 = 1; i_5 < 10;i_5 += 1)
                        {
                            arr_23 [i_0] [i_4 + 2] [i_2] [i_0 + 1] [i_1] [i_0] = (~var_6);
                            arr_24 [i_0] [i_1] = (i_0 % 2 == 0) ? ((((224 == 23366) << (((((arr_21 [i_0] [7] [i_0] [i_4] [i_5 + 3] [i_1] [i_5 + 2]) << (var_2 + 1972027929603728423))) - 512))))) : ((((224 == 23366) << (((((((arr_21 [i_0] [7] [i_0] [i_4] [i_5 + 3] [i_1] [i_5 + 2]) << (var_2 + 1972027929603728423))) - 512)) + 542)))));
                        }
                    }
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        var_21 = var_8;
                        arr_29 [i_0] [i_0] [i_0] [9] [i_0] [i_0 + 2] = var_11;
                        var_22 = ((-(arr_25 [i_0 + 2] [i_1] [i_2 + 2])));
                    }
                    for (int i_7 = 1; i_7 < 11;i_7 += 1)
                    {
                        arr_33 [i_0] [i_1] [i_1] [i_2] [i_2] = var_1;

                        for (int i_8 = 2; i_8 < 12;i_8 += 1) /* same iter space */
                        {
                            var_23 = (~(arr_30 [i_0] [i_7] [1] [i_0] [i_8] [i_8]));
                            arr_37 [1] [8] [i_1] [i_1] [i_0] [i_7] [i_8] = ((1 ? (arr_26 [i_0 - 1] [i_0] [i_2 - 1] [i_7] [i_8 + 1]) : (arr_26 [i_8] [i_0] [i_2] [i_0] [i_1])));
                            var_24 = 293955556;
                        }
                        for (int i_9 = 2; i_9 < 12;i_9 += 1) /* same iter space */
                        {
                            var_25 = ((-25 ? -3076323959 : var_10));
                            arr_41 [i_0] [i_0] [i_7] = (!var_2);
                            arr_42 [i_0] [i_0] [i_0] [i_0] [i_0] = -1082990673;
                            arr_43 [i_0] [i_1] [i_2 - 1] [i_7] [i_0] = (arr_13 [i_0] [i_9] [i_2 + 2] [i_7 + 1]);
                        }
                        arr_44 [i_0] [i_1] [i_1] [i_2 - 1] [i_7 + 2] [i_7 + 1] = (arr_3 [i_0]);
                        arr_45 [i_0] [1] = (var_3 + -var_11);
                    }
                    arr_46 [i_0] [i_0] [i_0] [i_0] = var_1;
                }
            }
        }
    }
    var_26 = (max(var_10, (!3076323959)));
    #pragma endscop
}

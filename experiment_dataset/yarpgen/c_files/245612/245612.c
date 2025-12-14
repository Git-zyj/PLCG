/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_18 = (max(var_18, (((((-(arr_0 [i_0] [i_0]))))))));
        arr_2 [i_0] = ((max(((arr_0 [i_0] [i_0]), -var_3))));
    }
    var_19 = (max(var_19, var_9));

    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_20 = var_9;
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 11;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            {
                                var_21 = (arr_10 [i_2] [i_2] [i_3 + 3]);
                                var_22 &= (arr_11 [i_5] [i_2] [i_2] [i_3] [i_4 - 1] [10]);
                                arr_16 [i_1] [i_2] [9] [i_1] [i_4] [13] = (max(((min(var_6, (~9223372036854775807)))), var_9));
                            }
                        }
                    }
                    arr_17 [i_2] = min((min((arr_14 [i_2]), ((~(arr_3 [i_3 - 3]))))), (((arr_9 [i_2] [i_2] [i_2]) ? (arr_5 [i_3] [i_3]) : -117)));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_23 = var_13;
                                var_24 &= ((-((65515 ? -2147483647 : (arr_20 [i_2] [i_2 - 2] [6] [i_6])))));
                                arr_23 [i_1] [i_2] [i_7] = (arr_14 [i_2]);
                                arr_24 [i_2] = (max(((max((min(65535, 10)), 0))), (arr_13 [i_2])));
                                arr_25 [i_3] [i_2] [i_7] [i_6] [1] [i_2] [i_7] = (((-(arr_6 [i_7 - 1] [i_7]))));
                            }
                        }
                    }
                    arr_26 [i_2] [i_2 + 1] = ((arr_18 [i_1] [i_2] [i_3 - 4]) <= (min(65535, -var_1)));
                }
            }
        }
        var_25 = ((+((+(min((arr_15 [0] [i_1] [i_1] [i_1] [8] [i_1]), var_6))))));
    }
    for (int i_8 = 2; i_8 < 12;i_8 += 1)
    {
        var_26 = -18446744073709551615;
        var_27 = (~((max(10, 13))));
        var_28 = 1;
    }
    for (int i_9 = 0; i_9 < 12;i_9 += 1)
    {
        var_29 = (max(var_29, (max(1, (((max(var_13, 65535))))))));

        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            var_30 &= (((((~(arr_5 [i_10] [i_9])))) ? ((max((arr_27 [i_9]), 1))) : (((((max((arr_33 [i_9] [1] [i_9]), (arr_19 [i_9])))) < (arr_22 [i_9] [i_10]))))));
            arr_34 [i_9] [i_10] [i_9] = (-31 != var_10);
        }
        for (int i_11 = 0; i_11 < 12;i_11 += 1)
        {
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 12;i_13 += 1)
                {
                    for (int i_14 = 2; i_14 < 11;i_14 += 1)
                    {
                        {
                            arr_44 [i_11] [i_12] [5] [i_11] = var_11;
                            arr_45 [i_9] [i_14] [i_12] [i_11] = (max(514394626128949621, (((min(255, var_6))))));
                            var_31 *= (~65533);
                            var_32 = (max(35, -514394626128949622));
                            var_33 = ((min((arr_38 [i_11] [i_14 - 1] [i_14 - 2]), (arr_14 [i_11]))));
                        }
                    }
                }
            }
            arr_46 [i_11] = (arr_4 [i_11]);
        }
        var_34 = ((~(min((~var_3), var_0))));
        var_35 += (-9223372036854775807 - 1);
    }
    #pragma endscop
}

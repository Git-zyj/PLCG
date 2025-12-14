/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_10 [i_1] [i_2] [i_1] [i_0] = (((arr_5 [i_0] [i_1] [i_2] [i_3]) ? (arr_4 [i_1] [i_2]) : (((((arr_5 [i_3] [i_2] [i_1] [i_0]) + 9223372036854775807)) >> (arr_4 [i_3] [i_1])))));
                        var_16 = (min(var_16, var_4));
                    }
                }
            }

            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                var_17 = (min(((max((arr_12 [i_0] [i_1] [i_4]), var_9))), 25));
                var_18 = (((-9773 ^ (arr_3 [i_0]))));
                arr_15 [i_0] [i_0] = (min(((((min(var_7, 9773))) ^ (min((arr_14 [i_1] [i_1] [i_1]), var_11)))), (((~(arr_4 [i_4] [i_1]))))));
            }
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                arr_19 [i_5] [i_1] [i_0] = (arr_7 [i_0] [i_0]);
                arr_20 [i_0] [i_1] = (arr_5 [i_5] [i_5] [i_0] [i_0]);
                var_19 = (-(((arr_6 [i_0] [i_1]) ? (arr_6 [i_1] [i_0]) : -9788)));
                arr_21 [i_5] = (max((arr_3 [i_0]), (((~((min((arr_0 [i_5]), 9752))))))));
            }
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                var_20 = 1;
                var_21 |= -var_10;
            }
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 7;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    {
                        arr_32 [i_0] [i_1] [i_7] [i_8] [i_8] = (min((arr_29 [i_7 + 3] [i_7 - 1] [i_7] [i_7 + 3]), (((arr_29 [i_7 - 1] [i_7 + 1] [i_7] [i_7 + 1]) ? (arr_29 [i_7 + 1] [i_7] [i_7 + 1] [i_7 + 1]) : 9772))));
                        var_22 = (arr_9 [i_7] [i_0]);
                        var_23 = (min(var_23, ((max((min(9773, (min((arr_22 [i_0] [i_1] [i_7 + 1] [i_8]), -9774)))), ((((min((arr_3 [i_0]), (arr_27 [i_8] [i_7] [i_1] [i_0]))) != (min((arr_14 [i_8] [i_7] [i_1]), var_3))))))))));
                        arr_33 [i_8] [i_7] [i_0] = ((37 ? ((max((((var_4 ? 1 : (arr_12 [i_1] [i_7] [i_8])))), var_2))) : (arr_26 [i_7] [i_1] [i_0])));
                    }
                }
            }
            arr_34 [i_0] [i_1] [i_1] = (((4124 ? -9766 : var_0)));
            var_24 -= ((((var_13 ? (arr_7 [i_1] [i_1]) : (arr_7 [i_0] [i_1])))) ? (min((arr_7 [i_0] [i_1]), (arr_7 [i_0] [i_0]))) : (min(-9800, (arr_7 [i_0] [i_1]))));
        }
        var_25 = (max(var_25, ((((min((arr_28 [i_0] [i_0] [i_0]), var_13)) | 2602693206)))));
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 19;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 18;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 18;i_11 += 1)
            {
                {
                    arr_44 [i_9] [i_10 - 1] [i_11 - 1] [i_10] = var_6;
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 19;i_13 += 1)
                        {
                            {
                                arr_50 [i_9] [i_9] [i_9] [i_9] [i_10] = var_14;
                                var_26 = var_0;
                                var_27 += (arr_39 [i_9]);
                                var_28 = (max(var_28, ((min((max((arr_48 [i_11] [i_10] [i_11 - 1] [i_10] [i_10 - 1]), var_14)), ((min(9800, (arr_46 [i_10 + 1] [i_13] [i_13] [i_13])))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        var_19 |= (((-var_17 + 2147483647) << (((var_3 + 4763236166724665887) - 3))));
        var_20 *= ((arr_0 [i_0]) ? -var_15 : (min(1284354411, 3010612889)));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_21 = var_4;

            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                var_22 = var_9;
                var_23 ^= (~var_12);
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        {
                            var_24 = 65519;
                            var_25 = ((~(arr_0 [i_0 - 1])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 23;i_6 += 1)
                    {
                        {
                            var_26 = (((2449809899 ? 354575838 : 2147483647)));
                            var_27 = (max(var_27, (((~(arr_15 [i_6] [i_6] [i_6] [i_6 + 2] [i_2 + 4]))))));
                            var_28 += (arr_3 [i_0 - 1] [i_5 + 1]);
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_7 = 4; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    {
                        var_29 = (arr_19 [i_0] [i_0 - 1] [i_7 + 2] [i_8]);

                        for (int i_9 = 0; i_9 < 25;i_9 += 1) /* same iter space */
                        {
                            var_30 = (arr_21 [i_0] [i_0 - 2] [i_0 - 2]);
                            var_31 -= -var_8;
                            var_32 = (arr_17 [i_7]);
                            var_33 = ((var_16 ? var_5 : ((((arr_1 [i_0 - 1]) ? var_14 : var_16)))));
                            arr_23 [i_0] [i_1] [i_1] = 0;
                        }
                        for (int i_10 = 0; i_10 < 25;i_10 += 1) /* same iter space */
                        {
                            var_34 -= ((var_12 != (arr_8 [i_0] [i_0 - 1] [i_1] [i_7 - 3] [i_7])));
                            arr_28 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = (((arr_27 [i_0 - 2] [i_0 - 1] [i_7] [i_7] [i_7 - 2] [i_7 - 2]) >> (((arr_27 [i_0 - 2] [i_7] [i_7] [0] [i_7] [i_7 - 2]) - 2034))));
                            arr_29 [i_7] [i_8] [i_1] = var_12;
                        }
                        for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
                        {
                            arr_32 [i_1] [i_1] [i_11] = var_11;
                            var_35 = (arr_5 [i_7 + 2] [i_0 + 1]);
                            var_36 = ((-(arr_25 [i_0] [i_1] [i_7] [i_8] [i_11])));
                            var_37 -= ((var_9 ? (arr_17 [i_7 - 4]) : (arr_2 [i_0 - 2])));
                        }
                        arr_33 [i_8] [i_1] [i_1] [21] = (~0);
                    }
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        var_38 = (min(var_38, (((((((arr_35 [i_12]) ? (arr_35 [i_12]) : (arr_20 [i_12] [i_12] [i_12] [8])))) ? (min(var_4, (arr_20 [i_12] [i_12] [i_12] [i_12]))) : (((var_15 - (arr_35 [i_12])))))))));
        arr_38 [i_12] = (!16);
        arr_39 [i_12] [i_12] = max((((arr_21 [i_12] [i_12] [9]) ? (arr_14 [i_12] [i_12] [i_12] [16] [i_12]) : ((var_5 ? (arr_34 [15] [16]) : var_6)))), (arr_24 [i_12] [5] [i_12] [i_12] [i_12]));
    }
    var_39 = var_11;
    var_40 = var_3;
    #pragma endscop
}

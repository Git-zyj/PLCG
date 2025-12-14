/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= (((~0) ? (min(var_10, (!105))) : ((var_9 * ((var_13 ? var_2 : -74129589))))));
    var_15 -= max((min(6910202057283628387, ((var_3 ? var_12 : 21279)))), var_1);

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((arr_1 [i_0]) ? 107 : var_10);
        var_16 = (((((arr_1 [i_0]) ? 14413022992067878470 : (arr_0 [i_0]))) * (((-(arr_0 [i_0]))))));

        for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
        {
            var_17 -= ((((((max((arr_5 [i_1] [i_1]), -99))) & var_2)) ^ ((37 ? (arr_1 [i_1]) : ((var_13 ? (arr_2 [i_1]) : (arr_6 [i_0] [i_1])))))));
            arr_7 [i_0] [i_0] = ((9745 << (((((arr_6 [i_0] [i_1]) + 2802)) - 17))));
            arr_8 [i_0] [i_0] [i_1] = ((((21831 ? 63183 : (arr_6 [i_0] [i_1]))) / ((min((arr_6 [i_0] [i_1]), var_0)))));
            var_18 |= (max(var_2, (((arr_5 [i_1] [i_0]) != var_9))));
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
        {
            arr_11 [i_0] [9] = ((-((min(29122, (((var_4 == (arr_3 [i_0])))))))));
            arr_12 [i_0] = ((arr_1 [i_0]) <= (21831 >> 1));

            /* vectorizable */
            for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
            {
                arr_15 [i_2] [i_0] [i_0] [i_0] = var_4;
                arr_16 [i_0] = (arr_0 [i_0]);
            }
            for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 20;i_6 += 1)
                    {
                        {
                            var_19 = (max(var_19, ((-(max(3527131001398075421, (arr_3 [i_2])))))));
                            arr_25 [i_0] = (~-2);
                            arr_26 [15] [i_0] [i_4] [8] [i_6 + 1] = (arr_5 [i_0] [i_0]);
                            var_20 -= (((min((((arr_6 [4] [i_6]) & 4033721081641673145)), (arr_22 [i_0] [i_2] [i_6 + 1] [i_5] [i_6] [i_4] [i_4]))) | ((~(~11536542016425923256)))));
                            var_21 = (max(1, (min((-2147483647 - 1), var_13))));
                        }
                    }
                }
                arr_27 [i_0] [i_2] [i_0] [i_0] = ((((((1 / (arr_17 [i_0] [i_2]))))) ? ((-2147483630 ? var_12 : 2410287319)) : var_2));
                arr_28 [i_2] [i_0] = (~3100478162);
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        {
                            var_22 = (var_11 ? var_13 : (1 < 82));
                            arr_38 [15] [i_0] [i_7] [i_2] [i_2] [i_0] [i_0] = ((var_7 ? (arr_9 [i_0] [i_0]) : -1425765776));
                            var_23 *= -21831;
                            var_24 *= arr_31 [i_8] [i_8] [i_2] [6];
                            var_25 = (((var_9 % 2352) < 30198));
                        }
                    }
                }
                var_26 = (min(var_26, ((((var_4 & 195) ? var_0 : 52492)))));
                var_27 = (((arr_5 [i_2] [7]) ? (arr_5 [i_0] [i_0]) : (arr_5 [i_0] [i_7])));

                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    arr_43 [i_0] [6] [i_7] [i_10] = (11536542016425923229 < 1824773449);
                    var_28 = var_5;
                }
                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    arr_48 [i_11] [i_0] [i_0] [i_0] = (arr_3 [i_0]);
                    arr_49 [i_7] [i_7] [18] [i_0] = (((-(arr_24 [i_0] [i_2] [i_7] [i_0] [i_11] [i_11]))) != (arr_46 [i_11] [i_0] [i_0] [i_0]));
                    var_29 -= (((arr_33 [i_0] [i_2] [i_0] [i_2] [i_11]) + (var_6 || -25782)));
                }
                arr_50 [i_0] [i_0] = (((((-(arr_41 [i_0] [i_2] [i_7])))) && -1824773462));
            }
            var_30 = (max(var_30, (-1121646183 / 21831)));
        }
        var_31 = (arr_20 [i_0] [i_0] [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 14;i_12 += 1)
    {
        arr_54 [i_12] [i_12] = ((var_2 ? (!-123) : (((arr_17 [i_12] [8]) ? (arr_53 [i_12] [i_12]) : var_9))));
        var_32 = (arr_23 [i_12] [i_12] [i_12] [i_12]);
        arr_55 [i_12] = (2470193846 + 13043);
        arr_56 [i_12] = ((1 ? 1464599867 : 1));
        /* LoopNest 3 */
        for (int i_13 = 1; i_13 < 13;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 14;i_15 += 1)
                {
                    {
                        arr_65 [i_14] [i_15] = -var_5;
                        arr_66 [i_14] = (arr_53 [i_13 - 1] [i_13 + 1]);
                    }
                }
            }
        }
    }
    var_33 = (!var_7);
    #pragma endscop
}

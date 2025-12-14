/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= ((((41289289 ? (((max(64090, 65510)))) : (65510 + var_11))) % ((((((9299 ? var_3 : var_9))) ? var_16 : (!-1091833621))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_19 = ((((!(arr_0 [8]))) ? ((((!(arr_0 [i_0]))))) : 8522434937096285587));
        arr_2 [i_0] [i_0] = ((-(arr_0 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = (min(((((arr_0 [i_1 - 2]) ? var_9 : 2241665491))), (((arr_6 [i_1 - 3] [i_1 + 1] [i_1 - 2]) ? (min(9206106313611543365, 1487935204262233283)) : (((max(20, 6))))))));
                    var_21 -= (max((!7663922698416146740), 14100));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_22 = ((((65506 ? 37 : 12)) << ((((((max(180, 60769))) ? ((var_13 ? var_3 : (arr_8 [i_1] [i_1]))) : (64090 != -14106))) - 13110053545658736474))));
                                var_23 ^= (max((((((var_12 ? (arr_5 [i_2] [i_0]) : var_17))) ? ((var_15 ? var_9 : var_2)) : (((var_11 ? (arr_1 [i_4]) : var_8))))), ((max((arr_4 [i_0] [i_0]), (arr_4 [i_0] [i_0]))))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_18 [i_2] [i_1] [i_0] = ((!(((max(var_10, 4026654046)) < (((min(var_5, 69))))))));

                        for (int i_6 = 0; i_6 < 0;i_6 += 1)
                        {
                            var_24 += (((((var_12 ? var_5 : (((arr_8 [i_1 + 2] [i_1 + 2]) * var_12))))) ? ((((((0 ? 17764 : 1))) == 9223372036854775807))) : (!-6164)));
                            var_25 = ((0 | ((18446744073709551598 ? 45527 : 33))));
                            var_26 -= (((65478 - 1) ? var_10 : (~27)));
                            var_27 = (((max((arr_11 [i_6 + 1] [i_6] [i_6] [i_6] [i_6 + 1] [i_6]), (arr_11 [i_6 + 1] [i_6 + 1] [3] [i_6] [i_6 + 1] [i_6])))) ? 46 : ((max((arr_20 [i_6 + 1] [i_1] [i_6 + 1] [i_6 + 1] [i_1] [i_6 + 1]), (max(var_15, 19))))));
                        }
                        var_28 = 75;
                    }
                    var_29 |= (10 >= var_0);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
        {
            var_30 -= (((arr_13 [i_7] [i_8] [i_8] [i_8]) >> (((arr_12 [i_7] [i_8]) - 2937728870820307968))));
            var_31 = ((-var_2 ? 36 : ((var_10 ? (-32767 - 1) : var_5))));
            var_32 |= ((var_11 ? var_14 : -22));
        }
        for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
        {
            var_33 = (arr_20 [i_9] [i_9] [i_7] [i_7] [i_9] [i_7]);
            var_34 = (((((1 ? var_11 : (arr_13 [i_9] [i_9] [i_9] [i_9])))) ? (~var_9) : (((arr_10 [i_7] [i_7] [i_7] [i_7]) ? var_4 : var_17))));
            var_35 += var_5;
        }
        /* LoopNest 3 */
        for (int i_10 = 1; i_10 < 7;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 11;i_12 += 1)
                {
                    {
                        var_36 -= var_1;
                        arr_38 [i_10] [i_10 - 1] [i_11] [i_10 - 1] = (!var_14);
                        arr_39 [i_10] [1] [i_12] [i_10] [i_10] [i_10] = ((65482 != ((-9299 ? (-2147483647 - 1) : 1))));
                    }
                }
            }
        }
    }
    #pragma endscop
}

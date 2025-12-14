/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_19 = ((((var_14 || (!-322044434036764628))) ? (((arr_5 [i_1 + 1] [i_1 - 3] [i_1 + 2]) ? 1 : (arr_5 [i_1 + 1] [i_1 - 3] [i_1 + 2]))) : (arr_5 [i_0] [i_1] [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 = var_2;
                                var_21 = (min(var_21, ((((arr_6 [i_0] [i_0] [14] [4] [i_0]) ? (min((arr_6 [i_3 - 1] [i_3] [10] [i_3] [i_3 + 1]), 1)) : (!var_13))))));
                                var_22 = ((arr_5 [i_3 - 1] [i_3 - 2] [i_1 + 2]) ? (((min(26, 152)))) : (arr_5 [i_3 - 1] [15] [i_1 + 2]));
                                var_23 = (min(var_23, ((max(1439742930, ((!(arr_7 [i_0] [i_0] [i_0]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = var_3;
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            {
                var_25 = ((((!(((3 ? (arr_16 [i_5] [i_5]) : var_7))))) ? 127 : ((max(127, var_4)))));
                var_26 = ((var_1 ? (arr_15 [i_5 + 3] [i_5]) : ((((arr_14 [i_5] [i_5 - 2]) ? (arr_14 [i_5] [i_5 - 2]) : (arr_14 [i_5] [i_5 - 2]))))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 24;i_8 += 1)
                    {
                        {
                            var_27 = (min(var_12, ((max(42, 1439742930)))));
                            var_28 = ((var_17 ? ((129 ? (arr_19 [i_8] [i_8 + 1] [i_8] [i_8]) : (arr_19 [i_8] [i_8 + 1] [i_8] [i_5]))) : (((arr_19 [10] [i_8 + 1] [i_8] [i_8 - 2]) * (arr_19 [i_8 + 1] [i_8 + 1] [i_7] [i_6])))));
                            var_29 = var_18;
                        }
                    }
                }
                var_30 = (max(var_30, (max(213, 213))));
            }
        }
    }

    for (int i_9 = 2; i_9 < 15;i_9 += 1)
    {
        arr_24 [i_9] = 250;
        arr_25 [i_9] [i_9] = ((((((arr_17 [14] [i_9 - 1] [20]) ? 111 : (arr_17 [5] [i_9 - 1] [i_9])))) ? (213 - 3548461177) : (min((arr_17 [i_9] [i_9 - 1] [i_9]), var_16))));

        for (int i_10 = 2; i_10 < 12;i_10 += 1)
        {
            var_31 *= (arr_2 [i_9] [i_10 + 3] [i_10]);
            var_32 = ((((!(var_13 < 1))) ? (arr_19 [i_10 + 2] [i_10] [i_9] [0]) : (min(var_15, (((185 ? 0 : var_4)))))));
            /* LoopNest 2 */
            for (int i_11 = 1; i_11 < 15;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 16;i_12 += 1)
                {
                    {
                        var_33 ^= ((-(arr_5 [9] [i_10 + 1] [9])));
                        var_34 = var_6;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 25;i_13 += 1)
    {
        var_35 = var_11;
        var_36 = (var_0 & (arr_16 [4] [i_13]));
    }
    /* vectorizable */
    for (int i_14 = 1; i_14 < 15;i_14 += 1)
    {
        var_37 = (var_10 ^ 742292685);
        var_38 = (max(var_38, ((((arr_35 [i_14 + 1]) << (((((arr_1 [i_14 - 1]) ? 129 : (arr_19 [i_14] [i_14 + 2] [i_14 + 2] [i_14]))) - 3020865677)))))));
        var_39 = 153;
        var_40 = (max(var_40, ((((arr_36 [i_14 + 1]) & 187)))));
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (var_0 == var_10)));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_21 = (((1186453322 ? -106 : (arr_1 [i_0] [i_0]))));

        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        {
                            arr_12 [i_2] = ((!(!var_0)));
                            var_22 += (min(((660683154 ? 0 : -106)), -13));
                        }
                    }
                }
            }
            arr_13 [i_0] [i_0] [i_0] = (((105 ? -18 : var_8)));
        }
        for (int i_5 = 1; i_5 < 20;i_5 += 1)
        {
            arr_17 [i_0] = (max((arr_16 [i_0] [i_0] [i_5]), (min(var_18, (1 | 1)))));
            arr_18 [i_0] = (((arr_11 [i_0] [i_5] [i_5] [i_5] [i_5]) ? 216 : (arr_9 [i_5] [i_5 + 1] [i_5 - 1] [i_5 + 1] [i_5 + 1])));
        }
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            var_23 = arr_1 [i_6] [i_0];
            arr_21 [i_0] [6] = (arr_16 [i_6] [i_6] [i_0]);
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            var_24 = (((((~(arr_14 [i_0] [i_6])))) ? ((max((arr_14 [i_0] [i_0]), (arr_14 [i_0] [i_6])))) : (((arr_14 [i_8] [i_7]) ? (arr_15 [i_7]) : (arr_14 [i_7] [i_0])))));
                            arr_32 [i_0] = var_7;
                        }
                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            arr_37 [i_0] [i_6] [i_6] [i_7] [i_8] [i_0] [i_6] = (max(0, (arr_33 [i_10] [11] [i_8] [i_7] [1] [i_0])));
                            var_25 -= var_14;
                            var_26 = (min(((((arr_20 [i_0] [i_7]) ? 50885 : var_18))), (arr_8 [i_0] [i_6] [i_7] [i_8])));
                            arr_38 [1] [i_6] [i_7] [i_8] [i_10] [i_8] |= (min(((min((arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), var_12))), (((arr_10 [i_0] [i_8] [i_6] [i_0]) ? (((arr_0 [i_8]) ? -1186453323 : (arr_31 [i_0]))) : var_16))));
                        }

                        for (int i_11 = 0; i_11 < 21;i_11 += 1)
                        {
                            var_27 = ((-((((((arr_15 [i_0]) ? (-127 - 1) : (arr_30 [i_0] [i_6] [16] [i_8] [i_11])))) ? var_7 : (max(-113, 3634284142))))));
                            var_28 ^= ((-((-var_13 - (arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                        }
                        var_29 = (min((~7174), (!3351326358)));
                        arr_42 [i_0] = var_15;
                        var_30 += (((((-(max(38863, (arr_28 [i_6] [i_6] [i_6] [i_6])))))) ? 127 : ((min((arr_27 [i_0]), (arr_27 [i_0]))))));
                    }
                }
            }
        }
        arr_43 [i_0] = -115;
    }
    for (int i_12 = 0; i_12 < 11;i_12 += 1)
    {
        arr_46 [i_12] [i_12] = (min(var_10, 32));
        arr_47 [i_12] = (((((((var_3 ? (arr_33 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]) : (arr_28 [i_12] [i_12] [i_12] [i_12])))) ? -660683156 : (arr_31 [i_12]))) * ((((((((arr_39 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]) ? var_7 : 0))) > (max(var_5, 0))))))));
        var_31 = (max(var_31, 1));
    }
    for (int i_13 = 0; i_13 < 11;i_13 += 1)
    {
        arr_50 [5] = ((1048575 ? 6 : 14336));
        arr_51 [i_13] [i_13] = ((((arr_10 [18] [i_13] [i_13] [18]) ? -32761 : 35442)));
    }
    #pragma endscop
}

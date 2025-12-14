/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((!(((((var_13 ? var_12 : var_10)) & (var_14 & var_15)))))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((-((min(39912, ((min((arr_0 [i_0]), 1))))))));
        var_17 = (max(var_17, var_11));
        arr_3 [2] [i_0] = (arr_0 [18]);
        arr_4 [i_0] = (arr_0 [17]);

        /* vectorizable */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 20;i_4 += 1)
                    {
                        {
                            arr_14 [1] [9] [13] [12] [i_0] = (((var_8 & (arr_8 [i_2] [6]))) << (!25607));
                            arr_15 [2] [20] = 1;
                            arr_16 [i_0] [1] [i_0] [i_0] = (((1 * -38) != 25607));
                            var_18 -= (arr_10 [i_0] [10] [10] [i_3] [11]);
                        }
                    }
                }
            }
            var_19 = (max(var_19, (((~(~63040))))));
        }
        for (int i_5 = 2; i_5 < 18;i_5 += 1)
        {
            arr_20 [i_0] [i_0] [i_0] = (arr_18 [i_5 + 1] [i_0]);
            var_20 = min(var_0, 32767);
        }
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            arr_24 [i_0] [i_6] = (arr_11 [i_0] [i_6] [1]);
            arr_25 [i_0] = (((((arr_6 [i_0]) ? var_2 : -28)) / var_5));
        }
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                var_21 &= ((((min((arr_22 [i_0] [i_7]), (1557748557 - 1)))) + (arr_26 [i_0] [i_7])));
                arr_33 [i_7] [i_8] = ((1741943171697113574 + (arr_30 [i_0] [i_0] [i_0] [i_0])));
                arr_34 [10] |= ((((((((arr_8 [i_0] [i_7]) ? 55093 : var_6))) ? ((min(var_13, (arr_9 [i_0] [18] [18])))) : (arr_10 [i_0] [i_7] [i_8] [15] [i_0]))) == (arr_0 [i_7])));

                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    arr_39 [i_8] [i_8] [13] [13] = (arr_21 [3]);
                    var_22 = (arr_38 [i_0] [i_7] [i_8] [i_9]);
                }
            }
            for (int i_10 = 4; i_10 < 20;i_10 += 1)
            {
                arr_42 [i_10 - 2] [i_0] [i_7] [i_0] = (arr_41 [i_0] [i_7] [i_10] [i_10]);

                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    arr_47 [i_0] [i_10] = ((((max(2259202148, var_4))) ? (((arr_29 [i_10 - 3] [i_7] [i_10]) | (arr_29 [i_10 + 1] [i_7] [i_10]))) : (min(-1, ((-(arr_13 [i_7] [i_10] [i_11])))))));
                    arr_48 [i_0] [i_7] [1] [i_11] = (~(min((arr_31 [i_10 - 4] [8] [17] [i_10 - 2]), (arr_22 [i_0] [i_10 - 2]))));
                    var_23 |= (((arr_12 [i_10 - 4]) ? (((min((var_7 != 3471320595), 30445)))) : ((var_7 ? (~var_14) : (arr_41 [i_10 - 2] [i_10] [i_10 - 4] [i_10 + 1])))));
                }
                arr_49 [0] [0] [i_7] = ((-(((((1 >> (39907 - 39860)))) ? (var_5 == 22) : ((var_5 ? var_6 : (arr_8 [3] [i_7])))))));
            }
            var_24 = (min(var_24, ((((((-var_2 ^ ((1 ? var_14 : 2471631342422347338))))) ? (max(-34, (arr_38 [i_0] [i_0] [i_7] [i_7]))) : (((arr_9 [i_0] [i_0] [i_0]) / (arr_9 [1] [i_0] [i_7]))))))));
        }
    }
    for (int i_12 = 0; i_12 < 21;i_12 += 1)
    {
        var_25 *= 55;
        arr_54 [1] = 4255439640;
    }
    #pragma endscop
}

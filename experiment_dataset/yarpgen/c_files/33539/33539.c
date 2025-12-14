/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_19 = (min(var_19, var_10));
        var_20 = ((var_10 ? ((((arr_0 [i_0] [i_0]) <= (arr_0 [i_0] [i_0])))) : var_2));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    arr_8 [i_2] = (((arr_2 [i_2 + 1] [i_2 - 1]) * (((((var_17 ? (arr_1 [i_0]) : (arr_4 [i_1] [i_2] [i_1]))))))));
                    var_21 = (min(var_21, ((min(-11911, (11911 ^ 2147483647))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 8;i_4 += 1)
                        {
                            {
                                arr_14 [i_2] [6] [2] [i_4 + 2] = 9306401398083800043;
                                var_22 = (max(((min(2137836677650853649, 3870184686906329993))), ((((max((arr_5 [i_4 + 2] [i_3 + 1] [2] [2]), (arr_4 [i_0] [i_2] [i_2])))) ? (((arr_5 [i_0] [i_1] [i_2 + 1] [i_1]) & (arr_12 [i_3] [2] [9] [i_3 + 1] [4] [i_3 + 1] [i_3]))) : (arr_6 [i_4 + 2])))));
                            }
                        }
                    }
                }
            }
        }
        var_23 = (max(var_23, var_14));
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        arr_17 [i_5] [i_5] = ((var_9 ? ((((arr_15 [i_5]) ^ ((var_11 - (arr_15 [i_5])))))) : ((((min((arr_15 [i_5]), var_11))) ? ((var_8 ? (arr_15 [i_5]) : 5050817857149578438)) : -11912))));
        var_24 = (min(var_24, ((((arr_15 [16]) | (27203 == 12932011034043023971))))));
        arr_18 [i_5] = (min((max(((var_5 ? (arr_16 [i_5]) : var_2)), (arr_15 [i_5]))), (28283 < var_9)));
    }
    for (int i_6 = 1; i_6 < 15;i_6 += 1)
    {
        arr_21 [i_6] |= (max((((!((!(arr_19 [i_6])))))), (arr_20 [i_6 - 1])));
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 14;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 12;i_8 += 1)
            {
                {

                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {

                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            arr_34 [i_6] [i_7] [i_8 + 3] [i_8 + 3] [i_10] [i_9] [i_9] = ((((arr_31 [i_6] [i_7] [i_6 - 1] [i_8 + 4] [i_7 - 2]) ? (arr_31 [i_6 + 1] [10] [i_6 + 1] [i_8 + 2] [i_7 - 1]) : var_10)));
                            var_25 = 13395926216559973177;
                            arr_35 [i_10] [i_10] [i_9] [i_8] [i_7] [i_7] [i_6] |= var_9;
                            var_26 = 0;
                        }
                        /* vectorizable */
                        for (int i_11 = 3; i_11 < 15;i_11 += 1)
                        {
                            var_27 -= (((((17109 ? (arr_28 [i_6 - 1] [i_7 + 1] [i_8 + 4] [i_11]) : 11910))) <= var_8));
                            var_28 |= 1;
                        }
                        var_29 = 5060;
                        var_30 = (min(var_30, (((+(min((5050817857149578438 & 11915), (arr_33 [i_6] [i_9]))))))));
                        var_31 = (max((arr_29 [i_6 + 1] [i_7 - 2] [i_8 - 1]), (max((arr_32 [i_7 - 1] [i_8 + 4]), 13395926216559973162))));
                        arr_38 [i_6] [i_6] [i_7 - 1] [i_8 + 3] [i_9] [i_8 + 3] = (10462400750320478170 <= -2147483642);
                    }
                    var_32 = var_8;

                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        var_33 |= 4095;
                        arr_42 [1] [9] [i_7 + 2] [i_8 - 1] [i_12] = (max(((+(((arr_29 [i_6] [i_7 - 1] [i_12]) % var_0)))), (arr_32 [i_7] [i_7 - 1])));
                    }
                    var_34 = (min(var_34, (arr_30 [i_6] [i_7] [i_7] [i_7] [i_6 - 1] [i_8 + 1] [i_7 + 2])));
                    arr_43 [10] [i_7] [i_6] = ((((((max((arr_15 [i_7]), -1745819534))) && 10462400750320478170)) ? (arr_33 [i_6 + 1] [i_7]) : 0));
                }
            }
        }
        arr_44 [i_6] = (arr_20 [i_6]);
        arr_45 [i_6] = (arr_26 [i_6 + 1] [i_6 + 1]);
    }
    var_35 = 0;
    var_36 += ((var_11 <= (((!1) * 3006758910458245079))));
    var_37 = (((((((max(0, 34759))) ? (var_18 ^ -9181283227360392837) : var_14))) || var_12));
    #pragma endscop
}

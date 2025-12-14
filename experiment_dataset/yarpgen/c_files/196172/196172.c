/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((0 ? var_4 : 151));
    var_16 = (min((var_12 * 0), -var_12));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = ((((((var_13 || (arr_5 [i_0] [i_1]))) && 121494600)) ? (min((arr_3 [i_1]), var_12)) : (min(var_7, (arr_4 [i_0] [i_1])))));
                arr_6 [i_0] [i_1] |= (arr_4 [1] [8]);

                /* vectorizable */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_18 = (arr_2 [i_1]);
                        arr_15 [i_2] = (arr_8 [i_2] [i_2 - 1] [i_2 + 1] [i_2 - 1]);
                        arr_16 [i_2] [i_1] [i_1] [i_1] = -1;
                        arr_17 [i_2] [i_2] [i_1] [i_2] = 78;
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        arr_21 [i_2] = ((arr_7 [i_2 + 2]) / var_0);

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_26 [i_2] = arr_0 [i_0];
                            var_19 ^= var_12;
                        }
                        for (int i_6 = 2; i_6 < 11;i_6 += 1)
                        {
                            var_20 = 367116052;
                            arr_31 [i_0] [i_0] [i_2] [i_0] = -var_12;
                        }
                        var_21 = (arr_19 [i_0] [i_0] [i_0] [i_0]);

                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            arr_34 [i_2] [1] = arr_33 [i_2 + 1] [i_2 + 1] [i_2 + 2] [i_2 + 2];
                            arr_35 [i_2] [i_1] [1] [1] [1] [i_1] = -var_9;
                            var_22 = var_11;
                            arr_36 [1] [i_2] [i_2 + 1] = (!1);
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            arr_39 [i_2] [i_1] [i_2] = var_9;
                            var_23 = (var_12 ? (73 >> 1) : (((arr_9 [i_2 - 1]) ? 164 : (arr_29 [i_0]))));
                            var_24 *= (((arr_7 [i_2 + 2]) ? (1 * 1) : 255));
                            arr_40 [i_0] [7] [i_2] [7] [i_4] [i_2] = (arr_38 [i_2] [i_1] [1]);
                        }
                    }
                    arr_41 [i_2] = (((-502290068 <= 1) <= (arr_8 [i_2] [i_2 + 1] [i_2 - 1] [i_2])));
                    var_25 = (((arr_14 [i_0] [i_2]) ? (arr_14 [i_0] [i_2]) : (arr_14 [i_2] [i_2])));
                    var_26 *= (((arr_33 [i_0] [i_1] [i_1] [i_2]) ? var_7 : 1));
                }
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    var_27 *= ((((min(46, (var_13 & var_12)))) ? (~7) : var_2));
                    var_28 = (max(var_28, (((50331648 ? (0 <= var_9) : var_14)))));
                    var_29 = (max(var_29, var_9));
                    var_30 = ((((((arr_22 [i_9]) ? (arr_20 [i_0] [i_1] [i_9]) : -371133619))) ? ((max((arr_20 [i_0] [i_1] [i_9]), (arr_20 [i_1] [0] [3])))) : ((min(1, (arr_20 [i_0] [i_1] [i_9]))))));

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {

                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            arr_53 [i_9] [0] [i_9] [1] [i_0] = -502290073;
                            arr_54 [i_0] [i_0] [1] [i_0] [7] [i_10] [i_11] = (arr_10 [i_0] [i_0] [i_0]);
                        }
                        var_31 = var_11;
                    }
                    for (int i_12 = 0; i_12 < 13;i_12 += 1)
                    {
                        arr_57 [6] [i_0] = (((arr_52 [i_0] [i_0] [i_9] [10] [i_12]) ? ((var_7 ? 0 : (arr_18 [i_0] [i_0]))) : var_10));
                        var_32 += (min(1, (max((max((arr_32 [i_0] [i_0] [7] [i_0] [i_9] [i_12]), (arr_14 [i_0] [i_9]))), (min(var_4, var_5))))));
                    }
                }
            }
        }
    }
    var_33 = (min(-1224326312, (!var_13)));
    var_34 = var_11;
    #pragma endscop
}

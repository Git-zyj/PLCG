/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
                    {
                        var_19 ^= (arr_10 [i_2]);
                        arr_12 [6] [i_1] [i_2] [i_0] = -var_15;
                        var_20 = ((((+(((arr_10 [0]) ? 6 : var_7)))) - 0));
                        var_21 = ((((-(arr_8 [12] [10] [i_2 + 2] [i_0]))) / (((~(arr_9 [i_0] [i_0 - 1] [i_0 - 1] [i_0]))))));
                        arr_13 [i_0] [i_1] [i_1] = (((arr_8 [1] [i_1] [13] [i_0]) % -var_6));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
                    {
                        var_22 ^= -4304783784441167572;
                        var_23 = (arr_2 [i_0 - 1]);
                    }
                    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                    {
                        arr_19 [i_1] [10] [i_0] [5] = (max((arr_1 [i_0 - 1] [i_0 - 1]), (max((((arr_14 [i_0 - 1] [i_1] [i_0] [i_5]) ? (arr_17 [i_0]) : var_10)), ((-(arr_10 [i_0])))))));

                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            var_24 = ((!(arr_15 [i_0] [i_0] [1] [i_1] [i_0] [i_0])));
                            arr_22 [i_0] [i_1] = (min((arr_1 [i_0] [i_1]), ((((arr_17 [i_0]) <= (arr_4 [i_6] [i_2 + 1]))))));
                        }
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            arr_25 [i_0] [i_1] [8] [i_0] [i_1] = (arr_7 [i_2] [i_2] [i_2] [i_0]);
                            var_25 = min(((-(((arr_9 [i_7] [i_5] [i_2 - 1] [i_1]) / (arr_23 [i_0 - 1] [i_5] [i_5] [13] [14] [i_0 - 1] [i_0 - 1]))))), ((((arr_1 [i_0 - 1] [i_1]) ? (arr_1 [i_0 + 1] [8]) : (arr_1 [i_0 - 1] [i_1])))));
                            var_26 = ((!((((arr_21 [i_0 - 1] [i_1] [i_1] [i_2] [2] [i_7]) ? (((arr_15 [13] [5] [13] [i_5] [i_0] [i_5]) ? (arr_15 [i_0 + 1] [i_1] [i_2] [i_1] [i_0] [i_7]) : (arr_17 [i_0]))) : (((arr_2 [i_5]) & (arr_16 [13] [15] [i_0]))))))));
                        }
                        /* vectorizable */
                        for (int i_8 = 3; i_8 < 16;i_8 += 1) /* same iter space */
                        {
                            arr_28 [i_0] [i_0] = (((!(arr_1 [1] [i_8]))));
                            arr_29 [i_0] [i_1] [i_2] [i_0] [i_1] = (arr_7 [i_0] [i_2 + 2] [i_2] [i_8 - 3]);
                        }
                        /* vectorizable */
                        for (int i_9 = 3; i_9 < 16;i_9 += 1) /* same iter space */
                        {
                            var_27 = (max(var_27, ((((arr_11 [i_5]) || 118115190)))));
                            var_28 = 18453;
                            arr_32 [i_2 + 4] [i_0] = (((arr_3 [i_0] [i_0 + 1] [i_0]) && -2265377634127591276));
                        }
                    }

                    for (int i_10 = 1; i_10 < 16;i_10 += 1)
                    {
                        var_29 ^= (((arr_24 [i_0] [10]) / (arr_2 [i_10 - 1])));
                        var_30 = (arr_14 [i_2 + 4] [i_2] [i_0] [i_2]);
                    }
                    for (int i_11 = 1; i_11 < 15;i_11 += 1)
                    {
                        var_31 = (arr_15 [i_0] [i_0] [11] [11] [i_0] [2]);
                        arr_40 [i_0] [i_1] = (!3067760166);

                        for (int i_12 = 1; i_12 < 16;i_12 += 1)
                        {
                            var_32 = (((arr_8 [i_0 - 1] [15] [9] [i_0]) ? ((((!(arr_8 [i_0 + 1] [i_0] [i_0] [i_0]))))) : ((((!(arr_26 [i_0] [i_1] [i_0] [i_11]))) ? (min((arr_34 [i_1] [i_1] [i_0] [i_12]), (arr_21 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]))) : (var_15 || 35)))));
                            arr_44 [i_0] [9] [i_0] [9] [i_12] [i_0] [10] = (max((~-35), var_15));
                        }
                    }
                    var_33 = (((((((var_14 ? 268435456 : var_9))) ? 549755813856 : var_3)) * (arr_23 [i_0 + 1] [i_0] [7] [4] [8] [1] [i_0 + 1])));
                    var_34 = ((((((arr_15 [16] [i_0] [i_1] [i_0] [i_0] [i_0]) * (~var_4)))) ? (((arr_37 [i_0] [i_0] [i_1] [i_0 + 1] [15] [9]) ? ((~(arr_27 [5] [i_1] [i_2]))) : (((arr_2 [i_0]) / (arr_36 [i_0] [i_0] [i_0] [i_0 + 1]))))) : ((var_1 ? (((arr_31 [i_2] [i_1] [i_2] [1] [11] [i_2] [i_1]) ? (arr_42 [i_0] [i_1] [i_2] [14]) : (arr_15 [i_2] [i_2] [i_2] [i_2] [i_0] [i_2]))) : ((((arr_41 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [i_1]) && var_14)))))));
                    var_35 = 254;
                }
            }
        }
    }
    var_36 = -118115198;
    #pragma endscop
}

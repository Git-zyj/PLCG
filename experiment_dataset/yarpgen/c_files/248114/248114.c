/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {

                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            arr_14 [i_0] [i_0] [i_2] [i_4 - 3] = (~4294967295);
                            arr_15 [i_0 + 1] = (((arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 1]) / (arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 1])));
                        }
                        arr_16 [21] [i_1] [i_1] [i_3] = var_7;
                        arr_17 [i_0] [i_0] [i_2] [i_3] = ((!(arr_4 [i_0] [i_0 + 1])));
                        var_21 = var_8;
                    }
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            arr_25 [i_5] [i_1] [i_0] = (arr_8 [1]);
                            arr_26 [i_0] [i_5] [i_0] [6] [i_0] = var_7;
                            var_22 -= (arr_8 [i_0]);
                        }
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            arr_31 [i_1] [i_0] = (min((arr_7 [i_0] [i_0] [i_0]), (((var_2 & 14392493941147142) ? ((var_12 >> (var_10 - 147))) : (arr_24 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1])))));
                            var_23 ^= (max(((min((((!(arr_21 [i_5] [i_5] [i_2] [i_5])))), 9223372036854775807))), -1781480516840961250));
                            arr_32 [i_2] [i_1] [i_0] = (arr_30 [i_0] [i_1] [i_2] [i_0 + 1] [i_7]);
                        }
                        for (int i_8 = 1; i_8 < 21;i_8 += 1)
                        {
                            arr_35 [i_0 + 1] [i_1] [i_0 + 1] [i_5] [1] &= (max((((min((arr_2 [i_0] [i_1]), 206)) * (((min(var_7, (arr_7 [i_5] [i_1] [i_2]))))))), ((min((arr_18 [i_0 + 1]), (!var_11))))));
                            arr_36 [i_5] = arr_6 [i_0] [i_1] [2] [i_5];
                        }
                        var_24 = (arr_7 [i_0] [i_1] [i_2]);
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_25 = (min(var_25, var_0));
                        var_26 ^= (6930229068967992798 != -121);
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 0;i_10 += 1)
                    {
                        arr_44 [i_1] [i_1] [i_2] [i_1] [15] = arr_18 [i_1];
                        arr_45 [i_0 + 1] [i_1] [i_2] [i_10 + 1] [1] = (((arr_20 [i_0 + 1] [i_0 + 1] [i_10 + 1] [i_10 + 1]) ? ((1 / (arr_1 [i_0]))) : (~0)));
                    }
                    var_27 |= (max((min(((1 * (arr_0 [i_2] [i_1]))), 1)), (!1)));

                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {
                        var_28 -= -0;
                        var_29 = var_9;
                        var_30 ^= ((!(arr_0 [i_0 + 1] [i_0 + 1])));
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        arr_53 [22] [i_1] [i_1] [i_1] = ((((-1072215390678821953 != (arr_42 [i_12] [i_2] [i_2] [i_2]))) ? (~1072215390678821952) : (arr_22 [i_0] [i_1] [i_1] [i_12])));

                        for (int i_13 = 1; i_13 < 23;i_13 += 1)
                        {
                            arr_56 [i_0] [i_1] [i_0] [i_1] [i_13] = 1072215390678821952;
                            var_31 = (arr_48 [i_0 + 1] [i_0] [i_0 + 1] [i_12] [i_13 - 1]);
                        }
                        for (int i_14 = 0; i_14 < 24;i_14 += 1)
                        {
                            arr_60 [i_0 + 1] [i_1] [i_12] [i_0 + 1] [i_0 + 1] [i_0] = var_8;
                            arr_61 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [9] [17] [i_0] = (arr_9 [18] [6] [i_14]);
                        }
                        arr_62 [i_0] [i_1] = (arr_1 [i_0 + 1]);
                        arr_63 [i_0 + 1] [i_1] [1] [i_12] = (((arr_6 [8] [i_1] [i_0 + 1] [i_0 + 1]) ? ((((arr_10 [i_0 + 1] [13] [i_0 + 1] [13] [i_0]) >> (((arr_52 [i_0] [i_1] [i_2] [i_12]) + 7681078233374338440))))) : (arr_43 [i_12] [i_2] [i_0])));
                    }
                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 24;i_15 += 1)
                    {
                        arr_66 [i_0 + 1] [i_1] [i_2] [6] = (arr_27 [i_0 + 1] [i_0] [i_0 + 1] [18] [i_0 + 1] [i_2]);
                        arr_67 [18] = (((!var_7) < (arr_47 [i_0] [i_0] [i_0])));
                        var_32 = (min(var_32, 1228));
                        var_33 *= (((!var_19) < (arr_29 [i_0 + 1] [i_2] [i_0 + 1])));
                    }
                }
            }
        }
    }
    var_34 = (~((~(var_2 >> var_19))));
    #pragma endscop
}

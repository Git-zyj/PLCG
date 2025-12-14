/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 155;
    var_16 = (~var_7);

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (min(((((24 ? 0 : 1)))), ((1 ? (((-2147483647 - 1) | 7627032195477827862)) : 145))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_17 += (~var_14);
                    var_18 |= (min((186 - -7), (((1138463522 ? (arr_1 [i_2]) : var_3)))));

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            var_19 = 1;
                            var_20 = ((~((var_3 & (((-11 ? 10 : 11)))))));
                            var_21 *= var_2;
                        }

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_16 [i_0] [i_5] [i_3] [i_3] [i_3] = (arr_15 [i_0] [4] [i_1] [i_2 + 1] [i_3 - 1] [i_5]);
                            arr_17 [i_0] [i_1] [i_0] [i_1] [i_5] = ((!(((-((var_1 ? 16655618879933770537 : 133169152)))))));
                            var_22 = (((((+((max((arr_6 [i_1] [i_1] [i_3] [i_5]), 25240)))))) ? ((min(var_11, (!4)))) : ((((arr_1 [i_0]) == 7)))));
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_23 = (min(var_23, ((max((arr_3 [i_3 - 1]), (((arr_15 [i_3 - 1] [i_3] [i_3 - 1] [i_3] [i_3 - 1] [i_0]) | (arr_3 [i_3 - 1]))))))));
                            var_24 -= -127;
                            arr_21 [10] [i_6] [i_2] [i_1] [i_0] [i_6] [i_0] = ((~(((arr_15 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_6]) ? (arr_15 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2] [i_6]) : var_7))));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            arr_25 [i_7] [i_7] [i_2] [i_2] [i_7] = (22 | 548412933);
                            var_25 = (min((min(1, (arr_6 [i_2] [i_2 - 1] [i_3 - 1] [i_3 - 1]))), (min((arr_6 [i_1] [i_2 - 1] [i_3 - 1] [i_3 - 1]), (arr_6 [i_1] [i_2 - 1] [i_3 - 1] [i_3 - 1])))));
                            var_26 -= (--255);
                        }
                        for (int i_8 = 0; i_8 < 12;i_8 += 1)
                        {
                            var_27 = (arr_15 [i_0] [0] [i_2] [8] [2] [i_0]);
                            var_28 = (max(var_28, ((((arr_27 [i_2] [i_8]) | var_1)))));
                            var_29 = (((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_8]) ? ((((arr_15 [i_1] [i_1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_8]) - (arr_8 [i_0] [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 + 1] [7])))) : (min(1, ((var_7 ? var_4 : 36276))))));
                        }
                    }
                    arr_29 [i_0] [11] &= (min(var_4, (((((-(arr_13 [i_0] [0] [i_1] [i_0] [i_0]))) * 0)))));
                }
            }
        }
        var_30 = (arr_26 [0] [i_0] [8] [i_0]);
        arr_30 [i_0] = (min((~33554368), (arr_12 [i_0] [i_0] [i_0] [10])));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        var_31 = (((arr_31 [i_9]) | (((-133169152 ? 6456012623935250979 : -1903745771137115574)))));
        arr_33 [i_9] = ((2626 ? 21487 : -28095));
        arr_34 [i_9] = (((var_10 | 1) ? (arr_31 [i_9]) : 81));
    }
    var_32 = 1073741823;
    #pragma endscop
}

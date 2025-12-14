/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        arr_3 [i_0] = ((~(arr_0 [i_0 + 2] [i_0])));
        arr_4 [i_0] = 66060288;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    arr_9 [7] [7] [i_0] [i_0] = ((+(((arr_8 [i_0] [i_2] [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : var_0))));

                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        arr_12 [i_2] [i_0] [i_0] [i_0] = (((arr_8 [i_0] [i_1 + 1] [i_1] [i_1 - 1]) ? (!426750999) : (-127 - 1)));
                        var_15 = ((248 ? ((9608857705619949324 ? 0 : -6441)) : (arr_0 [i_0] [i_0])));

                        for (int i_4 = 1; i_4 < 7;i_4 += 1)
                        {
                            arr_16 [8] [8] [i_0] [i_3] [i_3] = (2227996243854674492 - 232);
                            var_16 = (arr_10 [i_0]);
                        }
                        var_17 = (arr_5 [i_0]);
                        arr_17 [i_0] [i_0] [i_0] [i_0] = (arr_10 [i_0]);
                    }
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        arr_22 [i_5] [i_0] [6] [i_0] [6] = (var_5 ^ (arr_19 [9] [i_0] [9] [i_0] [9]));
                        arr_23 [i_0] = -270;
                    }
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        arr_27 [i_0] [i_1] [i_2] [i_6] [i_0] [i_0] = ((-((var_4 ? 0 : (arr_24 [3] [i_0] [i_0] [i_0])))));
                        arr_28 [0] [i_0] [i_2] [0] [i_2] [i_2] = (arr_13 [i_0] [i_1] [i_0] [i_6] [i_0]);
                    }
                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {

                        for (int i_8 = 2; i_8 < 8;i_8 += 1)
                        {
                            var_18 = (max(var_18, -21));
                            arr_34 [i_0] [i_1] [i_1] = (((~242) ? (((arr_25 [i_0] [i_0]) ? -1216207860 : (arr_14 [i_0] [2] [i_2] [8] [i_1] [i_0]))) : (((arr_6 [0] [1] [i_2]) ? (arr_7 [i_0] [i_0]) : (arr_1 [i_0])))));
                        }
                        for (int i_9 = 1; i_9 < 8;i_9 += 1)
                        {
                            var_19 = ((var_2 & (arr_5 [i_0])));
                            var_20 = ((-(arr_21 [i_0] [i_9 + 1] [i_0 + 2] [i_0])));
                            var_21 = (arr_20 [i_0] [4] [i_0] [i_0] [i_0] [4]);
                            var_22 = -66060276;
                        }
                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            var_23 += (var_10 & var_13);
                            arr_40 [i_1] [i_2] [i_1] [i_0] = var_5;
                            arr_41 [i_0] [i_0] [i_2] [i_0] [i_0] = var_3;
                            arr_42 [i_1] [0] [i_0] = (((arr_8 [i_0] [3] [3] [i_0]) != (248 & -270)));
                        }
                        arr_43 [i_0] [i_0] [i_0] = ((-var_3 ? (arr_18 [i_1 - 1] [i_1] [i_1] [i_0] [i_1 + 1]) : (arr_20 [i_0 - 1] [i_1 - 2] [i_2] [i_2 + 1] [i_7] [i_2])));
                    }
                }
            }
        }

        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            var_24 = (max(var_24, (arr_15 [i_0] [i_0] [9] [6] [9] [i_0])));
            var_25 = (arr_37 [i_0] [0] [i_0 + 2] [0] [i_0]);
        }
        for (int i_12 = 1; i_12 < 8;i_12 += 1)
        {
            arr_52 [i_0] [i_12] [i_12] = -6441;
            arr_53 [i_0] [i_12] [i_12] = var_5;
        }
    }
    for (int i_13 = 1; i_13 < 19;i_13 += 1)
    {

        for (int i_14 = 3; i_14 < 20;i_14 += 1)
        {
            var_26 = ((!((min((arr_56 [i_13]), 56)))));
            var_27 = 68;
            var_28 = (max(var_28, ((((3391146441 ? 1 : (arr_59 [16])))))));
        }
        arr_60 [i_13] [i_13] = (max(244, (max((arr_55 [i_13]), ((((arr_55 [i_13]) ? var_8 : 0)))))));
        var_29 = ((((1 || (((var_8 ? 95 : var_12)))))));
    }
    for (int i_15 = 0; i_15 < 1;i_15 += 1)
    {
        arr_64 [i_15] = ((((min(119, 261120))) + (max((arr_62 [i_15] [i_15]), ((-(arr_63 [i_15])))))));
        var_30 = (min((((((var_6 & (arr_62 [i_15] [i_15])))) & (arr_63 [i_15]))), (((((((arr_63 [i_15]) || (arr_62 [i_15] [i_15]))))) / (max((arr_63 [i_15]), (arr_61 [i_15])))))));
        var_31 = ((((((((arr_63 [i_15]) && var_7))))) > (arr_63 [i_15])));
        var_32 = (!var_2);
    }
    #pragma endscop
}

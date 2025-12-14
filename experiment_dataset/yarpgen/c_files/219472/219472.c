/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-(((((var_13 ? var_8 : var_10))) ? (!1) : ((var_11 ? var_12 : 1))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = ((+(((arr_1 [i_0]) + (arr_2 [i_0])))));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_6 [i_0] [i_1] [i_1] = ((!((((arr_2 [i_0]) ? (arr_4 [i_0] [i_0]) : (arr_4 [i_0] [i_0]))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] = (((((!(((195 - (arr_8 [i_0] [i_1]))))))) <= (1 | 1)));
                        arr_12 [i_3] [i_3] [i_0] [i_0] [i_0] [i_0] = (max((((((~(arr_7 [i_2] [i_2])))) ? (~var_7) : var_1)), (arr_2 [i_0])));
                    }
                }
            }

            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                arr_15 [i_0] [i_4] [i_4] = (max(((((max((arr_7 [i_0] [i_1]), var_7)) + var_11))), 13641828672088878448));

                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    var_17 = (min(var_17, (min(-var_13, ((-(((arr_0 [i_0] [i_5]) - var_11))))))));
                    var_18 = (min(var_18, var_1));
                    var_19 = (min(var_19, ((((-85 + 2147483647) >> ((((var_1 ? var_2 : ((var_2 ? (arr_16 [i_0] [i_0] [i_0] [i_0] [4] [12]) : (arr_14 [i_4] [i_4] [2] [12]))))) + 88)))))));
                    var_20 = (max(var_20, ((((((var_3 ? 1 : var_10) ^ (arr_0 [i_0] [3]))))))));
                }
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    arr_21 [i_0] [i_4] [i_1] [i_0] = var_4;
                    var_21 = (i_0 % 2 == zero) ? ((((min((arr_20 [i_0] [i_0] [i_0]), (arr_17 [i_0] [16] [i_4] [i_0]))) << (((min((arr_5 [i_0] [i_1]), (arr_1 [i_0]))) + 1908183028))))) : ((((min((arr_20 [i_0] [i_0] [i_0]), (arr_17 [i_0] [16] [i_4] [i_0]))) << (((((min((arr_5 [i_0] [i_1]), (arr_1 [i_0]))) + 1908183028)) - 619406365)))));
                }
            }
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    {

                        for (int i_9 = 4; i_9 < 19;i_9 += 1)
                        {
                            arr_33 [i_0] [i_1] [i_7] [i_0] [i_9 + 1] [i_1] = var_12;
                            arr_34 [i_0] [i_1] = ((var_13 / ((((~(arr_0 [i_8] [i_9]))) + (arr_29 [1] [i_7])))));
                            var_22 = (min(var_22, var_5));
                        }
                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            arr_37 [i_7] [i_10] [i_0] = (arr_19 [i_0] [5] [i_7] [i_10]);
                            arr_38 [i_0] [6] [i_7] [i_1] [i_0] = var_9;
                        }
                        for (int i_11 = 3; i_11 < 19;i_11 += 1)
                        {
                            var_23 = (((((var_8 ? var_2 : (arr_36 [i_0] [i_11 - 3] [i_11] [i_11 - 2] [i_8] [i_0])))) ? ((((var_13 ? 1 : var_7)) | (((arr_28 [i_0] [i_0] [i_0]) ? var_9 : 1)))) : ((min((arr_32 [i_0] [i_1] [i_1] [i_7] [i_8] [i_8] [i_11 + 1]), 1)))));
                            arr_41 [i_0] [i_0] [i_0] [0] [i_7] [10] &= (max(((((arr_10 [i_8] [i_1] [i_0] [i_7] [i_8]) && ((min((arr_35 [i_7] [i_7] [i_1]), (arr_19 [i_0] [i_0] [i_0] [i_0]))))))), (((-1 + 2147483647) << (16 - 16)))));
                        }
                        var_24 += ((((arr_28 [i_8] [i_8] [i_7]) ? (max(1, (arr_0 [i_0] [i_0]))) : var_13)));
                        arr_42 [i_0] = (((((((((arr_23 [15] [i_7] [7] [i_0]) ? var_12 : (arr_7 [11] [i_0]))) == (((!(arr_2 [i_0])))))))) ^ (((arr_25 [i_1] [i_7] [i_8]) / -var_5))));
                    }
                }
            }
            var_25 = (((((min(var_14, 5753297951401740152))) ? (max((arr_28 [i_1] [16] [i_0]), (arr_24 [i_1] [i_0] [i_0] [i_0]))) : (((arr_23 [i_0] [i_1] [i_0] [i_1]) ? 1 : var_6)))));
        }
        var_26 = ((-(((arr_8 [i_0] [i_0]) + (max(var_11, 4294967295))))));
    }
    for (int i_12 = 0; i_12 < 15;i_12 += 1)
    {
        var_27 = 53;
        var_28 = (max(var_28, ((max((((((-64 ? 4294967295 : 13))) ? ((((arr_13 [6] [10] [14] [i_12]) ? var_14 : 4294967295))) : 15663928833709426558)), ((max((arr_1 [8]), (((arr_20 [i_12] [15] [i_12]) ? (arr_13 [4] [4] [i_12] [i_12]) : -1961264521))))))))));
    }
    #pragma endscop
}

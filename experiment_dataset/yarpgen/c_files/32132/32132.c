/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32132
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_17;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [i_0] &= (max((24 != 3768700244), (((((arr_1 [i_0]) ? var_2 : (arr_1 [i_0]))) != (((var_9 ? var_18 : -1068056862338898008)))))));
        var_20 *= (((arr_0 [i_0]) ? (arr_0 [i_0]) : (max(((32758 ? 0 : var_4)), ((max(var_5, var_14)))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        var_21 = ((((var_0 != (max((arr_0 [6]), 2147483647)))) ? (max((arr_7 [i_1] [i_2] [i_4]), 0)) : ((((arr_9 [i_1] [i_2] [i_3] [i_4]) / 127)))));
                        var_22 = ((!(((((max(32767, 38))) | 21833)))));
                        var_23 = (max(var_23, -18));

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_15 [i_5] [i_1] [i_1] [i_1] = 65535;
                            var_24 = (min(var_24, ((((28 >= var_12) >= ((var_7 ? (arr_12 [i_1] [i_5] [1] [i_3] [i_2] [i_1]) : (arr_14 [i_5] [i_3] [i_4] [i_1] [i_3] [i_1]))))))));
                            arr_16 [i_1] = var_15;
                            var_25 = (max(var_25, var_0));
                            arr_17 [i_1] [i_2] [i_3] [i_4] [i_5] &= 0;
                        }
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            arr_21 [i_1] [i_1] [i_1] [i_4] [i_1] [i_6] = (((max(1, (arr_5 [i_2] [i_2] [i_6])))));
                            arr_22 [5] [i_2] [i_3] [i_4] [i_1] = ((((((arr_14 [i_1] [i_1] [i_2] [i_3] [i_4] [i_6]) & (arr_14 [i_1] [i_1] [i_2] [i_3] [i_4] [i_6])))) ? (max(var_9, ((var_13 ? var_16 : 18446744073709551613)))) : var_3));
                            var_26 -= ((((arr_10 [i_3] [i_3]) + (arr_20 [i_1] [i_3] [i_3] [i_4] [i_6]))));
                            var_27 += ((var_17 ^ (((arr_0 [i_2]) ? (arr_0 [i_3]) : (arr_0 [i_2])))));
                            arr_23 [i_1] = ((((~(((-22716 >= (arr_18 [i_1] [i_1] [i_1] [i_4] [i_6] [i_6])))))) >= (arr_12 [i_1] [i_2] [i_3] [1] [i_6] [i_2])));
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 7;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            {
                                arr_35 [i_1] [i_1] [i_1] [i_8] [i_8] [i_9] [i_1] = (((13609 ? (arr_27 [i_1] [i_7] [i_10]) : 30922)));
                                var_28 = (max(var_28, 1));
                                var_29 = (max(var_29, (!-13617)));
                                var_30 = -839438309479356636;
                            }
                        }
                    }
                    arr_36 [i_1] [i_1] [i_8] = -8226277824817189998;
                    arr_37 [i_1] [i_7] [i_8] &= (((((32504 ? var_11 : 20724)) != (((var_6 ? (arr_31 [i_1] [i_7] [7] [i_7]) : 1))))) ? (~115) : (((2147483647 ^ -15886) ? (1174251606915885875 & var_6) : (var_0 | var_7))));
                    var_31 *= (((((((var_8 / (arr_1 [i_7])))) ? ((3623 ? (arr_13 [i_1] [i_1] [i_1] [i_7] [6] [i_8] [i_7]) : 0)) : var_14)) | ((-(arr_0 [i_1])))));
                }
            }
        }
        arr_38 [i_1] = -13596;
    }
    var_32 = var_18;
    #pragma endscop
}

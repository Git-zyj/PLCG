/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_12 [i_1] [i_1] [i_2 - 3] = (arr_7 [i_0] [i_0]);
                        var_19 = (min(var_19, (((!(arr_7 [i_0] [i_1]))))));
                        var_20 = (((arr_11 [i_2] [i_2 + 3] [i_2 + 1] [i_3]) ? (((arr_3 [i_1]) ? var_10 : 0)) : (~var_11)));
                    }
                }
            }
        }
        var_21 += ((((((arr_0 [i_0] [i_0]) ? (arr_8 [i_0] [i_0] [8] [i_0]) : (arr_7 [i_0] [15])))) ? (((arr_7 [i_0] [i_0]) ? (arr_4 [i_0] [i_0]) : 18446744073709551613)) : var_8));
    }
    /* LoopNest 2 */
    for (int i_4 = 3; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            {

                /* vectorizable */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    arr_22 [i_6] [i_4] = (((arr_14 [i_4 - 1]) ? (((var_2 >> (var_11 + 143)))) : ((var_15 ? -29472 : 0))));
                    arr_23 [i_4] [i_4] [i_4] = (((arr_18 [i_4 - 2] [i_4 - 2] [i_6]) ^ (arr_11 [i_4 + 2] [i_4 - 2] [i_4 - 2] [i_4 + 1])));
                    arr_24 [i_4] [i_4] = arr_5 [i_5] [i_5];
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 18;i_8 += 1)
                        {
                            {
                                arr_29 [16] [16] [i_6] [16] [i_6] [i_7] = (arr_11 [i_8] [17] [i_5] [i_4]);
                                arr_30 [i_7] [i_7] [i_5] [i_7] = ((-(arr_25 [i_4 + 2] [i_5] [i_8 - 1] [i_7])));
                                arr_31 [16] [i_4] [i_7] [11] = (((arr_21 [i_4] [i_5]) ? (arr_27 [i_8] [i_8 - 1] [i_8] [i_8 - 1] [i_8 + 1]) : (arr_19 [i_8 + 1] [i_4 + 2] [i_4 - 2])));
                            }
                        }
                    }
                    arr_32 [i_5] = (arr_11 [i_6] [i_5] [i_4] [i_4]);
                }
                var_22 = ((max(var_7, ((((arr_4 [i_5] [3]) <= (-127 - 1)))))));

                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    var_23 *= ((~((((max(var_5, (arr_14 [i_4 - 1])))) ? ((~(arr_27 [i_4] [i_4] [i_5] [12] [i_9]))) : ((8330795471882277728 ^ (arr_16 [i_9])))))));
                    var_24 += (min(18446744073709551615, ((((arr_4 [i_4] [i_4]) ? (max((arr_17 [i_4]), var_12)) : ((~(arr_7 [i_4 + 1] [i_4]))))))));
                }
                for (int i_10 = 2; i_10 < 17;i_10 += 1)
                {
                    var_25 = (max(var_25, (((((((arr_14 [i_4 + 2]) ? (arr_27 [i_10 + 1] [i_4 - 3] [i_4 + 1] [i_4 - 1] [i_4 - 1]) : (arr_27 [i_10 + 1] [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4 + 1])))) * (arr_14 [i_4 - 2]))))));
                    var_26 = (((arr_21 [i_10 - 2] [i_4 - 1]) == (((!(arr_21 [i_10 + 1] [i_4 - 1]))))));
                }
                /* vectorizable */
                for (int i_11 = 2; i_11 < 16;i_11 += 1)
                {
                    var_27 = (((arr_18 [i_4 - 2] [i_4 - 2] [i_11 + 2]) ? ((1 ? 1745197883 : 8353424244485429131)) : 71));

                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        arr_43 [i_4] [i_4] [i_11] [i_12] = (arr_7 [i_11 - 1] [i_4 - 3]);
                        var_28 |= (((arr_41 [i_4] [i_5] [14] [i_12]) ? (var_17 % var_8) : -7818216299756311900));
                    }
                    var_29 = ((18 ? (arr_26 [i_11 - 2] [i_5] [i_4 + 1]) : (arr_26 [i_11 + 1] [i_5] [i_4 + 2])));
                    var_30 = (max(var_30, (((-(((arr_4 [i_5] [i_11 + 2]) ? (arr_17 [i_4]) : (arr_8 [i_5] [i_5] [14] [1]))))))));
                }
                /* vectorizable */
                for (int i_13 = 0; i_13 < 19;i_13 += 1)
                {
                    var_31 = 4486;
                    var_32 = (max(var_32, (arr_45 [i_4] [i_4 + 2] [i_4])));
                    arr_46 [i_4 - 3] [i_4 - 3] [i_13] [i_5] = (((arr_39 [i_4] [i_4 + 1] [i_13] [i_5]) >= (arr_39 [i_13] [i_5] [i_5] [i_4])));
                }
                arr_47 [1] [1] [i_4 + 2] = ((-(arr_27 [i_4 + 2] [i_5] [i_5] [i_4 - 2] [i_4 + 2])));
            }
        }
    }
    #pragma endscop
}

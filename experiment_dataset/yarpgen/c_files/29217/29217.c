/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                var_17 = (max(var_17, (((!(arr_0 [i_0]))))));
                var_18 = (~var_12);
                var_19 *= ((~(arr_0 [i_0])));
                var_20 = (((arr_5 [i_0] [i_1]) ? (arr_5 [i_0] [i_1]) : (arr_5 [i_0] [i_1])));
            }
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                var_21 &= ((var_10 ? -var_3 : (arr_0 [i_1])));
                arr_12 [i_0] [i_3] [i_0] = ((((((arr_9 [i_0] [i_0] [i_0]) ? (arr_11 [i_1]) : (arr_8 [i_0] [i_1] [i_3] [i_3])))) ? ((var_3 ? (arr_5 [16] [16]) : (arr_8 [i_3] [i_3] [i_3] [i_3]))) : ((((var_15 >= (arr_10 [i_0])))))));
                arr_13 [i_3] = (((arr_3 [i_0] [i_1] [i_1]) ? (arr_5 [i_0] [9]) : (((arr_5 [i_0] [i_1]) ? (arr_5 [i_0] [i_0]) : (arr_3 [i_0] [i_1] [i_3])))));
                var_22 = (min(var_22, var_5));
            }

            for (int i_4 = 2; i_4 < 21;i_4 += 1)
            {
                var_23 *= ((~(((arr_8 [i_0] [i_0] [i_0] [i_4 + 1]) ? var_9 : (arr_6 [i_0] [i_1] [i_4 + 3] [i_4 + 3])))));

                for (int i_5 = 3; i_5 < 21;i_5 += 1) /* same iter space */
                {
                    arr_19 [i_0] [i_5] [i_4 - 1] [8] = (!var_0);
                    arr_20 [i_0] [i_5] [8] [i_0] = (arr_8 [i_4 - 2] [i_5] [i_5 - 2] [i_4 - 2]);
                    arr_21 [i_5] = ((!(arr_15 [i_4 + 1] [i_4 + 1] [i_4 + 1])));
                }
                for (int i_6 = 3; i_6 < 21;i_6 += 1) /* same iter space */
                {
                    var_24 += ((~(arr_15 [i_1] [i_4 + 3] [i_6 + 2])));

                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        arr_27 [i_7] [i_0] [i_1] [i_4] [i_6 - 1] [22] &= (((arr_9 [i_6 + 1] [i_6] [i_6 + 3]) & (((arr_23 [i_7] [i_6] [i_1] [i_4] [i_1] [i_0]) ? (arr_11 [i_4]) : var_9))));
                        arr_28 [i_6] [8] = (((arr_16 [i_0] [i_6] [i_6 + 3] [i_6]) ? -var_16 : (arr_16 [i_6 + 2] [i_6] [i_4 - 1] [i_6])));
                    }
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        var_25 *= var_16;
                        var_26 |= (((arr_22 [i_0] [i_0] [i_0] [i_0]) ? (arr_22 [i_0] [i_1] [i_4] [i_6 - 3]) : (arr_22 [i_0] [i_1] [i_4 + 1] [i_8])));
                    }
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        var_27 = (min(var_27, ((((arr_32 [i_0] [i_4 + 1] [i_4] [2] [i_6 - 3] [i_0] [i_6]) ? (arr_32 [10] [i_4 + 1] [i_4 - 2] [1] [i_6 - 3] [i_4 - 2] [i_0]) : (arr_32 [i_0] [i_4 - 2] [i_4] [i_6 + 2] [i_6 - 3] [i_9] [i_9]))))));
                        var_28 = (arr_25 [i_9] [i_6 + 3] [i_4 + 3] [i_1] [i_0]);
                    }
                    var_29 += ((~(var_8 ^ var_7)));
                }
                arr_34 [i_0] = var_10;
                var_30 = (((arr_18 [i_4 - 1] [i_1]) & var_7));
            }
        }
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            var_31 = ((-(arr_16 [i_0] [i_10] [i_0] [i_0])));
            arr_39 [i_0] [i_10] [i_0] = (((arr_4 [i_0]) ? var_15 : (arr_31 [i_0] [i_0] [13] [i_10] [i_10] [i_10] [i_10])));
        }

        for (int i_11 = 0; i_11 < 24;i_11 += 1)
        {
            var_32 = (min(var_32, ((((arr_33 [i_0] [i_0] [i_0]) ^ var_1)))));
            var_33 = (arr_1 [i_0] [i_0]);
            arr_44 [19] [i_11] = (arr_31 [i_0] [i_0] [10] [i_11] [i_11] [10] [i_11]);
            var_34 = ((var_0 / (arr_26 [i_11] [i_11] [i_11] [i_0] [i_11] [i_11] [i_0])));
        }
        for (int i_12 = 4; i_12 < 21;i_12 += 1)
        {
            var_35 += (((arr_26 [i_0] [i_12 + 3] [18] [i_0] [i_12] [i_12] [i_12 - 1]) ? (((arr_40 [i_0] [i_0] [i_0]) ? (arr_43 [i_0]) : (arr_24 [i_0]))) : var_3));
            arr_49 [i_0] [i_0] [3] = ((var_14 ? (arr_6 [i_12] [i_12 - 2] [i_12 + 2] [i_12 - 3]) : var_3));
            arr_50 [i_0] = var_9;
        }
        var_36 = ((!(arr_11 [i_0])));
    }
    var_37 &= var_12;
    #pragma endscop
}

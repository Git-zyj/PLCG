/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_14 = ((((((arr_1 [i_0]) ? var_0 : 65534))) ? -4100 : ((4099 ? var_5 : -4096))));
        arr_2 [i_0 + 4] = (arr_1 [i_0]);
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        arr_5 [i_1] = (~4107);
        arr_6 [i_1] = (arr_3 [i_1 - 1] [i_1 - 1]);
        arr_7 [i_1] = (min((min((arr_0 [i_1 - 1] [i_1 - 1]), (arr_3 [i_1] [i_1]))), 1));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_15 = (max(var_15, var_11));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            arr_12 [i_2] [9] [i_2] = 3774;
            var_16 = (((arr_0 [i_3] [i_2]) / (arr_0 [i_3] [i_2])));

            for (int i_4 = 1; i_4 < 10;i_4 += 1)
            {
                arr_15 [i_3] [i_3] [i_4] = -7917413481917142339;
                var_17 = (arr_10 [i_4 - 1]);
            }
            for (int i_5 = 3; i_5 < 13;i_5 += 1)
            {
                var_18 = (((arr_8 [i_5 + 1]) ? (arr_8 [i_5 + 1]) : 248));
                var_19 = (max(var_19, var_9));

                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    arr_21 [i_2] [i_3] [i_5] [i_5] = (arr_18 [i_5 - 1] [i_5 - 1] [i_5 - 2]);
                    var_20 = (min(var_20, ((((((52489 ? -4114 : 4111))) ? (arr_8 [i_5 - 1]) : var_13)))));
                    arr_22 [13] [i_3] [2] [i_5] [i_5 + 1] [i_6] = (((arr_18 [i_2] [i_3] [i_2]) | (arr_14 [i_5 - 1] [i_2])));
                }
                for (int i_7 = 1; i_7 < 11;i_7 += 1)
                {
                    var_21 = (arr_13 [i_5]);
                    var_22 = (arr_16 [i_5]);
                    arr_25 [i_5] [i_3] [i_2] [8] [i_7] [6] = ((65531 ? (((arr_8 [9]) ? (arr_20 [i_2] [i_2] [i_2] [1] [i_5]) : -4088)) : (arr_24 [i_5])));
                    var_23 = -74;
                    arr_26 [i_5] = (arr_20 [i_2] [i_7] [1] [6] [i_5]);
                }
                for (int i_8 = 1; i_8 < 12;i_8 += 1)
                {
                    var_24 = (((arr_18 [i_5 + 1] [i_8 + 1] [i_8 + 2]) > (arr_18 [i_5 - 2] [i_8 + 2] [i_8 - 1])));
                    arr_30 [i_8 + 2] [i_5 - 3] [i_5] [i_5] [i_3] [i_2] = (arr_23 [i_2] [i_3] [i_3] [5] [i_8 + 1]);
                }
                for (int i_9 = 1; i_9 < 13;i_9 += 1)
                {

                    for (int i_10 = 1; i_10 < 1;i_10 += 1)
                    {
                        arr_36 [10] [i_5] [i_3] [i_9 + 1] [13] [i_10] = ((16826923300201558977 != (arr_19 [i_9 - 1] [i_9 - 1] [i_5] [i_10 - 1])));
                        var_25 = (((arr_16 [i_5]) || (arr_16 [i_5])));
                    }
                    for (int i_11 = 1; i_11 < 12;i_11 += 1)
                    {
                        var_26 = ((144 ? (arr_34 [i_5] [i_5] [i_5 - 3] [i_5] [i_5]) : (arr_16 [i_5])));
                        arr_41 [i_5] = ((-(arr_23 [i_11 + 2] [1] [i_11] [i_11 - 1] [i_11 + 2])));
                        var_27 = (-127 - 1);
                        var_28 = (arr_39 [i_5]);
                    }
                    var_29 = arr_9 [i_2];
                    var_30 = (min(var_30, 15));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_12 = 2; i_12 < 21;i_12 += 1)
    {
        var_31 = (((arr_42 [i_12 - 2]) ? 13689096393452298218 : (arr_43 [i_12] [i_12 - 1])));
        arr_44 [4] = ((-(((arr_42 [3]) ? (arr_42 [i_12]) : (arr_43 [i_12] [i_12])))));
        var_32 |= var_8;
    }
    /* LoopNest 3 */
    for (int i_13 = 1; i_13 < 17;i_13 += 1)
    {
        for (int i_14 = 1; i_14 < 19;i_14 += 1)
        {
            for (int i_15 = 2; i_15 < 17;i_15 += 1)
            {
                {
                    var_33 |= ((-(arr_43 [1] [i_13])));
                    var_34 = (arr_42 [i_13]);
                }
            }
        }
    }
    #pragma endscop
}

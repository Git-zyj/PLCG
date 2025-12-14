/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-(!16382)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_11 = ((~(!53)));
                                var_12 = (min(var_12, (arr_7 [i_1 - 2] [i_1 - 2] [i_3 - 2] [i_1 - 2] [i_3 + 2])));
                            }
                        }
                    }
                }
                var_13 = ((+((min((arr_8 [i_1 + 1] [i_1 + 1] [i_1 - 3] [i_0] [i_0]), (arr_8 [i_1 + 2] [i_1 - 2] [i_1 + 2] [12] [10]))))));
                arr_10 [i_0] [i_1] = ((max((arr_1 [i_0] [i_0]), (arr_5 [i_0] [i_1 - 2] [i_1 - 1] [i_1]))));
            }
        }
    }

    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        var_14 = ((+((max((arr_12 [i_5] [i_5]), (arr_12 [i_5] [i_5]))))));
        var_15 = (max(var_15, (arr_6 [i_5] [i_5] [i_5] [19] [i_5])));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        var_16 = (min(var_16, ((((arr_15 [i_6]) ? (arr_8 [i_6] [i_6] [i_6] [i_6] [i_6]) : ((-(arr_7 [16] [i_6] [i_6] [i_6] [i_6]))))))));

        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            arr_19 [i_7] = ((~(arr_2 [i_6])));
            arr_20 [10] [i_7] = (arr_1 [i_6] [i_7]);
            var_17 = ((-(arr_8 [i_6] [20] [i_7] [18] [i_7])));
            var_18 = (arr_1 [i_6] [i_6]);
            var_19 = 421350530;
        }
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 2; i_9 < 19;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    {
                        arr_30 [7] [i_8] [17] = ((~(arr_5 [i_6] [i_8] [i_9 - 2] [i_10])));
                        var_20 = (max(var_20, (((~((~(arr_5 [i_9] [i_9] [i_9] [i_9]))))))));
                        var_21 = 4294967295;
                        var_22 = (min(var_22, (((arr_26 [i_9] [i_9 - 2] [i_9 - 2] [i_9 - 2]) ? (arr_26 [i_9] [i_9 - 1] [i_9 - 2] [i_9]) : (arr_26 [i_9] [i_9 - 1] [i_9 - 2] [i_9])))));
                        var_23 ^= ((-(arr_21 [i_9 + 2])));
                    }
                }
            }
            var_24 -= (!-421350530);
            var_25 = (arr_7 [i_6] [i_6] [i_6] [i_6] [i_6]);
        }
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 21;i_11 += 1)
        {
            for (int i_12 = 3; i_12 < 20;i_12 += 1)
            {
                {

                    for (int i_13 = 0; i_13 < 21;i_13 += 1)
                    {
                        var_26 += (((arr_29 [i_12 + 1]) ? (arr_16 [i_12 + 1]) : (arr_29 [i_12 - 3])));
                        var_27 = (((~18916) ? 152 : 5384458889758164788));
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 2; i_14 < 18;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 21;i_15 += 1)
                        {
                            {
                                arr_43 [i_14] [i_14] [i_12] [i_14] [i_6] = ((-(arr_1 [i_6] [i_6])));
                                arr_44 [19] [i_14] [i_12 - 1] [i_14] [i_15] = (((arr_37 [i_15] [i_6] [i_11] [i_6]) ? (arr_35 [i_6] [i_6] [i_6] [i_6]) : (arr_38 [i_6] [i_14] [i_12])));
                                var_28 ^= (arr_9 [20] [16] [1] [i_14] [1] [i_14 - 2]);
                                var_29 = (max(var_29, (((-((-(arr_2 [i_11]))))))));
                                var_30 = ((-(arr_4 [i_12 + 1])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_31 += ((~((((max(var_0, var_6))) ? -var_8 : var_9))));
    var_32 = var_8;
    #pragma endscop
}

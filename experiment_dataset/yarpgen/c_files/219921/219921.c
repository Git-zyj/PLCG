/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_18 = (((arr_0 [i_0]) ^ (arr_0 [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_19 = (((arr_5 [i_1]) && (arr_5 [i_1])));
                        arr_10 [i_0] [i_1] = ((((-(arr_1 [i_1]))) + (arr_1 [i_1 + 1])));
                        var_20 = ((~(arr_2 [i_1])));
                        var_21 = (arr_3 [i_2 - 1] [i_3]);
                    }
                }
            }
        }
        var_22 = ((((arr_0 [i_0]) ? var_12 : var_3)));
        arr_11 [i_0] &= ((var_13 ? (arr_9 [i_0]) : (arr_9 [i_0])));
    }
    for (int i_4 = 4; i_4 < 13;i_4 += 1)
    {
        arr_14 [i_4] = (max((((var_8 ? (arr_7 [i_4 - 1] [i_4]) : -36567))), (max((arr_1 [i_4 - 1]), (arr_1 [i_4 - 2])))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 13;i_7 += 1)
                {
                    {
                        arr_21 [i_5] [i_5] [i_5] [i_5] [i_7] = (~(max(28968, ((-(arr_9 [i_7 - 1]))))));
                        var_23 = ((-((((arr_20 [i_6] [i_6] [i_6 + 1] [0]) || 36560)))));
                    }
                }
            }
        }
    }
    var_24 = var_8;
    /* LoopNest 2 */
    for (int i_8 = 2; i_8 < 14;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            {

                for (int i_10 = 0; i_10 < 18;i_10 += 1)
                {
                    var_25 &= (max(28968, (((!((28966 && (arr_8 [i_8] [i_9] [i_8] [i_10] [i_10]))))))));
                    arr_29 [i_8] [i_9] [i_8] = var_14;
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 18;i_11 += 1)
                {

                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        var_26 &= (arr_27 [i_8 + 1] [i_9]);
                        arr_35 [i_9] = (arr_9 [i_8 - 2]);
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 18;i_13 += 1)
                    {
                        for (int i_14 = 3; i_14 < 17;i_14 += 1)
                        {
                            {
                                arr_41 [i_14] [i_9] [i_9] [i_8] = ((((arr_28 [i_11] [i_9] [i_8]) && var_7)));
                                var_27 *= (arr_32 [i_14] [i_14 + 1] [17] [i_14] [i_14]);
                            }
                        }
                    }
                    arr_42 [i_8] [i_9] [i_11] = (((arr_5 [i_9]) - (arr_5 [i_9])));
                }
                for (int i_15 = 0; i_15 < 18;i_15 += 1)
                {
                    arr_45 [i_9] [i_9] [i_9] [i_8 + 3] = ((~(max((min((arr_6 [i_8 + 3] [i_9] [i_8 + 3]), var_13)), (arr_7 [i_8 - 1] [i_8 - 2])))));
                    var_28 = (max(28968, ((((max((arr_39 [i_9] [i_9] [i_9] [i_15] [10] [i_9]), (arr_26 [i_8] [i_9])))) ? var_16 : ((34580 ? 28981 : 59747))))));
                }
                var_29 = (~var_5);
                var_30 = (((((arr_33 [i_9] [i_8] [i_8 - 1]) ? (arr_43 [i_8] [i_8 - 2] [17] [i_8]) : (arr_43 [i_8] [i_8 - 2] [i_8] [i_8 - 2])))) ? (arr_43 [i_8] [i_8 + 4] [i_9] [0]) : ((max((arr_43 [i_8] [i_8 + 3] [i_9] [i_8]), (arr_43 [i_9] [i_8 + 4] [i_9] [i_8])))));
            }
        }
    }
    #pragma endscop
}

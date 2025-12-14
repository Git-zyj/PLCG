/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = ((-(max((arr_0 [i_0] [i_1]), (arr_0 [i_0] [i_1])))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_18 = var_12;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_19 = ((4294967295 ? (((arr_3 [i_2]) >> (var_1 - 15038628075725033507))) : var_17));
                                var_20 = ((-(arr_10 [i_0] [i_0])));
                                var_21 = (var_10 | var_10);
                            }
                        }
                    }
                    arr_15 [15] [i_1] [i_0] = ((~(arr_7 [i_0] [i_0])));
                    var_22 = ((((arr_12 [i_2] [i_1] [i_1] [i_0]) >> (var_14 - 155))));
                }
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        var_23 = ((~(((arr_19 [i_0] [i_6]) ^ (arr_13 [i_5] [i_1])))));
                        var_24 = ((+((-(min((arr_0 [i_5] [i_5]), 250))))));
                        arr_21 [i_0] = ((-1715670867 ? (arr_8 [i_6]) : ((5188971117464962481 ? 5188971117464962489 : 1))));
                    }
                    for (int i_7 = 1; i_7 < 24;i_7 += 1)
                    {
                        var_25 = (((arr_20 [i_7 - 1] [i_7] [i_7 + 1] [i_7 + 1] [i_7]) + (((min(var_12, (arr_23 [i_0]))) << (var_4 + 893934785)))));
                        var_26 = (max(37, (((arr_18 [i_7 - 1] [i_7 - 1] [0] [i_7 - 1]) << 8))));
                    }
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        var_27 = var_1;
                        var_28 = (arr_24 [i_0] [i_0] [i_1] [i_1] [i_5] [i_8]);
                        arr_26 [i_0] [i_0] [i_0] [i_0] = ((((((arr_3 [i_5]) / (arr_3 [i_5])))) ? (arr_3 [i_5]) : (min((arr_3 [i_0]), (arr_3 [i_1])))));
                        var_29 = (((arr_23 [i_0]) / ((max((arr_8 [i_0]), var_14)))));
                    }
                    var_30 = ((((min((min((arr_8 [i_0]), 6089237777375355803)), (arr_9 [i_0] [i_1] [i_1] [i_1])))) ? var_12 : 1));
                    var_31 = (arr_3 [i_5]);
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 22;i_10 += 1)
                        {
                            {
                                var_32 = (arr_13 [i_1] [i_10 + 3]);
                                arr_31 [i_0] = (arr_12 [i_0] [i_1] [i_5] [i_9]);
                                var_33 = (min((arr_14 [i_0] [i_0] [23] [i_0] [i_10 + 1]), (min(15054776764309761690, (arr_13 [i_10 + 1] [i_1])))));
                            }
                        }
                    }
                }
                var_34 = ((var_17 < (arr_16 [i_0])));
            }
        }
    }
    var_35 = var_14;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_14, (((max(var_13, var_8)) ? ((0 ? 1 : var_6)) : ((var_8 ? var_9 : var_16))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = var_14;
        arr_3 [1] = 1;
        var_18 = 1;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_19 = var_16;
                        var_20 *= max((max((max(1, 1)), 1)), 1);
                    }
                }
            }
            var_21 = (min(var_21, ((((((var_15 ? 1 : 0))) ? ((-((-(arr_4 [i_1]))))) : ((max(var_9, var_15))))))));
            var_22 = (((max((arr_5 [i_1] [i_2]), var_13)) ? (((arr_5 [i_1] [1]) ? (arr_5 [i_1] [i_2]) : 1)) : 1));
        }
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {
                    {
                        var_23 = ((((max(((1 ? 0 : var_13)), var_11))) ? 1 : 1));
                        var_24 = var_7;
                        var_25 = (max(var_25, var_3));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    arr_30 [i_1] [i_1] = ((+((max((arr_17 [i_1]), var_3)))));

                    for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                    {
                        var_26 = (((var_13 ? var_7 : (arr_25 [i_8] [i_10]))) >= var_9);
                        var_27 ^= (max((arr_10 [0] [i_9] [0]), ((1 ? (arr_10 [i_1] [i_9] [1]) : (arr_10 [i_1] [i_1] [1])))));
                        arr_35 [i_1] [i_8] [i_9] [i_9] [i_10] = var_6;
                        var_28 = (min(var_28, 1));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
                    {
                        var_29 = (var_2 << 1);
                        arr_38 [i_1] [i_8] [1] [i_11] = var_6;
                        arr_39 [i_1] [0] [i_11] [i_1] = 1;
                        var_30 = ((arr_8 [i_1] [i_1]) || var_14);
                        var_31 = var_16;
                    }
                    /* vectorizable */
                    for (int i_12 = 1; i_12 < 1;i_12 += 1)
                    {
                        var_32 &= ((((1 & (arr_42 [1] [1] [i_9]))) | (arr_28 [i_8] [i_12 - 1] [i_12 - 1])));
                        arr_43 [1] [i_8] [1] [1] [i_1] = (((((1 ? (arr_22 [i_1] [i_1] [i_1] [i_1] [i_1]) : var_15))) ? (((arr_4 [i_1]) ? (arr_8 [i_1] [i_9]) : var_14)) : (arr_19 [1] [i_9] [i_8])));
                        var_33 = (((arr_37 [i_1] [i_8] [i_12]) ? 0 : (((arr_32 [i_1] [i_8] [1] [i_8] [i_12]) * (arr_29 [i_1] [i_1])))));
                        arr_44 [i_1] [i_1] [i_1] [i_1] = (~var_0);
                    }
                }
            }
        }
    }
    #pragma endscop
}

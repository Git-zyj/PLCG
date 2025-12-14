/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(((((!var_3) / 4962))), (((71 ? -2979730419995664860 : var_4)))));
    var_16 = (min(var_7, -var_0));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_10 [i_1 - 1] = (((((((max((arr_2 [i_0] [i_1] [i_2]), 245))) * ((13 ? var_11 : 0))))) ? (((arr_9 [i_3] [i_2] [i_1 - 1] [i_0]) / (arr_9 [i_3 - 2] [i_2] [i_1] [i_0 - 1]))) : ((max(((max(-98, var_8))), var_6)))));
                            var_17 -= 243;
                            var_18 = (max(var_4, ((~(((arr_2 [i_1] [i_1] [i_0]) ? (arr_2 [9] [i_2] [i_0]) : var_6))))));
                            arr_11 [i_0] [3] [i_2] [3] [3] = ((~(~var_6)));
                            arr_12 [i_0] [i_0] [i_0] [i_0] = (arr_6 [i_1]);
                        }
                    }
                }
                var_19 = ((max(1, (arr_9 [i_1] [i_1] [i_1 - 1] [i_1 - 1]))));
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        var_20 = ((0 ? (0 & 39) : (((arr_13 [i_4] [i_4]) ? 39 : (arr_13 [i_4] [i_4])))));
        arr_15 [i_4] = ((((((var_13 >= (arr_14 [i_4] [i_4]))))) == 609761209));
        arr_16 [i_4] = 61;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 19;i_5 += 1) /* same iter space */
    {
        var_21 = (var_14 | 1);
        var_22 += (arr_18 [i_5]);
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
    {

        for (int i_7 = 2; i_7 < 18;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                arr_27 [i_6] = (max(((~(arr_23 [i_6]))), 861484873429483245));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        {
                            var_23 += (max(var_6, ((max((((2044 < (arr_25 [i_6] [i_7] [i_8] [i_8])))), (arr_18 [i_7 - 2]))))));
                            var_24 = (((((~(arr_31 [i_8] [i_7 - 1] [i_7 - 1] [i_6])))) ? (((arr_31 [i_9] [i_9] [i_7 - 1] [i_7 + 1]) | 1)) : (((arr_28 [i_7 + 1] [i_7] [i_7 - 1] [i_7 - 1]) ? (arr_31 [10] [i_10] [i_7 + 1] [i_7 - 1]) : 196))));
                            var_25 |= -2979730419995664846;
                            arr_34 [i_6] = (arr_20 [1]);
                        }
                    }
                }
            }
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                var_26 = (min(var_26, ((((((arr_19 [i_7 + 1]) ? (arr_19 [i_7 - 2]) : (arr_24 [i_7] [i_7 + 1] [1]))) <= (((arr_24 [i_11] [i_7 - 1] [i_7]) - var_13)))))));
                arr_37 [i_6] = (arr_13 [i_6] [i_7]);
            }
            var_27 = (min(var_1, var_2));
            arr_38 [6] |= ((~((max(2044, 166)))));
            var_28 = (min(var_28, ((((((~(arr_35 [i_6] [4] [i_7 + 1] [i_6])))) ? (((((var_8 ? (arr_33 [i_6] [17] [18] [i_6] [i_7]) : 1)) > (arr_31 [i_6] [i_6] [i_6] [i_7])))) : (((!(arr_22 [i_7 + 1] [i_7 - 1] [i_7 + 1])))))))));
            arr_39 [i_6] = ((((((var_13 <= 13) | ((0 ? var_12 : var_7))))) ? -39 : var_4));
        }

        for (int i_12 = 0; i_12 < 19;i_12 += 1)
        {

            /* vectorizable */
            for (int i_13 = 2; i_13 < 18;i_13 += 1)
            {
                arr_45 [i_13] [i_6] [i_6] [1] = ((arr_25 [i_6] [i_12] [i_13 + 1] [6]) ? (arr_43 [i_12]) : var_9);
                arr_46 [i_6] [i_6] [i_13] [7] = ((46 ? (47995 ^ 56) : (((arr_26 [i_6] [i_12] [i_13]) ? 609761209 : 18742))));
                arr_47 [i_6] [i_6] = ((-1446 ? var_3 : (arr_21 [i_13 - 1])));
                var_29 |= 1;
            }
            var_30 = (((((arr_24 [i_6] [i_6] [i_12]) ? (arr_42 [i_6]) : (arr_19 [i_6]))) == (((((min(var_9, -2979730419995664846)) < (((max(var_2, 16))))))))));
        }
    }
    #pragma endscop
}

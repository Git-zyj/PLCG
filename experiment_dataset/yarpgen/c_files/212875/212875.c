/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_8;
    var_19 ^= var_11;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] = (((((-(max((arr_0 [i_0] [i_0]), (arr_3 [6])))))) ? (((arr_2 [i_0]) % (arr_1 [i_0]))) : (!-3)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_20 = (arr_0 [i_0] [i_1]);
                        arr_13 [i_0] = ((-(var_10 * var_16)));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        var_21 = (min(var_21, ((((arr_14 [i_1] [i_1] [i_0] [i_4] [i_0]) ? (~31) : (arr_3 [i_1]))))));

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_22 *= var_6;
                            var_23 = (((var_5 ? var_14 : 23)));
                            var_24 = ((!(~var_5)));
                        }
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            arr_23 [i_0] [i_1] [i_2 + 3] [i_0] [i_0] [i_1] [i_0] = (arr_10 [i_6] [i_4] [i_2 + 3] [i_1] [6]);
                            arr_24 [3] [i_6] [i_6] [i_6] [i_6] = (!-47);
                        }
                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            var_25 = ((((~(arr_19 [i_2] [i_4] [i_2] [7] [11]))) << (((arr_0 [i_2 + 1] [i_2 + 1]) - 2091369464381262948))));
                            var_26 ^= (-((~(arr_5 [i_4] [i_1] [i_0]))));
                            arr_27 [0] [i_7] [i_4] [12] [i_0] [i_1] [i_0] = (arr_19 [i_7] [i_4] [i_0] [i_1] [i_0]);
                        }
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            var_27 ^= ((((arr_21 [i_0] [i_1] [i_2] [i_4] [i_8]) >= (arr_19 [i_0] [i_0] [i_2] [i_4] [10]))) ? 15772467022753884008 : ((((-26 + 2147483647) << (((-7 + 37) - 30))))));
                            arr_31 [i_8] [i_8] [i_4] [i_2] [i_0] [i_8] = (arr_25 [i_2 + 1] [10] [i_2 + 1]);
                        }
                    }
                    var_28 ^= (~(((arr_21 [i_2 + 2] [i_2 - 1] [i_2 + 2] [i_2 + 1] [i_2 + 2]) ? (((arr_10 [i_0] [i_1] [i_1] [i_0] [i_0]) ? var_0 : -7)) : (((arr_7 [i_0] [i_1] [i_2]) % (arr_5 [1] [1] [i_2 + 2]))))));
                    arr_32 [i_0] [i_0] &= ((-(((~var_12) ? (((-(arr_12 [i_0] [i_0] [i_0] [i_2 + 1])))) : (74 - var_4)))));
                    var_29 -= ((((min((((arr_14 [i_2] [i_2] [i_1] [i_0] [i_2 + 1]) ? var_7 : 1)), (arr_20 [i_0])))) * var_1));
                    var_30 = (max(var_30, (((~(((arr_21 [i_2] [i_1] [i_1] [i_1] [i_0]) << 10)))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 12;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                {
                    var_31 = (((((arr_19 [i_0] [i_9 + 1] [i_9 - 1] [i_9 + 1] [1]) ? (arr_38 [i_9 + 1] [i_9]) : (arr_19 [i_9] [i_9] [i_9 + 1] [i_9 - 1] [i_9 + 1]))) * ((((arr_38 [i_9 + 1] [i_9]) != (arr_38 [i_9 - 1] [i_9]))))));

                    /* vectorizable */
                    for (int i_11 = 1; i_11 < 10;i_11 += 1) /* same iter space */
                    {
                        arr_41 [3] [i_9 + 1] [i_9] [i_11 + 2] = ((1 * (arr_9 [i_10] [i_9 + 1] [i_0])));
                        var_32 = (max(var_32, ((((((1 ? var_4 : -16))) ? (126 > 1) : var_12)))));
                    }
                    /* vectorizable */
                    for (int i_12 = 1; i_12 < 10;i_12 += 1) /* same iter space */
                    {
                        var_33 = (((((52843 ? (arr_30 [i_0] [i_0] [i_0] [i_10] [3] [i_12]) : var_7))) ? (arr_30 [i_10] [i_9 - 1] [i_10] [i_12 - 1] [i_9 + 1] [i_9]) : 4032944401125493870));
                        var_34 ^= (((var_16 ? -21 : (arr_15 [i_0] [i_9 + 1]))));
                        var_35 = (max(var_35, (arr_6 [i_12])));
                        var_36 ^= (arr_11 [i_12 + 3] [i_12 - 1] [i_12] [i_12 - 1] [i_12 + 3]);
                        var_37 = ((-27 ? -5376 : var_6));
                    }
                    /* vectorizable */
                    for (int i_13 = 1; i_13 < 10;i_13 += 1) /* same iter space */
                    {
                        var_38 ^= ((var_16 ? (((arr_38 [i_0] [i_10]) ? (arr_43 [i_13] [i_10] [i_9] [i_0]) : 102)) : (~288230376151187456)));
                        var_39 = (((((arr_22 [i_0] [i_9] [i_10] [i_0] [i_9 - 1]) ? 16790831394694390529 : var_3)) / var_8));
                    }
                    var_40 = (((((((arr_35 [i_9] [i_9 - 1]) != (arr_47 [i_9 + 1] [i_9 - 1] [i_9] [i_9]))))) % (~-223357120349803228)));
                }
            }
        }
        arr_48 [i_0] [i_0] = ((!(((-6322358595174774017 ? ((-(arr_15 [i_0] [10]))) : ((((arr_39 [i_0] [i_0] [i_0] [i_0]) + -6322358595174774020))))))));
    }
    /* vectorizable */
    for (int i_14 = 2; i_14 < 17;i_14 += 1)
    {
        var_41 = (!(arr_52 [i_14 - 2]));
        arr_53 [i_14] = ((~(arr_51 [i_14 + 2])));
    }
    var_42 = (((((var_7 ? ((2274182139 ? var_9 : -23)) : (~var_1)))) ? var_11 : var_2));
    var_43 = var_4;
    #pragma endscop
}

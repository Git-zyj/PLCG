/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= 30;
    var_16 = max(65506, 52799);

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_17 = ((~(min(17634074788147840289, 12380901714181502826))));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        {
                            var_18 *= (((~(arr_6 [i_2] [i_2 + 1] [i_2] [i_2] [i_2]))));
                            var_19 -= ((((min(((var_10 ? var_13 : (arr_1 [i_0] [i_4]))), (30 + 65528)))) ? (min(var_6, (arr_3 [i_3] [2] [i_0 + 1]))) : ((min(var_0, var_9)))));
                            var_20 -= var_8;
                            var_21 = (max(var_21, (((((((((var_3 > (arr_2 [i_0 - 1])))) + (arr_9 [i_4] [i_3] [i_4] [i_4])))) ? var_0 : ((((65535 < 9223372036854775807) < ((((arr_0 [i_4]) && var_8)))))))))));
                        }
                    }
                }
            }
            var_22 &= (arr_7 [i_1] [i_1] [i_0 - 1] [i_0]);

            for (int i_5 = 1; i_5 < 10;i_5 += 1)
            {
                arr_12 [i_0] [i_1] [i_0] = ((arr_7 [i_5] [i_5 - 1] [i_0 - 2] [i_0]) & (((min((arr_4 [i_0] [i_1]), (arr_4 [i_0] [i_1]))))));

                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    arr_17 [i_0] [i_1] [i_5] [i_5] [i_5] [i_6] = (arr_8 [i_0] [i_0 + 1] [i_0] [i_1] [i_5] [i_6]);
                    var_23 = (max(var_23, (((var_0 == ((~(arr_0 [i_6]))))))));
                    arr_18 [i_0] [i_1] [i_5 + 3] [i_6] = (min(((((arr_10 [i_0 - 2] [i_0 - 2]) ? ((var_1 ? (arr_14 [1] [1] [i_5] [i_6]) : var_11)) : (arr_2 [i_5 + 1])))), (min(var_2, 6065842359528048780))));
                }
            }
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                var_24 = (((((~((min((arr_4 [i_0] [i_1]), 65535)))))) ? (((((arr_14 [i_0 - 2] [i_1] [i_1] [i_7]) ? var_2 : (arr_16 [i_0] [i_1] [0] [i_1] [i_7] [i_7]))) << (((~var_3) - 1863574685635136856)))) : (min(11, (((arr_14 [i_0] [i_1] [i_7] [i_7]) & var_9))))));
                var_25 = (((arr_3 [i_0 - 2] [i_0] [i_0]) + var_9));
            }
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    {
                        var_26 = (min(var_8, var_1));
                        var_27 = (arr_15 [i_0 - 2] [i_0 - 2] [i_8] [i_9]);

                        for (int i_10 = 0; i_10 < 13;i_10 += 1)
                        {
                            arr_29 [i_0] [i_0] = (min(((max((max(16143, 9223)), ((((arr_2 [i_9]) == var_9)))))), ((var_14 | (arr_5 [i_0] [i_0 - 2])))));
                            var_28 = (max((min(var_14, (arr_23 [i_0]))), (arr_20 [i_10] [i_9] [i_1] [i_0])));
                            arr_30 [i_0] [i_1] [i_8] [i_8] [i_10] [i_1] [i_9] = var_12;
                        }
                        for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
                        {
                            arr_33 [i_0] [10] = var_3;
                            var_29 = (max(var_29, ((((((+((max((arr_2 [i_0]), var_7)))))) ? (((((((arr_3 [i_0 - 1] [10] [i_0]) ? (arr_23 [i_8]) : var_3)) < (arr_27 [4] [i_1] [i_1] [i_8] [i_1]))))) : (max(var_6, ((min(var_13, (arr_15 [i_11] [2] [i_8] [i_0])))))))))));
                            var_30 = (~-945341727);
                        }
                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
                        {
                            var_31 = (min(var_31, 16383));
                            arr_37 [i_0 + 1] [i_1] [i_0] [i_1] [i_9] [12] = ((((((arr_7 [i_0] [i_1] [i_8] [i_9]) ^ (arr_14 [i_1] [i_1] [i_1] [i_9])))) ? ((var_0 ? var_11 : 31889)) : var_12));
                            arr_38 [i_0] = (((arr_6 [i_0] [i_0 - 2] [i_0 + 1] [i_0 - 2] [i_9]) < (arr_6 [i_0] [i_0 - 2] [i_0 - 1] [i_0 - 2] [i_12])));
                            var_32 = (min(var_32, (arr_28 [i_0] [i_1] [i_8] [i_8] [i_9] [i_1])));
                        }
                    }
                }
            }
        }
        for (int i_13 = 0; i_13 < 13;i_13 += 1)
        {
            arr_43 [0] [i_13] |= (((((((!var_6) == ((-1987133549 ? (arr_23 [4]) : 65535)))))) == (max((((arr_39 [1]) + var_8)), (arr_34 [0] [0] [2])))));
            var_33 = (max(var_33, ((((var_3 * 7064747879626672257) ? (arr_4 [1] [6]) : (min(49393, -var_4)))))));
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 0;i_14 += 1)
        {
            arr_46 [i_0] [i_14] = ((var_5 == (arr_23 [i_0])));
            arr_47 [i_0] = ((var_3 & (arr_40 [i_0] [i_0])));
        }
        /* LoopNest 3 */
        for (int i_15 = 1; i_15 < 12;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 13;i_16 += 1)
            {
                for (int i_17 = 1; i_17 < 12;i_17 += 1)
                {
                    {
                        var_34 = (max(var_34, (!1)));
                        var_35 = (min(var_35, var_14));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_18 = 0; i_18 < 23;i_18 += 1)
    {
        var_36 -= (((arr_57 [i_18] [i_18]) == (arr_57 [i_18] [i_18])));
        arr_59 [i_18] = (arr_57 [i_18] [i_18]);
    }
    #pragma endscop
}

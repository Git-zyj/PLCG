/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_15 &= (arr_0 [i_1]);
                    var_16 = (min((arr_5 [i_0] [i_1] [i_1]), ((((1992851039 >= 0) <= (arr_6 [19] [i_1] [i_0]))))));
                    arr_8 [i_2] = (min((((arr_4 [4] [i_1] [i_2]) | (15143049118075498494 - var_5))), (arr_7 [i_0])));
                }
            }
        }
        var_17 = var_9;
        arr_9 [i_0] = (arr_6 [i_0] [i_0] [i_0]);
    }
    for (int i_3 = 3; i_3 < 18;i_3 += 1)
    {
        arr_13 [i_3] [17] = var_1;

        /* vectorizable */
        for (int i_4 = 4; i_4 < 17;i_4 += 1)
        {
            var_18 = ((~(arr_14 [i_4 - 3])));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 15;i_7 += 1)
                    {
                        {
                            arr_24 [18] |= ((((((arr_3 [i_4]) - (arr_14 [i_7])))) == (arr_10 [i_6] [i_5])));
                            var_19 = (arr_15 [i_3]);
                            var_20 = (max(var_20, ((((arr_22 [i_3] [0] [7] [i_7 + 1] [i_7 + 1] [i_7]) | (arr_5 [i_7 + 4] [i_4 + 1] [i_3 - 2]))))));
                            var_21 = (min(var_21, var_4));
                        }
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 2; i_9 < 17;i_9 += 1)
            {
                for (int i_10 = 3; i_10 < 18;i_10 += 1)
                {
                    {
                        var_22 = (arr_26 [i_8] [i_8] [i_8]);

                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            var_23 = (((arr_6 [i_3 + 1] [i_9 + 2] [i_10 - 2]) && (arr_4 [i_3 - 2] [i_9 - 2] [i_10 - 1])));
                            var_24 = (arr_29 [i_10 + 1] [i_10 - 1] [i_10 - 1] [i_10 - 1]);
                        }
                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 19;i_12 += 1)
                        {
                            var_25 = (max(var_25, var_6));
                            arr_38 [i_3] [i_8] [i_8] [i_10] [i_12] [i_3 - 3] = (arr_23 [i_8]);
                            arr_39 [16] [i_8] [i_9] [4] [4] = ((15143049118075498494 ? (arr_0 [i_8]) : (((((arr_12 [i_9 - 2] [i_9 - 2]) != 753209324302049880))))));
                            var_26 = (((arr_12 [i_9 + 1] [i_3 - 1]) ? (arr_32 [i_3] [i_8] [i_8] [i_3]) : (((arr_21 [i_3] [i_10] [i_9]) + (arr_18 [i_3] [i_3] [i_3] [i_12])))));
                        }
                    }
                }
            }
            var_27 = (min(var_27, ((max(4871712504776508919, 50208)))));
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 19;i_13 += 1)
        {
            arr_43 [i_13] [i_13] = ((-(arr_28 [i_13] [i_13] [i_13] [i_3 - 1])));
            var_28 = arr_1 [i_3 - 3];
        }
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 14;i_14 += 1)
    {
        arr_46 [i_14] = (arr_7 [i_14]);
        arr_47 [i_14] = (arr_20 [i_14] [10]);
        arr_48 [i_14] = 18014398509480960;
        var_29 = (((-4972157991098744027 % var_2) < (4871712504776508919 & var_2)));

        for (int i_15 = 0; i_15 < 14;i_15 += 1)
        {
            var_30 |= (((arr_35 [i_15] [i_15] [i_15] [i_14] [i_14] [i_14] [i_15]) || (arr_35 [i_15] [i_14] [4] [i_15] [i_15] [i_15] [i_15])));

            for (int i_16 = 1; i_16 < 12;i_16 += 1)
            {
                var_31 = (((arr_54 [i_16 + 2] [i_16 + 2] [i_16] [i_16]) & (arr_34 [i_14] [i_16 + 2] [i_16 + 2] [i_16 + 1])));
                var_32 *= var_10;
            }
            arr_55 [i_14] &= (((arr_10 [i_14] [i_15]) != (arr_3 [i_14])));
            var_33 = 1455817427;
        }
        for (int i_17 = 0; i_17 < 14;i_17 += 1)
        {
            arr_59 [0] |= var_12;

            for (int i_18 = 0; i_18 < 14;i_18 += 1)
            {
                arr_62 [i_14] [i_17] [5] = 0;
                var_34 = 70;
            }
            arr_63 [i_17] [i_17] [i_17] = ((-(((var_10 != (arr_4 [i_14] [i_17] [i_14]))))));
        }
        for (int i_19 = 0; i_19 < 14;i_19 += 1)
        {
            var_35 = (min(var_35, ((((arr_35 [14] [6] [i_19] [14] [i_14] [i_14] [14]) & (arr_42 [i_14] [8] [i_19]))))));
            var_36 = (arr_3 [i_19]);
            var_37 = (arr_6 [i_19] [i_14] [i_14]);
        }
    }
    /* LoopNest 2 */
    for (int i_20 = 0; i_20 < 25;i_20 += 1)
    {
        for (int i_21 = 0; i_21 < 25;i_21 += 1)
        {
            {
                var_38 = (arr_67 [17]);
                arr_74 [i_21] [i_20] = (((arr_70 [i_20] [i_21]) ? (arr_70 [i_21] [i_20]) : (max((arr_70 [i_20] [i_21]), (arr_70 [i_20] [i_21])))));
                arr_75 [21] = -0;
            }
        }
    }
    #pragma endscop
}

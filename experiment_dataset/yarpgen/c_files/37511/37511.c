/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_15 -= (((((-(var_10 >= var_10)))) ? (arr_1 [i_0]) : (((arr_1 [i_0]) ^ var_11))));
        var_16 = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            var_17 ^= 40;
            arr_9 [i_1] [i_1] [i_1] = (arr_8 [1] [1]);
            var_18 += ((arr_1 [i_1]) ? (arr_1 [i_2 + 2]) : (arr_1 [i_2 - 1]));
        }
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 17;i_5 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            var_19 = (min(var_19, (((2693 ? (arr_6 [i_3] [i_3] [i_6]) : (arr_17 [i_1] [i_3] [i_3] [i_1] [i_6]))))));
                            arr_22 [5] = (92 >= 1900489277);
                        }
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            arr_25 [5] = (min(((max((arr_24 [i_5 + 1] [i_7] [i_5 + 1] [i_7] [i_7]), 71))), var_8));
                            var_20 = (max(var_20, -221));
                            var_21 = ((((2815714619 * ((max(-31, var_8)))))) ? (max((arr_10 [i_5 - 3]), ((var_9 ? var_2 : (arr_2 [i_1] [i_1]))))) : var_4);
                        }
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            arr_28 [i_1] [i_3] [i_4] [i_4] [i_5 - 1] [5] [2] = (((((arr_15 [0] [i_1] [i_5 - 1] [i_5] [i_5 + 1] [i_5 - 3]) | var_10)) ^ (((~(arr_17 [i_5] [i_5] [i_5 - 1] [i_5 - 1] [i_5 + 1]))))));
                            arr_29 [i_1] [i_1] [i_1] [i_1] [i_1] = ((-((-(arr_15 [i_5 - 1] [i_3] [i_4] [i_5] [i_5 - 1] [i_5 - 3])))));
                        }
                        /* vectorizable */
                        for (int i_9 = 4; i_9 < 17;i_9 += 1)
                        {
                            var_22 = (min(var_22, (((-(arr_7 [i_1] [i_3] [i_5 + 1]))))));
                            var_23 = ((arr_24 [i_4] [i_3] [12] [i_5 - 2] [i_1]) - var_14);
                        }
                        arr_34 [i_1] [9] [14] [i_4] = (((((arr_15 [i_5 - 1] [i_5] [i_5 - 3] [i_5 - 1] [i_5 - 1] [i_5 - 3]) ^ (((min(var_6, (arr_6 [i_1] [i_3] [i_5]))))))) * ((((!((max((arr_23 [i_1] [i_1] [i_1]), (arr_20 [i_1] [i_3] [i_3] [i_5] [i_5]))))))))));
                    }
                }
            }
            var_24 = (max(var_24, ((min(var_9, ((-36 ? 56998 : 7)))))));
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 18;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 18;i_11 += 1)
            {
                {
                    arr_39 [i_11] [i_10] = (arr_6 [i_1] [8] [i_11]);
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 18;i_12 += 1)
                    {
                        for (int i_13 = 2; i_13 < 16;i_13 += 1)
                        {
                            {
                                var_25 = ((~(arr_6 [17] [i_13 + 2] [17])));
                                arr_46 [i_11] [3] [i_10] [i_11] = ((((-(arr_10 [i_13 - 2]))) / (((min((arr_40 [i_10] [7]), -25))))));
                            }
                        }
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            var_26 = (min(var_26, (!var_6)));
            arr_51 [10] [i_14] = (20 || 54292);
            arr_52 [i_1] [i_1] [14] = ((-(arr_15 [i_1] [i_1] [i_14] [i_14] [i_14] [i_14])));
            var_27 = ((-(arr_26 [15] [15] [i_14] [i_14])));
        }
        var_28 = (max(var_28, (arr_19 [i_1] [i_1] [i_1] [i_1])));
    }
    /* vectorizable */
    for (int i_15 = 3; i_15 < 11;i_15 += 1)
    {
        arr_55 [i_15] [i_15] = (24 > 31744);
        arr_56 [i_15] [i_15] = ((-3871843057072962366 ? 0 : 858838615));
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 12;i_16 += 1)
        {
            for (int i_17 = 2; i_17 < 11;i_17 += 1)
            {
                {
                    arr_62 [i_16] [i_16] [i_16] [9] = (var_13 - var_2);
                    var_29 = ((31 / (-9223372036854775807 - 1)));
                    arr_63 [i_15] [i_16] [i_16] [i_17 - 2] = 4095;
                }
            }
        }
    }
    var_30 = (((~var_0) < var_2));
    #pragma endscop
}

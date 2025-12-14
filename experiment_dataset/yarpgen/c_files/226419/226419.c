/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, (((((((min(255, var_16))) ? 0 : -19236))) ? (+-19236) : var_0))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [5] = min(((-(~var_8))), 19230);
        var_18 = (min((min((~1), (min(var_15, var_16)))), 255));
    }
    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {
        var_19 = (min(var_19, var_6));
        var_20 = (min(var_20, ((((min((((arr_4 [10]) ? 69 : (arr_5 [i_1 + 2]))), var_3)) - ((-(arr_5 [21]))))))));
        var_21 = var_3;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_22 = arr_5 [7];
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {
                    var_23 = var_3;
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_24 -= (arr_17 [14] [i_2] [i_2] [i_5 + 2] [i_5 - 2] [i_5 - 2]);
                                var_25 = 9;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            {
                                var_26 *= ((-(arr_13 [i_2] [i_3] [i_4] [i_7])));
                                var_27 = ((((-9080579 ? var_13 : var_0)) << (arr_7 [i_2])));
                            }
                        }
                    }
                    var_28 = (~(arr_15 [i_4] [i_3] [20] [20]));
                }
            }
        }
        var_29 = (min(var_29, 9080563));
    }
    for (int i_9 = 2; i_9 < 14;i_9 += 1)
    {
        arr_28 [8] = ((+(((!((min((arr_23 [i_9 + 3] [i_9 + 3] [i_9] [i_9] [i_9]), var_6))))))));
        arr_29 [1] [1] = (arr_7 [i_9]);

        for (int i_10 = 2; i_10 < 15;i_10 += 1)
        {
            var_30 *= var_7;
            var_31 = (arr_11 [i_9] [i_10] [i_10]);
        }
        for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
        {
            var_32 = (((arr_26 [i_11]) ? ((155 ? (arr_34 [i_9 - 2]) : (arr_34 [i_9 - 1]))) : 32757));
            var_33 = ((((min(4294967285, -32749))) ? 14699 : var_8));
            var_34 |= (((((((((arr_34 [i_11]) | (arr_11 [i_9 - 2] [i_11] [i_11])))) ? (((arr_17 [i_9] [20] [i_11] [20] [20] [i_11]) ? (arr_32 [i_9] [12]) : var_12)) : (arr_7 [i_9 - 2])))) >= (arr_3 [i_11] [i_11])));
            /* LoopNest 2 */
            for (int i_12 = 1; i_12 < 13;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 17;i_13 += 1)
                {
                    {
                        var_35 = (max(var_35, (42 <= 1221126949)));

                        for (int i_14 = 0; i_14 < 17;i_14 += 1) /* same iter space */
                        {
                            var_36 -= (min((min(-var_7, (arr_18 [3] [i_12 + 1] [i_12 + 4] [i_13] [i_12 + 1] [i_12]))), (min(-32749, (arr_33 [i_9 + 3] [i_9 - 2] [i_9 - 2])))));
                            var_37 = (((arr_12 [i_9 - 1] [i_11]) ? (221 && 237) : 16951));
                        }
                        for (int i_15 = 0; i_15 < 17;i_15 += 1) /* same iter space */
                        {
                            arr_45 [i_11] [i_11] [i_11] [i_11] = (-6 == 9060921494088585590);
                            var_38 = ((+(((!4294967286) ? ((min((arr_27 [i_9]), var_1))) : (arr_26 [2])))));
                            var_39 = ((((-(arr_19 [i_9 + 2] [i_13] [i_15] [i_15] [i_15] [i_15]))) + ((var_10 ? (arr_41 [i_9 + 1] [11] [i_11] [i_15] [9]) : (arr_19 [i_9 + 2] [1] [i_11] [i_13] [i_13] [i_15])))));
                        }
                        var_40 = (arr_5 [i_12]);
                    }
                }
            }
            var_41 = ((((((min((arr_23 [i_9 - 1] [i_9 - 1] [i_9] [i_9 - 2] [i_11]), (arr_30 [i_9 + 3])))) + 2147483647)) << (((((arr_23 [i_11] [i_11] [i_11] [i_11] [i_11]) + 10325)) - 25))));
        }
        for (int i_16 = 0; i_16 < 17;i_16 += 1) /* same iter space */
        {
            var_42 = (min(var_42, ((((((arr_9 [i_9 - 1] [i_9 + 1]) ? (arr_9 [i_16] [i_16]) : (arr_46 [i_9 - 1] [i_16] [i_9]))) != (((arr_46 [i_9] [15] [i_16]) ? (arr_46 [i_9] [i_9 - 1] [6]) : (arr_9 [i_9 - 2] [i_16]))))))));
            var_43 = (((arr_34 [1]) < (arr_30 [i_16])));
            arr_49 [5] = (((arr_4 [i_9]) ? 44 : ((-((var_3 << (var_12 - 1933)))))));
        }
        var_44 += ((2403836378 ? 1 : 39));
        var_45 |= ((!((((arr_43 [i_9 - 1] [4]) ? (arr_22 [4] [i_9] [i_9] [8]) : -751570153)))));
    }
    var_46 = (!var_0);
    #pragma endscop
}

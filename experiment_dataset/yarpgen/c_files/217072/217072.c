/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_14 = (1851182531 == 1);
        var_15 = (min(var_15, ((((((-(min(var_2, 4135934373))))) ? 3 : ((max(76, 76))))))));
        arr_3 [i_0] [i_0] = ((~(max(var_4, 2443784791))));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_8 [i_0 + 3] [6] = (((arr_2 [i_0] [i_0]) ? (((!((max(var_6, var_6)))))) : (arr_2 [i_0] [i_1])));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_16 = max(18112399137511456282, 1);
                        arr_13 [i_3] [6] [0] [6] = ((13779 ? 1 : 113));
                        var_17 = var_7;
                    }
                }
            }
        }
        for (int i_4 = 1; i_4 < 12;i_4 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 12;i_6 += 1)
                {
                    {
                        var_18 += var_8;
                        var_19 += 119;
                        var_20 = (((arr_12 [i_0 - 1] [i_5]) ? (max((~var_7), (((arr_0 [i_0] [10]) & var_0)))) : (arr_1 [8])));
                        var_21 += 1851182504;
                        arr_21 [i_5] [i_4] [i_4] [5] [i_4] [i_4] = (((((var_5 * (arr_12 [i_6] [i_5])))) ? (arr_12 [i_0] [i_5]) : (arr_12 [6] [i_5])));
                    }
                }
            }
            arr_22 [i_0] |= var_13;
        }
        for (int i_7 = 1; i_7 < 12;i_7 += 1) /* same iter space */
        {
            arr_25 [0] [i_7] = ((~(min((9356 && 1), (max(1851182531, (arr_11 [10] [i_7] [10] [10])))))));
            arr_26 [i_7] = max((((((~(arr_15 [i_0] [i_7]))) | (arr_1 [9])))), (min((((var_0 ? 1851182531 : (arr_1 [i_7])))), (((arr_0 [i_0] [i_7 + 2]) ? 18446744073709551615 : var_2)))));
        }
    }
    for (int i_8 = 0; i_8 < 10;i_8 += 1)
    {
        arr_29 [i_8] = (((((max(var_3, (arr_7 [i_8] [i_8]))))) ? (arr_15 [i_8] [i_8]) : ((((max(157, 11495))) ? 1 : 24))));

        for (int i_9 = 1; i_9 < 9;i_9 += 1)
        {

            for (int i_10 = 2; i_10 < 9;i_10 += 1)
            {
                var_22 = (min(1, 2147483647));
                arr_35 [i_8] [i_8] [i_9] [i_10] = min(((max((arr_12 [i_10] [i_10]), (arr_12 [i_10] [i_10])))), (max(var_8, (arr_12 [i_10] [i_10]))));

                /* vectorizable */
                for (int i_11 = 3; i_11 < 8;i_11 += 1)
                {
                    var_23 = (arr_2 [i_11 - 1] [i_11]);
                    arr_40 [i_8] [i_9] [i_9] [2] [i_10] [4] = var_7;
                    var_24 = (max(var_24, (((-(!7023339398289643151))))));
                }
                for (int i_12 = 0; i_12 < 10;i_12 += 1)
                {
                    var_25 = (min(var_25, (arr_4 [i_12] [i_10 - 2] [i_10])));
                    var_26 = var_8;
                }
            }
            for (int i_13 = 2; i_13 < 6;i_13 += 1)
            {
                arr_48 [4] [i_8] = var_9;
                var_27 = (max((((511 ? 3090169974 : 2147483647))), (max(var_1, ((((arr_6 [i_9] [i_9 - 1]) > 1)))))));
            }
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 10;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 10;i_15 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_16 = 0; i_16 < 10;i_16 += 1)
                        {
                            var_28 = (max(var_28, ((((arr_39 [i_15] [i_9 - 1] [i_9] [i_9] [2] [i_9 - 1]) * (arr_54 [i_15] [0] [0]))))));
                            arr_57 [i_8] [i_9 - 1] [i_14] [i_15] [5] = (((((var_8 ? var_1 : var_13))) ? 2147483647 : (var_7 && var_9)));
                            arr_58 [i_8] [i_9] [i_8] [i_14] [3] [i_16] = 2818968675;
                        }
                        for (int i_17 = 0; i_17 < 10;i_17 += 1)
                        {
                            var_29 = (min(var_29, ((max(((-(max(var_5, 309890846)))), (((((max((arr_23 [i_8]), var_0))) ? -var_12 : -309890828))))))));
                            arr_61 [i_8] [i_9] [i_14] [i_14] [i_14] [1] [i_9] = var_8;
                            arr_62 [5] [i_9] [i_9] [2] [i_9] [i_9] = var_4;
                        }
                        var_30 = ((~(max(((max((arr_15 [4] [i_9]), var_10))), 1248155265))));
                        arr_63 [0] [i_9] [i_9] [7] [0] [i_8] = (((arr_2 [i_9 + 1] [i_9 - 1]) ? (arr_4 [i_8] [i_9] [i_15]) : ((-309890828 ? (arr_16 [i_14]) : ((min((arr_0 [1] [i_9]), var_10)))))));
                        var_31 = ((((min((((arr_15 [i_8] [i_9]) | (arr_41 [i_8] [i_9] [i_14] [i_15]))), (var_11 / var_10)))) | 1));
                        var_32 = (!var_2);
                    }
                }
            }
        }
        var_33 *= (min((((-var_4 == ((var_8 ? var_2 : var_6))))), ((var_6 ? (arr_9 [i_8] [10]) : (min(var_1, (arr_34 [i_8])))))));
    }
    /* vectorizable */
    for (int i_18 = 0; i_18 < 1;i_18 += 1)
    {
        arr_66 [i_18] [1] = (arr_65 [i_18]);
        var_34 += (!var_6);
    }
    var_35 = var_2;
    #pragma endscop
}

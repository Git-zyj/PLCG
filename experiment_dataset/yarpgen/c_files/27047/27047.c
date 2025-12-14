/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 24;i_2 += 1)
            {
                {
                    var_12 = (max(var_12, ((min(((19 ? 18446744073709551585 : 18446744073709551595)), (((-((min((arr_4 [i_1] [i_1]), (arr_0 [i_0] [i_1]))))))))))));
                    var_13 += (((9492 ? 11 : 6)));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1) /* same iter space */
                    {
                        var_14 = (min(var_14, (~var_0)));
                        var_15 = var_4;
                    }
                    for (int i_4 = 0; i_4 < 0;i_4 += 1) /* same iter space */
                    {
                        var_16 += (18446744073709551604 >> 1);
                        var_17 = (min(4294967295, ((min((arr_6 [i_0] [i_2 - 2] [i_0] [i_4 + 1]), (arr_6 [i_0] [i_2 - 1] [i_4 + 1] [i_4]))))));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                arr_15 [i_0] [i_6] [i_6] [i_0] [i_6] = ((~(((arr_9 [i_6] [i_2] [i_2 - 2] [i_2 - 2]) ? 32 : (arr_9 [i_5] [i_5] [i_2 + 1] [i_2 - 1])))));
                                var_18 *= 28;
                                var_19 = ((var_0 ? (((arr_8 [i_2 + 1] [i_1] [i_1] [i_5] [i_6] [i_2]) * ((min(var_10, var_5))))) : (((!(((18 ? 0 : 127))))))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        var_20 = (1 + var_0);
        var_21 = (min(-32759, 26));
    }
    for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_9 = 3; i_9 < 19;i_9 += 1)
        {
            var_22 = ((var_11 ? (arr_9 [i_8] [i_9] [i_9] [i_9]) : (arr_4 [i_9 - 2] [i_9 - 2])));
            var_23 = (max(var_23, (((-(arr_3 [i_8]))))));
            var_24 = (min(var_24, (-7107 & 18446744073709551592)));
            var_25 = ((~var_2) ? (((arr_10 [i_9 - 1] [i_9] [i_9] [i_9]) ? var_6 : var_6)) : -1739490594389535293);
        }
        for (int i_10 = 0; i_10 < 22;i_10 += 1)
        {

            for (int i_11 = 0; i_11 < 22;i_11 += 1)
            {
                arr_30 [i_8] [i_8] = -47;
                var_26 = -var_9;
                arr_31 [i_8] [i_10] [i_8] = (arr_8 [i_8] [i_10] [i_11] [i_8] [i_10] [i_10]);
            }
            for (int i_12 = 0; i_12 < 22;i_12 += 1)
            {
                arr_35 [i_8] [20] [20] [i_8] = var_1;
                var_27 = (((((arr_7 [i_12] [i_10] [i_12] [i_8] [i_10]) < (arr_7 [i_8] [16] [i_10] [i_12] [i_8]))) ? (5 >= -32753) : (var_11 / var_4)));
            }
            var_28 += ((((arr_10 [i_10] [i_10] [i_8] [i_8]) & -1)));
            var_29 = (((arr_8 [10] [i_10] [10] [i_8] [i_8] [i_10]) * (((min((arr_17 [i_8]), (arr_10 [i_8] [i_8] [i_8] [i_10]))) * (arr_10 [i_10] [i_10] [i_8] [i_8])))));
        }
        var_30 = (max((~var_3), ((9223372036854775807 ? 11 : 33))));
        var_31 = (arr_19 [i_8] [i_8]);
        var_32 = (min((!5836180193700523311), (arr_16 [i_8] [i_8])));
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 22;i_13 += 1) /* same iter space */
    {

        for (int i_14 = 2; i_14 < 18;i_14 += 1)
        {

            for (int i_15 = 1; i_15 < 19;i_15 += 1)
            {
                arr_44 [i_13] [i_13] [i_15] = ((~((var_3 ? var_11 : (arr_4 [i_14] [i_14])))));
                arr_45 [i_13] [i_14] [i_13] = 8632365680860334192;
                var_33 = ((~(-1739490594389535289 / var_11)));
            }
            var_34 = ((((var_10 * (arr_34 [i_13] [5] [i_13] [i_13])))) <= var_3);
            var_35 = (min(var_35, -1));
            /* LoopNest 3 */
            for (int i_16 = 2; i_16 < 21;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 1;i_17 += 1)
                {
                    for (int i_18 = 1; i_18 < 21;i_18 += 1)
                    {
                        {
                            arr_54 [i_13] [i_13] [i_16 - 1] [i_16] [i_16 + 1] [i_17] [i_18] = var_11;
                            var_36 += arr_3 [i_14 + 1];
                            var_37 = ((18 ? ((2688698862 & (arr_40 [i_16] [i_17] [i_13]))) : -11519));
                        }
                    }
                }
            }
        }
        for (int i_19 = 0; i_19 < 22;i_19 += 1)
        {
            var_38 = (min(var_38, ((((((arr_41 [i_19] [i_13]) * (arr_19 [i_19] [i_19]))) * 18)))));
            arr_58 [i_19] [i_13] [i_13] = 20;
            arr_59 [i_13] [i_13] [i_19] = 3191265474745723372;
        }
        for (int i_20 = 3; i_20 < 20;i_20 += 1)
        {
            var_39 = -var_2;
            var_40 = (max(var_40, (~var_9)));

            for (int i_21 = 0; i_21 < 22;i_21 += 1)
            {
                /* LoopNest 2 */
                for (int i_22 = 1; i_22 < 20;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 22;i_23 += 1)
                    {
                        {
                            var_41 = (min(var_41, (((var_0 ? (arr_48 [i_20] [i_22] [i_22 + 1] [i_21] [i_20]) : (((var_10 || (arr_42 [i_21])))))))));
                            arr_71 [i_13] = ((var_11 >= (arr_27 [i_20 - 2] [i_20 - 2] [i_20 - 1] [i_20])));
                        }
                    }
                }

                for (int i_24 = 0; i_24 < 22;i_24 += 1)
                {
                    arr_74 [i_13] [i_21] [i_20] [i_13] = ((!(arr_47 [i_13] [i_20 + 2])));
                    var_42 = 11525;
                }
                /* LoopNest 2 */
                for (int i_25 = 2; i_25 < 20;i_25 += 1)
                {
                    for (int i_26 = 0; i_26 < 1;i_26 += 1)
                    {
                        {
                            var_43 = (((arr_19 [i_13] [i_13]) >> (var_3 - 438675034686913964)));
                            var_44 = (((((arr_33 [i_21] [i_25] [i_21] [i_20]) / var_2)) >> (((arr_19 [i_13] [1]) / var_6))));
                            var_45 = ((1 || (arr_75 [i_20 - 3] [2] [i_20 - 3] [i_25 + 2] [i_25 - 1])));
                        }
                    }
                }
                var_46 += (var_2 + (arr_64 [i_20 - 3] [i_21] [i_21] [i_20 - 3]));
            }
        }
        var_47 += ((128 >= (arr_26 [i_13] [i_13] [i_13] [i_13])));
        var_48 *= (!12820995875799558418);
        var_49 = ((5217 & var_2) <= (arr_25 [i_13]));
    }
    #pragma endscop
}

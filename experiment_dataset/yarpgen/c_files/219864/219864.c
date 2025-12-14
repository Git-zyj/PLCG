/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1 + 3] [i_0] = ((((var_14 && (arr_1 [i_0]))) && ((4294967285 || (arr_0 [i_1] [i_0])))));
                var_17 = (-127 - 1);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {

                            for (int i_4 = 4; i_4 < 14;i_4 += 1)
                            {
                                var_18 = 1041230104632488334;
                                var_19 = (arr_3 [i_2] [i_3] [i_4 - 4]);
                            }
                            for (int i_5 = 1; i_5 < 13;i_5 += 1)
                            {
                                var_20 = ((((arr_15 [i_0] [i_0] [i_1 + 2] [i_2] [i_3] [i_5] [i_5]) + 2147483647)) << (var_7 - 178));
                                var_21 = ((-(~15)));
                            }
                            for (int i_6 = 1; i_6 < 14;i_6 += 1)
                            {
                                arr_19 [i_0] [i_1 - 1] [i_2] [i_2] [i_3] [i_6 - 1] [5] = ((~(arr_0 [i_0] [i_0])));
                                var_22 = var_6;
                            }
                            var_23 = -1;

                            /* vectorizable */
                            for (int i_7 = 1; i_7 < 14;i_7 += 1)
                            {
                                arr_22 [i_0] [i_1 + 2] [i_2] [i_3] [i_3] [i_3] [i_2] = (((((5645051295180099405 - (arr_20 [i_2] [i_0] [i_1] [i_2] [i_2] [i_3] [i_7])))) ? var_12 : (arr_7 [i_2] [i_1 + 2] [i_3])));
                                var_24 = (((var_10 + -539995947) ? (((arr_14 [i_7] [i_3] [i_2] [i_0]) ? var_2 : 1561793233)) : var_3));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = var_14;

    for (int i_8 = 0; i_8 < 24;i_8 += 1)
    {

        for (int i_9 = 2; i_9 < 22;i_9 += 1)
        {
            var_26 = (-(arr_23 [5] [5]));
            arr_27 [i_8] [i_9] = (((~7) ^ ((((((max(var_15, 0))) && -var_9))))));
            var_27 = (min((((!1) ? 1 : var_8)), (((!((min((arr_26 [i_9]), 18160940191332378637))))))));
        }
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            var_28 = var_0;
            var_29 = ((-((-(~var_7)))));

            /* vectorizable */
            for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
            {
                arr_34 [i_8] [i_8] [i_11] [i_10] = var_15;
                var_30 = (((arr_26 [i_11]) & -49));
            }
            /* vectorizable */
            for (int i_12 = 0; i_12 < 24;i_12 += 1) /* same iter space */
            {
                arr_38 [i_12] [i_12] = (arr_28 [i_8] [i_10] [i_8]);
                var_31 = ((-(~var_15)));
                var_32 *= ((((arr_37 [i_8] [i_8] [i_10]) != 1561793226)));
                var_33 = (arr_35 [i_12] [i_12] [i_12] [i_8]);
                arr_39 [i_12] = -29229;
            }
            for (int i_13 = 0; i_13 < 24;i_13 += 1) /* same iter space */
            {
                var_34 = (((arr_36 [i_10]) - ((max((((!(arr_40 [i_8] [i_8] [1] [i_8])))), (arr_36 [i_10]))))));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        {
                            var_35 = ((32 ^ ((29228 ^ (arr_29 [i_8])))));
                            var_36 *= (((arr_42 [i_8] [i_10] [i_13]) | var_1));
                            var_37 = ((~(~-8294)));
                        }
                    }
                }
                var_38 = var_16;
            }
        }
        for (int i_16 = 0; i_16 < 24;i_16 += 1)
        {
            var_39 = (min((((!8) || (arr_36 [i_16]))), (var_2 || -9223372036854775792)));
            var_40 = (max(var_40, ((((arr_23 [i_8] [i_8]) ? 9 : (arr_45 [i_8] [6] [12]))))));
        }
        var_41 = (!var_8);
    }
    /* vectorizable */
    for (int i_17 = 0; i_17 < 1;i_17 += 1)
    {
        var_42 = (((34 & 39436) && (arr_33 [i_17] [18] [i_17] [i_17])));
        var_43 = (max(var_43, (arr_30 [i_17] [i_17] [i_17])));

        for (int i_18 = 2; i_18 < 21;i_18 += 1)
        {
            var_44 = ((~(arr_37 [i_17] [i_17] [14])));
            var_45 = var_7;
        }
        for (int i_19 = 0; i_19 < 22;i_19 += 1)
        {
            arr_59 [i_17] [i_19] [i_17] = (((arr_41 [i_19] [i_17]) && 32738));
            var_46 = ((-29229 + ((((arr_52 [10]) || 1)))));
        }
    }
    #pragma endscop
}

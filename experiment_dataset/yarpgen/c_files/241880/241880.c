/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            var_14 = var_0;
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_15 = 53410;
                        arr_11 [i_2] [i_1] = 78;
                    }
                }
            }
        }
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            arr_15 [i_0] = (min((min((arr_14 [1]), var_11)), var_2));
            arr_16 [i_0] [1] = var_2;
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 10;i_6 += 1)
                {
                    {
                        var_16 = (max(var_16, 222));
                        arr_22 [i_0] [6] [i_4] [i_5] [6] [i_6] = (31609 * 94);
                    }
                }
            }
            arr_23 [i_4] [i_0] = -102;
            var_17 = var_0;
        }
        var_18 ^= (min(-10, (((!(arr_4 [i_0]))))));
    }
    for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
    {

        for (int i_8 = 2; i_8 < 10;i_8 += 1)
        {
            arr_30 [5] [i_8 - 1] = ((max((arr_14 [i_8 - 2]), (arr_14 [i_8 - 2]))));
            var_19 = (min(var_19, (((34 ? 63420 : ((min((arr_19 [i_7] [i_8] [i_8 - 2] [6]), 39))))))));

            /* vectorizable */
            for (int i_9 = 4; i_9 < 8;i_9 += 1)
            {
                var_20 = -105;
                var_21 = 15696;
                var_22 = (max(var_22, 135));
            }
            arr_33 [i_7] = arr_19 [i_7] [i_7] [i_8 + 1] [i_7];
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {

            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                var_23 = (((!-66) ? (arr_5 [i_7]) : (var_4 ^ var_8)));
                var_24 = (max(var_24, var_0));
                var_25 += var_2;
            }
            for (int i_12 = 0; i_12 < 11;i_12 += 1)
            {
                arr_42 [i_12] [10] [i_10] [i_7] = (((((var_12 ? 159 : (arr_8 [i_7] [i_10] [i_12])))) ? (arr_0 [i_12]) : (((!(arr_4 [i_12]))))));
                /* LoopNest 2 */
                for (int i_13 = 2; i_13 < 10;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 10;i_14 += 1)
                    {
                        {
                            arr_49 [10] [5] [9] [i_13 - 1] [i_14] = ((7 ? -51 : 120));
                            arr_50 [i_14 - 1] [4] [i_13 - 2] [9] [i_12] [i_10] [i_7] = var_5;
                            var_26 = -10;
                        }
                    }
                }
                var_27 += var_7;
            }
            for (int i_15 = 0; i_15 < 11;i_15 += 1)
            {
                arr_54 [i_7] [i_10] [i_15] = ((-121 ? var_7 : (arr_9 [i_7] [i_7] [i_7])));
                arr_55 [i_7] [i_10] = (arr_48 [2] [i_7] [i_15] [i_7] [i_7] [i_7] [i_10]);
            }
            arr_56 [i_10] [i_7] = ((var_11 ? (arr_40 [8] [i_10]) : (((!(arr_28 [1]))))));
        }
        arr_57 [i_7] = 26029;
        arr_58 [i_7] = ((((-(arr_35 [i_7] [i_7]))) > (arr_35 [i_7] [i_7])));
        /* LoopNest 2 */
        for (int i_16 = 2; i_16 < 10;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 11;i_17 += 1)
            {
                {
                    arr_64 [0] [i_16] [i_16] = (min((-127 - 1), -5));
                    var_28 = (max((arr_36 [i_7] [i_16]), (((max((arr_14 [9]), (arr_28 [2])))))));
                }
            }
        }
    }
    var_29 = var_10;
    /* LoopNest 3 */
    for (int i_18 = 1; i_18 < 18;i_18 += 1)
    {
        for (int i_19 = 3; i_19 < 17;i_19 += 1)
        {
            for (int i_20 = 1; i_20 < 18;i_20 += 1)
            {
                {

                    for (int i_21 = 0; i_21 < 19;i_21 += 1)
                    {
                        arr_76 [1] [i_18] = (min((arr_67 [i_18 + 1]), -var_6));
                        var_30 = ((((((!(arr_65 [i_19 - 2] [i_18]))))) - var_0));
                        arr_77 [i_18] [16] [i_19] [i_18] = ((var_11 ? ((((arr_66 [i_18 + 1]) ? (arr_66 [i_20 + 1]) : (arr_66 [i_18 - 1])))) : (max(3843387847, (arr_66 [i_21])))));
                    }
                    var_31 = (max(var_31, (((max((~56), ((max(16, 32)))))))));
                }
            }
        }
    }
    #pragma endscop
}

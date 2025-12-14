/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_8 >= ((((min(6888637749560704395, var_6))) ? var_5 : (var_9 * 1956222524)))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_11 = (min((((~(((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : var_3))))), 2394606205));
        var_12 = (+-65533);

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_13 = (((min(-var_0, (min(var_2, var_6)))) - var_6));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                var_14 = ((var_7 == (11 == 2394606205)));
                var_15 = (2394606205 * (arr_7 [i_0] [0] [0] [0]));
            }
            var_16 = (arr_1 [i_0] [i_1]);
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            var_17 ^= 2441804100;
            arr_12 [i_0] [i_0] = ((min(255, 238)));
            var_18 = (--6888637749560704397);
            arr_13 [i_0] = (((arr_9 [i_0] [i_3] [i_3]) ? (((arr_9 [i_0] [i_3] [i_0]) - 1900361091)) : (((124 ? (arr_9 [i_0] [i_0] [i_3]) : var_9)))));

            /* vectorizable */
            for (int i_4 = 1; i_4 < 22;i_4 += 1) /* same iter space */
            {

                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {

                    for (int i_6 = 1; i_6 < 22;i_6 += 1)
                    {
                        var_19 = (((arr_1 [i_0] [i_4 - 1]) && 10926572689861651413));
                        var_20 = ((+(((arr_7 [i_0] [i_3] [i_0] [0]) + 101))));
                        var_21 = ((1 ? (10926572689861651413 - 1) : -1));
                    }
                    var_22 -= ((58 * (var_0 / 12369009850822023430)));
                }
                var_23 = (((arr_9 [i_0] [7] [i_4]) ? (arr_9 [i_4 - 1] [i_3] [i_4 - 1]) : (((arr_11 [i_0]) ? (arr_18 [i_0] [i_3] [20]) : (arr_2 [i_0])))));
                arr_23 [i_0] [i_3] [i_0] = (((-(arr_10 [i_0]))));

                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    var_24 = var_6;

                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        arr_28 [i_7] [i_7] [i_7] [i_7] [i_7] [i_0] = -37099;
                        var_25 |= (((arr_21 [i_4 + 1] [i_3]) ? (((arr_2 [i_0]) ? 28436 : (arr_25 [i_0] [i_7]))) : -var_6));
                        var_26 = var_5;
                    }
                    var_27 = ((-(((arr_10 [i_0]) ? (arr_22 [14] [9] [9] [9] [i_0] [i_0] [i_4]) : (arr_10 [i_0])))));
                    var_28 = ((((arr_17 [9] [i_3] [i_4] [i_7] [9]) == var_1)));
                }
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    arr_33 [i_0] [i_0] [i_4] [i_3] [i_3] [i_4] = (arr_25 [i_0] [i_0]);
                    var_29 = (arr_7 [i_0] [i_3] [i_4 - 1] [i_3]);
                }
            }
            /* vectorizable */
            for (int i_10 = 1; i_10 < 22;i_10 += 1) /* same iter space */
            {

                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {

                    for (int i_12 = 0; i_12 < 23;i_12 += 1)
                    {
                        arr_41 [i_0] [i_3] [i_10] [i_0] [i_12] [i_0] [i_10] = (arr_31 [i_0] [i_12]);
                        var_30 = var_3;
                        arr_42 [i_10] [i_3] [i_3] [i_10] [i_0] = -var_8;
                        var_31 ^= ((6888637749560704373 * ((var_8 >> (((arr_18 [i_0] [i_3] [i_10]) - 15646529860100512457))))));
                    }
                    for (int i_13 = 0; i_13 < 23;i_13 += 1)
                    {
                        arr_46 [i_0] [i_0] [i_10] [i_11] [i_13] = var_9;
                        var_32 = ((var_4 > (arr_22 [i_0] [i_3] [i_10 + 1] [i_11] [i_10 + 1] [i_10 + 1] [i_10])));
                        arr_47 [i_0] [i_3] [i_0] = ((var_0 >> (-var_9 - 85)));
                    }
                    for (int i_14 = 0; i_14 < 23;i_14 += 1)
                    {
                        var_33 = (min(var_33, (((~2394606205) ? (arr_43 [i_11] [i_10 - 1] [i_11]) : ((14 | (arr_34 [i_0] [i_3] [i_3] [i_0])))))));
                        var_34 -= (arr_24 [i_14] [22] [i_10 + 1] [i_10 + 1]);
                    }
                    for (int i_15 = 0; i_15 < 23;i_15 += 1)
                    {
                        var_35 = var_1;
                        var_36 += (((~3767235117) ^ (arr_20 [i_3])));
                        var_37 = ((((4268359231307099814 ? var_1 : 6)) >> (var_7 - 28)));
                    }
                    var_38 += -56544;

                    for (int i_16 = 3; i_16 < 22;i_16 += 1)
                    {
                        var_39 ^= (-127 - 1);
                        var_40 = -var_2;
                    }
                }
                var_41 = var_4;
                var_42 = (min(var_42, -31));
            }
            for (int i_17 = 1; i_17 < 22;i_17 += 1) /* same iter space */
            {
                arr_60 [i_0] = var_8;
                arr_61 [i_0] [i_17 - 1] [i_17] = (arr_48 [i_0] [i_3] [i_17] [i_0] [12]);
            }
        }
        for (int i_18 = 0; i_18 < 23;i_18 += 1)
        {
            arr_65 [i_0] [i_0] [i_0] = 5;
            arr_66 [i_18] &= (((-8727791860617051012 - -187799623) < (arr_44 [i_18])));
            var_43 -= 37096;
            var_44 = ((min((arr_1 [i_0] [i_18]), (arr_7 [9] [i_18] [9] [i_18]))) > var_3);
        }
    }
    /* vectorizable */
    for (int i_19 = 0; i_19 < 16;i_19 += 1)
    {
        var_45 = (((arr_53 [i_19] [i_19] [i_19]) ? var_8 : (arr_53 [i_19] [i_19] [i_19])));

        for (int i_20 = 0; i_20 < 16;i_20 += 1) /* same iter space */
        {
            arr_71 [i_20] [i_20] &= (((arr_35 [i_19] [i_19]) < (arr_35 [i_20] [i_20])));
            var_46 = (((arr_5 [i_19] [i_20] [i_19]) * var_1));
        }
        for (int i_21 = 0; i_21 < 16;i_21 += 1) /* same iter space */
        {
            var_47 += ((((((arr_69 [i_19] [i_19] [i_19]) - 34762))) ? ((1 ? 707946984691567243 : -26329)) : (arr_40 [i_19] [i_21] [i_21] [i_21] [i_21] [i_21])));
            arr_76 [i_19] [i_19] [i_21] = var_6;
            arr_77 [i_19] [i_21] [i_19] = ((-(arr_54 [i_19] [i_19])));
        }
    }
    var_48 = 312867948;
    #pragma endscop
}

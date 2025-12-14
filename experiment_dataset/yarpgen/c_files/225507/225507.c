/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, var_4));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_12 = (max(30, (((arr_1 [i_0] [i_0]) ? 239 : (arr_1 [i_0] [i_0])))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
                {
                    var_13 = 69;
                    var_14 = (min(var_14, (((~(arr_8 [i_0]))))));
                    var_15 = ((((var_9 ? var_8 : 13)) >= (arr_8 [i_2])));
                }
                for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
                {
                    var_16 = (16889416590959357390 == var_2);
                    var_17 = (39544 * var_6);

                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        var_18 = (arr_6 [i_0] [i_0] [i_0]);
                        var_19 *= (((arr_7 [i_2] [i_5]) ? var_4 : 39537));
                    }
                }
                var_20 = (i_2 % 2 == 0) ? ((((var_4 ? var_8 : (arr_9 [i_0] [i_0] [i_1] [i_2] [i_2]))) << (((arr_12 [i_0] [i_2]) - 2275817948078717690)))) : ((((var_4 ? var_8 : (arr_9 [i_0] [i_0] [i_1] [i_2] [i_2]))) << (((((arr_12 [i_0] [i_2]) - 2275817948078717690)) - 8430462722704555087))));
                var_21 = ((255 + (arr_2 [1] [i_1])));
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                var_22 ^= var_5;
                var_23 &= ((-(((arr_10 [i_0] [i_0] [i_1] [i_0] [1]) - ((min((arr_0 [i_1]), var_2)))))));
                var_24 += 25992;
            }

            /* vectorizable */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                var_25 = (min(var_25, ((((arr_2 [i_1] [i_1]) ? (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_7]) : var_6)))));
                var_26 = var_5;
                var_27 = (arr_4 [i_0] [i_1] [i_7] [i_7]);
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 0;i_8 += 1)
            {
                var_28 = (arr_14 [i_8] [i_8] [i_8 + 1] [i_8 + 1]);
                var_29 = 0;
                var_30 = (((arr_10 [i_8] [i_8] [i_8 + 1] [1] [i_8 + 1]) ? var_7 : (arr_10 [i_1] [i_1] [i_8 + 1] [i_8 + 1] [i_8 + 1])));
                var_31 = ((var_10 ? (arr_12 [i_0] [i_0]) : var_0));
            }
            /* vectorizable */
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                var_32 = arr_11 [6];
                var_33 = ((-(39547 >= 3)));
            }
            var_34 += ((((((min(var_6, 1)) ? ((min(25991, (arr_0 [i_0])))) : 16837))) ? (((arr_14 [i_0] [i_0] [i_0] [i_0]) ? (arr_21 [i_1] [i_0]) : (((var_7 ? var_2 : 28))))) : ((((var_0 * var_9) / (arr_8 [i_0]))))));
        }
        var_35 = var_6;
    }
    /* vectorizable */
    for (int i_10 = 2; i_10 < 11;i_10 += 1)
    {
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                {

                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        var_36 = var_4;
                        var_37 = ((16856 ? (arr_22 [i_10 - 2]) : var_7));
                    }
                    var_38 = 55;
                    var_39 = (((arr_31 [i_10] [i_10 + 2] [i_10 - 2] [i_12]) ? (arr_31 [i_10] [i_10 - 2] [i_10 + 1] [i_10 - 2]) : var_3));
                    var_40 = ((~(1 / var_2)));
                }
            }
        }
        var_41 = (((arr_30 [i_10]) | (arr_23 [i_10] [i_10 + 3] [i_10] [i_10 + 3])));
        var_42 = (((arr_31 [i_10] [i_10] [i_10] [i_10 - 1]) || (arr_19 [i_10 + 1])));
    }
    for (int i_14 = 1; i_14 < 1;i_14 += 1)
    {
        var_43 = var_3;

        /* vectorizable */
        for (int i_15 = 0; i_15 < 14;i_15 += 1)
        {
            var_44 = (!(arr_21 [i_14] [i_14 - 1]));

            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                var_45 = (((arr_37 [2]) ? ((var_10 ? var_9 : 1)) : (((!(arr_19 [i_16]))))));
                var_46 += (((((201 ? var_7 : var_1))) ? var_8 : 6650843958814338088));

                for (int i_17 = 0; i_17 < 14;i_17 += 1)
                {
                    var_47 = (!11);
                    var_48 = (arr_36 [8]);
                    var_49 = (arr_34 [i_14 - 1] [i_14 - 1]);
                }
                var_50 = var_8;
                var_51 = (((((7 ? (arr_40 [1]) : (arr_43 [i_14] [i_14] [i_14] [i_14 - 1])))) ? (((arr_4 [i_16] [i_14] [i_14] [i_14]) ? 5 : 48699)) : ((var_9 ? var_10 : (arr_32 [i_14])))));
            }
            for (int i_18 = 0; i_18 < 14;i_18 += 1)
            {
                var_52 = ((var_5 ? (((arr_17 [i_14]) ? var_0 : 1)) : 8191));
                var_53 = -572688196217991616;
            }
        }
        for (int i_19 = 0; i_19 < 1;i_19 += 1)
        {
            var_54 = (min(var_54, ((-((max(var_0, var_0)))))));
            var_55 += ((var_4 ? (((min((arr_41 [i_14 - 1]), var_7)))) : ((-121 ? ((((arr_7 [i_14] [i_14 - 1]) ? var_5 : 896))) : (max(var_10, (arr_1 [i_14] [i_14])))))));
        }
        var_56 = (((((var_4 ? (arr_2 [i_14 - 1] [i_14 - 1]) : (arr_2 [i_14] [9])))) ? ((((-1 % var_10) >= (~var_8)))) : ((+(((arr_37 [i_14]) ? var_4 : 16837))))));
        /* LoopNest 2 */
        for (int i_20 = 1; i_20 < 12;i_20 += 1)
        {
            for (int i_21 = 1; i_21 < 12;i_21 += 1)
            {
                {
                    var_57 = ((min((arr_5 [i_14 - 1]), (arr_5 [i_14 - 1]))));
                    var_58 = (max((min((((var_2 ? (arr_28 [i_14 - 1]) : 1))), (min(var_7, var_1)))), 28));
                    var_59 = (var_9 + var_2);
                }
            }
        }
    }
    var_60 = 28;
    #pragma endscop
}

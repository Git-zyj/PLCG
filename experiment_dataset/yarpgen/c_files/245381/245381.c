/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            var_10 = 1;
            arr_6 [i_1] = (arr_3 [i_1] [i_1] [i_1]);
            var_11 = (max(var_11, 4));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            arr_9 [i_2] [2] [i_0] &= (!1);
            arr_10 [i_2] [i_2] [i_2] = -127;

            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                var_12 = (((arr_1 [i_0]) ^ 8));
                arr_13 [i_0] [i_2] [i_2] [i_2] = 15;
                arr_14 [i_2] [i_2] = (((1 / 248) ? (var_4 / var_9) : (var_9 / 72)));
            }
            arr_15 [i_2] = ((-((1 ? 247 : var_5))));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {
            arr_18 [i_0] [i_4] = (arr_17 [i_4]);
            var_13 = 255;
        }
        arr_19 [i_0] = ((232 ? 1 : 1));
        var_14 = (max(var_14, (arr_12 [i_0])));
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        arr_22 [i_5] = 1;

        for (int i_6 = 2; i_6 < 18;i_6 += 1) /* same iter space */
        {
            var_15 = (var_8 - -601572762);
            arr_25 [i_6] &= 18051806693823709188;
        }
        for (int i_7 = 2; i_7 < 18;i_7 += 1) /* same iter space */
        {
            arr_28 [i_5] = ((min(var_4, -601572770)));

            /* vectorizable */
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                var_16 ^= -1309804527;
                var_17 = (min(var_17, 7884789224992177540));
            }
            /* vectorizable */
            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {

                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    var_18 = (244 - 1);
                    var_19 = (-15804 % 5608);
                }
                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    var_20 = (~1);
                    arr_38 [i_5] [i_7] = 225;
                }
                for (int i_12 = 0; i_12 < 20;i_12 += 1) /* same iter space */
                {
                    var_21 = (-853013645 - 1);
                    var_22 = (((arr_8 [3] [i_9] [i_12]) - 1));
                }
                for (int i_13 = 0; i_13 < 20;i_13 += 1) /* same iter space */
                {
                    arr_43 [7] [i_7] [i_5] [i_13] [i_5] = -1;
                    var_23 = 22818;
                    var_24 ^= 1563927638;
                    arr_44 [i_7] [i_7] &= 7213662122588387252;

                    for (int i_14 = 0; i_14 < 20;i_14 += 1)
                    {
                        var_25 += (arr_35 [i_5] [i_7 - 2] [i_9] [i_14]);
                        arr_49 [i_5] [i_13] [10] [i_7] [1] [i_5] = 1;
                    }
                    for (int i_15 = 3; i_15 < 17;i_15 += 1) /* same iter space */
                    {
                        var_26 |= 2147483647;
                        var_27 = (min(var_27, ((((((arr_4 [i_15]) - 22818)) ^ (584331728 == 17115496877323157627))))));
                        var_28 = 2985162798;
                    }
                    for (int i_16 = 3; i_16 < 17;i_16 += 1) /* same iter space */
                    {
                        var_29 = (min(var_29, (arr_41 [i_5] [i_5] [i_16 + 3] [i_13] [i_5])));
                        arr_55 [6] [i_7 - 1] [i_7 - 2] [i_7] [i_5] [i_7] [i_7] = 22823;
                    }
                }
                var_30 = (!1);
                var_31 = (min(var_31, ((((1 ? 1 : 28)) / var_8))));
            }
            for (int i_17 = 1; i_17 < 19;i_17 += 1)
            {
                var_32 = (-(arr_11 [i_17] [i_7] [i_17] [i_17]));
                arr_58 [i_17] [i_5] [i_5] [i_5] = 26;
            }
            /* vectorizable */
            for (int i_18 = 2; i_18 < 18;i_18 += 1)
            {
                var_33 = (-6013630894015454963 - 114);
                var_34 = -1;
            }

            /* vectorizable */
            for (int i_19 = 0; i_19 < 20;i_19 += 1)
            {

                for (int i_20 = 0; i_20 < 20;i_20 += 1) /* same iter space */
                {
                    arr_68 [i_5] [i_5] [i_5] [i_5] [i_5] = 14;
                    var_35 = (arr_3 [i_5] [i_7 + 2] [i_7 - 1]);
                    var_36 = -4350785258240852836;
                }
                for (int i_21 = 0; i_21 < 20;i_21 += 1) /* same iter space */
                {
                    var_37 = (1 | ((15422942733961855238 ? var_5 : var_4)));
                    var_38 = (44 >= 1);
                    arr_72 [i_21] [i_5] [i_5] [i_5] = ((((161 ? 6013630894015454962 : 6)) / 24));
                }
                var_39 = (217 / var_1);
                var_40 = (~var_4);
                var_41 = -9223372036854775794;
            }
            /* vectorizable */
            for (int i_22 = 0; i_22 < 20;i_22 += 1)
            {

                for (int i_23 = 0; i_23 < 20;i_23 += 1)
                {
                    var_42 = 17382775911418240829;
                    var_43 = (((((-6013630894015454963 ? 146 : 1))) ^ 6013630894015454965));
                }
                for (int i_24 = 0; i_24 < 20;i_24 += 1)
                {
                    var_44 = (max(var_44, ((((-42 * var_0) > 13)))));
                    var_45 = (min(var_45, 3116022339519627768));
                    var_46 = (((1 / -18) * (1 * 1568425165)));
                }
                var_47 = (0 | (((arr_79 [i_5]) ? 1 : var_4)));
            }
        }
        var_48 = (((((max(24, var_3)))) ? (((max(var_1, 15330721734189923848)) * -6013630894015454962)) : var_9));
        arr_81 [i_5] = var_6;
        var_49 = (max(var_49, (~217)));
    }
    var_50 = 0;
    var_51 = ((!((((-2147483647 - 1) ? var_9 : -2733906987487023931)))));
    var_52 -= -15330721734189923848;
    #pragma endscop
}

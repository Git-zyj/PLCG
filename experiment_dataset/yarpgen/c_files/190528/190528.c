/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;
    var_13 = (min(431760598, (((-72 != (var_0 - var_0))))));
    var_14 = (((var_11 <= var_4) ? 72 : var_5));

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_15 = var_3;
        var_16 = ((95 ^ (arr_2 [i_0])));
        var_17 &= (72 ? -54780 : 43396);
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_18 = ((418857801 ? ((max((arr_6 [i_3] [i_0]), (arr_6 [i_2] [i_1 - 2])))) : (arr_10 [i_0] [i_1 + 2] [i_1 + 2] [19])));
                        var_19 = (max(var_19, (!var_0)));
                        var_20 = (((arr_13 [i_0] [1] [17] [i_0] [i_2] [i_2]) <= 14813349807650629101));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
    {
        var_21 = (max(var_1, (min(-892981638, (arr_15 [i_4])))));
        var_22 = ((((var_5 != (arr_9 [i_4])))) * (((!(arr_9 [i_4])))));

        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            arr_21 [i_4] = var_6;
            var_23 = (min((((var_0 + 2147483647) << (var_3 - 5820))), var_3));
        }
        var_24 = var_0;
    }
    for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
    {

        for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
        {
            var_25 = (((((((arr_6 [i_6] [i_6]) ? 3460480861 : var_2)) + (((43396 ? (arr_26 [i_6] [i_7]) : (arr_24 [i_7])))))) + (arr_28 [i_7] [i_7] [i_7])));

            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                var_26 = var_0;
                var_27 = (max((arr_18 [i_6] [i_7] [i_8]), (((((var_1 ? 9115 : var_6))) ? (~var_10) : ((41384 ? var_9 : 167))))));
            }
            for (int i_9 = 1; i_9 < 20;i_9 += 1)
            {
                var_28 -= var_2;
                var_29 = (min((892981637 <= var_8), (((-2086422590 + 2147483647) >> (arr_33 [i_6] [i_7] [i_6])))));
                arr_35 [i_7] [i_6] [i_6] = 91;
            }
        }
        for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
        {
            arr_39 [0] [i_6] [i_6] = (((((-(min(var_0, 1))))) ? (min(((33244 ? var_5 : -1244046205)), ((min(-3, (arr_22 [i_6])))))) : var_8));

            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {
                var_30 = -892981638;

                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {
                    var_31 = (max(((min(var_3, -var_6))), ((-(max(12227132191336862759, -14))))));
                    var_32 = (arr_34 [i_10] [i_10]);
                }

                /* vectorizable */
                for (int i_13 = 1; i_13 < 19;i_13 += 1)
                {
                    var_33 = ((-892981646 > (arr_20 [i_13 + 1] [i_13 + 1])));
                    arr_47 [i_6] [i_6] [7] [i_11] [i_6] = (arr_1 [i_6]);
                    var_34 -= ((2016488917 ? (arr_46 [i_13 + 2] [i_10] [i_10] [i_13 + 2]) : 1410904782));
                    arr_48 [i_10] [i_6] = (1 ? var_10 : 511411007);
                }
                for (int i_14 = 0; i_14 < 21;i_14 += 1)
                {
                    var_35 *= min(95, (arr_11 [i_6] [i_10] [i_11] [i_14]));
                    var_36 = (var_11 - var_10);
                    var_37 = 3778782697;
                }
                for (int i_15 = 2; i_15 < 20;i_15 += 1)
                {

                    for (int i_16 = 3; i_16 < 18;i_16 += 1)
                    {
                        var_38 = 2601849663;
                        arr_57 [i_6] [i_10] [i_11] = (-(max(2054728406, (~2656847414))));
                    }
                    for (int i_17 = 2; i_17 < 18;i_17 += 1)
                    {
                        arr_62 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((((arr_8 [i_6]) * 88)));
                        arr_63 [i_6] [i_11] [i_11] [i_10] [i_6] [i_6] = (~-2054728407);
                        var_39 = (((1900188571 >= ((1177107619 ? (arr_54 [i_6]) : var_9)))));
                    }

                    for (int i_18 = 2; i_18 < 19;i_18 += 1)
                    {
                        arr_68 [i_6] [i_6] [i_10] [i_11] [i_15] [18] = ((26122 << (((((-1987000388 ? var_10 : (arr_2 [i_6]))) <= 4137036035)))));
                        arr_69 [i_6] [i_10] [i_11] [i_6] [i_11] = ((((arr_1 [i_15 + 1]) ^ ((var_5 ? var_4 : 742387776)))) <= (((((arr_46 [i_6] [i_6] [i_15 - 1] [i_18 + 2]) > (arr_46 [i_6] [i_6] [i_15 - 2] [i_18 - 2]))))));
                    }
                    for (int i_19 = 0; i_19 < 21;i_19 += 1)
                    {
                        arr_72 [i_6] [i_6] = ((-(arr_25 [i_6])));
                        var_40 = (max(var_40, ((min((arr_36 [i_10] [i_10]), (((1177107620 != (arr_2 [i_15 - 1])))))))));
                        arr_73 [i_6] [i_6] [i_6] [i_11] [i_6] [i_6] [i_19] = (((34 ? var_0 : 2054728406)));
                    }
                }
                /* vectorizable */
                for (int i_20 = 4; i_20 < 19;i_20 += 1)
                {
                    var_41 = (min(var_41, ((((var_2 ? 3117859676 : var_6))))));
                    var_42 = (max(var_42, 10710688173859256161));
                }
            }
            for (int i_21 = 0; i_21 < 21;i_21 += 1)
            {
                var_43 &= max(388205643, (var_4 <= var_5));
                var_44 = (arr_77 [i_21] [i_10] [i_6]);
                arr_79 [i_6] = -92;
            }
            /* vectorizable */
            for (int i_22 = 0; i_22 < 21;i_22 += 1)
            {
                var_45 = -246651329;
                var_46 = (((arr_12 [i_6] [i_6] [i_10] [i_22]) ? (arr_12 [i_6] [i_10] [i_22] [i_22]) : 2719119850));
            }
        }
        for (int i_23 = 0; i_23 < 21;i_23 += 1)
        {
            var_47 = 89;
            arr_86 [i_6] [i_6] [i_23] = (arr_0 [i_6]);
        }
        arr_87 [14] [i_6] &= ((-1770120521 != (arr_27 [i_6] [i_6] [8])));
    }
    var_48 -= ((var_3 ? var_8 : var_7));
    #pragma endscop
}

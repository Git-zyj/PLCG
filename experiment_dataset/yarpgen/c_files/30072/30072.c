/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = ((!(((-5288886595137065976 ? (9223372036854775807 & var_5) : -var_6)))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_12 = (var_9 >= var_9);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_13 [i_0] [4] [i_2] [i_3] = var_7;
                        var_13 = -63;
                        var_14 = (max(var_14, (((1337568935 ? 100 : (min(9223372036854775801, var_11)))))));
                        arr_14 [i_0] [i_0] = ((-8277 ? 2305843009205305344 : -1));
                        var_15 = var_9;
                    }
                }
            }
            arr_15 [i_0] = (((170 / var_0) ? ((-(min(var_5, 18446744073709551570)))) : (max(((var_4 ? var_9 : (arr_3 [9]))), (~-1)))));
        }
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {

            /* vectorizable */
            for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
            {
                arr_22 [i_0] [i_0] [i_5] = var_10;
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 0;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        {
                            var_16 -= -1726619222960262841;
                            var_17 = (((arr_19 [0] [i_7] [i_7] [i_7]) != var_7));
                            var_18 = (~var_4);
                        }
                    }
                }
                arr_30 [i_0] [i_4] [i_0] = -51;
                var_19 = 107;
                var_20 = (max(var_20, (((18446744073709551615 ? (!var_0) : (arr_7 [i_4]))))));
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
            {
                var_21 = ((16383 ? var_7 : var_10));
                var_22 = var_4;

                for (int i_9 = 2; i_9 < 14;i_9 += 1)
                {
                    arr_38 [i_9] [i_9] [i_0] [7] = (((arr_27 [i_0] [i_9 + 4] [i_4] [i_9 - 1] [i_9] [i_9 - 1]) ? (arr_27 [i_8] [i_9 + 2] [i_8] [i_9 + 4] [0] [i_4]) : var_11));
                    var_23 = (var_3 ? var_1 : (((-(arr_18 [i_0])))));
                    arr_39 [i_0] = (((var_3 + 9223372036854775807) >> (var_10 + 6731)));
                }
            }
            for (int i_10 = 0; i_10 < 18;i_10 += 1)
            {
                var_24 = -2147483641;
                var_25 = -1863056182174428797;
                arr_42 [i_0] [i_0] [5] [i_4] = (arr_1 [i_0]);
                arr_43 [i_0] [i_0] [i_0] = (((min(var_8, (max(var_4, var_6)))) >= (((((!-1) <= (max((arr_6 [i_0] [i_0]), -4280736342430087950))))))));
            }
            arr_44 [i_0] = min((max(6040557237498923214, (arr_37 [16]))), ((-(arr_27 [i_0] [i_0] [i_0] [i_0] [9] [i_0]))));
            var_26 = (max(var_26, (((((arr_20 [i_0] [i_4]) | var_2))))));
            var_27 = (((((((~5992462530940366361) + 9223372036854775807)) >> (var_10 + 6743))) >= (((((arr_10 [i_0] [i_4] [i_0]) < 12))))));
        }
        for (int i_11 = 0; i_11 < 18;i_11 += 1)
        {
            arr_49 [i_0] = (min(2402152178835186598, 100));
            arr_50 [i_0] [i_0] = var_1;
            arr_51 [i_0] [10] &= (min((~var_6), -var_5));

            /* vectorizable */
            for (int i_12 = 0; i_12 < 18;i_12 += 1)
            {
                var_28 = (((8716464805899089299 != 155) >> (var_3 + 7830477764967293714)));
                var_29 = var_10;
            }
            for (int i_13 = 2; i_13 < 15;i_13 += 1) /* same iter space */
            {
                var_30 = ((var_10 < (min(var_7, var_8))));
                /* LoopNest 2 */
                for (int i_14 = 4; i_14 < 17;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 18;i_15 += 1)
                    {
                        {
                            var_31 = (min(var_31, (((1 < (var_6 <= 2305843009205305344))))));
                            var_32 = 155;
                            var_33 = var_0;
                            var_34 = var_3;
                            arr_63 [8] [i_0] [8] = var_7;
                        }
                    }
                }
            }
            for (int i_16 = 2; i_16 < 15;i_16 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 1;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 18;i_18 += 1)
                    {
                        {
                            var_35 = 1;
                            arr_72 [i_18] [i_0] [i_0] [i_0] = -2305843009205305353;
                            arr_73 [i_0] [14] [i_16 + 3] [i_17] [i_18] = var_2;
                            var_36 = var_0;
                            var_37 = (arr_37 [i_0]);
                        }
                    }
                }
                var_38 = (arr_41 [i_0] [i_11] [i_16 + 1]);
                var_39 -= var_2;
                arr_74 [i_0] [i_0] [i_0] [i_0] = var_3;
            }
            var_40 = ((var_10 / (min(var_2, (min(var_11, (arr_61 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
        }
        var_41 *= ((~(!1)));
    }
    for (int i_19 = 2; i_19 < 15;i_19 += 1) /* same iter space */
    {
        var_42 ^= var_6;
        arr_77 [i_19] = var_4;
        arr_78 [i_19] [7] = (var_4 / ((((~-8596798951159954515) ? var_9 : 193))));
    }
    for (int i_20 = 2; i_20 < 15;i_20 += 1) /* same iter space */
    {
        var_43 = var_4;

        /* vectorizable */
        for (int i_21 = 0; i_21 < 18;i_21 += 1)
        {
            arr_85 [i_21] = var_3;
            /* LoopNest 2 */
            for (int i_22 = 3; i_22 < 17;i_22 += 1)
            {
                for (int i_23 = 0; i_23 < 18;i_23 += 1)
                {
                    {
                        arr_91 [i_20 + 1] [1] [i_23] = (((((var_7 << (var_1 - 458289599)))) ? (arr_28 [i_20 - 1] [i_20 - 1]) : (var_9 != -1)));
                        var_44 = -var_7;
                    }
                }
            }
        }
        arr_92 [i_20 - 1] = 1328677991;
        arr_93 [i_20] = ((min(17, (arr_66 [i_20] [i_20 + 1] [i_20 + 1] [i_20]))));
    }
    var_45 = (~var_1);
    var_46 &= var_7;
    var_47 = ((~(min(-var_3, var_1))));
    #pragma endscop
}

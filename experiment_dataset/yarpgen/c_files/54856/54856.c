/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_0;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (((((((max(2580954622, 2605684073))) / (var_2 / 201326592)))) ? ((max(var_7, (arr_0 [i_0] [4])))) : var_3));

        /* vectorizable */
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            var_14 -= ((((var_11 ? var_3 : (arr_3 [i_0] [i_0] [i_0])))) ? 18689 : (var_12 | var_3));
            var_15 = (min(var_15, (((var_11 != (-8470 % 124))))));
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                arr_9 [15] [i_0] = -124;
                var_16 = (max(var_16, (((((var_5 ? var_10 : var_6)) / (arr_0 [i_0] [i_0]))))));
                var_17 &= ((((((var_1 ? (arr_3 [i_0] [i_0] [i_0]) : var_10)))) ? ((var_2 ? 124 : (var_8 - var_0))) : (((max((min((arr_4 [i_2] [i_2] [i_2]), (arr_5 [i_0] [i_0]))), var_12))))));
                var_18 = (min(var_18, ((((((((max(13181457758628431124, (-127 - 1)))) ? (min(13181457758628431124, 0)) : ((min(var_1, var_9)))))) ? var_10 : ((var_2 ? (min(118, 2580954622)) : (((var_7 ? var_7 : var_5))))))))));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        {
                            arr_14 [9] [i_4] [i_3] [i_0] = (min(9, -95));
                            arr_15 [i_0] [i_2] [i_3] [i_4] [i_5] [i_4 - 1] = (max(var_12, (min(var_0, var_6))));
                        }
                    }
                }
            }
            arr_16 [i_0] [3] = ((-(((((-(arr_12 [i_0] [i_0] [i_2] [i_2] [i_2])))) ? (((var_11 ? var_4 : var_4))) : (min(var_11, var_10))))));
            var_19 *= (((((var_11 ? ((((arr_4 [i_2] [i_0] [i_0]) ? (arr_12 [i_0] [i_2] [i_2] [i_0] [i_0]) : var_4))) : var_3))) ? ((((5265286315081120511 ? var_4 : var_7)) - -2827729708749468373)) : var_11));

            for (int i_6 = 3; i_6 < 20;i_6 += 1)
            {
                var_20 -= ((var_10 / (min(var_5, 2580954622))));
                var_21 = var_8;
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 21;i_8 += 1)
                    {
                        {
                            var_22 = (max(var_1, ((((-2827729708749468373 ? var_2 : var_5))))));
                            var_23 = (min(var_23, (((~((23000 ? (!var_2) : var_1)))))));
                            arr_25 [i_0] [i_6] [i_6] [i_7] [i_7] = (max(-15345, ((14 ? -17478 : 8459))));
                            var_24 = ((((-9269 ? 17913 : -3))) ? var_11 : 5265286315081120486);
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {

            for (int i_10 = 1; i_10 < 19;i_10 += 1)
            {
                var_25 *= var_1;
                arr_31 [i_10 + 3] [i_9] [i_0] = (arr_11 [i_10 + 1] [1] [i_10 + 1]);
                var_26 = (5265286315081120502 ? var_2 : (var_5 != var_4));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 20;i_12 += 1)
                    {
                        {
                            arr_37 [i_0] [i_9] [i_10] [12] [0] &= (var_6 < var_6);
                            var_27 = (((var_10 < 23026) ? var_3 : var_12));
                            var_28 -= (((((arr_4 [i_10] [i_11] [i_12 + 1]) < var_8)) ? -var_12 : ((var_6 ? var_4 : 23026))));
                            var_29 = (max(var_29, (arr_13 [i_10] [i_10] [i_10] [i_10] [i_12] [i_11])));
                            var_30 = var_7;
                        }
                    }
                }
                arr_38 [i_0] [i_9] [i_10] = var_7;
            }
            for (int i_13 = 1; i_13 < 19;i_13 += 1)
            {
                var_31 = (~var_3);

                for (int i_14 = 0; i_14 < 22;i_14 += 1)
                {
                    var_32 = (116 / var_6);
                    arr_44 [i_0] [i_0] [i_9] = (var_9 < var_7);

                    for (int i_15 = 0; i_15 < 22;i_15 += 1)
                    {
                        var_33 = ((((((((arr_20 [i_0] [i_9] [i_13] [i_14] [i_15]) + 2147483647)) >> (var_8 - 7633370032159215050)))) ? (arr_13 [i_15] [i_15] [i_13] [i_15] [i_15] [i_14]) : (var_1 % var_0)));
                        var_34 -= ((var_5 ? var_4 : var_8));
                    }
                }
                for (int i_16 = 1; i_16 < 21;i_16 += 1)
                {
                    arr_50 [i_9] [i_0] [i_9] [i_9] = (((7350203861625704116 / 86) < -111));
                    arr_51 [i_9] [i_13] [6] [6] [i_0] [i_9] = (((~var_1) ? ((-41 ? var_0 : var_3)) : (~13332993134957748421)));
                }
                for (int i_17 = 0; i_17 < 22;i_17 += 1)
                {
                    arr_55 [i_13] [i_13 + 2] [i_13] [i_9] = ((var_9 ? -111 : (arr_34 [i_0] [i_17] [i_13 + 3] [i_9])));
                    var_35 = (min(var_35, (~-1)));
                }
                var_36 = ((var_10 ? (arr_18 [i_0] [i_13 + 2] [i_13 + 1] [i_13 + 1]) : ((111 ? var_0 : var_0))));
                var_37 = ((~(arr_7 [21] [i_9] [i_9] [i_9])));
                arr_56 [i_9] = var_3;
            }
            /* LoopNest 2 */
            for (int i_18 = 0; i_18 < 22;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 22;i_19 += 1)
                {
                    {
                        var_38 *= (-1 < var_10);
                        var_39 = (((((53 ? -107 : 2089028649))) ? var_10 : 0));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_20 = 1; i_20 < 21;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 0;i_21 += 1)
                {
                    {
                        arr_68 [i_9] = ((((arr_7 [i_0] [i_9] [7] [1]) ? var_11 : var_2)));

                        for (int i_22 = 0; i_22 < 22;i_22 += 1)
                        {
                            var_40 = (var_1 * var_7);
                            var_41 = var_12;
                        }
                    }
                }
            }
        }
        var_42 = (arr_1 [i_0]);
        arr_73 [i_0] [i_0] = var_8;
    }
    #pragma endscop
}

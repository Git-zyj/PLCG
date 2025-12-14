/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = 11;
                var_11 = (min((84384307 / 10), -1));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {
                arr_14 [i_2] [i_2 + 1] [i_2] = ((-(min((max((arr_3 [i_2]), (arr_4 [i_2] [i_2] [i_2]))), var_3))));
                arr_15 [i_2] = 18446744073709551611;
                var_12 = (((((arr_5 [i_2 + 1] [i_2 - 1]) * (arr_5 [i_2 + 1] [i_2 + 1]))) | 238));
                var_13 = ((-(((1847502927877294187 ? var_1 : (arr_13 [i_2] [i_2] [i_2]))))));

                /* vectorizable */
                for (int i_4 = 2; i_4 < 15;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {

                        for (int i_6 = 1; i_6 < 17;i_6 += 1)
                        {
                            var_14 = (arr_10 [i_2] [i_2]);
                            arr_24 [i_2] [i_5] [i_5] [13] [i_6] = ((-11 & (arr_13 [i_2] [i_3] [i_2])));
                            var_15 = var_10;
                            arr_25 [i_2] [i_3] [i_2] [i_5] [i_5] = (arr_16 [11] [11] [11]);
                        }
                        arr_26 [i_2] [i_2] [i_2] [i_5] [i_2] = (((arr_12 [i_5]) || ((((arr_4 [i_3] [i_4] [i_3]) | (arr_19 [i_2] [i_3]))))));
                        arr_27 [i_2] [i_2] [i_2] [i_5] [i_2] = (((1 != (arr_3 [i_3]))));
                        var_16 = -32;

                        for (int i_7 = 1; i_7 < 17;i_7 += 1)
                        {
                            var_17 = var_2;
                            var_18 = (((arr_13 [i_2 + 1] [i_2 - 1] [5]) ? (arr_18 [i_5]) : ((var_6 ? var_3 : var_5))));
                        }
                        for (int i_8 = 3; i_8 < 16;i_8 += 1)
                        {
                            arr_33 [i_2] [10] [i_2] [6] [10] [6] [i_3] &= ((10 / (arr_28 [i_2] [i_3] [i_3] [i_5] [i_8])));
                            var_19 = (arr_11 [i_5] [i_4] [i_3]);
                            var_20 = 10;
                        }
                    }
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        arr_37 [i_3] = var_0;
                        var_21 = (11 ? (arr_16 [i_2] [i_2] [i_2 - 1]) : var_6);
                        arr_38 [i_4] [i_3] = ((22 < (271246318 * 2)));
                    }
                    var_22 = (arr_7 [i_2 + 1] [i_3]);
                    var_23 = (arr_23 [i_2] [i_2 - 1] [i_2] [i_4 + 3] [i_2] [i_3]);
                    arr_39 [i_4] [i_3] [i_2] = (arr_17 [i_2] [i_2] [i_2]);

                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        var_24 *= (((arr_23 [i_2] [i_3] [i_3] [i_2 - 1] [i_2] [i_10]) ? 5274927411186311078 : (arr_23 [i_2] [i_3] [i_3] [i_2 + 1] [i_2] [i_3])));
                        var_25 = (-4 ? ((var_0 ? 1 : -11)) : 1);

                        for (int i_11 = 3; i_11 < 16;i_11 += 1)
                        {
                            var_26 = (max(var_26, var_0));
                            arr_46 [i_2] [i_3] [i_4] [i_10] [i_11] = (-1 > 2670259621624453705);
                            arr_47 [i_2] [i_2] [i_4] [i_2] [i_11] [i_11] [i_2] = (arr_7 [5] [i_3]);
                        }
                        for (int i_12 = 1; i_12 < 1;i_12 += 1)
                        {
                            var_27 = (arr_4 [i_4] [i_4] [i_4]);
                            arr_51 [i_2] [i_2] [i_2] [i_2 - 1] [i_2] = (arr_28 [i_3] [i_3] [i_3] [i_3] [i_3]);
                        }
                        for (int i_13 = 0; i_13 < 18;i_13 += 1)
                        {
                            arr_55 [i_2] [i_3] [i_3] [i_3] [i_2] [i_3] [i_3] = (!(var_5 | var_10));
                            arr_56 [i_2] [15] [i_2] [i_13] = var_5;
                        }
                    }
                }
                /* vectorizable */
                for (int i_14 = 3; i_14 < 16;i_14 += 1)
                {
                    arr_59 [i_3] [i_3] [i_3] [i_2] = ((-(((1 != (arr_21 [i_2] [i_2] [i_2] [i_14]))))));
                    arr_60 [i_2] [i_2] [i_14] = -589892012;

                    for (int i_15 = 0; i_15 < 18;i_15 += 1)
                    {
                        arr_63 [i_2] [i_15] [i_15] [i_15] [i_3] [i_2] = (((arr_42 [i_15] [i_14 - 2] [i_3] [i_2 + 1] [i_2]) ^ (arr_44 [i_2 + 1] [i_3] [i_14] [i_15] [i_14] [i_14])));
                        var_28 = var_7;
                    }
                }
                /* vectorizable */
                for (int i_16 = 0; i_16 < 18;i_16 += 1)
                {
                    arr_66 [i_2] [i_2] [i_16] = (8 ^ -5274927411186311097);
                    arr_67 [i_2 + 1] [i_3] [i_3] [i_2 + 1] |= ((-5274927411186311079 ? (((arr_16 [i_2] [i_3] [i_16]) | var_9)) : 2013265920));
                    arr_68 [i_2] [i_3] [i_16] [i_3] = var_6;
                    arr_69 [i_16] = (((arr_10 [i_2] [i_3]) ? var_0 : (arr_10 [i_3] [i_3])));
                    var_29 = ((114 ? (arr_28 [i_2 - 1] [i_16] [i_2 + 1] [i_2] [i_2 - 1]) : (arr_61 [i_16] [i_16] [i_2] [i_2])));
                }
            }
        }
    }
    var_30 &= ((-var_3 ? (((max(var_8, var_3)))) : (min(((max(var_5, var_5))), ((var_3 ? var_7 : 14039989379711822317))))));
    var_31 = 223;
    #pragma endscop
}

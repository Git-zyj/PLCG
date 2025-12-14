/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 4248697889;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_17 = (((!108) ^ (((!(((var_8 ? -1564869269 : var_7))))))));
        var_18 = ((((min((((arr_1 [i_0] [i_0]) ? var_11 : var_15)), (arr_2 [i_0])))) ? ((max((var_9 <= var_2), var_15))) : ((((1319060847 ^ 2) <= (arr_2 [i_0]))))));
        var_19 = (((((var_0 ? (~var_2) : (!var_11)))) && ((min(var_7, var_10)))));
        var_20 = (max(var_20, (((((min(var_9, (arr_2 [i_0])))) ^ (((!(arr_1 [11] [i_0])))))))));
        arr_3 [6] [i_0] = ((var_14 ? ((((arr_0 [i_0] [i_0]) || var_3))) : ((5605188067307105029 ? 26232 : -3814))));
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 9;i_3 += 1)
            {
                {
                    arr_12 [i_1] [i_3] [i_1] = ((!(((-var_1 - (1 / var_1))))));
                    var_21 = ((~((var_3 << (var_12 - 304242070)))));
                    var_22 = ((((!(~var_14)))));
                }
            }
        }
        arr_13 [i_1] [i_1] = (max(((((arr_2 [i_1 + 2]) || 115))), (976031319 ^ var_2)));
    }
    for (int i_4 = 2; i_4 < 10;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                {
                    var_23 = var_8;
                    var_24 = (((arr_5 [i_6] [i_4]) / ((-((var_3 + (arr_6 [i_4])))))));
                    var_25 = (max(var_25, 1));
                    var_26 = ((((var_9 / ((min(-1, 228))))) > ((-(arr_17 [i_4 - 2] [10] [1])))));
                }
            }
        }
        var_27 &= 10749458356369805545;

        /* vectorizable */
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            var_28 = (max(var_28, var_1));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 11;i_9 += 1)
                {
                    {

                        for (int i_10 = 1; i_10 < 10;i_10 += 1) /* same iter space */
                        {
                            arr_29 [i_7] [i_10] [i_7] = (((var_3 ? var_9 : var_11)));
                            var_29 += (((((var_4 / (arr_9 [i_4 - 2] [i_4 - 2] [i_4 - 2] [i_4])))) && var_8));
                            var_30 = (((18857 && var_6) < -12684));
                        }
                        for (int i_11 = 1; i_11 < 10;i_11 += 1) /* same iter space */
                        {
                            arr_34 [i_9] [i_9] [i_4] [i_4] [i_7] [i_4] = (((((-(arr_16 [i_9] [4] [i_4])))) ? (1 | -3) : (2021503494 / var_15)));
                            arr_35 [i_4] [i_4] [1] = (var_7 ^ 10048210823173265815);
                            arr_36 [i_11] [i_4] [i_4] [i_7] [i_4] = 24253;
                        }
                        for (int i_12 = 0; i_12 < 12;i_12 += 1)
                        {
                            var_31 = (~203546056);
                            var_32 = (arr_1 [i_9 - 1] [i_4 + 2]);
                            arr_39 [i_4] [i_4] [i_4] [i_9] [i_4] [i_4] = var_4;
                            var_33 = (min(var_33, (((0 ? -217194336 : var_0)))));
                        }
                        arr_40 [i_4] [i_4] [i_4] [i_9] [i_7] [i_4] = (-57 ? var_0 : 16383);
                        var_34 = (max(var_34, ((((var_3 + var_15) % var_15)))));
                        var_35 = (var_5 > var_8);
                    }
                }
            }
            var_36 = (var_15 * var_1);
            var_37 = (max(var_37, 220));
        }
        for (int i_13 = 0; i_13 < 12;i_13 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_14 = 0; i_14 < 12;i_14 += 1)
            {
                for (int i_15 = 1; i_15 < 9;i_15 += 1)
                {
                    for (int i_16 = 3; i_16 < 10;i_16 += 1)
                    {
                        {
                            var_38 += var_1;
                            var_39 = ((~((((max(var_5, 25266))) ? (max(var_12, var_14)) : var_13))));
                        }
                    }
                }
            }

            for (int i_17 = 2; i_17 < 11;i_17 += 1)
            {
                arr_56 [i_4 + 1] [i_17] [i_4 + 1] [i_17] = var_15;
                var_40 = ((!((((var_13 + 2147483647) << (((-1 + 6) - 5)))))));
            }
            /* LoopNest 2 */
            for (int i_18 = 2; i_18 < 9;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 12;i_19 += 1)
                {
                    {
                        var_41 = (max(var_41, ((min((var_0 / var_2), (((arr_9 [i_4 - 2] [i_4 - 2] [i_4 - 2] [i_18 + 1]) - -722878062)))))));
                        arr_64 [1] [1] [1] [i_19] = (max((min(var_1, var_9)), (((!(arr_37 [i_13] [i_13] [i_18 + 1] [i_18] [i_19] [i_18]))))));
                        var_42 = (min(((!((max(-23059, (arr_23 [i_13] [i_18] [7])))))), ((var_4 <= (~var_6)))));
                    }
                }
            }
            var_43 = max((max(var_6, (var_1 && var_10))), (min((var_15 | var_5), 571803166)));
        }
        /* vectorizable */
        for (int i_20 = 0; i_20 < 12;i_20 += 1) /* same iter space */
        {

            for (int i_21 = 1; i_21 < 9;i_21 += 1) /* same iter space */
            {

                for (int i_22 = 1; i_22 < 9;i_22 += 1)
                {
                    arr_73 [i_20] [i_20] [i_22] [i_20] [i_20] = (((arr_23 [i_4 - 1] [i_4 - 1] [i_4 + 1]) ? (arr_24 [i_22] [i_21 - 1] [i_20]) : var_10));
                    arr_74 [i_4] [i_20] [i_22] [i_22] = (!var_2);
                }
                arr_75 [i_4] [i_20] [i_20] [i_21] &= (((arr_46 [i_4 - 1] [i_4 - 2] [i_4 - 1] [i_4]) ? (((-64 ? (arr_17 [i_21] [i_4] [i_4]) : var_5))) : 5904972620556963821));
            }
            for (int i_23 = 1; i_23 < 9;i_23 += 1) /* same iter space */
            {
                var_44 = (var_12 ^ -67);
                var_45 = var_8;

                for (int i_24 = 0; i_24 < 12;i_24 += 1)
                {
                    var_46 = (~1);
                    var_47 = ((~var_3) ? (~18446744073709551615) : (arr_42 [i_20] [i_23] [i_23 + 3]));

                    for (int i_25 = 3; i_25 < 9;i_25 += 1)
                    {
                        var_48 = (max(var_48, -8382));
                        var_49 = (min(var_49, (var_12 || var_11)));
                        arr_85 [i_25 - 3] [i_25 - 3] [i_25] [i_25 - 3] [1] = -var_14;
                        var_50 = (((((var_12 ? var_5 : var_14))) ? var_10 : (1 - 11162908333935137475)));
                        var_51 = (arr_27 [4] [i_23] [i_23 - 1] [4] [i_23]);
                    }
                }
                for (int i_26 = 0; i_26 < 1;i_26 += 1)
                {
                    var_52 = (min(var_52, var_7));
                    arr_90 [0] [i_20] [i_23] [i_20] [i_20] [i_20] = (!134217727);

                    for (int i_27 = 0; i_27 < 12;i_27 += 1) /* same iter space */
                    {
                        arr_95 [1] [i_26] [i_20] = ((-(arr_70 [i_4 + 1] [i_20])));
                        arr_96 [i_4] [i_20] [i_23 - 1] [i_4] [i_27] = (arr_30 [i_4] [i_4 - 2] [i_4 - 2] [i_4] [i_4 + 1] [i_23 + 3] [i_23 + 3]);
                    }
                    for (int i_28 = 0; i_28 < 12;i_28 += 1) /* same iter space */
                    {
                        arr_99 [i_4 - 2] = var_15;
                        var_53 = (((arr_92 [i_4] [i_4] [i_4 + 1] [i_4 + 2] [i_23 - 1] [i_23 + 1]) << 15));
                        arr_100 [i_4 - 1] [i_20] [i_23 + 3] [i_26] [i_28] [i_20] = 55;
                        arr_101 [i_28] [i_26] [i_23] [2] [2] = (!var_4);
                        arr_102 [i_4] [i_26] [7] [i_4] [i_20] [i_20] [i_4] = 4554480306615874145;
                    }
                }
                for (int i_29 = 1; i_29 < 8;i_29 += 1)
                {
                    var_54 = 10692853029807937983;
                    arr_105 [i_4] [3] [i_4 + 1] [i_4 + 1] = ((-(arr_6 [3])));
                }
                /* LoopNest 2 */
                for (int i_30 = 4; i_30 < 11;i_30 += 1)
                {
                    for (int i_31 = 2; i_31 < 10;i_31 += 1)
                    {
                        {
                            var_55 = ((1 ? (arr_92 [i_31 + 1] [i_31 + 1] [i_31 - 2] [i_31 + 2] [i_31 + 2] [i_31 - 2]) : var_0));
                            var_56 = ((32767 * (arr_62 [i_4 + 1] [i_23 + 3] [i_31 + 1] [i_31 + 1])));
                            var_57 = var_6;
                            arr_110 [i_31] [i_4] [i_4] = 171;
                            arr_111 [i_31 - 2] [i_4] [1] [i_4] [i_4] = var_9;
                        }
                    }
                }
            }
            var_58 = (((arr_97 [i_4] [i_4] [i_4 - 1] [i_4 - 2] [i_4 - 1] [i_20] [i_4]) && (arr_60 [i_4] [i_4 + 2] [i_4 + 2])));
        }
    }
    for (int i_32 = 0; i_32 < 23;i_32 += 1)
    {
        var_59 += (min((!var_8), (((((-2147483647 - 1) != var_13)) ? ((var_8 ? var_1 : (arr_113 [i_32] [6]))) : ((((arr_113 [i_32] [i_32]) * (arr_112 [i_32]))))))));
        arr_114 [i_32] = min(1023, -27905);
        var_60 = ((((max(var_11, var_0))) & ((max(var_5, (arr_112 [i_32]))))));
    }
    var_61 = (min(var_61, var_8));
    #pragma endscop
}

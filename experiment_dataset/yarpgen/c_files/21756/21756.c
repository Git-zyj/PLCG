/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 20;i_1 += 1) /* same iter space */
        {
            arr_5 [i_1] [i_0] [i_0] |= (14234 == var_4);
            var_12 = ((39770 ? 992 : 0));
            var_13 = (max(var_13, (var_4 >> 4)));
            var_14 &= ((-2106621757 ? var_10 : var_1));
        }
        for (int i_2 = 2; i_2 < 20;i_2 += 1) /* same iter space */
        {
            arr_8 [i_2] = (216 >= 52187);
            var_15 += ((var_6 ? -16 : 0));
            var_16 = (max(var_16, 251));
        }
        arr_9 [i_0] = (14234 >= 0);
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] [i_3] = ((((((37042 || 14253) ? 0 : 14236))) > ((252 ? 33776997205278720 : var_3))));
        var_17 = (((((var_6 + (var_8 + var_9)))) ? (((max(5, 252)))) : var_2));
        var_18 = (((14234 || 224) ? (((2097120 ? 20823 : 28494))) : (((var_4 || 234881024) ? var_0 : var_3))));
        var_19 = (max(var_19, -586132062134872022));
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
        {
            var_20 = 52187;
            var_21 = (min(var_21, (((((51319 ? ((var_2 ? var_3 : var_2)) : (var_4 < var_7))) | ((((((9 ? 4 : 252)) == 16346)))))))));
        }
        for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
        {
            arr_21 [i_4] [8] [i_4] |= (9 != var_0);

            /* vectorizable */
            for (int i_7 = 3; i_7 < 9;i_7 += 1)
            {
                arr_24 [i_7] [i_6] [i_4] [i_4] = (((1 / var_5) / var_0));
                arr_25 [i_4] = (var_1 <= 157);
                var_22 = var_4;
                arr_26 [i_4] [1] = 14234;
            }
            var_23 = var_7;
        }

        /* vectorizable */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    {

                        for (int i_11 = 0; i_11 < 11;i_11 += 1)
                        {
                            var_24 += var_11;
                            arr_37 [i_4] [i_10] [i_9] [i_10] [i_10] [i_4] = 24224;
                            var_25 = (min(var_25, var_8));
                            arr_38 [i_10] [i_10] [i_9] [i_8] [i_10] = 251;
                        }
                        for (int i_12 = 0; i_12 < 11;i_12 += 1)
                        {
                            var_26 = 26038;
                            var_27 *= (12 & var_7);
                        }
                        for (int i_13 = 2; i_13 < 10;i_13 += 1)
                        {
                            arr_44 [i_10] = ((var_9 > (((19345 ? var_8 : var_10)))));
                            var_28 = ((((var_11 ? var_9 : 135)) / 576010383));
                        }
                        for (int i_14 = 0; i_14 < 11;i_14 += 1)
                        {
                            arr_48 [0] [i_10] [i_10] [i_10] [i_4] [i_4] = ((var_4 ? 358574480 : -73));
                            var_29 = var_9;
                        }
                        var_30 *= ((((-37 ? 64262 : var_11)) ^ var_10));
                        var_31 -= ((18446744073709551615 + ((9006099743113216 ? 18446744073709551613 : 51604))));
                        var_32 = 9;
                    }
                }
            }
            var_33 &= ((4 & ((90 ? 4576054520013597255 : 13947))));
            arr_49 [i_4] [i_8] [i_4] = 251;
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 11;i_15 += 1)
        {
            var_34 &= 59162;
            arr_53 [i_4] [i_15] = var_0;
        }
        for (int i_16 = 1; i_16 < 10;i_16 += 1)
        {
            arr_56 [i_4] [i_4] = 252;
            arr_57 [8] [i_16 + 1] [i_16 - 1] &= (min(2998447990909650806, (var_7 || var_6)));
        }
        for (int i_17 = 0; i_17 < 11;i_17 += 1)
        {
            arr_60 [i_4] = 19;
            arr_61 [i_4] [i_17] = var_5;

            for (int i_18 = 0; i_18 < 11;i_18 += 1)
            {
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 11;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 11;i_20 += 1)
                    {
                        {
                            arr_70 [i_4] [i_4] [i_20] [i_4] [i_4] [i_4] [i_4] = 8957786212809946772;
                            var_35 *= ((var_10 >> (var_2 || var_3)));
                            arr_71 [i_4] [i_20] [i_18] [2] [1] = ((((var_1 ? var_7 : var_4))) | (264786233671330238 & -1640153799815821676));
                        }
                    }
                }
                var_36 = (min(var_3, ((((var_11 & var_10) == 0)))));
            }
            for (int i_21 = 0; i_21 < 11;i_21 += 1) /* same iter space */
            {
                arr_75 [i_17] = ((var_5 ? (max(0, var_11)) : (((var_11 ? var_2 : var_2)))));

                /* vectorizable */
                for (int i_22 = 0; i_22 < 11;i_22 += 1)
                {
                    arr_79 [8] [i_22] [0] = 9488957860899604848;
                    arr_80 [i_22] [i_22] [i_4] = (var_3 & 13870689553695954360);

                    for (int i_23 = 0; i_23 < 11;i_23 += 1)
                    {
                        var_37 += 64;
                        arr_83 [i_22] [i_17] [i_22] [i_17] [i_22] = (((var_7 > 1231) ? (((var_0 ? var_10 : var_2))) : ((var_10 ? 18181957840038221377 : 1196))));
                    }
                }
                for (int i_24 = 0; i_24 < 11;i_24 += 1)
                {
                    var_38 = var_11;

                    for (int i_25 = 0; i_25 < 11;i_25 += 1)
                    {
                        arr_88 [1] [i_24] [i_25] [i_17] [i_4] = (((((17 ? ((var_3 ? 73 : var_8)) : 13))) ? ((((((max(9223372036854775807, var_2))) > ((var_9 ? var_7 : 18446744073709551615)))))) : (((var_9 & -1676057199) + (((31029 ? 21 : var_4)))))));
                        var_39 = (1536 && 2);
                    }
                }
            }
            for (int i_26 = 0; i_26 < 11;i_26 += 1) /* same iter space */
            {
                var_40 = (max(var_40, 20407));
                var_41 -= (((14 - -25115) ? var_2 : 9342));
                var_42 = (max(var_42, 18446744073709551611));
                arr_93 [i_4] [i_4] [i_17] [i_26] = (max(((var_6 / ((var_10 ? var_8 : var_1)))), (((((min(var_7, var_4))) ? var_9 : (var_5 != 18))))));
            }
            /* vectorizable */
            for (int i_27 = 0; i_27 < 11;i_27 += 1) /* same iter space */
            {

                for (int i_28 = 0; i_28 < 11;i_28 += 1)
                {
                    var_43 = (var_0 + 0);
                    var_44 = (min(var_44, -5));
                }
                var_45 = (49194 >= var_4);
                var_46 = (max(var_46, (((var_6 ? var_9 : 252)))));
                arr_100 [i_4] [i_17] [i_27] = ((18181957840038221362 ? var_7 : var_8));
                arr_101 [i_4] [8] [5] [4] = var_6;
            }
        }
        var_47 = (max((max(((2147483648 ? 14 : 20639)), ((64 ? 18 : 64)))), 8));
        arr_102 [i_4] = ((18446744073709551611 ? 44090 : 1));
    }
    var_48 = (var_2 != var_0);
    #pragma endscop
}

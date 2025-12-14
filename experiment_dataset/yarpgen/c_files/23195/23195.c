/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_3;
    var_16 = var_8;
    var_17 = (max(var_17, var_3));
    var_18 *= var_5;

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = ((((var_4 <= ((2047 ? (arr_0 [i_0]) : var_0)))) ? ((max((arr_0 [i_0 - 1]), (arr_0 [i_0 - 1])))) : (2147483647 || -2043)));
        arr_3 [i_0] = (max(-2043, 11251));
        arr_4 [i_0 - 2] = -18446744073709551615;
        var_19 = (((((min(162, 89)))) != 10554757481704579852));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_20 = -2047;
                    arr_11 [i_1] = (1834169318450794190 && 14571);

                    /* vectorizable */
                    for (int i_3 = 4; i_3 < 19;i_3 += 1)
                    {
                        var_21 = (((arr_6 [i_3 - 1] [i_0 - 2]) / (arr_6 [i_0 + 1] [i_0 + 1])));
                        var_22 = var_10;

                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            var_23 = var_13;
                            var_24 = (max(var_24, (((!(arr_13 [i_0 - 2]))))));
                            var_25 = (arr_9 [i_4 - 1] [i_2] [i_1]);
                        }
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            var_26 -= 1814651390;
                            var_27 = ((var_14 ? (arr_20 [i_0] [i_0] [i_0 - 1] [2] [6] [i_2] [i_5]) : (arr_20 [i_0] [i_0] [i_0 - 2] [i_0 - 1] [i_0 - 2] [i_3] [i_3])));
                            var_28 = (((arr_10 [i_0 - 1] [i_1] [i_0 - 1]) + (arr_10 [i_3 - 2] [i_2] [i_0])));
                        }
                        arr_21 [8] [i_1] [i_2] [i_2] = arr_1 [16] [i_0];
                        var_29 = ((!((!(arr_0 [i_0])))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        var_30 = (((((arr_23 [i_0 + 1] [9] [1] [i_0 - 2]) || var_12))) | (arr_22 [i_0 - 2] [i_1] [i_1] [i_6]));
                        var_31 = var_2;
                    }
                    for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
                    {
                        var_32 = (max(122, 65));
                        var_33 = (min(var_33, ((min(((-(arr_25 [i_0 - 1] [i_1] [1] [i_7]))), ((max((1213022009 && 21805), (arr_10 [i_0 + 1] [i_0 - 2] [i_0 - 2])))))))));
                    }
                    for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
                    {
                        var_34 = ((+(min((((arr_22 [i_0] [2] [i_0] [i_0]) << (var_13 - 360039303))), (arr_0 [i_1])))));
                        var_35 = (max(var_35, 48));
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 10;i_9 += 1)
    {
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    {
                        arr_43 [i_12] [i_12] [i_12] [i_12] [i_12] = (((((arr_16 [i_11] [3] [i_11] [i_11] [1] [i_12]) + (var_8 + 162)))) ? ((min(32768, (arr_0 [i_10])))) : 52294);
                        var_36 = var_6;
                    }
                }
            }
        }
        var_37 = (((-2048 <= 167) << ((((144 ? (((var_8 ? 22269 : (arr_12 [i_9] [16] [16] [17])))) : (var_1 % var_3))) - 22246))));
    }
    for (int i_13 = 2; i_13 < 12;i_13 += 1)
    {
        arr_47 [i_13] = arr_24 [i_13 + 2] [i_13 + 2] [i_13 - 1];
        var_38 += ((((~var_14) != (~var_12))) ? 1 : var_7);
    }
    for (int i_14 = 0; i_14 < 21;i_14 += 1)
    {

        /* vectorizable */
        for (int i_15 = 1; i_15 < 17;i_15 += 1)
        {
            var_39 = ((((arr_51 [i_14] [i_15]) ? (arr_48 [i_14]) : var_14)));

            for (int i_16 = 2; i_16 < 18;i_16 += 1)
            {
                var_40 = (((arr_51 [i_16 + 3] [i_15 + 1]) << (((arr_51 [i_16 - 2] [i_15 + 4]) - 695))));
                var_41 = (min(var_41, ((((33 * 157) != var_2)))));
            }
        }
        /* vectorizable */
        for (int i_17 = 0; i_17 < 21;i_17 += 1)
        {

            for (int i_18 = 0; i_18 < 21;i_18 += 1)
            {
                var_42 -= var_1;
                arr_59 [9] = var_10;
                var_43 = 1079635479;
            }
            for (int i_19 = 0; i_19 < 21;i_19 += 1) /* same iter space */
            {
                var_44 &= (~8);
                var_45 = ((22269 ? (arr_54 [18] [16] [i_19]) : (arr_54 [1] [0] [i_14])));
            }
            for (int i_20 = 0; i_20 < 21;i_20 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_21 = 1; i_21 < 19;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 21;i_22 += 1)
                    {
                        {
                            var_46 = (max(var_46, (29 % -2048)));
                            var_47 |= (~227);
                        }
                    }
                }
                arr_71 [i_14] [i_14] [i_14] = (((arr_51 [i_14] [5]) - (arr_51 [i_17] [i_20])));
                var_48 = (max(var_48, (~3570699462317008758)));
            }
            arr_72 [i_14] [i_17] = ((((((arr_58 [i_14] [i_14]) & 23833))) ? (arr_66 [i_14] [i_17]) : (151 & 17752272002888966475)));
        }
        arr_73 [i_14] = 98;
    }
    #pragma endscop
}

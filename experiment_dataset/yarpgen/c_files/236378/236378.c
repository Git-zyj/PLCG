/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, ((((var_3 & var_5) ? -2386123427680753281 : -var_8)))));
    var_17 = var_6;

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            var_18 ^= ((~(((((-(arr_5 [i_0 + 2] [i_0 + 2])))) ? var_3 : var_13))));
            var_19 = ((min(var_11, 17)));
            var_20 = (arr_2 [i_0 - 2]);
        }
        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {
            var_21 = (var_12 ? (((arr_2 [i_0 - 2]) ? (((764581883 ? 36488 : var_13))) : -var_11)) : (((0 * (var_0 * 0)))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    {
                        var_22 = (min(var_22, (((((((((var_12 & (arr_11 [i_2] [i_0] [i_0 - 2] [i_2])))) ? ((var_4 & (arr_4 [i_2]))) : ((7914716011627341972 ? 2074434489 : -38))))) ? ((var_4 ? (arr_5 [i_0] [i_0 - 2]) : var_1)) : var_0)))));
                        arr_14 [i_0] = arr_5 [i_0 - 3] [i_2];

                        /* vectorizable */
                        for (int i_5 = 4; i_5 < 14;i_5 += 1)
                        {
                            var_23 = (max(var_23, var_10));
                            var_24 = (arr_15 [i_2 + 2] [i_5 + 2] [i_0]);
                            var_25 = (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                        }
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            var_26 -= (((((-var_6 ? 5657397869016283946 : (18446744073709551615 / 550289523)))) ? (arr_16 [i_0] [i_2] [i_3] [i_2] [1]) : (((arr_11 [i_3] [i_2 + 3] [i_3] [i_3]) ? ((18446744073709551615 ? 0 : (arr_12 [i_0 - 1] [i_2] [i_2] [14] [i_2] [i_2]))) : -var_15))));
                            arr_21 [i_0] = ((!((((var_3 >= var_6) ? (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0 - 1]) : -1531343746)))));
                        }
                        /* vectorizable */
                        for (int i_7 = 3; i_7 < 13;i_7 += 1)
                        {
                            var_27 -= (((32767 == 0) == (arr_10 [i_2] [i_2] [i_3])));
                            var_28 = (max(var_28, 1));
                            var_29 = (min(var_29, var_15));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            arr_29 [i_0 - 3] [i_0] = var_13;
                            arr_30 [i_0] [i_2 + 3] [12] [i_3] [i_0] [i_0] [i_8] = (arr_5 [i_0 + 3] [i_0 + 3]);
                        }
                    }
                }
            }
            var_30 = ((!((((arr_7 [i_0 - 3]) ? (arr_7 [i_0 + 1]) : 1)))));
            var_31 = (min(var_31, (93853304 && var_3)));
        }
        /* vectorizable */
        for (int i_9 = 1; i_9 < 14;i_9 += 1)
        {
            arr_35 [i_0] [i_9] = ((!(arr_16 [i_9] [6] [6] [i_0] [i_9 + 2])));
            /* LoopNest 3 */
            for (int i_10 = 3; i_10 < 15;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 13;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        {
                            var_32 *= var_7;
                            arr_46 [i_0] [i_0] [i_12] = (((arr_39 [i_0] [i_0 + 2] [i_0]) ? -53 : (arr_40 [i_9 + 1] [i_9 + 1] [i_9 + 2] [i_0])));
                            var_33 = var_9;
                        }
                    }
                }
            }
            var_34 = (((arr_17 [i_0] [i_0] [i_9] [i_9] [i_9 + 2] [i_9] [i_9]) | (var_11 % var_5)));
            var_35 = (((4294967291 % -1) ? 6960 : var_8));
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 1;i_13 += 1)
        {

            for (int i_14 = 0; i_14 < 16;i_14 += 1)
            {

                for (int i_15 = 0; i_15 < 16;i_15 += 1)
                {
                    var_36 = (var_7 >> var_12);
                    arr_58 [i_0] [i_14] [i_0] [i_0] = (arr_49 [i_0 - 1] [15]);
                    var_37 &= var_10;
                    var_38 = var_13;
                }
                arr_59 [11] [i_0] [1] [i_14] = var_8;
            }
            var_39 = (min(var_39, (1584197547 | var_4)));

            for (int i_16 = 1; i_16 < 15;i_16 += 1)
            {
                arr_62 [i_0 + 3] [i_13] [i_0] = (-22 || var_10);
                var_40 -= (arr_13 [13] [i_13] [0] [i_16 - 1]);
            }
        }
        var_41 = (max(var_41, var_13));

        for (int i_17 = 3; i_17 < 14;i_17 += 1)
        {
            var_42 = (arr_3 [i_17 + 1] [i_17] [i_0 - 1]);
            var_43 = (min(((min((240 | var_5), ((var_5 ? -74 : var_5))))), 3176));
            var_44 = (arr_49 [i_0] [i_17 + 2]);

            for (int i_18 = 0; i_18 < 0;i_18 += 1)
            {
                var_45 ^= var_2;

                for (int i_19 = 2; i_19 < 15;i_19 += 1)
                {
                    arr_73 [i_0] [i_17] [i_0] [i_19] = (arr_24 [i_0] [i_0] [i_0] [i_0 - 2] [i_17] [i_18] [i_19 - 2]);
                    var_46 = 111;
                }
            }
            for (int i_20 = 0; i_20 < 16;i_20 += 1) /* same iter space */
            {
                var_47 -= ((0 ^ (max(-8844828241229150978, (arr_26 [14] [i_17 + 1] [i_17])))));
                var_48 -= (((arr_18 [i_0] [i_0] [i_0] [12] [i_20] [i_20]) ? var_11 : 2856290118));
            }
            for (int i_21 = 0; i_21 < 16;i_21 += 1) /* same iter space */
            {
                var_49 *= ((var_0 - (((((arr_15 [i_0 + 3] [i_17 + 1] [1]) == 238))))));
                var_50 = -16960;
                var_51 += (max(var_5, ((~(arr_11 [8] [i_17 + 1] [i_17 - 3] [i_17 + 2])))));
            }
        }
        var_52 += ((((0 > var_3) ? ((max(1075044773, 14431))) : (var_10 * var_14))));
        var_53 = (var_4 && ((((arr_8 [i_0]) ? var_8 : 0))));
    }
    #pragma endscop
}

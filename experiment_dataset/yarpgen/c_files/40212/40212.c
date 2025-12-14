/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += 25;
    var_12 -= (-2147483647 - 1);

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_13 -= (arr_2 [i_0]);
        arr_3 [12] [12] = (min((arr_0 [i_0] [i_0]), 7694));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_14 = var_10;
        var_15 &= (min((arr_2 [i_1]), (max(var_8, (arr_0 [i_1] [i_1])))));
        arr_7 [1] = (arr_6 [i_1] [i_1]);
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = 40547;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 14;i_4 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        var_16 = ((arr_18 [i_3]) ? (arr_18 [i_2]) : 9223372036854775807);
                        var_17 = var_3;
                        arr_19 [6] [i_3] [6] [3] [3] [i_5] = var_2;
                    }
                    var_18 = ((var_8 + (((max((arr_15 [i_3] [i_3] [i_4 - 1] [i_4 + 1]), (arr_15 [i_3] [i_3] [i_4 - 1] [12])))))));
                }
            }
        }

        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                var_19 &= ((!(arr_1 [i_2] [i_2])));
                var_20 += (arr_8 [i_6]);
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 11;i_10 += 1)
                    {
                        {
                            arr_31 [i_2] [i_6] [i_8] = (((arr_6 [i_2] [i_2]) & (arr_26 [i_9] [i_10])));
                            var_21 += (((-2147483647 - 1) == 18446744073709551615));
                        }
                    }
                }
                arr_32 [i_6] = var_6;
                arr_33 [i_8] [i_6] = ((~(arr_4 [i_8])));
            }
            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                var_22 *= (max((min((var_4 + 32760), ((min((arr_25 [i_6] [i_11]), var_0))))), 7694));
                arr_36 [i_2] [i_6] [i_2] [i_2] = (52441 ? var_8 : (((min(0, 104)))));
            }
            for (int i_12 = 0; i_12 < 15;i_12 += 1)
            {
                var_23 = -9006690082130315392;
                var_24 += (arr_15 [9] [2] [11] [2]);
            }
            /* LoopNest 2 */
            for (int i_13 = 1; i_13 < 13;i_13 += 1)
            {
                for (int i_14 = 2; i_14 < 14;i_14 += 1)
                {
                    {
                        arr_44 [i_6] = (min((((((var_8 << (481080409 - 481080405))) <= (min((arr_14 [i_2]), var_8))))), 11));
                        arr_45 [i_6] [i_14 - 2] = ((!((min((var_3 | var_4), (arr_12 [i_2] [i_2]))))));
                    }
                }
            }
        }
        for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
        {
            var_25 = ((((-39 && (~20947)))));
            var_26 = -1;
            arr_50 [i_15] &= (min((min((arr_28 [i_2] [i_15] [i_15] [i_15]), (arr_28 [i_2] [i_2] [i_2] [i_2]))), ((((min((arr_21 [i_2]), (arr_0 [i_2] [i_2]))) << (arr_48 [i_2] [i_2] [i_2]))))));
        }
        /* vectorizable */
        for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
        {
            arr_53 [7] [7] [i_16] = 9223372036854775807;

            for (int i_17 = 0; i_17 < 15;i_17 += 1)
            {
                var_27 *= var_7;
                var_28 *= (~-2798);
            }
            for (int i_18 = 1; i_18 < 13;i_18 += 1)
            {
                /* LoopNest 2 */
                for (int i_19 = 3; i_19 < 13;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 15;i_20 += 1)
                    {
                        {
                            var_29 ^= (((arr_56 [i_2] [7] [i_18] [7]) / 1));
                            arr_64 [i_2] [i_16] [i_19] [i_20] = (((-127 - 1) == (arr_25 [12] [i_2])));
                            var_30 *= var_8;
                        }
                    }
                }

                for (int i_21 = 0; i_21 < 15;i_21 += 1)
                {
                    var_31 = (arr_35 [i_2]);
                    var_32 += ((~(arr_16 [i_2] [i_16] [i_18 - 1] [0])));
                    arr_68 [13] [0] [i_18] [13] [0] [13] = (arr_43 [i_2] [i_2]);
                    var_33 += (arr_20 [i_2]);
                }
                for (int i_22 = 1; i_22 < 1;i_22 += 1)
                {
                    arr_71 [i_18] [i_22] [i_2] = (((arr_28 [11] [i_16] [i_16] [i_16]) - (arr_4 [i_2])));
                    var_34 *= (((((18446744073709551615 - (arr_13 [i_2] [i_18])))) && var_8));
                }
                for (int i_23 = 0; i_23 < 15;i_23 += 1)
                {
                    var_35 += (((var_9 & var_2) & ((((var_3 + 2147483647) << var_7)))));

                    for (int i_24 = 0; i_24 < 15;i_24 += 1)
                    {
                        var_36 = (arr_58 [i_24] [i_18]);
                        var_37 = 55976;
                    }
                    for (int i_25 = 2; i_25 < 13;i_25 += 1)
                    {
                        arr_80 [10] [i_16] [i_16] [i_16] [i_25] [i_16] = var_7;
                        var_38 += -2812;
                        arr_81 [i_2] [i_25] [i_2] [12] [i_2] [i_25] [i_2] = (4294967294 ^ 1);
                    }
                    for (int i_26 = 1; i_26 < 13;i_26 += 1)
                    {
                        arr_84 [i_26] [i_2] [i_26] [i_26] [i_16] [i_2] = (((((-2147483647 - 1) ? 120 : (arr_24 [i_2] [i_16] [i_18]))) * (arr_0 [i_2] [i_2])));
                        var_39 = ((!var_0) || -41);
                        var_40 = (((arr_39 [i_18]) ^ ((((arr_4 [i_26]) * var_7)))));
                        arr_85 [i_26] [i_16] [i_2] [i_16] [i_26] = (arr_74 [i_16] [i_26 + 1] [i_26] [i_26] [0]);
                        arr_86 [i_26] [i_26] [i_18] [i_26] [5] [i_18] [13] = (((arr_76 [i_26 + 1] [i_26 + 2] [i_26 - 1] [i_26 + 1] [i_26 + 2]) <= var_3));
                    }
                    for (int i_27 = 0; i_27 < 15;i_27 += 1)
                    {
                        var_41 = 4062791209013447964;
                        var_42 = (((arr_29 [i_18 + 2] [6] [6] [6] [6]) && (-2456540523682722691 >= 43408)));
                        var_43 &= (!1);
                        arr_89 [i_2] [i_16] [i_16] [i_16] [i_16] = 4294967287;
                    }
                }
                var_44 *= (!2314812268386582239);
            }
            for (int i_28 = 0; i_28 < 15;i_28 += 1)
            {

                for (int i_29 = 0; i_29 < 15;i_29 += 1) /* same iter space */
                {
                    arr_97 [i_2] [i_2] [i_16] [i_2] [i_2] = ((1 & (((20961 >= (arr_82 [11] [i_28] [i_2] [i_2] [i_2]))))));
                    var_45 = (-9223372036854775807 - 1);
                    var_46 = (arr_57 [i_2] [i_16] [i_2]);
                }
                for (int i_30 = 0; i_30 < 15;i_30 += 1) /* same iter space */
                {
                    var_47 ^= (((arr_4 [i_2]) ? 255 : 16777215));
                    arr_101 [i_2] [i_2] [i_28] [i_2] = ((var_2 >= ((var_7 - (arr_74 [i_30] [i_16] [i_28] [i_16] [i_30])))));
                }
                for (int i_31 = 1; i_31 < 12;i_31 += 1)
                {
                    arr_105 [i_2] [i_2] = 1;
                    arr_106 [i_2] [i_2] [i_2] [i_2] = (arr_43 [i_2] [i_2]);
                }
                for (int i_32 = 0; i_32 < 15;i_32 += 1)
                {
                    var_48 = ((var_2 ^ (var_7 != 18446744073709551613)));

                    for (int i_33 = 0; i_33 < 15;i_33 += 1)
                    {
                        arr_111 [i_33] [i_16] [i_16] = 1;
                        var_49 += 65535;
                        arr_112 [10] [10] [i_28] [i_28] [i_28] [9] [0] = var_8;
                        var_50 *= 1;
                        var_51 = (((~95) + (var_10 == 56)));
                    }
                }
                var_52 = var_10;
            }
        }
        /* vectorizable */
        for (int i_34 = 0; i_34 < 15;i_34 += 1)
        {
            arr_117 [i_2] [i_2] [i_2] = 3258506007;
            arr_118 [i_2] [i_2] [i_2] &= 1;
            var_53 = var_6;
        }
    }
    var_54 = var_4;
    var_55 = var_2;
    #pragma endscop
}

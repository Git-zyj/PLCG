/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (((9565916212635072602 ? var_5 : var_12)))));
    var_14 = var_5;
    var_15 ^= 24;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
        {
            var_16 = ((-(arr_6 [i_0] [i_1])));

            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                var_17 ^= (((~var_1) % var_8));
                arr_10 [i_0] [i_1] [i_2] [i_1] = 8704978978088481440;
                var_18 = (((arr_7 [i_0] [i_0] [4] [4]) ? (arr_3 [0] [i_1] [i_2]) : ((-13 ? -32749 : (arr_8 [i_0] [i_0] [i_2])))));
                var_19 = (((arr_9 [i_0] [9] [9] [1]) >> (var_3 - 81)));
            }
            for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_20 = -12154;
                            arr_20 [2] [2] [i_4] [i_5] = ((~(arr_7 [6] [i_4 + 1] [i_4] [i_4 + 1])));
                            var_21 = var_11;
                            var_22 = var_1;
                        }
                    }
                }
                arr_21 [i_0] [i_1] [i_3] = (-var_11 + var_7);
                var_23 ^= (-2350 - -2359);
            }
            for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
            {
                var_24 = (((arr_9 [i_6] [i_1] [i_6] [i_0]) | (var_2 && -2350)));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        {
                            var_25 = (((arr_1 [i_0] [i_6]) < (arr_25 [i_0] [0] [i_6] [1])));
                            var_26 &= var_6;
                        }
                    }
                }
                var_27 = var_7;
            }
            for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
            {
                arr_33 [0] [0] [0] = 152;
                arr_34 [i_0] [i_0] [3] = (var_12 & var_7);

                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    var_28 = var_10;

                    for (int i_11 = 1; i_11 < 9;i_11 += 1)
                    {
                        arr_40 [i_0] [i_0] [i_9] [i_10] [i_11 + 2] = -2345;
                        arr_41 [i_10] [i_10] [i_10] [i_9] [10] [i_1] [i_0] = ((-var_8 ? -var_11 : 8695));
                        var_29 = arr_35 [i_11];
                        arr_42 [8] [i_1] [1] [i_1] [i_1] = var_8;
                    }
                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        arr_46 [i_10] [i_1] [i_9] [i_10] [i_9] [i_12] [6] = 32;
                        arr_47 [i_10] [i_0] = var_4;
                        var_30 = (arr_2 [i_0]);
                        var_31 = ((223 ? -1 : var_11));
                    }
                    for (int i_13 = 0; i_13 < 11;i_13 += 1) /* same iter space */
                    {
                        arr_52 [3] [i_10] [i_1] [i_0] = (-8702 <= var_9);
                        var_32 = var_6;
                        var_33 *= (((((var_8 ? 223 : 13599))) > (arr_24 [i_0] [i_1] [i_13])));
                    }
                    for (int i_14 = 0; i_14 < 11;i_14 += 1) /* same iter space */
                    {
                        var_34 += ((((var_11 ? (-32767 - 1) : -12617)) <= (arr_27 [10] [i_1] [i_1] [i_9] [i_1] [i_14])));
                        arr_55 [i_14] [i_1] [0] [i_10] [i_14] = ((var_10 ? var_6 : (arr_22 [i_0] [i_0] [i_0])));
                        var_35 = var_1;
                    }
                    var_36 = var_5;
                }
                for (int i_15 = 3; i_15 < 10;i_15 += 1)
                {
                    var_37 = (min(var_37, (~var_6)));
                    var_38 = 21520;
                    var_39 -= var_10;
                }
                for (int i_16 = 2; i_16 < 9;i_16 += 1)
                {
                    arr_62 [i_16] [i_9] [i_9] [i_9] = -11343;
                    var_40 = var_0;
                }
            }
            var_41 -= ((((16159729194484100393 ? 29460 : -24214)) < 17358));
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 11;i_17 += 1)
            {
                for (int i_18 = 2; i_18 < 7;i_18 += 1)
                {
                    {
                        var_42 = (~var_9);

                        for (int i_19 = 0; i_19 < 11;i_19 += 1)
                        {
                            var_43 = (min(var_43, (arr_43 [i_0] [i_1] [i_17] [5] [i_19] [i_18 - 2])));
                            var_44 *= ((((((arr_36 [i_0] [2] [i_0] [10] [i_19]) == -29315))) <= (28571 && -32750)));
                        }
                        var_45 = (((arr_37 [i_17] [i_18]) ? 384 : var_3));
                        arr_72 [i_0] [8] [1] [1] = var_2;
                        arr_73 [i_0] [i_1] [i_17] [3] = ((-11 * (((arr_16 [4] [i_0] [i_1] [i_17] [9] [i_18 - 1]) ? 32764 : var_6))));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_20 = 0; i_20 < 11;i_20 += 1) /* same iter space */
        {
            arr_77 [i_20] = arr_43 [i_20] [i_20] [i_20] [i_20] [i_0] [i_0];
            var_46 = ((var_8 != (arr_5 [i_0])));
            /* LoopNest 3 */
            for (int i_21 = 1; i_21 < 10;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 11;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 11;i_23 += 1)
                    {
                        {
                            var_47 = ((var_8 ? ((-11350 ? var_12 : 20591)) : 32755));
                            var_48 -= ((-((14541 ? var_9 : var_0))));
                            var_49 = (((arr_27 [i_0] [i_20] [i_21] [i_22] [6] [6]) ? var_5 : (arr_27 [i_0] [i_0] [i_21 + 1] [i_22] [i_21 + 1] [i_22])));
                        }
                    }
                }
            }
        }

        for (int i_24 = 1; i_24 < 9;i_24 += 1)
        {
            var_50 = (min(var_50, (((23505 ? (var_7 || var_4) : (arr_56 [i_24 + 2] [i_24 - 1]))))));
            var_51 = ((-var_9 & ((79 ? (var_9 + var_12) : -24112))));
        }
        var_52 = max((max(var_3, (((arr_59 [i_0] [i_0] [i_0] [i_0]) ? 9224846930638235073 : var_8)))), ((((var_8 ? var_1 : 9068)))));
    }
    for (int i_25 = 3; i_25 < 7;i_25 += 1)
    {

        for (int i_26 = 2; i_26 < 8;i_26 += 1)
        {
            arr_94 [i_25] = (max((max(((var_1 ? var_0 : 5140)), var_0)), ((((min(var_11, var_7))) | var_3))));
            arr_95 [i_25] = var_4;
        }
        arr_96 [i_25] = var_10;
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_13 = (min(var_13, ((!((((62726 ^ 1505148167) ? (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : var_1)))))));
                        var_14 = 46;
                    }
                }
            }
        }
        var_15 = (max(((-58 ? (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : 1)), (((arr_9 [11] [i_0] [i_0] [i_0]) ? (((arr_6 [i_0] [i_0] [i_0]) ? 0 : (arr_10 [i_0]))) : 76))));
        var_16 = -38;
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 9;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 11;i_5 += 1)
        {
            {
                var_17 -= var_8;
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_18 = (arr_5 [i_7] [1] [1]);
                            var_19 = (max(((var_10 ? -90 : (((arr_0 [i_7]) * (arr_2 [16]))))), (((arr_8 [i_4] [i_5] [i_5] [i_5 + 1] [i_5] [11]) ? (arr_5 [i_4] [i_4] [13]) : -var_8))));
                            var_20 = ((~(arr_3 [i_4] [i_5] [i_6])));
                        }
                    }
                }
                arr_21 [i_4] [i_5] [i_5] = var_8;
            }
        }
    }

    /* vectorizable */
    for (int i_8 = 2; i_8 < 17;i_8 += 1)
    {
        var_21 -= 24;
        arr_25 [i_8 + 1] [i_8] = 80;

        for (int i_9 = 2; i_9 < 17;i_9 += 1)
        {
            arr_28 [i_9] = ((-31 ? (arr_8 [15] [i_9 + 1] [i_9] [5] [15] [5]) : (arr_3 [4] [i_8 - 2] [i_9 - 1])));
            var_22 = (((arr_3 [i_9] [i_9 + 1] [1]) < var_1));
            var_23 |= arr_26 [i_8] [i_8];
        }
        for (int i_10 = 4; i_10 < 16;i_10 += 1) /* same iter space */
        {
            arr_33 [1] [i_10] [i_10] = var_4;
            /* LoopNest 3 */
            for (int i_11 = 1; i_11 < 17;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 18;i_13 += 1)
                    {
                        {
                            var_24 = -var_7;
                            arr_42 [i_11] = (!var_8);
                            arr_43 [i_8] [i_8] [i_8 - 2] [0] [i_11] = ((-((51 ? (arr_4 [i_8] [i_8] [i_11 + 1]) : var_4))));
                            var_25 = ((-31 ? (arr_36 [i_10 - 2]) : (arr_36 [i_10 - 2])));
                        }
                    }
                }
            }
            var_26 = -var_10;
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 18;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 18;i_15 += 1)
                {
                    {
                        var_27 -= ((118 != ((((arr_32 [10]) > 2)))));
                        var_28 = (min(var_28, (((+((var_5 ? (arr_39 [i_10]) : (arr_41 [i_8] [i_8] [i_8] [i_8] [i_8] [1]))))))));

                        for (int i_16 = 2; i_16 < 17;i_16 += 1)
                        {
                            var_29 -= (arr_49 [i_8 - 1] [i_8 + 1] [i_10 + 1] [i_14] [i_15] [i_16 - 1]);
                            var_30 *= (((((var_12 ? var_9 : var_1))) ? var_10 : ((((!(arr_45 [i_16])))))));
                        }
                    }
                }
            }
        }
        for (int i_17 = 4; i_17 < 16;i_17 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_18 = 0; i_18 < 18;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 1;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 1;i_20 += 1)
                    {
                        {
                            arr_66 [i_8 - 2] [i_17] [i_8 - 2] [11] = (((!var_5) ? 4294967293 : (arr_5 [i_8] [i_19] [i_18])));
                            var_31 = (min(var_31, ((((arr_62 [i_8] [i_17] [1] [i_19] [i_19] [11]) ? (arr_59 [10] [i_8 - 2] [i_8 - 2]) : (((-46 + 2147483647) << (((var_0 + 85) - 23)))))))));
                            var_32 &= var_0;
                            var_33 *= arr_54 [i_20] [4] [i_17];
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_21 = 2; i_21 < 17;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 18;i_22 += 1)
                {
                    for (int i_23 = 1; i_23 < 16;i_23 += 1)
                    {
                        {
                            var_34 = ((2 ? ((2789819128 ? var_4 : 2789819128)) : -55));
                            var_35 = ((var_1 | (arr_24 [i_8])));
                        }
                    }
                }
            }
        }
        for (int i_24 = 4; i_24 < 16;i_24 += 1) /* same iter space */
        {
            var_36 += ((79 ? 1 : (arr_44 [i_8 - 2] [i_24 - 4] [i_8] [i_24 - 3])));
            var_37 = (max(var_37, (((651776327 ? -62 : 0)))));
        }
        /* LoopNest 2 */
        for (int i_25 = 0; i_25 < 0;i_25 += 1)
        {
            for (int i_26 = 0; i_26 < 18;i_26 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_27 = 0; i_27 < 18;i_27 += 1)
                    {
                        for (int i_28 = 0; i_28 < 1;i_28 += 1)
                        {
                            {
                                var_38 = (var_11 - -72);
                                var_39 += 1;
                                var_40 = (((((-(-127 - 1)))) && (arr_57 [i_25] [i_26] [1])));
                            }
                        }
                    }
                    var_41 = (max(var_41, 4294967280));
                    var_42 = -var_3;
                    var_43 = (min(var_43, -1));
                }
            }
        }
        arr_86 [i_8] [i_8 + 1] = (((arr_36 [i_8]) ? var_5 : -58));
    }
    var_44 = var_10;
    var_45 = (-81 ? var_4 : ((var_11 ? (~2) : 1206181516)));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] = (arr_1 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_13 -= 0;
                    arr_11 [i_2] [i_1] [i_0] = (((((14117304251171797952 ? 1 : 1))) ? 32767 : -1));
                    var_14 = ((var_3 ? ((min(var_4, (188 || var_2)))) : ((var_2 ? ((min(var_3, var_7))) : (var_8 - var_12)))));
                }
            }
        }

        for (int i_3 = 3; i_3 < 14;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                arr_18 [i_0] = (arr_8 [15]);
                var_15 -= (min(var_2, ((~((-(arr_15 [i_4])))))));
            }
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        {
                            arr_27 [i_0] [i_3 + 3] [i_3 + 3] [11] [i_5] [i_0] = ((((((((arr_26 [i_6]) ? var_3 : var_0))) ? (var_1 || 0) : (arr_22 [i_3 - 2] [i_3] [i_0]))) <= var_4));
                            var_16 = (min(var_16, var_12));
                            arr_28 [i_3] [i_3] [i_3] [i_0] = (arr_12 [4] [i_6] [3]);
                        }
                    }
                }

                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    var_17 = ((((min(27222, 28))) ? ((-var_8 ? var_5 : (arr_16 [i_3 + 3] [i_5]))) : ((((max(var_1, var_4))) ? var_0 : var_7))));
                    var_18 = (min(var_18, var_7));
                }
                for (int i_9 = 2; i_9 < 14;i_9 += 1)
                {
                    var_19 = (max(var_19, 3965374526192848706));
                    var_20 = ((((((((arr_35 [i_0] [i_0] [i_5] [i_9] [i_5] [5]) * (arr_24 [i_3 - 1])))) ? (arr_2 [2] [2]) : ((max(var_2, (arr_6 [i_5] [i_0])))))) > ((((var_8 | -6818) >= ((max(var_0, 26952))))))));
                    var_21 = var_7;
                    var_22 = var_12;
                }
                arr_36 [i_0] [i_0] [i_0] [i_5] = ((-6818 % (max(var_8, 13775844657940172108))));
            }
            var_23 += ((var_12 / (~var_0)));
        }
        /* vectorizable */
        for (int i_10 = 3; i_10 < 14;i_10 += 1) /* same iter space */
        {
            var_24 *= (((1808989946 < 13265218574485695635) | (!var_2)));
            arr_41 [2] [i_10] [i_10] = ((var_5 ? ((var_6 ? var_6 : var_1)) : (var_0 - -13410)));
        }
        for (int i_11 = 3; i_11 < 14;i_11 += 1) /* same iter space */
        {
            var_25 = ((((((arr_29 [i_0]) ? (min(1038927158, 38313)) : (3103419572 ^ 0)))) ? (arr_31 [i_0] [i_0]) : var_9));
            var_26 = var_5;
            arr_44 [i_11] [i_11] = (max(var_3, (((!var_5) ? 3 : var_2))));
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 17;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 17;i_13 += 1)
                {
                    for (int i_14 = 1; i_14 < 1;i_14 += 1)
                    {
                        {
                            var_27 = ((((!3256040138) ? 4294967292 : ((0 ? var_1 : 18446744073709551608)))));
                            var_28 = (max(var_28, var_10));
                            var_29 = (max(var_29, var_11));
                            var_30 |= var_6;
                        }
                    }
                }
            }
            arr_53 [i_11] [i_11] [i_11] = (((arr_45 [i_0] [i_11] [i_11 + 3] [i_11 - 1]) ? var_8 : var_6));
        }
        var_31 ^= (((((var_1 ? var_7 : (1038927157 <= var_12)))) ? var_11 : ((0 ? (var_6 % var_10) : ((((var_5 && (arr_15 [i_0])))))))));
        arr_54 [i_0] = (min(((var_11 ? 4 : (((1 ? var_3 : 1))))), (min(var_10, (var_3 || var_0)))));
    }
    var_32 = (((((((var_2 ? var_2 : var_6))) ? (((var_0 ? 0 : var_12))) : (min(var_6, var_0)))) != var_5));
    var_33 = (var_0 <= 18446744073709551615);

    /* vectorizable */
    for (int i_15 = 3; i_15 < 15;i_15 += 1)
    {

        for (int i_16 = 0; i_16 < 17;i_16 += 1)
        {
            arr_59 [i_15] [i_16] [4] = (var_7 && var_3);
            var_34 ^= var_1;
            arr_60 [i_16] = (-6884148300971207772 + 0);
            /* LoopNest 3 */
            for (int i_17 = 3; i_17 < 16;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    for (int i_19 = 1; i_19 < 16;i_19 += 1)
                    {
                        {
                            arr_70 [i_15] [i_16] [i_15] [i_18] [i_19] [i_18] [i_18] = (((((arr_52 [i_15] [i_17] [i_16] [i_15]) || var_7)) ? var_6 : (arr_24 [i_17 - 3])));
                            var_35 += 4294967295;
                        }
                    }
                }
            }
            var_36 = (max(var_36, (arr_61 [i_15] [i_16])));
        }
        for (int i_20 = 0; i_20 < 17;i_20 += 1)
        {
            arr_74 [i_15] [i_20] = 27210;
            var_37 -= (((var_0 && var_0) ? (var_11 && 1) : (arr_8 [12])));
        }
        for (int i_21 = 2; i_21 < 15;i_21 += 1)
        {
            arr_78 [i_15] = ((var_3 ? var_2 : var_0));
            var_38 = (min(var_38, (((var_12 ? (arr_57 [i_15] [i_21 + 2] [i_21 + 2]) : var_6)))));
            /* LoopNest 3 */
            for (int i_22 = 1; i_22 < 16;i_22 += 1)
            {
                for (int i_23 = 4; i_23 < 16;i_23 += 1)
                {
                    for (int i_24 = 2; i_24 < 14;i_24 += 1)
                    {
                        {
                            var_39 ^= (38332 ? 2153 : 38332);
                            var_40 = ((var_5 < (arr_15 [i_22 - 1])));
                        }
                    }
                }
            }
            var_41 = -var_12;
        }
        for (int i_25 = 2; i_25 < 16;i_25 += 1)
        {
            arr_89 [i_15 + 2] [7] = var_12;
            arr_90 [i_15] [i_25] [i_15] = (var_12 / 434805771);
            /* LoopNest 2 */
            for (int i_26 = 3; i_26 < 14;i_26 += 1)
            {
                for (int i_27 = 2; i_27 < 15;i_27 += 1)
                {
                    {

                        for (int i_28 = 4; i_28 < 16;i_28 += 1)
                        {
                            var_42 += (4294967284 & 2541805855);
                            arr_99 [i_28] [1] [2] [2] [i_26] [i_28] [i_26] = ((16317237508143410635 ? 16317237508143410635 : 65125));
                        }

                        for (int i_29 = 1; i_29 < 16;i_29 += 1)
                        {
                            var_43 = 38345;
                            var_44 = (max(var_44, (((486652104 ? 0 : 0)))));
                        }
                        for (int i_30 = 0; i_30 < 0;i_30 += 1)
                        {
                            var_45 = (max(var_45, (((((((arr_94 [i_15] [i_27] [i_15] [i_15] [i_25] [i_15]) | var_3))) ? -9503 : var_8)))));
                            var_46 = var_2;
                            arr_105 [i_30 + 1] [i_26] [i_26] [5] [i_26] [i_26] [1] = var_0;
                        }
                    }
                }
            }
            var_47 = (min(var_47, (var_12 >= 18446744073709551615)));
        }
        var_48 = (arr_91 [10] [i_15] [i_15 + 1] [i_15 + 1]);
        var_49 = (min(var_49, ((((arr_8 [i_15]) - 38313)))));
    }
    #pragma endscop
}

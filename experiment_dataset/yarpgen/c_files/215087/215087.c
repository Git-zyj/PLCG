/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((~0) ? var_12 : var_7)) > 2));
    var_18 ^= (((((((var_15 ? -1 : var_13))) || var_6)) ? (min(((min(var_12, var_8))), ((var_10 ? var_10 : var_0)))) : var_9));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = (((((max(-57, 1)))) << ((((((((arr_1 [i_0]) & 14))) ? (arr_0 [i_0 - 1]) : var_6)) + 810315556690691246))));
        var_19 = var_6;
        var_20 = var_2;
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_21 = ((!((((arr_1 [i_1]) | 0)))));
        arr_5 [11] = ((+(((min((arr_1 [i_1]), (arr_4 [i_1] [i_1])))))));
    }

    /* vectorizable */
    for (int i_2 = 2; i_2 < 24;i_2 += 1)
    {
        arr_9 [i_2] [7] = ((((((arr_7 [i_2]) / (arr_6 [i_2 + 1])))) ? 1 : (var_6 > 703336908)));
        var_22 += (((arr_6 [i_2 - 1]) <= (arr_6 [i_2 - 1])));

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_12 [i_2] [i_2] [i_2] = (arr_8 [i_2] [i_2 + 1]);
            arr_13 [i_3] [i_2] = (arr_8 [i_2] [i_3]);
            var_23 = (max(var_23, (((((2147483647 / (arr_7 [1]))) * 9)))));
            var_24 = (arr_11 [i_2]);
        }
        for (int i_4 = 2; i_4 < 23;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
            {
                arr_20 [i_5] [i_4] [i_4] &= ((-5535 ? (arr_16 [i_2] [i_2] [i_2]) : -127));
                var_25 = ((1 ? (arr_10 [18]) : 0));
                var_26 = (~0);
            }
            for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
            {
                var_27 = (arr_18 [i_2 - 2] [i_2] [i_2]);
                var_28 = (((arr_23 [i_4] [i_4 - 1] [i_4 + 2] [i_4 - 1]) / (arr_17 [i_4 - 1] [i_4 + 2] [i_4 - 1] [i_4 - 2])));
            }
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                var_29 = (arr_19 [i_2] [i_2] [i_2 - 1] [i_2]);
                arr_28 [i_7] |= -1;
                var_30 = ((arr_23 [i_2 + 1] [i_2 - 2] [i_2 - 2] [i_2 - 2]) || var_12);
            }
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 1;i_10 += 1)
                    {
                        {
                            arr_38 [i_2] = 114;
                            var_31 = (((((106 ? 4294967295 : 32767))) ? (((arr_25 [i_2] [i_2 + 1] [i_2]) ? var_14 : -5)) : -1920275444));
                            var_32 = (((arr_35 [i_10] [i_2] [i_10 - 1] [i_10] [i_10] [i_10 - 1]) ? 4980241159033278 : (arr_35 [i_10] [i_2] [i_10 - 1] [i_10] [i_10] [i_10 - 1])));
                        }
                    }
                }
                var_33 *= (((arr_31 [i_4 + 1]) ? (arr_31 [i_4 + 1]) : (arr_31 [i_4 + 2])));
            }
            var_34 = var_14;
        }
        for (int i_11 = 2; i_11 < 22;i_11 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_12 = 1; i_12 < 1;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 25;i_13 += 1)
                {
                    for (int i_14 = 3; i_14 < 23;i_14 += 1)
                    {
                        {
                            var_35 = (((((1 * (arr_18 [0] [i_11 + 2] [i_11])))) ? (arr_47 [i_14] [i_14] [i_14 - 1] [1] [i_14]) : (arr_42 [i_2 - 1])));
                            var_36 = arr_47 [i_14 + 2] [i_14 - 1] [i_14] [i_14] [i_14];
                            arr_49 [i_11 + 3] [i_2] [i_11 + 2] = (arr_32 [i_14] [i_2]);
                            var_37 = (((((arr_33 [i_2]) ^ 1))) ? (arr_33 [i_2]) : (arr_30 [i_2 - 2]));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 25;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 25;i_16 += 1)
                {
                    for (int i_17 = 1; i_17 < 23;i_17 += 1)
                    {
                        {
                            var_38 += ((-(arr_47 [i_2] [i_2 + 1] [i_2] [i_2 - 1] [i_2])));
                            arr_58 [i_2] [i_2 - 1] [i_2] [i_2 + 1] [i_2 - 1] = ((!(arr_37 [i_2 + 1] [i_2 + 1] [i_2] [i_2])));
                        }
                    }
                }
            }
        }
        for (int i_18 = 2; i_18 < 22;i_18 += 1) /* same iter space */
        {
            var_39 *= 1;
            arr_61 [i_2] [10] = (arr_41 [i_2]);
        }
    }
    for (int i_19 = 1; i_19 < 9;i_19 += 1)
    {
        arr_65 [i_19 + 1] [i_19] &= ((+((-115 ? (max((arr_23 [i_19 - 1] [1] [i_19 - 1] [16]), (arr_14 [i_19]))) : (((var_10 ? 1 : var_5)))))));
        arr_66 [i_19 + 2] = (arr_30 [i_19 - 1]);

        for (int i_20 = 0; i_20 < 11;i_20 += 1)
        {
            var_40 = 0;
            arr_70 [10] &= (max((var_8 - -115), ((min((arr_50 [i_19 + 2] [i_19]), (arr_48 [i_19 - 1] [i_19 - 1] [i_19] [14] [i_19]))))));
        }
        /* vectorizable */
        for (int i_21 = 0; i_21 < 11;i_21 += 1)
        {
            var_41 = (((arr_31 [8]) ? ((var_16 ? (arr_29 [0]) : (arr_51 [16] [i_21] [1] [i_21]))) : (arr_54 [i_19 - 1] [4])));

            for (int i_22 = 0; i_22 < 11;i_22 += 1)
            {
                var_42 = -116;
                /* LoopNest 2 */
                for (int i_23 = 0; i_23 < 1;i_23 += 1)
                {
                    for (int i_24 = 0; i_24 < 1;i_24 += 1)
                    {
                        {
                            var_43 = (((arr_63 [i_19]) ? (arr_11 [i_22]) : 18446744073709551596));
                            var_44 = ((0 ? (arr_75 [i_19 + 1]) : (arr_68 [i_22] [i_19])));
                            arr_83 [i_22] [i_21] [i_22] = ((arr_15 [20]) ? 0 : 29523);
                            arr_84 [i_23] [i_23] [i_22] [1] [i_23] [i_23] = -1;
                        }
                    }
                }
                arr_85 [i_22] = (arr_63 [i_19 + 2]);
                var_45 |= -5632142374711902585;
            }
        }
        var_46 = var_8;
        var_47 = (max(var_47, (((((var_10 <= (((arr_41 [20]) ? -9223372036854775797 : (arr_24 [10] [1] [1] [i_19]))))) ? (((((min(1, (arr_3 [i_19] [i_19])))) & 1))) : (min((((-(arr_24 [i_19 + 2] [10] [i_19] [i_19 - 1])))), (min(var_3, (arr_7 [i_19]))))))))));
    }
    #pragma endscop
}

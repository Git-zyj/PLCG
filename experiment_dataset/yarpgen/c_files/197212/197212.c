/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, var_2));
    var_19 = -var_14;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_20 = 61445;

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_4 [i_0] [i_0] = var_16;
            var_21 = (min(var_21, ((((((arr_0 [i_1]) << (((((((-9223372036854775807 - 1) - -9223372036854775783)) + 44)) - 8)))) + ((1619042310270294012 ? 242 : (arr_0 [i_1]))))))));

            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                var_22 &= (arr_3 [i_0 + 1]);
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        {
                            var_23 = (((arr_7 [i_1] [i_2] [i_3] [i_4]) ? ((((!(arr_6 [13] [13] [i_0]))))) : ((64923 ? 16827701763439257603 : 9223372036854775807))));
                            arr_14 [i_0 + 1] [i_1] [i_2] [i_3] [i_4] = ((((!(arr_2 [i_1] [i_2] [i_4]))) ? (arr_0 [i_0]) : var_7));
                            var_24 = (min(var_24, ((((~var_8) ? (arr_1 [i_0]) : var_13)))));
                        }
                    }
                }
            }
        }
        for (int i_5 = 1; i_5 < 10;i_5 += 1)
        {
            var_25 = (max(var_25, ((((((var_14 ? var_17 : (arr_2 [i_5] [i_5] [i_0 + 1])))) ? (var_11 / var_14) : 598)))));
            var_26 = (min(var_26, ((((var_6 ? var_12 : var_1)) / 14680064))));
            arr_19 [i_0] = (0 ? 65504 : 9223372036854775807);
        }
        for (int i_6 = 2; i_6 < 12;i_6 += 1)
        {
            arr_24 [i_0] [i_0] = ((arr_16 [i_0] [i_6] [i_0]) >> (192 - 187));
            var_27 = var_17;

            for (int i_7 = 2; i_7 < 13;i_7 += 1)
            {
                arr_29 [i_0] [0] [i_0] = arr_1 [11];
                var_28 ^= (!var_1);
                arr_30 [i_0] [i_0 + 1] = (((((!(arr_23 [i_0])))) | (((arr_20 [1] [i_6] [1]) ? (arr_23 [i_0]) : (arr_16 [i_0] [i_6] [6])))));
                var_29 = 772126406;
                var_30 = ((((var_5 ? var_3 : (arr_8 [i_7 - 2] [i_6]))) + (!var_2)));
            }
            for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
            {
                arr_34 [i_6] [i_6] = ((~(((arr_26 [i_0 + 3] [i_0] [i_0]) - (arr_31 [1] [i_6] [i_6] [i_0])))));
                arr_35 [i_8] [i_0] = ((!(arr_18 [2])));
            }
            for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
            {
                arr_39 [i_0 + 3] [i_0 + 3] [i_6] [i_0 + 3] = (~-14680065);
                arr_40 [i_0] [i_6 - 1] [10] = (14680048 / 5093135990353856477);
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 13;i_11 += 1)
                    {
                        {
                            var_31 = (((arr_1 [i_0]) - (arr_5 [i_0] [i_6] [i_9] [i_6 + 1])));
                            arr_47 [i_9] |= (-(((!(arr_22 [i_0] [i_10] [i_11])))));
                            arr_48 [i_10] [i_6] [i_6] [i_9] [i_10] [i_10] [i_10] = (-((-14680049 ? var_8 : var_14)));
                            var_32 = var_15;
                            var_33 = (arr_8 [i_0 - 1] [i_9]);
                        }
                    }
                }
            }
            var_34 -= -var_3;
        }
        for (int i_12 = 1; i_12 < 13;i_12 += 1)
        {
            var_35 = ((!(arr_36 [i_12] [i_12 - 1] [i_12] [i_12 + 1])));
            arr_51 [i_0] [i_12] [9] = (28 ^ 0);
        }
        arr_52 [i_0] [i_0] = (arr_43 [i_0 + 2] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    for (int i_13 = 0; i_13 < 19;i_13 += 1)
    {
        var_36 = (max(var_36, (((~((-14680065 ? 14680048 : 2032)))))));
        var_37 = ((+(max(((939524096 ? (arr_54 [i_13] [i_13]) : (arr_53 [i_13]))), -14680064))));
        /* LoopNest 2 */
        for (int i_14 = 4; i_14 < 16;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 19;i_15 += 1)
            {
                {
                    arr_60 [i_13] [i_13] [i_15] [i_15] = ((65535 ? -19608 : (min((arr_54 [i_13] [i_13]), -var_5))));
                    arr_61 [1] [1] [i_15] = ((!((max(253952, (max((arr_54 [i_14 + 2] [i_15]), (arr_54 [i_14] [16]))))))));
                }
            }
        }
        var_38 = (min(var_38, var_16));
    }
    /* vectorizable */
    for (int i_16 = 1; i_16 < 23;i_16 += 1)
    {
        var_39 = (min(var_39, (!37887)));
        arr_66 [11] = arr_62 [i_16];
    }
    #pragma endscop
}

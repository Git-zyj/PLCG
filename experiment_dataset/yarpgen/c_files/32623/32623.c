/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((-(!var_14))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_19 = ((((max(-1672826757769544581, 3524590873))) ? (~var_0) : (max(3524590873, var_9))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 23;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                var_20 = ((var_15 >= (arr_7 [i_1 + 1] [i_1] [i_1 + 1])));
                arr_9 [i_0] [i_1] [i_0] = 1672826757769544581;
            }
            var_21 = ((-32070 ? 0 : 11212));
        }
        for (int i_3 = 1; i_3 < 23;i_3 += 1) /* same iter space */
        {
            arr_12 [i_3] [i_3] = (min((((arr_11 [i_3] [i_3 + 1]) != var_7)), (((arr_5 [i_3] [i_3 + 1] [i_3]) < (arr_2 [i_3 + 1])))));
            var_22 = (max(-6868, -6868));
            var_23 = 1;
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            arr_15 [i_4] = 16807;
            var_24 = var_9;
        }
        arr_16 [i_0] = 1;
        var_25 = (max((((var_0 + 2147483647) >> (((~-19532) - 19509)))), (min(-205, var_14))));
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 18;i_5 += 1)
    {
        arr_19 [i_5 + 1] [i_5] &= ((9223372036854775807 >> (((~1) + 39))));
        arr_20 [i_5] = -var_16;

        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {

            for (int i_7 = 4; i_7 < 18;i_7 += 1)
            {
                var_26 = (((((var_17 - (arr_26 [0] [i_5] [i_7] [9])))) ? (~1) : 32070));
                var_27 = (min(var_27, (((var_3 ? var_1 : (~11610274173561241998))))));
            }
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {

                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    var_28 = (max(var_28, (((-(899534013357502909 | var_9))))));
                    arr_34 [i_5] [5] [i_8] [i_9] |= var_4;
                    var_29 = (min(var_29, (((-(var_2 | 26414))))));
                }

                for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
                {

                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        arr_40 [i_5] [i_6] [i_8] [i_10] [14] = (!var_7);
                        var_30 += ((-(arr_7 [i_6] [i_6] [i_5 + 1])));
                        var_31 = ((var_9 & (arr_6 [i_6] [i_5] [i_6])));
                        arr_41 [i_5] [i_5] [i_5] [4] = ((7126668533450657659 >= (arr_36 [i_5 - 2])));
                    }
                    for (int i_12 = 4; i_12 < 17;i_12 += 1)
                    {
                        var_32 = (var_6 % var_10);
                        arr_46 [i_5] [i_6] [i_8] [i_10] [i_12] = (!var_17);
                    }
                    for (int i_13 = 0; i_13 < 19;i_13 += 1)
                    {
                        var_33 = var_8;
                        var_34 *= ((var_14 <= ((26413 >> (-13410 + 13415)))));
                        var_35 = (((arr_18 [i_5 + 1] [i_5 + 1]) ? var_13 : 5251));
                        var_36 = -679215033538302599;
                        arr_49 [i_5] [i_5] [11] [i_5] [i_5] [i_5] [i_5 - 2] = var_4;
                    }
                    arr_50 [i_5] [i_6] [i_8] = (2980241323566849734 | var_12);
                    arr_51 [i_5] [12] [i_8] [i_10] = (arr_7 [12] [i_10] [i_10]);
                    var_37 = var_1;
                }
                for (int i_14 = 0; i_14 < 19;i_14 += 1) /* same iter space */
                {
                    arr_55 [i_6] = arr_28 [i_5 + 1] [i_5 + 1] [i_5 - 2] [i_5];
                    var_38 = ((679215033538302598 << ((((((679215033538302569 ? var_3 : var_3)) + 21631)) - 23))));
                    var_39 += var_7;
                    arr_56 [i_5 - 1] [i_6] [i_8] [i_14] = (((arr_29 [i_5 - 1] [i_5] [i_5 - 2]) == var_6));
                }
                for (int i_15 = 4; i_15 < 16;i_15 += 1)
                {
                    var_40 = ((((((~(arr_28 [i_5] [15] [i_8] [i_15 - 3]))) + 2147483647)) >> (196 <= var_14)));

                    for (int i_16 = 0; i_16 < 19;i_16 += 1)
                    {
                        var_41 ^= (var_10 > -679215033538302600);
                        arr_62 [i_5] [i_5] [i_5] [i_5] [i_5] [i_15] = (var_5 - 0);
                        var_42 = -16807;
                    }
                    for (int i_17 = 1; i_17 < 17;i_17 += 1)
                    {
                        arr_66 [i_5 + 1] [7] [i_8] [i_15] [i_17 - 1] [i_17] = ((1 ? 0 : -2980241323566849715));
                        var_43 += 679215033538302569;
                        var_44 = (min(var_44, 679215033538302575));
                        var_45 ^= (var_7 | var_2);
                    }
                }
                for (int i_18 = 0; i_18 < 19;i_18 += 1)
                {

                    for (int i_19 = 0; i_19 < 19;i_19 += 1)
                    {
                        arr_72 [i_19] [i_19] = var_3;
                        arr_73 [i_19] [i_8] = var_9;
                    }
                    for (int i_20 = 1; i_20 < 18;i_20 += 1)
                    {
                        var_46 = arr_58 [i_20] [i_5] [i_5] [i_8] [i_20 - 1] [i_20 + 1];
                        arr_76 [i_20] [i_6] [i_8] [i_18] [i_18] [i_20 + 1] = (~-679215033538302576);
                    }
                    var_47 = ((~(-16808 - 3010871702)));
                    var_48 = var_3;
                }
            }
            arr_77 [i_5] [i_5] [i_5] = var_9;
        }
        var_49 ^= 32758;
    }
    var_50 = -var_8;
    #pragma endscop
}

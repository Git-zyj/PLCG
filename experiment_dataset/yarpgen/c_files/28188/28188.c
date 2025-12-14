/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_13 = ((((((arr_2 [i_1]) % 56523))) ? (((((arr_5 [i_0]) <= var_8)))) : -var_3));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_14 = ((((~(arr_10 [i_0] [i_0] [i_0] [13]))) != ((~((var_5 ? 18446744073709551600 : (arr_3 [i_0])))))));
                            arr_12 [i_0] [i_0] [3] [i_2] = ((~((((arr_6 [i_2 + 2] [11] [i_2]) && (arr_6 [i_2 + 2] [5] [11]))))));
                            arr_13 [i_0] = 56523;
                        }
                    }
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        arr_18 [i_4] = var_8;
        arr_19 [i_4] [i_4] = ((852842398224059646 ? ((max((arr_17 [i_4] [i_4]), (arr_8 [i_4] [i_4] [i_4] [i_4])))) : ((min((arr_8 [i_4] [i_4] [i_4] [i_4]), (arr_17 [i_4] [i_4]))))));
        arr_20 [i_4] [i_4] = min(((((var_3 != 9012) << (arr_11 [i_4] [i_4] [1] [i_4] [i_4] [4])))), ((-(((arr_3 [i_4]) ? var_2 : 4654581733707745297)))));
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 10;i_7 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        var_15 = (var_7 && 7958669273491023460);

                        for (int i_9 = 1; i_9 < 11;i_9 += 1)
                        {
                            arr_33 [i_5] [i_5] [i_8] [i_5] [i_9] = (((arr_31 [i_9] [0] [i_9 + 2] [i_9] [i_9 - 1]) && (((-118 ? var_7 : 65528)))));
                            var_16 += (arr_17 [i_6] [i_9 - 1]);
                            var_17 ^= var_2;
                            arr_34 [1] [i_5] [i_7] [i_8] [i_8] = (var_12 * var_4);
                        }
                        for (int i_10 = 2; i_10 < 12;i_10 += 1)
                        {
                            arr_38 [i_5] [i_6 - 1] [i_5] [i_8] [i_10] = 3278736958;
                            arr_39 [i_5] = (((((13792162340001806318 << (arr_1 [i_5] [i_5])))) ? ((((!(arr_32 [i_10] [i_6] [i_7 + 3] [i_10] [i_10]))))) : ((var_7 ? 0 : var_1))));
                        }
                        arr_40 [i_5] [i_5] [i_5] [i_5] = ((var_3 != (((((arr_15 [i_5]) <= var_6))))));
                        arr_41 [i_5] [i_5] [i_6] [i_5] = (var_12 | 26434);
                    }
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {

                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            var_18 = (((arr_45 [i_5]) | ((~((var_2 ? 2087512541 : var_0))))));
                            var_19 = ((-(arr_32 [i_5] [i_6 + 1] [i_11] [1] [i_7 - 1])));
                        }
                        arr_48 [12] [i_5] [i_5] [i_5] = var_11;
                        arr_49 [i_5] [i_5] [i_5] [i_5] = (min((((arr_32 [i_7 + 1] [i_6 + 1] [i_7] [i_11] [i_6 - 1]) && var_5)), ((!((((arr_45 [i_5]) ? var_8 : var_7)))))));
                    }
                    arr_50 [i_5] [i_5] = ((((!(!0))) && ((min((arr_25 [i_6] [i_6] [i_6]), (((0 || (arr_25 [i_5] [i_5] [i_7])))))))));
                    arr_51 [7] [i_6] [i_7] [i_5] = var_1;
                }
            }
        }
        var_20 += (((((arr_42 [i_5]) ? 8623154687833100679 : var_1)) >> (((arr_42 [i_5]) - 227))));

        /* vectorizable */
        for (int i_13 = 0; i_13 < 13;i_13 += 1)
        {
            arr_55 [i_5] [i_5] [i_13] = var_7;
            arr_56 [i_5] [i_5] = ((~(arr_2 [i_13])));
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 13;i_14 += 1)
            {
                for (int i_15 = 1; i_15 < 12;i_15 += 1)
                {
                    {

                        for (int i_16 = 0; i_16 < 13;i_16 += 1)
                        {
                            var_21 = (58382 ^ var_12);
                            var_22 = (~6);
                        }
                        arr_65 [i_5] = ((var_11 ? var_7 : (arr_3 [i_13])));
                        arr_66 [i_15] [i_5] [i_5] [i_5] = (!(arr_31 [i_5] [i_5] [i_5] [i_15 + 1] [i_13]));

                        for (int i_17 = 3; i_17 < 12;i_17 += 1)
                        {
                            var_23 = (min(var_23, (((!(~var_7))))));
                            var_24 = (((((3278736981 ? var_11 : 7958669273491023460))) ? var_5 : (arr_0 [i_5])));
                            var_25 = (min(var_25, (((1 ? 1016230353 : (arr_16 [i_5] [i_13]))))));
                            arr_69 [i_13] [i_13] [0] [i_13] [i_17] |= (~15);
                            var_26 += arr_46 [i_5] [i_5] [i_14] [i_15] [11];
                        }
                        for (int i_18 = 1; i_18 < 11;i_18 += 1)
                        {
                            var_27 += var_2;
                            var_28 = ((var_7 - (!var_0)));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_19 = 3; i_19 < 12;i_19 += 1)
        {
            arr_77 [i_5] [i_5] = ((!(~var_5)));
            arr_78 [i_5] [i_19] = (((arr_72 [i_19] [i_19] [i_19] [i_19 + 1] [i_19 - 3] [i_5]) * 2087512550));
            arr_79 [i_5] = var_7;
        }

        for (int i_20 = 2; i_20 < 11;i_20 += 1)
        {
            arr_84 [i_5] [i_5] = (((max(var_0, var_4))) ? (arr_83 [i_20] [i_20 - 1] [i_5]) : ((((min((arr_76 [4] [i_20]), 1178130611))) ? -16925432246990784715 : ((max(var_4, var_6))))));
            arr_85 [i_5] [i_20] = ((-(((((1683349316 ? var_10 : var_2))) ? var_12 : (arr_75 [i_5] [i_20 - 1] [i_20])))));
        }
        arr_86 [i_5] [i_5] = ((!(((min(var_5, (arr_44 [i_5] [i_5] [i_5])))))));
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -4229163207;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_14 |= (min(16711680, 1));
        arr_3 [i_0] = (((589120505 / 1329555431) ? (max((arr_2 [i_0] [i_0]), (max(1432801943, 2862165353)))) : (((((1432801916 ? 48208 : 159))) ? ((2862165380 ? 17655 : 1432801930)) : (arr_0 [i_0])))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_0] [i_1] [i_0] [i_2] [i_2] = (arr_7 [i_0] [i_1] [i_1] [i_3]);
                        arr_13 [i_0] [i_2] = (((((var_0 <= var_9) != 56779)) ? var_2 : (((min(var_6, 30290))))));
                    }
                }
            }
            arr_14 [i_0] [i_0] = var_10;
        }
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            arr_17 [i_0] = var_10;

            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_15 &= ((+((var_4 ? ((min((arr_11 [1] [18] [i_6]), (arr_1 [13] [13])))) : var_4))));
                            var_16 = (min((((((arr_5 [i_0]) & var_6)))), (~71)));
                            var_17 = 164;
                            arr_26 [i_0] [i_4] [i_6] = (123 <= var_12);
                        }
                    }
                }
                var_18 = (min(((~(arr_22 [i_0] [i_4] [i_5]))), ((~(arr_22 [i_5] [i_5] [i_5])))));
            }
        }
        for (int i_8 = 2; i_8 < 22;i_8 += 1)
        {

            /* vectorizable */
            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                var_19 = var_0;
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            var_20 = (((arr_32 [i_0] [i_0] [i_9] [i_10]) & 0));
                            var_21 = 1;
                        }
                    }
                }
                arr_37 [i_0] = 17655;
                var_22 |= (479 + var_10);
            }
            for (int i_12 = 0; i_12 < 25;i_12 += 1)
            {

                for (int i_13 = 1; i_13 < 23;i_13 += 1) /* same iter space */
                {
                    arr_43 [i_0] [i_0] = ((-(((~var_2) | (~0)))));
                    arr_44 [i_0] [i_8] [i_0] [i_13] [i_13 + 2] = (max((((((min(0, var_5))) && (arr_28 [i_0] [i_0])))), (min(47482, 1))));
                    var_23 = (max((min((arr_11 [i_8 + 2] [i_0] [i_13 + 2]), 65535)), 1));
                }
                for (int i_14 = 1; i_14 < 23;i_14 += 1) /* same iter space */
                {
                    arr_48 [i_8 + 2] [i_12] [6] &= 158;
                    arr_49 [i_0] [i_0] [i_12] [i_14] [i_8 + 1] [i_0] = var_10;
                    var_24 = (max((arr_27 [i_8 - 2] [i_14 + 2]), 15494));
                }
                var_25 = 1903815693;
                arr_50 [i_0] [i_0] [i_0] [i_0] = 47880;
                var_26 = (min(((~(arr_32 [i_8] [i_0] [i_8] [i_8 + 2]))), -var_9));
            }
            arr_51 [i_0] [20] [i_0] = ((!(((-(min(1, 4294967269)))))));
            arr_52 [i_0] [i_8] [24] &= 71;
        }
        arr_53 [i_0] [i_0] = ((!(!var_10)));
    }
    for (int i_15 = 2; i_15 < 21;i_15 += 1)
    {
        /* LoopNest 3 */
        for (int i_16 = 0; i_16 < 24;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 1;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 24;i_18 += 1)
                {
                    {
                        var_27 = (((arr_0 [i_15 - 1]) * (1 ^ 1)));

                        /* vectorizable */
                        for (int i_19 = 3; i_19 < 21;i_19 += 1)
                        {
                            var_28 |= -var_1;
                            var_29 = (min(var_29, (arr_2 [i_16] [i_17])));
                        }
                        var_30 = (((169 ? 20350 : var_6)));
                    }
                }
            }
        }

        for (int i_20 = 3; i_20 < 22;i_20 += 1)
        {
            var_31 += (max((max(var_10, var_1)), 65535));
            var_32 = 1;

            /* vectorizable */
            for (int i_21 = 1; i_21 < 20;i_21 += 1)
            {
                /* LoopNest 2 */
                for (int i_22 = 0; i_22 < 24;i_22 += 1)
                {
                    for (int i_23 = 1; i_23 < 21;i_23 += 1)
                    {
                        {
                            var_33 = (1203866869 << (30011 - 30009));
                            arr_80 [i_15] [i_20] [i_21] [i_22] [i_15] [i_20 + 1] [i_20] = ((var_4 ? 55768 : 65535));
                        }
                    }
                }
                var_34 = 4294967273;
                var_35 |= (((!var_3) && (arr_5 [i_15])));
            }
            /* vectorizable */
            for (int i_24 = 1; i_24 < 1;i_24 += 1)
            {
                var_36 = (!var_3);
                var_37 &= var_0;
                arr_85 [i_20] [i_20] [i_20] [i_20] = ((52203 ? 52210 : 13324));
                var_38 -= ((-(arr_28 [i_15] [i_15])));
                var_39 = ((((var_10 / (arr_75 [i_15 + 2] [i_20] [i_20] [i_20 + 2] [i_20 + 2] [i_24]))) == (var_1 & var_1)));
            }
            var_40 = (var_1 ^ 1165944732);
            var_41 = ((+((min((arr_23 [i_20] [i_20 - 2] [i_20] [i_20] [i_20]), 65535)))));
        }
        arr_86 [i_15 + 3] = ((~(arr_1 [i_15 + 2] [i_15])));
        /* LoopNest 2 */
        for (int i_25 = 0; i_25 < 24;i_25 += 1)
        {
            for (int i_26 = 0; i_26 < 24;i_26 += 1)
            {
                {
                    var_42 = 6716;
                    var_43 |= 1;
                }
            }
        }
    }
    for (int i_27 = 0; i_27 < 24;i_27 += 1)
    {

        for (int i_28 = 0; i_28 < 24;i_28 += 1)
        {
            arr_98 [i_27] [i_27] [i_28] = (arr_74 [i_28] [i_27] [i_28]);
            var_44 = ((((max((arr_72 [i_27] [i_27] [i_28] [i_28]), var_3))) ? (arr_66 [i_28] [i_28] [i_27] [i_27] [i_27] [i_27] [i_27]) : (!1)));
        }
        /* LoopNest 2 */
        for (int i_29 = 0; i_29 < 24;i_29 += 1)
        {
            for (int i_30 = 0; i_30 < 24;i_30 += 1)
            {
                {
                    var_45 = (max((max((((arr_75 [i_27] [i_27] [i_30] [i_27] [i_30] [i_27]) || var_2)), (!0))), (((((arr_38 [i_27] [i_27] [i_30]) <= 13324)) && 85))));

                    for (int i_31 = 0; i_31 < 24;i_31 += 1) /* same iter space */
                    {
                        var_46 = 22;
                        var_47 = (min(var_47, (48678 * 1)));
                    }
                    for (int i_32 = 0; i_32 < 24;i_32 += 1) /* same iter space */
                    {
                        arr_112 [i_30] = ((+(((((arr_105 [i_29] [i_29] [i_30]) ? 1 : (arr_110 [i_27] [i_30] [i_30] [i_32]))) - (arr_8 [i_27])))));
                        arr_113 [i_27] [i_29] [i_29] [i_30] [i_32] [3] = (~-1);
                        var_48 = ((((~(arr_78 [i_30] [i_29] [i_30] [7] [i_32]))) ^ (65535 + 38)));
                    }
                    /* vectorizable */
                    for (int i_33 = 0; i_33 < 24;i_33 += 1) /* same iter space */
                    {
                        var_49 = (((arr_9 [i_30] [i_33] [i_30] [i_33]) / (arr_30 [i_30] [i_29] [i_30] [i_33])));
                        arr_117 [i_30] = 44338;
                    }
                }
            }
        }
    }
    var_50 = (min(var_50, var_1));
    var_51 -= var_6;

    for (int i_34 = 1; i_34 < 23;i_34 += 1)
    {
        var_52 = (max(var_52, var_3));
        var_53 = (arr_47 [i_34] [i_34 - 1] [i_34]);
    }
    #pragma endscop
}

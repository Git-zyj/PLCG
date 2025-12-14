/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((~18446744073709551615), 0));
    var_16 ^= ((((((((var_3 ? var_10 : var_5))) ? 0 : (max(-19, -592191550))))) ? -var_7 : (((var_5 | var_6) ? ((var_9 ? var_5 : var_3)) : var_4))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = ((-((var_8 ? var_7 : var_4))));
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_10 [i_0] |= (var_14 - (arr_6 [i_0] [i_1 - 1] [i_1 - 1]));
                        var_17 = (max(var_17, var_12));
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = var_0;
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 14;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            var_18 = var_7;
                            arr_19 [7] [i_5] [i_5] [i_5] [i_6] [i_5] [i_4] = (~var_8);
                            var_19 = (!var_3);
                            var_20 = (max(var_20, 61));
                        }
                        var_21 ^= (((((var_0 ? var_5 : var_6))) / 18446744073709551615));
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 0;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        {
                            var_22 = (min(var_22, (((-(((1 <= (arr_27 [i_0] [i_8] [i_9])))))))));
                            var_23 = ((var_1 < (arr_32 [i_9 + 1] [i_9] [i_9 + 1] [i_9 + 1] [i_9 + 1])));
                            var_24 = 17092060842397338297;
                            var_25 = ((-var_6 >> (arr_28 [i_9])));
                        }
                    }
                }
                arr_34 [0] [i_7] [0] = var_9;
            }
            for (int i_11 = 0; i_11 < 16;i_11 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 16;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 16;i_13 += 1)
                    {
                        {
                            var_26 = (((arr_13 [i_13] [i_11] [i_0]) - ((var_3 ? 1 : 1))));
                            var_27 += (!1);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 16;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 16;i_15 += 1)
                    {
                        {
                            var_28 = -var_5;
                            var_29 += ((-(var_6 + var_1)));
                            arr_50 [i_7] [i_11] [i_14] = (((arr_26 [i_0] [i_7] [i_0] [i_14]) == (((arr_24 [i_7] [i_7] [i_7] [i_15]) & var_4))));
                        }
                    }
                }
                var_30 = (var_11 ? (arr_30 [i_11] [11] [i_11] [i_7] [5] [i_0]) : var_1);
            }
            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                var_31 = (max(var_31, ((((arr_48 [i_0]) ? (arr_15 [i_7] [i_7] [i_16] [i_0] [i_16] [i_0]) : (arr_48 [i_7]))))));
                var_32 = var_1;
            }

            for (int i_17 = 2; i_17 < 13;i_17 += 1) /* same iter space */
            {
                arr_55 [i_0] [i_7] [i_17] [i_17] = (((!1) ? (~425101002098389614) : ((var_11 ? 13 : (arr_45 [13] [7] [1] [1] [i_17])))));
                var_33 = var_14;
            }
            for (int i_18 = 2; i_18 < 13;i_18 += 1) /* same iter space */
            {
                var_34 = ((var_11 & (arr_24 [i_18 + 3] [1] [i_18 + 1] [i_18 + 1])));

                for (int i_19 = 1; i_19 < 12;i_19 += 1) /* same iter space */
                {
                    var_35 = 2668969683332275132;
                    arr_61 [i_0] [i_7] [i_0] [11] = (var_10 % (((var_11 ? 1 : var_3))));
                }
                for (int i_20 = 1; i_20 < 12;i_20 += 1) /* same iter space */
                {
                    arr_64 [i_20] [i_20 + 2] = (~var_4);
                    var_36 *= (var_5 ? -1 : ((394732198 ? 1 : 18446744073709551615)));
                }
            }
            var_37 = var_7;
            arr_65 [i_7] [0] [i_0] &= -var_3;
            var_38 = (min(var_38, -15532370473215491324));
        }
        var_39 = (max(var_39, ((((max(25, ((((arr_17 [i_0] [0] [i_0] [i_0] [i_0]) ? var_14 : var_6))))) == (arr_32 [7] [i_0] [i_0] [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (int i_21 = 1; i_21 < 14;i_21 += 1)
    {
        var_40 = var_7;
        var_41 ^= (((var_11 * var_0) ? (arr_66 [i_21 - 1] [i_21 - 1]) : var_2));
    }
    for (int i_22 = 0; i_22 < 11;i_22 += 1)
    {
        arr_71 [i_22] = (arr_54 [i_22] [i_22] [i_22] [i_22]);

        for (int i_23 = 0; i_23 < 11;i_23 += 1)
        {
            /* LoopNest 2 */
            for (int i_24 = 0; i_24 < 11;i_24 += 1)
            {
                for (int i_25 = 0; i_25 < 11;i_25 += 1)
                {
                    {
                        var_42 = var_0;
                        arr_80 [i_22] [i_22] = (arr_69 [6] [i_25]);
                        var_43 = (max(var_43, (((((arr_44 [i_22] [i_23] [i_22]) ? (arr_44 [i_22] [i_23] [i_24]) : var_12))))));
                    }
                }
            }
            arr_81 [i_22] [i_23] = (max(((~(var_14 | 13))), (((-(50237 / -26))))));
        }
    }
    #pragma endscop
}

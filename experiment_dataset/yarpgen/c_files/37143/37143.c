/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_11 [i_3] [i_3] = var_5;

                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            var_15 = (min(var_15, (((-var_9 >> (((((~var_11) + (!-5944753494742095211))) - 3870957497)))))));
                            arr_14 [i_3] [16] [3] [16] [i_2] [16] [i_2] = var_4;
                        }
                    }
                }
            }
        }

        for (int i_5 = 0; i_5 < 0;i_5 += 1)
        {
            arr_17 [i_5] [i_5] = (((~var_12) != (var_7 == var_12)));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        {
                            var_16 = (max(var_3, 13));
                            var_17 = ((-5441 ? -var_4 : (((3048249380 <= (((min(38, 51125)))))))));
                            arr_28 [i_0] [i_0] [i_0] [i_0] [i_5] = ((-(var_6 / 14420)));
                        }
                    }
                }
            }
            arr_29 [i_0] [i_0] [i_5] = ((~((-5752030209959796235 + (arr_24 [i_0] [i_0] [i_0] [i_5] [i_5 + 1])))));

            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {

                /* vectorizable */
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    arr_36 [i_9] [i_5] [i_9] [i_9] = ((var_9 / ((-(arr_34 [i_5])))));
                    var_18 = var_4;
                }

                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    arr_39 [5] [i_5] [5] = var_5;
                    var_19 = (min(var_19, ((((((((~(arr_4 [i_0] [i_5 + 1] [i_9] [i_11])))) ? ((1 ? var_11 : 62663)) : var_13))) || var_6))));
                    var_20 = (max(var_20, (((243 ? (((1 + 51116) + 3048249380)) : ((((!(arr_20 [i_0] [i_5 + 1] [i_0]))))))))));
                }
                /* vectorizable */
                for (int i_12 = 2; i_12 < 22;i_12 += 1)
                {
                    var_21 = (((arr_10 [i_0] [i_5 + 1] [i_0] [i_12 + 2] [i_12 - 1] [i_5]) ? var_5 : 5428));
                    var_22 = ((var_10 ? (arr_37 [i_0] [i_5 + 1] [i_5 + 1] [i_9] [i_5 + 1]) : (arr_37 [i_0] [i_0] [i_5 + 1] [i_5 + 1] [i_5])));

                    for (int i_13 = 2; i_13 < 20;i_13 += 1)
                    {
                        var_23 &= 5234458300633317199;
                        arr_46 [i_12] [i_0] [i_12] [i_5] [i_0] [i_0] [i_0] = var_4;
                    }
                }
                for (int i_14 = 0; i_14 < 24;i_14 += 1)
                {
                    var_24 = -6058973608546622352;
                    arr_50 [i_0] [i_5] [i_5 + 1] [i_9] [17] = (((arr_8 [i_5] [i_5 + 1] [i_5] [i_5]) >> (((var_13 + 159) - 110))));
                    var_25 = var_7;
                }
                arr_51 [i_5] [i_5] [i_9] [i_9] = (((min(6058973608546622352, (62676 || 32))) == (((-7757126306030417684 / var_11) / ((((arr_47 [i_0] [i_0] [i_5] [i_5] [i_9]) ? 7783 : 959970510)))))));
                arr_52 [i_5] [i_5] [i_5] = var_10;
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 24;i_16 += 1)
                    {
                        {
                            arr_57 [i_0] [i_5] [i_5] [i_5] [i_16] = (((var_6 == var_7) * (~var_12)));
                            var_26 = (((var_0 * 1) == (var_11 + var_0)));
                        }
                    }
                }
            }
        }
        var_27 = (((arr_40 [i_0] [i_0] [i_0] [i_0]) <= (arr_40 [18] [18] [i_0] [i_0])));
    }
    for (int i_17 = 0; i_17 < 12;i_17 += 1)
    {
        /* LoopNest 3 */
        for (int i_18 = 2; i_18 < 11;i_18 += 1)
        {
            for (int i_19 = 0; i_19 < 12;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 1;i_20 += 1)
                {
                    {

                        for (int i_21 = 0; i_21 < 12;i_21 += 1) /* same iter space */
                        {
                            var_28 = (((((51125 ? 7757126306030417696 : var_1))) ? -var_1 : (var_11 + var_4)));
                            var_29 = (min((var_12 + var_11), -var_1));
                        }
                        for (int i_22 = 0; i_22 < 12;i_22 += 1) /* same iter space */
                        {
                            var_30 = (!var_6);
                            arr_74 [i_17] [i_17] [i_18] [1] [i_20] [i_20] = -7757126306030417664;
                        }
                        var_31 = (((0 / (arr_3 [i_18 - 1]))));
                        var_32 = (max(var_32, (((((var_9 != (arr_10 [i_18 - 2] [i_18 - 2] [i_18] [i_20] [i_19] [i_19]))))))));
                        arr_75 [i_17] [i_18] [i_18] [i_20] [i_17] [i_20] = ((+(((7757126306030417665 / 14436) / 7757126306030417663))));
                        var_33 = (max(var_33, (((!(((-var_1 + (arr_16 [i_18 + 1])))))))));
                    }
                }
            }
        }
        arr_76 [i_17] [5] = (((arr_73 [i_17] [i_17] [0] [10] [i_17]) <= 1));
    }
    var_34 *= (((-var_10 + var_0) / var_3));
    var_35 = var_1;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23442
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (-((var_8 ? (max(var_6, var_7)) : (var_1 + 99))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0]) <= ((var_8 ? var_7 : var_8))));
        var_12 = (max(var_12, ((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [8]))))));
        var_13 ^= ((((524287 ? 0 : var_2))) ? -1 : var_5);
        arr_3 [i_0] [i_0] = ((10 ? (arr_1 [i_0]) : (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 17;i_4 += 1)
                {
                    {
                        var_14 = var_9;
                        arr_17 [i_2] [i_2] [i_3] [i_3] = var_6;
                    }
                }
            }
        }
        var_15 = ((-29 ? (min(var_3, (arr_13 [i_1]))) : (((524306 ? (arr_4 [i_1]) : var_9)))));

        for (int i_5 = 2; i_5 < 18;i_5 += 1)
        {
            var_16 = (((((max(var_9, var_1)))) ? (((max(var_2, 8829107236211379136)) ^ ((1065808466 ? (arr_14 [i_1] [i_1] [i_1] [i_5]) : (arr_13 [i_5]))))) : var_0));
            var_17 = (((((var_0 ? (arr_7 [i_5 - 1] [i_5 - 1] [i_5]) : (arr_10 [i_5] [13] [i_5 - 1] [12])))) ? (~var_8) : (((arr_7 [i_5 - 2] [i_5 - 2] [i_5 - 2]) ? (arr_10 [i_5] [i_5] [i_5 - 1] [i_5]) : (arr_7 [i_5 + 1] [i_5 + 1] [i_5])))));
        }
    }

    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        var_18 ^= (((!var_3) ? ((((arr_21 [i_6] [i_6]) - (arr_21 [6] [i_6])))) : (min(((((arr_20 [i_6]) < (arr_20 [i_6])))), -var_1))));
        arr_22 [i_6] = ((var_2 ? (((arr_21 [i_6] [i_6]) ? var_7 : var_0)) : (max(524306, (arr_21 [i_6] [i_6])))));
        var_19 = (min((((((var_5 + 9223372036854775807) << (((var_5 + 1405048875179704932) - 40)))))), 127));
    }
    for (int i_7 = 1; i_7 < 19;i_7 += 1) /* same iter space */
    {
        var_20 = ((+(((arr_23 [i_7 + 1]) ? (arr_23 [i_7 + 1]) : (arr_24 [i_7 - 1] [i_7 + 1])))));
        arr_26 [i_7] = var_3;
    }
    for (int i_8 = 1; i_8 < 19;i_8 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                {

                    for (int i_11 = 1; i_11 < 17;i_11 += 1)
                    {

                        /* vectorizable */
                        for (int i_12 = 1; i_12 < 19;i_12 += 1)
                        {
                            var_21 = (max(var_21, (arr_25 [i_8 + 1])));
                            var_22 = -126;
                        }
                        for (int i_13 = 0; i_13 < 20;i_13 += 1)
                        {
                            var_23 = (max(var_23, ((((arr_28 [i_8 - 1] [i_11 + 3]) ? (min(var_4, (arr_39 [i_8 + 1]))) : ((min(((var_3 ? var_4 : (arr_36 [1]))), (arr_23 [i_8 + 1])))))))));
                            var_24 -= ((((((arr_38 [i_8] [i_9] [i_8] [i_11 + 3] [i_8]) ? ((var_8 ? (arr_25 [i_13]) : var_2)) : (max(var_4, var_10))))) ? (!var_5) : (max((!var_3), (~var_9)))));
                        }
                        for (int i_14 = 0; i_14 < 20;i_14 += 1)
                        {
                            var_25 = (min((min((arr_28 [i_14] [i_9]), (arr_28 [i_10] [i_8 - 1]))), (arr_21 [i_8 - 1] [i_11 + 2])));
                            var_26 = (min(var_26, 524287));
                            var_27 ^= ((var_1 ? ((((arr_29 [i_14]) ? (min(var_7, (arr_20 [i_14]))) : var_5))) : (((max(var_7, var_6)) << (((~var_7) - 7184237207275804541))))));
                            var_28 = (max(var_28, ((((((arr_38 [i_10] [i_9] [i_9] [i_11] [i_14]) & (min(var_10, var_8)))) / (((-(arr_31 [i_8 + 1] [12] [i_14])))))))));
                            var_29 ^= (min((((351618518 / var_4) ? ((268435200 >> (var_6 - 7974450746664321556))) : ((85 >> (var_0 - 210))))), (((!(arr_36 [i_14]))))));
                        }
                        for (int i_15 = 0; i_15 < 20;i_15 += 1)
                        {
                            var_30 = (((((arr_20 [i_11 - 1]) ? (arr_42 [i_8 + 1] [i_11 + 3] [i_10] [i_11 + 3] [i_8]) : var_1))) ? ((((arr_20 [i_11 + 1]) * 2954813336))) : ((510 ? var_1 : (arr_40 [i_8]))));
                            var_31 = (max(var_31, ((min(var_1, ((((arr_24 [i_11] [i_11 + 1]) ? 24902 : (arr_29 [14])))))))));
                            var_32 = (max(var_32, ((min((((524284 ? (arr_20 [i_15]) : (arr_21 [i_8] [i_8])))), (max((max(var_3, 37690)), (var_1 && -90))))))));
                            var_33 = var_10;
                            var_34 = ((((((arr_35 [i_10] [i_8]) ? var_0 : var_7)) - ((var_3 ? var_3 : var_4)))));
                        }
                        arr_44 [1] [3] [i_9] [i_10] [i_8] = (arr_42 [i_8] [i_8] [i_9] [i_10] [i_8]);
                        arr_45 [i_11] [i_9] [i_10] [i_8] [10] [4] |= (min(((var_1 ? -524306 : (arr_23 [i_9]))), (max(var_7, (arr_40 [18])))));
                        var_35 = (~var_5);

                        /* vectorizable */
                        for (int i_16 = 1; i_16 < 1;i_16 += 1)
                        {
                            var_36 ^= -var_10;
                            var_37 = (var_2 + 351618497);
                            var_38 = (((arr_21 [i_11] [i_9]) ? (arr_21 [14] [i_16 - 1]) : (((arr_42 [i_8] [10] [i_10] [i_9] [i_8]) / var_10))));
                        }
                    }
                    /* vectorizable */
                    for (int i_17 = 0; i_17 < 20;i_17 += 1)
                    {
                        arr_50 [i_8] [i_9] [i_8] [i_10] [i_17] = var_2;

                        for (int i_18 = 2; i_18 < 19;i_18 += 1)
                        {
                            var_39 = ((var_6 != ((18 ? (arr_24 [i_9] [i_18]) : (arr_49 [i_8 - 1] [i_8 - 1] [i_10] [i_17] [i_18])))));
                            var_40 -= ((-(!63)));
                            var_41 = (((arr_46 [i_8 - 1] [i_8 + 1] [i_8] [i_8] [i_8 + 1]) ? (arr_46 [i_8 - 1] [i_8 - 1] [i_8] [i_8] [i_8]) : (arr_46 [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_8] [i_8 + 1])));
                            arr_53 [i_8] [7] [i_10] [i_17] [i_10] [i_8] = ((var_0 ? var_10 : (arr_23 [i_18 - 1])));
                            arr_54 [i_8] [i_17] [i_10] [1] [i_9] [i_8] = (arr_51 [i_8] [1] [i_8 - 1] [i_8]);
                        }
                        var_42 = ((var_0 ? ((((arr_41 [i_17] [i_10] [i_8] [i_8] [2] [i_8]) ? 425 : 13))) : (var_3 % var_6)));
                    }
                    for (int i_19 = 1; i_19 < 19;i_19 += 1)
                    {
                        arr_57 [i_8 - 1] [4] [4] [4] &= (min((min(var_5, (arr_20 [i_8 + 1]))), ((524295 ? ((var_1 ^ (arr_51 [i_8] [i_9] [i_10] [i_19]))) : (min(1, -524274))))));
                        var_43 = (max(var_43, var_7));
                        var_44 = (((((((var_2 ? var_5 : var_5))) ? (arr_41 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8] [i_8 + 1] [i_8 - 1]) : ((var_8 - (arr_47 [10] [i_10] [i_8]))))) - (((((1142059890 ? (arr_20 [i_10]) : -90))) ? ((((arr_40 [i_8]) ? var_4 : var_4))) : var_9))));
                    }
                    /* LoopNest 2 */
                    for (int i_20 = 2; i_20 < 16;i_20 += 1)
                    {
                        for (int i_21 = 1; i_21 < 19;i_21 += 1)
                        {
                            {
                                var_45 = arr_32 [i_8] [i_10] [i_21];
                                arr_62 [i_8] = 1;
                                var_46 += ((!((max(-15, var_1)))));
                            }
                        }
                    }
                }
            }
        }
        var_47 |= var_4;
    }
    #pragma endscop
}

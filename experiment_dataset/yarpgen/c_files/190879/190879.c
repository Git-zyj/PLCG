/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_20 = ((~(((arr_2 [i_0 - 1]) + var_14))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_21 ^= 39;
                                var_22 = 39;
                                var_23 = (47 & 39);
                            }
                        }
                    }
                    arr_15 [i_0] = (~35);
                    var_24 += (min(-39, 39));
                }
            }
        }
    }
    var_25 |= (min((((~(-27 + 57)))), var_17));
    var_26 = var_8;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 0;i_6 += 1)
        {
            {

                /* vectorizable */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            {
                                var_27 = ((~(~var_2)));
                                arr_28 [i_5] [1] [i_5] [i_7] [i_8] [i_9] = -40;
                                arr_29 [i_5] [i_6] [14] [4] [i_5] = arr_24 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1];
                            }
                        }
                    }
                    arr_30 [i_5] = var_17;
                    arr_31 [i_7] [i_5] [i_7] [i_7] = (arr_27 [8] [i_6 + 1] [1] [13] [4]);
                }
                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {

                    for (int i_11 = 2; i_11 < 19;i_11 += 1)
                    {
                        var_28 = (max(var_28, (((~(((((39 | -27) + 2147483647)) >> (-40 + 53))))))));
                        arr_36 [18] [i_5] [i_11] = var_14;
                    }
                    var_29 = (60 > -27);
                    var_30 *= 20;
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 21;i_13 += 1)
                        {
                            {
                                arr_43 [i_5] [i_12] [i_10] [18] [i_5] [i_5] = var_10;
                                arr_44 [i_5] [14] [i_10] [i_10] [i_13] [i_5] = -40;
                                arr_45 [i_5] [i_13] = ((!(!var_2)));
                            }
                        }
                    }
                    var_31 = ((~(arr_33 [i_6 + 1])));
                }
                /* vectorizable */
                for (int i_14 = 0; i_14 < 21;i_14 += 1) /* same iter space */
                {
                    var_32 = var_17;
                    arr_48 [i_5] [i_5] [i_5] [19] = ((-(arr_26 [i_5] [i_5] [i_5] [i_5] [8])));
                }
                for (int i_15 = 0; i_15 < 21;i_15 += 1) /* same iter space */
                {
                    var_33 -= (((~var_10) != (max(((var_14 ? (arr_20 [i_6 + 1] [i_15]) : (arr_18 [20] [i_6] [i_15]))), (max((arr_18 [4] [10] [i_15]), -40))))));
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 21;i_16 += 1)
                    {
                        for (int i_17 = 0; i_17 < 21;i_17 += 1)
                        {
                            {
                                var_34 += ((!(((arr_49 [i_5] [i_6] [i_15] [i_16]) != var_6))));
                                var_35 = min(((min((((-78 + 2147483647) << (((-44 + 57) - 13)))), -39))), (max((min(var_14, (arr_46 [i_6]))), (((var_0 << (var_17 + 87)))))));
                                var_36 = (var_12 ^ var_10);
                                arr_57 [i_5] [i_6] [1] = (((arr_50 [1] [1]) % -27));
                            }
                        }
                    }
                    arr_58 [i_15] [i_6] [i_15] &= ((-((max((var_4 == -40), (max((arr_39 [i_6]), (arr_27 [i_5] [i_6] [i_6] [i_15] [i_6]))))))));
                }
                arr_59 [i_5] = (min(-39, 55));

                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {

                    for (int i_19 = 1; i_19 < 19;i_19 += 1)
                    {
                        arr_67 [i_5] [i_6] [5] [i_19] [i_6] [i_5] = ((~((~(arr_40 [i_5] [i_19 - 1] [14] [i_19] [i_19 + 1])))));

                        for (int i_20 = 1; i_20 < 20;i_20 += 1)
                        {
                            var_37 -= (arr_40 [1] [i_6 + 1] [1] [i_19] [14]);
                            arr_70 [i_5] = (!var_8);
                            arr_71 [i_5] [i_5] [i_18] [i_5] [i_5] = (max(-74, (!105)));
                            arr_72 [i_5] = ((!(((-(((var_10 != (arr_27 [i_20] [i_19] [i_18] [1] [14])))))))));
                            var_38 ^= (min(((+((var_2 ? (arr_53 [i_5] [i_20] [0] [i_6] [i_20]) : 99)))), ((((arr_20 [10] [16]) ? (arr_55 [i_5] [16] [i_18] [i_19 - 1]) : (((arr_69 [i_6]) ? var_18 : var_7)))))));
                        }
                    }
                    var_39 |= ((+(min((arr_32 [i_6 + 1] [16] [i_6 + 1]), var_15))));
                }
                /* vectorizable */
                for (int i_21 = 0; i_21 < 1;i_21 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_22 = 0; i_22 < 21;i_22 += 1)
                    {
                        for (int i_23 = 0; i_23 < 21;i_23 += 1)
                        {
                            {
                                var_40 -= (!var_16);
                                var_41 &= (arr_60 [i_23] [i_23] [i_23] [i_23]);
                            }
                        }
                    }

                    for (int i_24 = 0; i_24 < 21;i_24 += 1)
                    {
                        arr_86 [i_5] [i_5] [i_6 + 1] [1] [i_5] [i_24] = (((arr_55 [i_5] [i_6] [i_21] [i_5]) ^ (arr_38 [i_5] [i_5])));
                        var_42 = ((~(arr_74 [13] [i_6 + 1] [i_24] [6])));
                        arr_87 [i_5] [i_5] [i_5] [i_5] = var_13;
                    }
                    for (int i_25 = 0; i_25 < 21;i_25 += 1)
                    {
                        arr_92 [i_5] [i_5] [i_5] [1] [i_5] = var_5;

                        for (int i_26 = 1; i_26 < 18;i_26 += 1)
                        {
                            var_43 = (max(var_43, (arr_79 [i_6 + 1] [i_26 - 1] [i_26 + 3] [i_26] [i_26 + 2] [i_26 + 1])));
                            var_44 -= (40 & -40);
                            arr_95 [i_5] = (((arr_76 [i_6 + 1] [i_6 + 1] [i_26 - 1] [0]) ? (((-54 ? -34 : var_3))) : (arr_65 [i_26 + 1] [13] [i_26 + 2] [1] [i_25])));
                        }
                        for (int i_27 = 0; i_27 < 21;i_27 += 1)
                        {
                            arr_99 [19] [i_5] [i_21] [i_21] [i_5] [i_5] = -40;
                            var_45 = var_6;
                            var_46 = var_0;
                        }
                    }
                    var_47 = ((+(((arr_32 [i_5] [i_5] [i_21]) ? -48 : -36))));
                }
                for (int i_28 = 0; i_28 < 1;i_28 += 1) /* same iter space */
                {
                    var_48 = (min(var_48, (((39 - (min(((var_10 ? var_16 : -105)), ((-20 ? -55 : 41)))))))));
                    var_49 = (+(max((arr_24 [i_5] [i_6] [i_6] [i_28]), var_0)));
                    var_50 += ((((var_13 + (arr_98 [i_5] [i_5] [i_6] [i_6 + 1] [i_28] [i_28]))) < (((((min((arr_65 [i_5] [i_5] [17] [i_6] [i_28]), -55))) ? (arr_55 [18] [18] [i_6] [i_28]) : var_3)))));
                    arr_104 [i_5] [16] [i_28] &= var_8;
                }
                for (int i_29 = 0; i_29 < 21;i_29 += 1)
                {
                    arr_109 [i_5] [i_5] [i_29] = (((((arr_81 [i_6 + 1] [i_6] [i_29]) << ((((var_5 ^ (arr_76 [i_5] [i_5] [i_5] [i_5]))) - 217)))) >> (((~20) + 50))));
                    var_51 = (((max(46, ((max(-51, var_9))))) + (26 <= 44)));
                    arr_110 [1] [1] [i_5] [i_29] = ((-((((max(13, 60))) ? (((min((arr_94 [i_5] [i_5] [i_29] [i_5] [i_29]), var_11)))) : (var_1 ^ var_17)))));
                    arr_111 [i_5] [i_6] [i_6] [i_29] = (((min((arr_49 [i_5] [i_6 + 1] [i_6 + 1] [i_6]), (arr_49 [i_5] [i_6 + 1] [i_29] [14]))) & (min((arr_49 [i_5] [i_6 + 1] [i_29] [i_5]), var_14))));
                }
                var_52 -= ((-var_15 ? (((max(63, 34)))) : ((((arr_18 [i_5] [i_6 + 1] [1]) != (arr_18 [16] [i_6 + 1] [10]))))));
            }
        }
    }
    #pragma endscop
}

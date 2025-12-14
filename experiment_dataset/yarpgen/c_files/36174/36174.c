/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 += ((~var_11) ? var_2 : 5341251652865096376);

        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            arr_7 [i_0] [i_0] = ((~((~(var_2 >= var_9)))));
            var_15 = ((~(min(var_0, -2994548767028606432))));
            var_16 = var_12;
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_17 = ((var_2 >= ((var_13 ? var_11 : 11258093495281488869))));
            var_18 *= (63 / var_7);
            var_19 -= var_7;
        }

        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            var_20 = ((((((max(var_10, var_10))) / -3723836305708678911))));
            var_21 = (((~var_10) | ((~(var_10 & var_2)))));
            var_22 += ((~(((max(1, var_4))))));
        }
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            var_23 += ((((((((11157165451976193952 ? var_6 : -3723836305708678922))) ^ (max(var_7, var_7))))) ? (~var_13) : (var_13 < var_6)));

            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                var_24 = var_12;
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        {
                            var_25 = 0;
                            var_26 = (max(var_26, (((var_2 <= (((var_1 | (~var_13)))))))));
                        }
                    }
                }

                for (int i_8 = 1; i_8 < 1;i_8 += 1)
                {

                    for (int i_9 = 1; i_9 < 1;i_9 += 1)
                    {
                        var_27 = ((((max((7 >= var_6), var_0))) / (min((~0), (var_0 | var_8)))));
                        arr_25 [i_0] [i_0] [i_0] [i_8 - 1] = (((((min(var_1, var_13)))) ? (((var_11 % var_2) ^ ((var_9 ? var_3 : var_7)))) : (((var_4 ? (~var_6) : var_11)))));
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        var_28 = max(((var_8 ? var_7 : var_8)), ((~(~var_8))));
                        var_29 = (+-32667);
                    }
                    for (int i_11 = 4; i_11 < 20;i_11 += 1)
                    {
                        arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 1;
                        arr_33 [i_0] [i_0] [i_0] [i_0] = ((min(var_7, ((min(var_6, var_13))))) % var_11);
                        arr_34 [i_0] [i_5] [i_0] [i_5] = ((((var_13 ? var_12 : var_8)) | (var_6 <= var_7)));
                    }

                    for (int i_12 = 0; i_12 < 0;i_12 += 1)
                    {
                        arr_38 [i_0] [i_4] [i_5] [i_0] [i_12] = (max(1, 13368391612789083404));
                        var_30 += (max(((max((var_13 >= var_11), (var_12 % var_6)))), (((var_4 * var_9) ? var_2 : var_11))));
                        arr_39 [i_0] [i_0] [i_5] [i_4] [i_0] = ((1 <= var_9) ^ (((min(17262072979200555201, 32650)) / ((1 ? 13538613622410427199 : 1)))));
                        var_31 = var_4;
                    }
                    for (int i_13 = 4; i_13 < 19;i_13 += 1)
                    {
                        var_32 *= (var_2 <= -32670);
                        arr_42 [i_0] [i_8 - 1] [i_13 + 3] = var_8;
                    }
                    arr_43 [i_8] [i_5] [i_0] [i_0] [i_0] [i_0] = ((((((max(var_8, var_13)) <= var_10))) >= (min(((2994548767028606432 ? 32767 : 26)), 1))));

                    for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
                    {
                        var_33 += (((((var_7 ^ 0) | 22854)) >= ((((max(var_13, var_5))) ? ((1240828054 ? var_9 : var_2)) : var_4))));
                        arr_46 [i_0] [i_4] [i_4] [i_4] [i_4] = ((+((var_5 ? (var_4 % 127) : var_4))));
                        arr_47 [i_0] [i_8 - 1] [i_0] [i_4] [i_0] = var_10;
                    }
                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 1;i_15 += 1) /* same iter space */
                    {
                        var_34 = ((var_0 ? (-24258 / var_11) : (var_12 % var_5)));
                        var_35 = var_3;
                    }
                    for (int i_16 = 0; i_16 < 1;i_16 += 1) /* same iter space */
                    {
                        var_36 = (15434197288535031832 / 2641172616074688798);
                        var_37 = ((((var_1 * var_11) * var_2)));
                        arr_55 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((var_8 / (var_1 <= var_12))));
                    }
                }
                /* vectorizable */
                for (int i_17 = 0; i_17 < 1;i_17 += 1)
                {
                    arr_59 [i_0] [i_0] = var_0;
                    var_38 = var_10;

                    for (int i_18 = 0; i_18 < 22;i_18 += 1)
                    {
                        var_39 += (((1 * var_9) < var_0));
                        var_40 = var_11;
                    }
                    for (int i_19 = 1; i_19 < 21;i_19 += 1)
                    {
                        arr_66 [i_0] [i_0] [i_0] [i_0] = (var_3 ? var_3 : var_1);
                        arr_67 [i_0] [i_4] [i_4] [i_17] [i_19 + 1] |= (((var_4 ^ var_1) % var_8));
                    }
                    for (int i_20 = 0; i_20 < 1;i_20 += 1)
                    {
                        arr_71 [i_4] [i_4] |= ((var_10 * (var_11 / var_5)));
                        var_41 = (max(var_41, ((var_6 ? var_2 : var_6))));
                        var_42 = (max(var_42, (((var_13 ? (var_10 | var_12) : var_12)))));
                        arr_72 [i_4] [i_4] [i_4] |= (var_13 ^ var_1);
                    }
                }

                /* vectorizable */
                for (int i_21 = 0; i_21 < 1;i_21 += 1)
                {
                    arr_75 [i_0] [i_0] [i_0] [i_0] = ((var_12 ? var_2 : var_6));
                    var_43 = (var_2 ^ var_2);
                }
            }
        }
        for (int i_22 = 0; i_22 < 22;i_22 += 1)
        {
            arr_79 [i_0] = var_10;
            arr_80 [i_0] [i_0] [i_0] = ((~(((((var_8 ? var_3 : var_9))) / (~var_1)))));

            for (int i_23 = 0; i_23 < 1;i_23 += 1)
            {

                for (int i_24 = 0; i_24 < 1;i_24 += 1)
                {
                    var_44 = var_5;
                    var_45 = (max((((1 && (!var_5)))), var_3));
                }
                var_46 = ((min(var_10, ((var_7 ? 0 : var_8)))) ^ ((((var_4 < (var_0 < 2845185722))))));
            }
            /* vectorizable */
            for (int i_25 = 1; i_25 < 20;i_25 += 1)
            {
                var_47 ^= (((((var_6 ? var_11 : var_8))) ? (var_1 >= var_12) : (var_2 <= var_8)));
                var_48 = (max(var_48, var_6));
                arr_89 [i_0] [i_0] [i_0] [i_25 - 1] = ((var_4 * (var_12 * var_9)));
            }
            for (int i_26 = 0; i_26 < 1;i_26 += 1)
            {
                arr_92 [i_0] [i_0] [i_22] [i_0] = ((((~var_3) | ((var_7 ? var_1 : var_10)))));
                arr_93 [i_22] |= (max(((15805571457634862816 ? ((min(var_11, -123))) : (var_5 | var_4))), var_9));
                /* LoopNest 2 */
                for (int i_27 = 1; i_27 < 1;i_27 += 1)
                {
                    for (int i_28 = 0; i_28 < 22;i_28 += 1)
                    {
                        {
                            var_49 = var_12;
                            var_50 = (max(var_50, (((var_10 <= ((((max(2641172616074688798, 1))) ? (~var_9) : (var_10 & var_2))))))));
                            var_51 = (((~var_7) < ((max((((var_10 ? 0 : var_13))), var_0)))));
                            var_52 = ((((min(var_12, var_8)) <= (min(var_5, var_1)))));
                        }
                    }
                }
            }
        }
        var_53 = (var_6 | 1);
    }
    for (int i_29 = 0; i_29 < 14;i_29 += 1)
    {
        /* LoopNest 2 */
        for (int i_30 = 2; i_30 < 13;i_30 += 1)
        {
            for (int i_31 = 0; i_31 < 1;i_31 += 1)
            {
                {
                    var_54 += ((((var_6 || (!var_0))) && ((((max(var_10, var_4)) ? (!var_3) : (min(var_12, var_7)))))));
                    arr_107 [i_30] [i_30] = ((~((((min(var_2, var_13)) <= 1)))));
                    var_55 = var_12;
                }
            }
        }
        arr_108 [i_29] = ((max(var_8, ((min(var_4, var_13))))));
        arr_109 [i_29] |= max((max((min(15434197288535031832, var_7)), (!var_4))), ((((((5182778620594570778 ? 127 : 18446744073709551604))) ? ((var_10 ? -14896 : var_5)) : (var_12 | var_10)))));
    }
    for (int i_32 = 0; i_32 < 1;i_32 += 1)
    {
        /* LoopNest 2 */
        for (int i_33 = 0; i_33 < 1;i_33 += 1)
        {
            for (int i_34 = 3; i_34 < 18;i_34 += 1)
            {
                {
                    arr_121 [i_32] [i_33] [i_34] [i_32] = (min(var_5, (var_10 <= var_12)));
                    var_56 = (~var_3);
                    var_57 = (((~127) ? (var_6 % var_0) : var_0));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_35 = 2; i_35 < 18;i_35 += 1)
        {
            for (int i_36 = 0; i_36 < 1;i_36 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_37 = 0; i_37 < 1;i_37 += 1)
                    {
                        for (int i_38 = 0; i_38 < 21;i_38 += 1)
                        {
                            {
                                var_58 += (min((var_3 % var_12), (var_3 >= var_1)));
                                var_59 = (max(((((var_6 ? 122 : var_9)))), var_11));
                                arr_136 [i_32] [i_35] [i_36] = 4074;
                                var_60 = (max(var_11, var_8));
                                arr_137 [i_38] [i_37] [i_36] [i_35] [i_32] = (((((((min(24575, 1))) < (var_6 ^ var_12)))) | var_5));
                            }
                        }
                    }
                    var_61 = (((var_0 ? var_12 : var_5)));
                }
            }
        }
    }
    var_62 = (max((max(var_10, ((var_3 ? var_12 : var_2)))), ((var_11 ? var_8 : (max(var_11, 15434197288535031832))))));
    #pragma endscop
}

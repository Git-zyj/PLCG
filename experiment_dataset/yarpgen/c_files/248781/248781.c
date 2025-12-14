/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= ((var_4 ? var_10 : var_15));
    var_19 ^= var_0;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_20 ^= ((((max(var_13, var_2))) ? var_3 : 18446744073709551615));
        arr_2 [4] |= (var_14 ? ((((var_10 ? var_8 : var_5)))) : ((~((var_16 ? var_1 : var_13)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 18;i_3 += 1)
            {
                {
                    arr_10 [i_1] [i_2] [i_2] = ((var_4 ? var_10 : var_1));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            {
                                var_21 = (max(var_21, (((var_15 ? var_3 : (!var_4))))));
                                arr_17 [1] [i_2] [1] [i_2] [i_2] [i_5] = ((-((var_16 ? var_13 : var_14))));
                                arr_18 [i_4] [i_4] [i_5] [i_4] [i_4] = var_4;
                            }
                        }
                    }

                    for (int i_6 = 1; i_6 < 18;i_6 += 1)
                    {
                        arr_22 [i_6] = ((var_7 ? var_13 : var_6));
                        var_22 = ((!(!var_11)));
                        arr_23 [5] [i_6] [i_3] [i_3] [i_6] [5] = ((var_13 ? var_4 : var_0));

                        for (int i_7 = 2; i_7 < 16;i_7 += 1)
                        {
                            var_23 = -var_2;
                            arr_27 [i_7] [i_6] [i_3 - 1] [i_6] [i_1] = var_9;
                        }
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            var_24 ^= (~var_9);
                            var_25 |= ((var_16 ? var_13 : var_5));
                        }
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            arr_34 [i_1] [i_6] [i_1] [i_1] [i_1] = ((var_2 ? var_2 : var_6));
                            var_26 = ((var_8 ? var_13 : var_12));
                        }
                    }
                    var_27 += var_17;
                }
            }
        }
        var_28 = (max(var_28, (!var_16)));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                {
                    var_29 = ((var_5 ? var_7 : var_10));
                    var_30 = ((var_16 ? var_11 : var_2));

                    for (int i_12 = 3; i_12 < 19;i_12 += 1)
                    {
                        var_31 ^= (~var_5);
                        arr_42 [i_11] [i_11] [i_12] [i_12 - 1] = ((~(~var_0)));
                        var_32 = ((!(!var_6)));
                    }
                    for (int i_13 = 2; i_13 < 18;i_13 += 1)
                    {
                        arr_45 [i_1] [i_10] = (!var_3);
                        var_33 = (!var_2);
                        var_34 = ((var_16 ? var_13 : var_4));
                        arr_46 [1] [i_10] [i_11] [i_13 - 1] = (!var_0);

                        for (int i_14 = 1; i_14 < 18;i_14 += 1)
                        {
                            var_35 = (!var_4);
                            var_36 = ((-7569551215199713754 ? var_10 : var_4));
                            var_37 = (!var_11);
                            var_38 = (min(var_38, (((var_1 ? var_2 : var_6)))));
                            arr_49 [i_14] [i_13] [i_1] [i_1] [i_1] = ((var_0 ? var_3 : var_13));
                        }
                    }
                    for (int i_15 = 0; i_15 < 20;i_15 += 1)
                    {
                        arr_54 [i_15] = -16264693405119160018;
                        arr_55 [i_1] [i_15] [i_10] [17] [11] [i_15] = (!var_1);

                        for (int i_16 = 3; i_16 < 18;i_16 += 1)
                        {
                            var_39 = ((var_11 ? var_15 : var_7));
                            arr_59 [i_10] [i_15] [i_16 - 3] = (!var_4);
                            var_40 = var_14;
                        }
                    }
                }
            }
        }
    }
    for (int i_17 = 0; i_17 < 14;i_17 += 1)
    {
        arr_62 [i_17] = ((~(~var_11)));
        arr_63 [i_17] = ((-((var_6 ? var_15 : var_7))));
        arr_64 [i_17] = 10805814731163565792;
    }

    for (int i_18 = 2; i_18 < 21;i_18 += 1)
    {
        var_41 = ((~(~var_2)));
        var_42 = (max(var_42, ((((((var_0 ? var_17 : var_6))) ? ((min(var_17, var_14))) : ((var_17 ? var_16 : var_12)))))));
        var_43 = (-(((~var_1) ? var_8 : ((var_15 ? var_4 : var_13)))));
    }
    /* vectorizable */
    for (int i_19 = 0; i_19 < 1;i_19 += 1)
    {
        arr_69 [i_19] = var_1;
        var_44 = (!var_5);
        /* LoopNest 2 */
        for (int i_20 = 4; i_20 < 8;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 12;i_21 += 1)
            {
                {
                    var_45 = (var_0 ? var_11 : var_1);
                    arr_78 [i_19] [i_20] = ((var_5 ? var_4 : var_17));
                    /* LoopNest 2 */
                    for (int i_22 = 0; i_22 < 1;i_22 += 1)
                    {
                        for (int i_23 = 0; i_23 < 12;i_23 += 1)
                        {
                            {
                                arr_83 [i_19] [8] [i_20] [i_22] [i_20] = (!16264693405119160025);
                                var_46 = ((var_12 ? var_10 : var_7));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_24 = 3; i_24 < 10;i_24 += 1)
    {
        /* LoopNest 2 */
        for (int i_25 = 0; i_25 < 13;i_25 += 1)
        {
            for (int i_26 = 0; i_26 < 13;i_26 += 1)
            {
                {
                    var_47 ^= (-((var_11 ? var_10 : var_12)));
                    var_48 |= ((~(!var_8)));
                    var_49 = (max(var_49, ((((!var_11) ? (~var_3) : -var_11)))));
                }
            }
        }
        var_50 = (max((((var_10 ? var_9 : var_8))), (~var_14)));
        /* LoopNest 3 */
        for (int i_27 = 0; i_27 < 13;i_27 += 1)
        {
            for (int i_28 = 0; i_28 < 13;i_28 += 1)
            {
                for (int i_29 = 0; i_29 < 13;i_29 += 1)
                {
                    {
                        arr_101 [i_29] [8] = (((~var_16) ? -var_8 : (((~var_5) ? ((var_13 ? var_14 : var_16)) : (!var_11)))));
                        var_51 -= (!((((!var_14) ? var_0 : (((var_13 ? var_13 : var_2)))))));
                        arr_102 [i_24 + 3] [1] [i_27] [i_28] [i_28] [i_29] = ((((min(var_6, (max(var_15, var_12))))) ? (((var_14 ? var_12 : var_12))) : (min((~var_6), var_14))));
                        arr_103 [i_24] [i_29] [i_29] [i_29] = ((!6) ? var_17 : var_1);
                        arr_104 [i_29] = ((!(((var_3 ? var_4 : var_10)))));
                    }
                }
            }
        }
        arr_105 [i_24 + 2] = (!var_13);
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_10;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = var_0;

        /* vectorizable */
        for (int i_1 = 1; i_1 < 21;i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] [i_1 + 1] = (~var_2);
            var_14 = (max(var_14, (((var_1 ? var_7 : (arr_1 [i_1 + 1] [i_1 - 1]))))));
        }
        for (int i_2 = 1; i_2 < 21;i_2 += 1) /* same iter space */
        {
            var_15 = (max(var_15, var_6));
            var_16 = var_0;
        }
        var_17 = (min(var_17, (((~((((!var_1) == (var_10 <= var_8)))))))));
    }
    for (int i_3 = 1; i_3 < 16;i_3 += 1) /* same iter space */
    {
        var_18 ^= ((((~((max(29, var_0))))) == var_3));
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_19 = (((~(~1))));
                                var_20 = ((((var_11 ? var_2 : (arr_18 [i_4 - 2] [i_4 + 3] [i_4] [i_3 - 1] [i_3 + 3])))) ? ((((!var_6) >= ((var_10 ? var_1 : var_4))))) : (((!((max(127, var_2)))))));
                            }
                        }
                    }
                    var_21 = (min(var_21, ((max((max((!10839338680725503939), var_1)), -var_5)))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            {
                                arr_25 [i_4 + 3] [i_4] = (max((arr_15 [i_9] [i_4 - 2] [i_4 + 2] [i_3 - 1]), var_6));
                                arr_26 [i_3 - 1] [i_9] [i_5] [i_8] [i_9] &= ((!(~var_7)));
                            }
                        }
                    }
                    arr_27 [i_4 + 4] [i_4] [i_4 + 4] = ((+(((arr_8 [i_3 + 2]) ? var_4 : var_12))));
                }
            }
        }
        var_22 = ((max(10839338680725503939, 7622729418177331369)));
    }
    /* vectorizable */
    for (int i_10 = 1; i_10 < 16;i_10 += 1) /* same iter space */
    {

        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            var_23 = ((var_5 ? (var_8 / var_8) : var_6));

            for (int i_12 = 1; i_12 < 19;i_12 += 1)
            {
                var_24 = (min(var_24, (170 <= 2098468264)));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 20;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 20;i_14 += 1)
                    {
                        {
                            arr_40 [i_10 + 1] [i_10 + 4] [i_10] [i_10 + 3] [i_10 - 1] = 2196499043;
                            var_25 *= (--10839338680725503925);
                            var_26 &= var_2;
                        }
                    }
                }
            }
            for (int i_15 = 0; i_15 < 20;i_15 += 1) /* same iter space */
            {
                var_27 = ((var_10 ? var_7 : (arr_23 [i_10 + 1] [i_11] [i_15] [i_11] [i_10 + 2])));
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 20;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 20;i_17 += 1)
                    {
                        {
                            var_28 = ((~(arr_7 [i_11] [i_10] [i_16])));
                            var_29 = (max(var_29, (((var_2 ? var_11 : var_6)))));
                        }
                    }
                }
                arr_49 [i_10 - 1] [i_11] [i_10] = (((arr_13 [i_10 + 1] [i_11] [i_15] [i_10]) ? (~var_0) : (arr_24 [i_11] [i_11] [i_15] [i_15] [i_10 + 2])));
            }
            for (int i_18 = 0; i_18 < 20;i_18 += 1) /* same iter space */
            {

                for (int i_19 = 1; i_19 < 19;i_19 += 1)
                {
                    var_30 = var_4;
                    var_31 = ((!(((var_7 ? 1 : var_7)))));
                    arr_55 [i_10] [i_11] [i_11] [i_11] [i_18] [i_19 - 1] = ((!(arr_22 [i_10 + 3] [i_11] [i_19 + 1] [i_10 - 1] [i_11])));
                    var_32 = (var_5 ? var_4 : (arr_0 [i_19 - 1] [i_19 - 1]));
                }
                for (int i_20 = 3; i_20 < 18;i_20 += 1)
                {
                    var_33 = 277864717;
                    var_34 = 4017102583;
                }
                for (int i_21 = 0; i_21 < 1;i_21 += 1)
                {
                    arr_61 [i_21] [i_21] [i_10] [i_10] [i_10 + 4] [i_10 - 1] = (10839338680725503955 + var_9);
                    var_35 = (!1972937737);
                    var_36 ^= ((-(((-127 - 1) ? var_9 : (arr_17 [i_10 - 1] [i_11] [i_18] [i_18] [i_21])))));
                    arr_62 [i_10] [i_10] = (var_3 | 1810651180);
                }
                for (int i_22 = 2; i_22 < 18;i_22 += 1)
                {
                    arr_67 [i_10 - 1] [i_10] [i_10 - 1] [i_10 - 1] = var_9;
                    var_37 = (((-9223372036854775807 - 1) ? var_4 : (~-105)));

                    for (int i_23 = 0; i_23 < 20;i_23 += 1)
                    {
                        var_38 ^= (!var_2);
                        var_39 = (min(var_39, (((!(!var_9))))));
                        var_40 = var_2;
                    }
                }
                arr_70 [i_10] = var_4;
                var_41 = ((var_2 ? var_10 : var_1));
                arr_71 [i_18] [i_10] [i_10 + 1] = (var_8 | var_12);
            }
        }
        for (int i_24 = 0; i_24 < 20;i_24 += 1)
        {
            arr_76 [i_10] = var_8;
            arr_77 [i_10 + 3] [i_24] [i_24] |= -1;
            /* LoopNest 2 */
            for (int i_25 = 0; i_25 < 20;i_25 += 1)
            {
                for (int i_26 = 1; i_26 < 19;i_26 += 1)
                {
                    {
                        var_42 = (min(var_42, (!var_3)));
                        var_43 *= (!var_3);
                        var_44 = 4530306588656842922;
                    }
                }
            }
        }
        var_45 = (((arr_65 [i_10 + 1] [i_10 + 3] [i_10 + 2] [i_10 - 1]) ? (arr_0 [i_10 + 4] [i_10 - 1]) : var_9));
    }
    var_46 = var_11;
    var_47 ^= ((~((((var_5 ? var_0 : var_11))))));
    #pragma endscop
}

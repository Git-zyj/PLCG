/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (!4177886316)));
    var_14 = ((3656094329733464765 >> ((max(0, 26)))));

    for (int i_0 = 1; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_15 = (min(var_15, (1 > -1)));
        var_16 = ((-((((arr_1 [i_0 + 1]) >= (~31561))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 9;i_1 += 1) /* same iter space */
    {
        var_17 = (~1);

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    {
                        var_18 -= ((!(arr_1 [i_1 - 1])));
                        var_19 = (((arr_12 [i_1] [i_2] [i_3] [i_1 + 1] [i_1] [i_3]) >= (arr_6 [i_1 + 1])));
                    }
                }
            }
            var_20 = (((arr_11 [i_1 + 2] [i_1] [i_1 + 3]) > (arr_11 [i_1 + 2] [i_1] [i_1 + 3])));
            var_21 = ((!(arr_2 [i_1 + 3])));

            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                arr_16 [i_5] [i_1] [i_1] = (var_7 ^ ((~(arr_10 [i_1] [i_2] [i_5]))));
                var_22 = (-var_5 >= ((~(arr_6 [10]))));
                var_23 = (var_8 <= (var_10 ^ var_7));
            }
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_24 = (((arr_6 [i_1 + 3]) << (var_9 - 2872109862840830699)));
                            arr_24 [i_1] [i_2] [i_8] [i_7] [i_8] = var_5;
                            var_25 = (~var_2);
                            arr_25 [i_1] [i_1] [i_6] [i_7] [i_8] = (1 | 1);
                        }
                    }
                }
                var_26 = (arr_5 [i_1 - 1]);
            }
            var_27 *= (~var_1);
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            var_28 = (var_8 <= 18446744073709551615);
            var_29 = ((!var_11) > 1);

            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        {
                            var_30 -= ((arr_13 [i_1 + 1] [i_11 - 1]) <= 2349047562503395973);
                            var_31 ^= (!18446744073709551615);
                            var_32 = (!var_4);
                        }
                    }
                }
                var_33 += (((var_2 ^ (arr_28 [i_1] [i_1]))));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 12;i_13 += 1)
                {
                    for (int i_14 = 2; i_14 < 9;i_14 += 1)
                    {
                        {
                            var_34 = -1;
                            var_35 = (max(var_35, var_12));
                        }
                    }
                }
                var_36 ^= (+-1);
                arr_43 [i_1] [i_1] [i_10] = ((!((!(arr_13 [i_1] [i_1])))));
            }
            for (int i_15 = 0; i_15 < 12;i_15 += 1)
            {
                var_37 = ((!(arr_34 [i_1] [i_9] [i_1 + 2])));
                arr_46 [i_9] [i_1] = (((arr_3 [i_1 + 1] [i_1 + 1]) >= (arr_3 [i_1 + 1] [i_1 + 2])));
                var_38 = -4611686018427387903;
                var_39 = (((!1) >> (~var_0)));
            }
            arr_47 [6] |= 1;
        }

        for (int i_16 = 0; i_16 < 12;i_16 += 1)
        {
            var_40 = (~7);
            arr_51 [i_1] = (arr_15 [i_1] [i_1] [i_1] [i_1]);
        }
        for (int i_17 = 1; i_17 < 11;i_17 += 1)
        {
            /* LoopNest 2 */
            for (int i_18 = 1; i_18 < 1;i_18 += 1)
            {
                for (int i_19 = 0; i_19 < 12;i_19 += 1)
                {
                    {
                        arr_61 [i_1] [i_1] [i_1] [i_1] [i_19] = ((~((~(arr_4 [i_19])))));
                        var_41 = ((-(arr_14 [i_17 - 1] [i_17 + 1] [i_1 + 3] [i_19])));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_20 = 0; i_20 < 1;i_20 += 1)
            {
                for (int i_21 = 3; i_21 < 9;i_21 += 1)
                {
                    {
                        var_42 = (1 >> (var_11 - 46));
                        var_43 = (max(var_43, var_5));
                    }
                }
            }
        }
        for (int i_22 = 0; i_22 < 12;i_22 += 1)
        {
            /* LoopNest 2 */
            for (int i_23 = 0; i_23 < 12;i_23 += 1)
            {
                for (int i_24 = 0; i_24 < 12;i_24 += 1)
                {
                    {
                        var_44 = 1;
                        var_45 = (~18446744073709551605);
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_25 = 0; i_25 < 12;i_25 += 1)
            {
                for (int i_26 = 2; i_26 < 11;i_26 += 1)
                {
                    for (int i_27 = 2; i_27 < 11;i_27 += 1)
                    {
                        {
                            arr_85 [i_27 + 1] [i_26 + 1] [i_1] [1] [i_1] = (((arr_30 [i_1] [i_1 - 1] [i_1] [i_26 - 2]) > (arr_30 [i_1] [i_1] [i_1] [i_26 - 2])));
                            arr_86 [i_1 + 1] [i_22] [i_25] [i_1] [i_27] [i_25] [i_27 + 1] = (~var_7);
                            arr_87 [i_1 + 3] [i_1] [i_25] [i_27 - 1] [2] [i_27] = (((arr_20 [i_1]) * 64693));
                            var_46 += ((arr_79 [i_1] [i_22] [i_25] [i_27 - 1] [i_27]) > 44);
                            var_47 = (max(var_47, 0));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_28 = 0; i_28 < 12;i_28 += 1)
            {
                for (int i_29 = 1; i_29 < 10;i_29 += 1)
                {
                    for (int i_30 = 2; i_30 < 9;i_30 += 1)
                    {
                        {
                            arr_97 [5] [5] [i_1] [i_29] [i_30] = -var_10;
                            var_48 -= ((!(arr_38 [i_1 + 2] [i_1 + 3])));
                            arr_98 [i_1] [4] [i_29] [i_29] [i_28] [i_22] [i_1] = ((!(arr_53 [i_1 - 1] [i_28])));
                        }
                    }
                }
            }
            var_49 += -var_6;
            arr_99 [i_22] [i_22] [i_22] |= (var_1 > 196);
        }
    }
    /* vectorizable */
    for (int i_31 = 0; i_31 < 1;i_31 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_32 = 1; i_32 < 22;i_32 += 1)
        {
            for (int i_33 = 1; i_33 < 20;i_33 += 1)
            {
                {
                    var_50 = (max(var_50, (arr_107 [12] [i_32 - 1] [i_32 + 1] [i_33 + 2])));
                    var_51 = (var_5 > var_4);
                    var_52 = ((-(arr_103 [i_32] [i_33 + 3])));
                    var_53 = (!1);
                }
            }
        }
        arr_109 [i_31] = 18446744073709551605;
        var_54 = (max(var_54, (22 >= 44)));
    }
    /* vectorizable */
    for (int i_34 = 0; i_34 < 1;i_34 += 1) /* same iter space */
    {

        for (int i_35 = 0; i_35 < 23;i_35 += 1)
        {
            var_55 = ((~(((var_7 > (arr_106 [i_34] [i_34] [i_34]))))));
            arr_114 [i_34] [i_34] = ((~((((arr_103 [i_34] [i_34]) >= (arr_111 [i_34] [i_35]))))));
        }
        var_56 = (min(var_56, (((+(((((arr_104 [16]) + 2147483647)) >> (3536333172 - 3536333162))))))));
        arr_115 [i_34] [i_34] = (!var_6);
    }
    var_57 = ((~(max((min(var_6, 5612105913118706070)), ((max(var_5, 1)))))));
    var_58 -= min((min((!7002179945626701161), (max(var_2, var_0)))), var_8);
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (min(((63076 ? 35640 : var_5)), ((min(var_1, var_0)))));
                arr_7 [i_0] = var_10;
                var_11 = ((35647 ? 6338295868749389173 : 2460));
                arr_8 [9] [i_0] [i_0] = var_0;
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_15 [i_3] [11] = var_6;
            arr_16 [i_3] [1] [i_3] = ((~((var_5 ? var_1 : var_9))));
        }
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {

            for (int i_5 = 2; i_5 < 16;i_5 += 1)
            {
                var_12 ^= ((var_4 ? var_2 : var_3));
                arr_21 [i_2] [i_4] [i_4] [i_2] = var_9;
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
            {
                arr_26 [1] [12] [12] [12] = ((!(((29895 ? 28 : 18446744073709551615)))));
                arr_27 [i_2] = -var_4;

                for (int i_7 = 1; i_7 < 1;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        arr_33 [8] [i_4] [i_7] [i_4] [i_4] = ((var_8 ? var_6 : var_6));
                        var_13 = var_0;
                        arr_34 [i_2] [i_2] [i_7] = (((((var_3 ? var_7 : var_5))) ? var_8 : var_8));
                        arr_35 [i_2] [1] [1] [1] [i_7] [i_2] [1] = ((var_3 ? var_8 : (((0 ? 23177 : 16779)))));
                        arr_36 [i_6] [i_7] = ((var_8 ? var_3 : var_2));
                    }
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        var_14 -= var_4;
                        arr_39 [i_2] [i_7] [i_7] [i_9] = -var_3;
                        arr_40 [i_7] [i_7] [9] [i_2] [i_7] = ((var_6 ? var_2 : var_0));
                    }
                    var_15 = ((8192 ? 8753376160270081594 : 21317));
                    arr_41 [i_7] [i_7] [4] = ((var_9 ? var_0 : var_2));
                    arr_42 [i_7] = -var_8;
                    var_16 = var_2;
                }
                var_17 ^= ((-((var_3 ? var_2 : var_0))));
            }
            for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
            {

                for (int i_11 = 1; i_11 < 18;i_11 += 1)
                {
                    arr_48 [17] [i_11] = var_5;
                    arr_49 [i_11] [i_11] [i_11] [i_11] = -var_7;
                }
                arr_50 [i_2] [i_4] [i_10] = var_7;
                var_18 += -var_1;
            }
            arr_51 [i_2] = var_8;
            var_19 -= ((var_5 ? var_0 : var_1));
            arr_52 [10] [i_2] [i_2] = (!var_1);

            for (int i_12 = 0; i_12 < 19;i_12 += 1)
            {
                arr_56 [i_4] [i_4] [i_2] [i_2] = ((var_7 ? var_0 : var_8));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 19;i_14 += 1)
                    {
                        {
                            arr_65 [i_2] [i_2] [10] [i_13] [i_2] [i_2] [10] = ((var_5 ? var_2 : var_8));
                            arr_66 [i_13] [i_13] [i_13] [i_12] [i_13] [i_13] [i_13] = var_5;
                            arr_67 [i_2] [i_4] [i_12] [i_13] [i_13] = var_2;
                        }
                    }
                }

                for (int i_15 = 0; i_15 < 1;i_15 += 1)
                {
                    var_20 &= (!var_10);
                    arr_70 [i_15] [i_4] [i_4] [i_4] = ((-29 ? 12 : 1675774075));

                    for (int i_16 = 3; i_16 < 17;i_16 += 1)
                    {
                        var_21 = var_0;
                        arr_73 [i_15] [i_15] = (~var_0);
                    }
                    for (int i_17 = 0; i_17 < 0;i_17 += 1)
                    {
                        arr_77 [i_2] [i_2] [i_2] [i_4] [i_2] [i_2] &= var_6;
                        var_22 = (min(var_22, (((var_8 ? var_1 : var_1)))));
                        arr_78 [i_15] = ((var_3 ? var_6 : var_2));
                    }
                }
                for (int i_18 = 0; i_18 < 19;i_18 += 1)
                {
                    arr_83 [i_2] [i_2] [i_2] [i_2] = -var_8;
                    var_23 = (max(var_23, (((var_5 ? var_5 : var_1)))));
                    var_24 ^= var_8;
                    arr_84 [i_2] [1] [i_2] [i_12] [i_12] [i_2] = ((var_7 ? var_5 : var_5));
                }
                for (int i_19 = 0; i_19 < 19;i_19 += 1)
                {
                    arr_87 [i_2] [14] [i_2] [i_2] = ((var_10 ? var_6 : var_2));
                    arr_88 [i_2] = var_7;
                    arr_89 [7] [i_4] [7] = ((var_1 ? var_9 : var_9));
                }
                arr_90 [6] [6] [i_12] [i_12] = (var_0 ? var_8 : var_0);
                var_25 = (!var_4);
            }
            for (int i_20 = 0; i_20 < 19;i_20 += 1)
            {
                var_26 = (var_7 ? var_1 : var_5);
                arr_94 [6] [6] = var_8;
                arr_95 [i_2] [i_2] [i_2] [1] = -7048;
                arr_96 [i_20] = var_2;
            }
        }

        for (int i_21 = 3; i_21 < 15;i_21 += 1) /* same iter space */
        {
            arr_99 [i_2] [i_2] [i_21] = ((-((var_4 ? var_5 : var_2))));
            var_27 ^= (!57355);

            for (int i_22 = 0; i_22 < 19;i_22 += 1)
            {
                arr_103 [i_2] [i_22] [i_22] |= (((((var_0 ? var_2 : var_9))) ? (~var_0) : var_3));
                arr_104 [i_21] [1] [i_21] = ((-((var_0 ? var_2 : var_5))));
            }
        }
        for (int i_23 = 3; i_23 < 15;i_23 += 1) /* same iter space */
        {
            var_28 &= (~var_2);
            arr_107 [i_2] = var_5;
        }
        for (int i_24 = 3; i_24 < 15;i_24 += 1) /* same iter space */
        {
            var_29 = ((var_7 ? var_10 : var_2));
            var_30 = (!var_8);
        }
        for (int i_25 = 0; i_25 < 19;i_25 += 1)
        {

            for (int i_26 = 1; i_26 < 17;i_26 += 1)
            {
                var_31 = (!var_4);
                arr_118 [i_25] [i_25] = ((var_10 ? var_7 : var_9));
                arr_119 [14] [i_25] [1] = var_5;
            }
            for (int i_27 = 0; i_27 < 19;i_27 += 1) /* same iter space */
            {
                arr_122 [i_25] = (~var_8);
                var_32 = (min(var_32, (((var_1 ? var_5 : var_0)))));
                arr_123 [i_25] = var_8;
            }
            for (int i_28 = 0; i_28 < 19;i_28 += 1) /* same iter space */
            {
                var_33 = var_5;
                /* LoopNest 2 */
                for (int i_29 = 0; i_29 < 19;i_29 += 1)
                {
                    for (int i_30 = 0; i_30 < 19;i_30 += 1)
                    {
                        {
                            var_34 = ((var_8 ? var_3 : var_4));
                            arr_133 [14] [i_25] [i_25] [14] [14] [14] [i_25] = var_3;
                            arr_134 [i_25] [11] [i_28] [11] [6] = ((var_8 ? var_6 : var_10));
                            arr_135 [i_25] [i_25] [i_25] [i_29] [10] [i_29] = (~var_8);
                            arr_136 [i_2] [4] [i_2] [13] [i_25] = (!var_2);
                        }
                    }
                }
                arr_137 [i_25] [i_25] [i_25] [i_25] = (!var_7);
                arr_138 [i_25] [i_25] [i_2] [i_25] = var_5;
                arr_139 [i_2] [i_25] = -var_10;
            }
            arr_140 [i_25] = ((var_3 ? var_8 : (((var_7 ? var_3 : var_0)))));
        }
        var_35 *= ((var_7 ? ((var_4 ? var_8 : var_0)) : var_9));
        arr_141 [i_2] = var_1;
    }
    for (int i_31 = 0; i_31 < 1;i_31 += 1) /* same iter space */
    {
        arr_144 [1] [i_31] = ((((min((min(var_9, var_10)), var_8))) ? (((var_3 ? var_6 : var_6))) : ((min(var_2, var_9)))));
        var_36 &= (((!var_5) ? (min(var_3, (max(var_1, var_9)))) : ((var_6 ? var_8 : ((max(var_5, var_4)))))));
    }
    for (int i_32 = 0; i_32 < 1;i_32 += 1) /* same iter space */
    {
        arr_149 [i_32] = ((-(~var_2)));
        arr_150 [i_32] = (max((min(var_5, var_8)), (((-1 ? 65535 : 35634)))));
        arr_151 [i_32] [i_32] = min(((((max(var_1, var_8))) ? (max(var_1, var_3)) : ((2459 ? -166900425268533241 : var_1)))), ((min(var_4, (max(var_6, var_2))))));
        arr_152 [i_32] = ((-((min(var_2, var_7)))));
        arr_153 [4] [i_32] = ((((min(var_1, var_6))) ? var_4 : (~var_1)));
    }
    #pragma endscop
}

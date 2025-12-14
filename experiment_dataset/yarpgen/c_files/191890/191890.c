/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;
    var_15 = ((((var_12 <= (var_8 + var_0))) ? var_11 : (min((((var_7 ? var_10 : var_4))), var_9))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 = min(((var_2 ? var_1 : var_3)), ((((var_8 ? var_9 : var_12)))));
        arr_3 [i_0] = (((var_11 ^ var_8) || ((((var_12 / var_2) >> (var_9 - 4202435471164943255))))));
        var_17 = ((((((var_9 + var_7) ? (max(var_8, var_10)) : var_10))) ? (var_3 || var_7) : var_1));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_18 |= (((((var_9 ? var_6 : var_3))) ? ((var_3 ? var_3 : var_7)) : ((var_1 ? var_10 : var_2))));
            arr_9 [i_2] [i_2] [15] = (((var_1 + 9223372036854775807) >> var_7));
            arr_10 [i_1] = var_7;
        }
        for (int i_3 = 2; i_3 < 18;i_3 += 1)
        {
            var_19 = (((((var_2 ? 629767807 : 629767807))) && ((((var_12 + 2147483647) >> (var_8 - 4165649648))))));
            var_20 |= ((var_10 * ((var_3 ? var_5 : var_5))));
            var_21 = (max(var_21, (((((var_2 ? var_9 : var_3)) << (var_7 - 42))))));
        }
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            var_22 = (((var_8 ? var_9 : var_11)));
            arr_17 [i_4] = (((var_13 & var_2) ? ((var_7 ? var_4 : var_2)) : ((var_0 ? var_2 : var_0))));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        {
                            var_23 = (max(var_23, ((((((var_10 ? var_7 : var_0))) ? var_11 : var_1)))));
                            var_24 = (((((var_3 ? var_10 : var_13))) ? var_4 : ((var_7 ? var_8 : var_1))));
                        }
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            var_25 = (var_11 ? var_2 : var_2);

            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                var_26 = (var_13 | var_11);
                arr_32 [i_8] [i_9] = (((((var_13 ? var_12 : var_11))) ? (var_1 == var_8) : var_0));
                var_27 = (((var_11 && var_2) * ((var_6 ? var_1 : var_7))));
                arr_33 [i_1] [i_8] [i_9] = (var_0 ? var_10 : ((var_7 ? var_2 : var_8)));
            }
            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    for (int i_12 = 3; i_12 < 17;i_12 += 1)
                    {
                        {
                            var_28 ^= ((var_8 ? (((var_1 ? var_11 : var_12))) : ((var_8 ? var_3 : var_8))));
                            var_29 &= (var_5 || var_11);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 19;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 19;i_14 += 1)
                    {
                        {
                            arr_49 [i_14] [i_8] [i_10] [i_13] [i_14] &= ((var_4 ? var_8 : var_2));
                            arr_50 [i_8] [i_8] [i_8] [1] [i_8] = ((var_4 ? var_8 : var_7));
                            var_30 = ((var_11 ? var_4 : var_1));
                            arr_51 [17] [i_8] [17] [17] [i_14] [i_10] = ((32658 ? 32656 : 1795191429));
                        }
                    }
                }
            }
            for (int i_15 = 2; i_15 < 17;i_15 += 1)
            {
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 19;i_16 += 1)
                {
                    for (int i_17 = 1; i_17 < 18;i_17 += 1)
                    {
                        {
                            var_31 = ((((var_12 ? var_11 : var_8)) * ((var_11 ? var_6 : var_6))));
                            arr_60 [i_16] [i_8] [i_1] = (var_12 / var_2);
                            var_32 = (((((var_1 ? var_7 : var_9))) ? var_6 : var_5));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_18 = 1; i_18 < 18;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 19;i_19 += 1)
                    {
                        {
                            arr_68 [i_1] [i_1] [i_8] [3] [6] = var_3;
                            arr_69 [12] [i_8] [i_15] [i_8] [i_19] = (((var_13 < var_6) ? var_2 : var_5));
                            var_33 ^= ((var_9 / (((var_9 ? var_11 : var_12)))));
                            var_34 &= (var_11 == var_9);
                            arr_70 [i_1] [i_8] [i_8] [2] [i_19] = ((var_1 ? var_10 : var_3));
                        }
                    }
                }

                for (int i_20 = 0; i_20 < 1;i_20 += 1)
                {
                    var_35 *= ((var_8 ? (((var_0 ? var_3 : var_3))) : ((var_12 ? var_9 : var_2))));
                    var_36 = (max(var_36, (((((var_0 ? var_7 : var_4)) << var_10)))));
                    arr_73 [i_8] [i_8] [i_8] [1] = var_11;
                    var_37 *= (var_4 == var_13);
                }
                for (int i_21 = 0; i_21 < 19;i_21 += 1)
                {
                    var_38 = var_8;

                    for (int i_22 = 0; i_22 < 19;i_22 += 1)
                    {
                        var_39 = ((var_2 ? var_13 : var_10));
                        var_40 = (((((var_8 ? var_7 : var_9))) ? ((var_10 ? var_6 : var_5)) : ((var_2 ? var_5 : var_10))));
                    }
                    for (int i_23 = 0; i_23 < 19;i_23 += 1)
                    {
                        var_41 -= (var_4 <= var_0);
                        var_42 = (min(var_42, ((var_9 ? var_4 : var_3))));
                        var_43 -= (var_1 > var_13);
                    }
                    for (int i_24 = 0; i_24 < 19;i_24 += 1)
                    {
                        arr_84 [i_8] [i_15] [i_8] = (var_2 | var_7);
                        var_44 ^= var_4;
                        var_45 = (max(var_45, (((var_11 && (var_8 - var_1))))));
                        var_46 = var_13;
                        var_47 = (((((var_3 ? var_13 : var_3))) ? var_4 : var_13));
                    }
                    var_48 = (((((var_0 ? var_0 : var_1))) ? var_1 : var_1));
                    var_49 = (max(var_49, (((var_6 ? var_12 : var_3)))));
                }
                var_50 = ((var_11 ? ((var_5 ? var_5 : var_5)) : (((var_3 ? var_11 : var_4)))));

                for (int i_25 = 0; i_25 < 19;i_25 += 1)
                {

                    for (int i_26 = 0; i_26 < 19;i_26 += 1)
                    {
                        arr_90 [9] [i_8] [6] [6] [i_8] [i_8] = var_0;
                        var_51 = ((((((var_1 + 9223372036854775807) << (var_5 - 2190658943)))) ? var_11 : (var_8 + var_13)));
                        arr_91 [i_8] [i_8] [i_15] [i_8] [i_8] [i_1] = (var_13 ? var_2 : var_2);
                        var_52 = (var_9 % var_8);
                        var_53 = (var_8 & var_6);
                    }
                    var_54 ^= var_9;
                }
                for (int i_27 = 0; i_27 < 19;i_27 += 1)
                {
                    arr_95 [i_1] [i_1] [i_15 - 1] [i_8] = ((var_8 ? var_9 : var_1));
                    var_55 = var_13;
                }
                for (int i_28 = 0; i_28 < 19;i_28 += 1)
                {

                    for (int i_29 = 1; i_29 < 17;i_29 += 1)
                    {
                        var_56 = ((var_2 ? var_6 : var_1));
                        arr_102 [12] [i_15] |= ((var_3 ? var_7 : var_11));
                    }

                    for (int i_30 = 0; i_30 < 19;i_30 += 1)
                    {
                        var_57 = (1795191429 * -32633);
                        arr_106 [i_1] [i_15] [i_15] [i_15] [i_30] |= ((var_4 ? var_1 : var_0));
                    }
                    var_58 = (var_13 ? ((var_10 ? var_13 : var_8)) : (var_1 == var_1));
                }
                for (int i_31 = 0; i_31 < 19;i_31 += 1)
                {
                    var_59 = var_10;
                    var_60 = (max(var_60, (((var_10 ? var_8 : var_1)))));
                    arr_110 [i_8] [i_8] [12] [4] [i_15 - 2] [i_1] = var_11;

                    for (int i_32 = 0; i_32 < 19;i_32 += 1)
                    {
                        var_61 &= ((var_9 ? var_1 : var_10));
                        var_62 = (((var_5 ? var_7 : var_1)));
                        var_63 ^= ((var_13 ? var_0 : var_7));
                        arr_113 [i_15] [18] [i_8] [i_8] [18] [18] [i_32] |= ((var_0 ? var_3 : (var_11 / var_13)));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_33 = 1; i_33 < 17;i_33 += 1)
            {
                for (int i_34 = 0; i_34 < 19;i_34 += 1)
                {
                    {
                        arr_122 [i_1] [14] [i_1] [i_8] = ((var_9 ? var_7 : var_3));
                        arr_123 [i_1] [i_8] [i_33] [i_8] [i_1] = var_10;
                    }
                }
            }
            var_64 = ((var_2 ? var_1 : var_9));
        }

        for (int i_35 = 0; i_35 < 19;i_35 += 1)
        {
            arr_127 [i_1] = ((var_13 >= var_11) ? (((var_1 ? var_0 : var_10))) : ((var_10 ? var_7 : var_13)));
            var_65 = var_5;
        }
        for (int i_36 = 2; i_36 < 16;i_36 += 1)
        {
            var_66 = (var_1 != var_12);
            var_67 = ((-8812338641193427002 ? 32662 : 1));
        }
        arr_131 [15] [15] = (((((var_13 ? var_0 : var_5))) ? ((var_6 ? var_7 : var_1)) : var_8));
    }
    var_68 = (max(((((var_6 | var_13) < (var_11 % var_7)))), (((((var_2 ? var_11 : var_13))) ? var_10 : var_13))));
    #pragma endscop
}

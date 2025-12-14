/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (~var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 21;i_4 += 1)
                            {
                                var_11 = ((!(((-((var_6 ? var_9 : var_5)))))));
                                var_12 = (max(var_12, ((min(((4294967293 ? (-2147483647 - 1) : 29)), (-2147483647 - 1))))));
                                var_13 -= (--8968966024375085916);
                            }
                            var_14 = (arr_6 [i_0] [i_1] [i_2] [i_3]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        {
                            var_15 &= (8 - var_3);

                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 21;i_7 += 1)
                            {
                                arr_17 [i_0] [i_0] [17] = (~var_3);
                                arr_18 [i_0] [i_1] [i_0] [i_6] [i_7] [i_7] = ((1663495849 ? 3901842668 : (arr_14 [i_0] [i_7])));
                            }
                        }
                    }
                }

                for (int i_8 = 3; i_8 < 20;i_8 += 1)
                {
                    var_16 = (max(var_16, (arr_20 [i_0] [i_1] [i_0] [14])));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            {
                                arr_25 [i_0] [i_10] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((((!var_4) ? (arr_19 [20] [20] [i_8]) : (((max(var_3, -51))))))) ? var_0 : var_4));
                                arr_26 [i_0] [i_1] [i_0] [i_10] [i_0] = (!var_2);
                                var_17 &= (max(((max(var_5, 22984))), ((3166704238 ? (arr_19 [i_9] [i_8] [i_0]) : var_0))));
                                arr_27 [i_10] [16] = ((((min((((var_2 ? var_5 : 18229))), ((var_6 >> (((arr_11 [i_0] [i_1]) - 159))))))) ? 14 : var_8));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 21;i_11 += 1)
                    {
                        arr_30 [i_11] [i_1] [i_11] [i_11] = var_8;
                        arr_31 [i_0] [i_8] [i_8] [i_1] [i_0] [i_0] &= 35;
                        var_18 = (max(var_18, -48));
                    }
                    for (int i_12 = 2; i_12 < 18;i_12 += 1)
                    {
                        var_19 = (min(225, ((((min(var_3, 2137844130))) ? (arr_5 [i_8] [i_12] [i_8] [6]) : var_9))));

                        for (int i_13 = 0; i_13 < 21;i_13 += 1) /* same iter space */
                        {
                            var_20 = (max(var_20, ((max((arr_15 [i_8 - 1] [i_8 - 2] [i_8 - 1]), (arr_15 [i_8 - 1] [i_8 + 1] [i_8 + 1]))))));
                            arr_37 [i_13] [i_0] [i_8] [i_8] [i_1] [i_0] = var_2;
                        }
                        for (int i_14 = 0; i_14 < 21;i_14 += 1) /* same iter space */
                        {
                            var_21 = (((arr_24 [i_0] [i_1] [i_1] [i_12 + 1] [i_0]) && (((48 ? var_7 : 27024)))));
                            arr_40 [i_0] [i_14] = (-1464437582 && var_7);
                        }
                        for (int i_15 = 0; i_15 < 21;i_15 += 1) /* same iter space */
                        {
                            arr_44 [i_15] = ((-(max(((var_6 ? var_3 : var_0)), 2137844130))));
                            var_22 = ((((max(var_2, (arr_35 [i_0] [i_0] [i_0] [i_8 + 1] [i_12 + 3])))) || var_5));
                        }
                        for (int i_16 = 1; i_16 < 18;i_16 += 1)
                        {
                            var_23 = (((arr_24 [i_16] [9] [i_8] [i_1] [i_16]) % (~6)));
                            arr_49 [i_12] [i_12] [i_12] &= ((var_9 << ((((((!(arr_0 [i_12]))) ? var_3 : (max(var_0, 1581)))) - 1050529395))));
                            var_24 -= ((-29869 < -61) / (var_4 <= var_0));
                            arr_50 [i_0] [i_1] [i_16] [i_16] [i_16] = ((((max(0, 123))) ? ((29877 ? 1395702099 : 2137844125)) : ((((((var_7 ? var_7 : var_4)) != (!-16)))))));
                        }
                        arr_51 [i_0] [i_1] [i_8 - 2] [i_8 - 1] [i_1] &= 2910150500407141352;
                        var_25 = ((((((arr_8 [i_12] [2]) ? var_8 : -23949))) ? ((var_4 ? 32764 : (arr_8 [i_0] [i_1]))) : var_4));
                    }
                    for (int i_17 = 0; i_17 < 21;i_17 += 1)
                    {
                        var_26 = 8;
                        arr_55 [i_0] [i_1] [i_8 - 2] [i_1] [i_1] [i_1] &= var_4;

                        for (int i_18 = 2; i_18 < 20;i_18 += 1)
                        {
                            arr_59 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 7307647113520166074;
                            var_27 = var_7;
                        }
                        for (int i_19 = 0; i_19 < 21;i_19 += 1)
                        {
                            arr_62 [i_17] [i_17] [i_17] [5] [i_19] &= (arr_7 [i_1] [i_17] [i_8] [i_1]);
                            arr_63 [i_0] [i_19] [i_17] [i_8 + 1] [i_1] [i_0] [i_0] = (arr_53 [i_1] [i_8 - 1] [i_17] [i_19]);
                            arr_64 [i_0] [i_1] [i_8 + 1] [11] [i_0] = (((~239) + ((var_4 ^ (max(var_6, var_5))))));
                            var_28 = ((var_8 ^ (((((var_8 ? var_1 : var_1))) ? ((259570082 ? var_3 : (-2147483647 - 1))) : var_4))));
                        }
                        /* vectorizable */
                        for (int i_20 = 3; i_20 < 18;i_20 += 1)
                        {
                            arr_68 [i_20] [i_17] [i_0] [i_1] [i_0] = ((var_9 % ((1208822182 ? var_5 : 56642))));
                            arr_69 [i_0] [i_1] [i_0] = ((-((4 ? var_0 : 22648))));
                        }
                        for (int i_21 = 0; i_21 < 21;i_21 += 1)
                        {
                            arr_72 [i_0] [i_0] [i_0] [3] [i_8] [i_17] [i_21] = (-32767 - 1);
                            arr_73 [i_0] [i_1] [i_8] [i_17] [i_21] = var_3;
                            arr_74 [i_0] [i_1] [i_1] [i_1] [i_17] [i_21] [i_21] = ((~((-5164 ? 3034637632 : 208))));
                            var_29 -= ((~((-10667 ? (var_8 / 27458) : ((min(8893, var_5)))))));
                        }

                        for (int i_22 = 3; i_22 < 19;i_22 += 1)
                        {
                            var_30 = var_2;
                            arr_79 [i_0] [i_1] [i_8] [i_0] [i_22 + 2] [i_0] = (min(var_0, ((((arr_52 [i_22 + 1] [i_17] [i_8] [i_8 - 2]) != var_0)))));
                            var_31 -= var_7;
                        }
                    }
                }
            }
        }
    }
    var_32 = (max(var_32, (((-30594 ? (((max(var_5, var_3)))) : (max(1022444997, ((max(var_0, var_9))))))))));
    #pragma endscop
}

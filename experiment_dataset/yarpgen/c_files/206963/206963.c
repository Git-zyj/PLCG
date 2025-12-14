/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((arr_1 [1]) <= ((-51 ? ((min(var_0, var_5))) : ((((arr_1 [i_0]) <= var_3))))));
                arr_7 [i_0] [i_1] [i_0] = (max(var_4, (arr_2 [i_0 - 1] [i_1])));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_11 += -var_7;
                    arr_10 [i_1] [i_1] [1] = (--51);
                    var_12 = var_1;
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    var_13 += (var_4 ? (arr_5 [i_3] [i_3]) : (arr_0 [1]));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 15;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            {
                                var_14 -= ((!((((arr_5 [i_3] [i_1]) - -51)))));
                                arr_19 [i_0] [i_1] [i_3] [i_1] [10] [i_1] = ((!(((51 ? var_3 : var_1)))));
                            }
                        }
                    }

                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        var_15 = ((-(arr_20 [i_1] [i_1] [i_1] [i_1])));
                        var_16 = 48;
                    }
                    for (int i_7 = 1; i_7 < 15;i_7 += 1)
                    {
                        var_17 = ((~((-5213114251586577369 ? 141 : var_6))));
                        var_18 += -20083;
                        var_19 = 225;
                    }
                }
                var_20 = -57;

                /* vectorizable */
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    var_21 += ((101 ? -51 : var_7));
                    var_22 = (min(var_22, ((((arr_17 [i_0 - 1] [i_1] [i_8] [i_8] [i_1] [i_1] [2]) ? 1 : var_10)))));
                    var_23 *= ((var_6 ? 0 : (arr_21 [i_0] [i_0] [i_8] [i_8])));

                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {

                        for (int i_10 = 1; i_10 < 15;i_10 += 1)
                        {
                            arr_33 [3] [i_1] [i_1] [i_1] [1] [13] = 30;
                            var_24 = var_7;
                        }
                        var_25 *= (arr_23 [i_0] [i_1] [i_1] [10] [i_9] [i_9]);
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {

                        for (int i_12 = 4; i_12 < 15;i_12 += 1)
                        {
                            var_26 = 37;
                            arr_41 [i_0] [8] [1] [i_11] [i_12] &= var_8;
                            var_27 = 0;
                        }
                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            arr_46 [i_1] [i_1] = 13;
                            var_28 = var_0;
                        }
                        for (int i_14 = 2; i_14 < 13;i_14 += 1)
                        {
                            var_29 = (((arr_24 [i_1] [i_0 - 1]) << (4294967285 - 4294967279)));
                            var_30 -= var_1;
                            var_31 &= 215;
                            var_32 = (((((124 ? 1 : (arr_5 [i_1] [3])))) ? 53 : (arr_5 [i_1] [i_0 - 1])));
                        }

                        for (int i_15 = 0; i_15 < 16;i_15 += 1)
                        {
                            var_33 += -var_5;
                            arr_54 [13] [i_1] [i_1] [1] [i_1] [i_1] [i_1] = (((((var_8 ? (arr_44 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [15] [i_0] [i_0]) : 49))) ? (!-50) : (arr_39 [i_1] [1] [i_8] [i_1] [i_1])));
                            var_34 += (arr_20 [i_15] [10] [2] [10]);
                            var_35 &= 92;
                            var_36 = (max(var_36, 1));
                        }
                        var_37 ^= 113;
                        var_38 ^= -32268;
                    }
                    for (int i_16 = 4; i_16 < 13;i_16 += 1)
                    {
                        var_39 ^= 23;
                        var_40 += ((var_4 ? (arr_43 [i_16] [i_16 + 3] [i_16] [i_16]) : 126));
                        arr_57 [i_1] [15] = ((var_9 ? (~0) : (arr_17 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16] [i_16 + 1])));
                    }
                    arr_58 [i_1] [i_1] = 0;
                }
                /* vectorizable */
                for (int i_17 = 0; i_17 < 16;i_17 += 1) /* same iter space */
                {
                    var_41 += ((-50 ? var_10 : ((-51 ? 1 : 1))));

                    for (int i_18 = 0; i_18 < 1;i_18 += 1)
                    {
                        var_42 = (min(var_42, (((-(arr_1 [i_0 - 1]))))));
                        var_43 = (max(var_43, 0));
                    }
                    var_44 = (((arr_3 [i_1] [i_0] [i_1]) ? 5711 : (arr_52 [i_0 - 1] [i_0])));
                }
                for (int i_19 = 0; i_19 < 16;i_19 += 1) /* same iter space */
                {
                    arr_69 [i_1] = 5710;

                    /* vectorizable */
                    for (int i_20 = 0; i_20 < 16;i_20 += 1)
                    {

                        for (int i_21 = 2; i_21 < 14;i_21 += 1)
                        {
                            var_45 = ((!(arr_34 [i_1] [i_1] [i_0 - 1])));
                            arr_74 [i_1] [i_1] [i_19] [i_20] [1] [i_21] = 13;
                            var_46 = (min(var_46, (arr_5 [i_20] [i_19])));
                            var_47 = -32760;
                        }
                        for (int i_22 = 0; i_22 < 16;i_22 += 1)
                        {
                            arr_77 [i_20] [i_1] [i_19] [i_20] [i_22] &= ((32759 ? (-66 | 28) : (!var_3)));
                            arr_78 [i_0] [i_1] [i_0] = ((-(~-3615908388017426912)));
                            arr_79 [i_0] [i_1] [i_19] [1] [i_1] [i_20] [i_22] = (!12252);
                        }
                        var_48 = 3;
                        var_49 = (((arr_49 [i_1] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1]) ? (arr_49 [i_1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]) : 13));
                        arr_80 [i_0] [i_1] [i_20] [i_20] = (arr_40 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]);
                    }
                    /* vectorizable */
                    for (int i_23 = 1; i_23 < 15;i_23 += 1)
                    {
                        var_50 = var_4;
                        var_51 = (arr_48 [i_23 + 1] [i_0 - 1] [i_0 - 1]);
                        var_52 = (min(var_52, (((((var_1 ? 38 : 85)) * (!-32))))));
                    }

                    /* vectorizable */
                    for (int i_24 = 3; i_24 < 15;i_24 += 1) /* same iter space */
                    {
                        var_53 += (~0);
                        var_54 = (!(!58259));
                    }
                    /* vectorizable */
                    for (int i_25 = 3; i_25 < 15;i_25 += 1) /* same iter space */
                    {
                        var_55 = (max(var_55, 5));
                        var_56 -= (~69);
                        var_57 -= 57;
                        arr_89 [i_1] [14] [i_1] [i_1] = 0;
                    }
                    /* vectorizable */
                    for (int i_26 = 3; i_26 < 15;i_26 += 1) /* same iter space */
                    {

                        for (int i_27 = 2; i_27 < 14;i_27 += 1)
                        {
                            var_58 ^= (((50 ? -43 : var_1)));
                            var_59 &= var_3;
                            arr_98 [i_0] [i_1] = (((~-38) ? (arr_12 [i_0] [i_0] [i_0] [1]) : (arr_85 [i_27 - 1] [i_27] [i_27 - 1] [i_27 + 2] [1])));
                        }
                        var_60 = (!var_2);
                        var_61 = (arr_13 [i_26] [i_26] [i_26 - 2] [i_1]);
                    }
                    for (int i_28 = 3; i_28 < 15;i_28 += 1) /* same iter space */
                    {
                        arr_101 [i_1] [i_1] = ((~(!12664)));
                        var_62 += (((((-(((!(arr_49 [i_19] [i_1] [i_19] [i_19] [i_1]))))))) ? ((4092 ? -98 : (arr_65 [i_0 - 1] [i_0 - 1] [i_0 - 1]))) : ((((arr_0 [i_0]) ? ((min(4073, var_9))) : var_4)))));
                    }
                }
            }
        }
    }
    var_63 = (max(var_63, -54));
    var_64 = var_1;
    /* LoopNest 3 */
    for (int i_29 = 1; i_29 < 1;i_29 += 1)
    {
        for (int i_30 = 0; i_30 < 1;i_30 += 1)
        {
            for (int i_31 = 0; i_31 < 15;i_31 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_32 = 0; i_32 < 15;i_32 += 1)
                    {
                        for (int i_33 = 0; i_33 < 15;i_33 += 1)
                        {
                            {
                                var_65 += ((~(1590641525 == -70)));
                                arr_115 [i_29] [i_30] [i_29] [i_30] [i_33] = ((((min(var_6, (max(var_1, var_9))))) + var_0));
                            }
                        }
                    }
                    var_66 = (max(var_9, var_2));
                    var_67 *= -1;
                    var_68 = 50;
                }
            }
        }
    }
    #pragma endscop
}

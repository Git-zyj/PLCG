/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_3;
    var_21 = 1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_22 = (((!1472353066) ? ((var_4 ? 0 : 1039124305214880328)) : var_10));
        arr_2 [i_0] = (((var_6 - 1039124305214880328) ? 1107708252 : var_2));
        var_23 = (arr_0 [i_0] [i_0]);

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_24 = var_4;
            arr_6 [i_1] = ((arr_4 [i_1] [i_1] [i_1]) < 17407619768494671288);
            /* LoopNest 3 */
            for (int i_2 = 3; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 23;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 22;i_4 += 1)
                    {
                        {
                            arr_15 [i_1] = var_11;
                            var_25 = var_1;
                        }
                    }
                }
            }
            arr_16 [i_0] [i_0] &= (((arr_3 [i_0]) + var_7));
        }
    }
    var_26 = ((!(~1039124305214880327)));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            {

                /* vectorizable */
                for (int i_7 = 1; i_7 < 21;i_7 += 1)
                {
                    arr_24 [i_5] [i_5] [i_5] |= (((var_18 > 17407619768494671265) % var_2));
                    var_27 &= -23298;
                }
                /* vectorizable */
                for (int i_8 = 1; i_8 < 23;i_8 += 1)
                {
                    var_28 = (arr_12 [i_8] [i_8 + 1] [i_8] [i_8 + 1] [i_8 - 1] [i_8]);
                    arr_28 [i_5] [i_8] = (-2147483647 - 1);
                    arr_29 [10] [i_6] [i_8] = (((arr_11 [i_8]) >> (var_0 - 11693)));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            {
                                arr_35 [i_8] [i_6] [i_8 + 1] [i_6] [i_9] [5] [i_10] = (((((var_15 < (arr_31 [19] [19] [i_8] [i_8])))) % (arr_20 [i_6] [i_8] [i_10])));
                                var_29 = (arr_19 [i_6]);
                            }
                        }
                    }
                    arr_36 [6] &= (((var_8 > var_19) == 17407619768494671288));
                }

                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    arr_39 [17] [19] [i_11] [i_11] = ((((min((min(-32202, 22)), 234))) ? 1039124305214880328 : 210));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 24;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 24;i_13 += 1)
                        {
                            {
                                var_30 = (((~-793580022990588975) == (arr_21 [i_6])));
                                var_31 &= ((-var_3 << (-32183 + 32237)));
                                var_32 = ((!(var_6 <= var_14)));
                                arr_45 [i_5] [i_5] [i_11] [i_12] [2] = ((153 % (max(var_3, (arr_33 [i_5] [i_5] [i_5] [i_5])))));
                            }
                        }
                    }
                    var_33 = ((!((min((arr_41 [i_11] [i_5] [i_6] [i_11]), -1)))));
                    var_34 = (~120);
                }
                /* vectorizable */
                for (int i_14 = 1; i_14 < 22;i_14 += 1)
                {
                    var_35 ^= var_0;
                    arr_48 [i_5] [18] [i_5] [i_14] &= (32202 & -20);
                    var_36 = (arr_5 [i_14]);
                }
                for (int i_15 = 3; i_15 < 23;i_15 += 1) /* same iter space */
                {

                    for (int i_16 = 0; i_16 < 24;i_16 += 1)
                    {
                        arr_53 [i_5] [i_15] [i_16] = (2250102673828995881 < -4506);
                        arr_54 [i_5] [i_6] [i_15] [i_16] [10] [i_16] = -796225962;
                    }

                    for (int i_17 = 4; i_17 < 22;i_17 += 1)
                    {
                        var_37 = (min(var_37, var_2));
                        arr_57 [i_15] [i_17] = 96;
                    }
                    for (int i_18 = 0; i_18 < 24;i_18 += 1)
                    {
                        var_38 = (max((11632 % 1), (var_10 && var_8)));
                        var_39 &= -32767;
                    }
                    arr_61 [i_15] [i_6] [i_5] &= 4294967282;
                }
                for (int i_19 = 3; i_19 < 23;i_19 += 1) /* same iter space */
                {
                    var_40 = ((((!(((-(arr_17 [i_6] [i_5])))))) && ((min((max(1, var_2)), (((-31527 > (arr_46 [12] [4] [i_5])))))))));
                    arr_64 [i_6] [i_19] = 0;
                }
            }
        }
    }
    #pragma endscop
}

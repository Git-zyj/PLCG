/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= var_10;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 = (min(var_20, (((((min((arr_1 [i_0]), (arr_1 [i_0])))) ? var_13 : ((((((arr_0 [i_0]) ^ (arr_1 [i_0])))) ? (arr_1 [i_0]) : ((var_17 ? var_16 : var_4)))))))));
        var_21 -= (max(var_4, (((arr_0 [14]) ? 42886 : (arr_1 [i_0])))));
        var_22 = (min(var_22, 7057494235726247146));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    {
                        var_23 = var_11;
                        var_24 = var_17;
                        var_25 = (arr_10 [i_1] [i_2] [i_4] [i_4]);
                    }
                }
            }

            for (int i_5 = 2; i_5 < 11;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        var_26 ^= var_10;
                        arr_19 [2] [i_2] [10] [i_2] [i_2] [i_2] = (((arr_8 [i_1] [i_1]) & -var_3));
                        arr_20 [i_7] = (var_17 < var_15);
                    }

                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        var_27 = ((-(arr_18 [i_1] [3] [3] [9] [i_8] [i_5 - 2] [i_5 + 3])));
                        var_28 = (min(var_28, var_4));
                    }
                    for (int i_9 = 3; i_9 < 11;i_9 += 1)
                    {
                        arr_25 [i_1] [i_2] [i_5] [i_9] [i_9] = var_10;
                        var_29 ^= (((arr_14 [i_1] [i_1] [i_5] [i_9 + 2] [0] [i_9 + 2]) < var_0));
                        var_30 = (((arr_23 [i_1] [i_2]) ? -10177 : var_1));
                    }
                    arr_26 [i_1] [i_2] [i_1] [i_6] [i_5] = (7057494235726247148 < var_14);
                }
                for (int i_10 = 2; i_10 < 12;i_10 += 1)
                {
                    var_31 = (((arr_24 [i_10] [i_10 + 2] [i_10 - 2] [i_10 + 1] [i_10 + 1] [i_10 + 1]) ? var_15 : var_3));

                    for (int i_11 = 1; i_11 < 12;i_11 += 1)
                    {
                        var_32 = (min(var_32, ((((arr_0 [i_11 - 1]) ? ((42886 ? 1 : 22649)) : var_4)))));
                        var_33 = (12 | 230);
                        var_34 -= (((((arr_2 [i_1]) >= 2199023255551)) ? (((arr_23 [i_5] [i_2]) ? var_6 : (arr_28 [i_2] [i_2]))) : (-32767 - 1)));
                    }
                    for (int i_12 = 0; i_12 < 14;i_12 += 1)
                    {
                        var_35 = (max(var_35, ((((((arr_5 [i_2] [i_5]) ? var_8 : var_10)) ^ (2147483647 <= var_13))))));
                        arr_35 [8] [i_2] [i_5] [i_5] [i_10] = (~var_17);
                        var_36 = (var_15 && var_15);
                        var_37 = ((-(arr_14 [i_1] [11] [8] [0] [i_10 - 2] [i_5])));
                        arr_36 [i_10] [i_12] [i_5] = (((arr_11 [i_10 - 2] [i_10 - 2]) ? 4294967270 : var_4));
                    }

                    for (int i_13 = 0; i_13 < 14;i_13 += 1)
                    {
                        var_38 = 5887944001786473511;
                        var_39 = ((-(arr_37 [i_1] [i_1] [i_10] [i_1] [i_1])));
                    }
                    for (int i_14 = 0; i_14 < 14;i_14 += 1)
                    {
                        arr_42 [i_1] [i_10] = var_0;
                        var_40 &= 2199023255551;
                    }
                    var_41 = (1 ? (arr_15 [i_5 - 2] [i_2] [i_10 + 2] [i_10]) : (arr_23 [i_2] [i_2]));
                }
                for (int i_15 = 0; i_15 < 14;i_15 += 1)
                {
                    var_42 = (max(var_42, var_14));
                    var_43 = (arr_39 [i_1] [i_2] [i_2]);
                }
                var_44 = (min(var_44, (~var_9)));
                var_45 = (((arr_32 [i_1] [i_1] [i_2] [i_1] [i_1] [i_1] [i_1]) <= (((((arr_5 [i_1] [i_1]) || var_14))))));
            }
            var_46 ^= (((arr_37 [i_1] [i_2] [i_2] [i_2] [8]) * 11255));
        }
        for (int i_16 = 0; i_16 < 14;i_16 += 1)
        {
            var_47 ^= (25 - var_17);
            var_48 = ((((((!(arr_32 [i_1] [i_1] [i_1] [i_1] [i_1] [i_16] [6]))))) > ((var_9 ? (arr_39 [i_1] [i_16] [i_1]) : var_12))));

            for (int i_17 = 0; i_17 < 14;i_17 += 1)
            {
                var_49 = ((!(-7255 || -1126608549)));
                arr_50 [i_1] [2] [i_17] [i_17] = var_0;

                for (int i_18 = 2; i_18 < 13;i_18 += 1)
                {
                    var_50 = (((arr_49 [i_18 + 1]) + (arr_49 [i_18 + 1])));

                    for (int i_19 = 4; i_19 < 12;i_19 += 1) /* same iter space */
                    {
                        var_51 = (((((var_0 ? 1522889933 : (arr_40 [i_1] [i_18] [i_18] [i_18])))) ? (((var_14 ? var_17 : var_4))) : var_1));
                        var_52 = 1522889933;
                    }
                    for (int i_20 = 4; i_20 < 12;i_20 += 1) /* same iter space */
                    {
                        var_53 = var_9;
                        var_54 = ((((((arr_57 [i_1] [9] [i_17] [i_18] [i_20 - 2]) | var_3))) / var_9));
                        var_55 = var_7;
                        var_56 -= (((arr_51 [i_18 - 2] [i_18] [2] [i_1]) && (arr_34 [i_18 - 2] [i_16] [13] [i_20 - 1] [4] [i_16] [i_1])));
                        var_57 = ((!(((var_10 + (arr_13 [i_1] [i_1] [i_1] [i_1]))))));
                    }
                    var_58 = (max(var_58, ((((arr_32 [i_16] [i_16] [i_16] [i_18 - 2] [i_16] [8] [i_1]) ? (arr_32 [i_18] [i_16] [i_1] [i_18] [i_18 - 2] [6] [i_16]) : (arr_32 [6] [2] [i_16] [i_16] [12] [12] [i_16]))))));
                    arr_60 [i_17] [i_17] [i_18] [0] [i_17] [i_18] = -var_17;
                }

                for (int i_21 = 0; i_21 < 14;i_21 += 1)
                {
                    var_59 = var_3;
                    var_60 += (((((-(arr_28 [i_1] [i_16])))) ? ((var_5 ? var_1 : 7661687179608934431)) : (arr_5 [i_1] [i_1])));
                }
                for (int i_22 = 2; i_22 < 12;i_22 += 1)
                {
                    var_61 = (((1 <= var_12) > (arr_3 [i_22 - 1])));
                    arr_65 [i_1] [i_1] [i_17] [i_22 + 1] [i_22] [i_22 + 2] |= ((((arr_45 [i_1]) && var_13)));
                    var_62 = (((10204 + var_9) / (var_9 / var_1)));
                    var_63 = (max(var_63, (arr_58 [i_22] [i_22] [i_22 + 1] [i_1] [4] [i_22] [i_22 + 1])));
                    var_64 = (var_15 & var_3);
                }
            }
            for (int i_23 = 4; i_23 < 13;i_23 += 1)
            {
                /* LoopNest 2 */
                for (int i_24 = 0; i_24 < 14;i_24 += 1)
                {
                    for (int i_25 = 0; i_25 < 0;i_25 += 1)
                    {
                        {
                            arr_75 [i_1] [i_23] [i_1] [i_24] [i_25] [i_25] = (!var_3);
                            var_65 = ((var_13 ? var_7 : var_8));
                        }
                    }
                }
                var_66 = (min(var_66, (((var_12 ? (arr_51 [i_23 - 4] [i_23 - 3] [i_23 - 3] [i_16]) : var_11)))));

                for (int i_26 = 0; i_26 < 14;i_26 += 1)
                {
                    var_67 = (min(var_67, (~var_8)));
                    var_68 = (min(var_68, (((var_0 <= (arr_11 [i_23 + 1] [i_23 - 3]))))));
                    var_69 ^= var_15;

                    for (int i_27 = 0; i_27 < 14;i_27 += 1)
                    {
                        var_70 -= (var_17 & -var_18);
                        arr_80 [i_23] = 31;
                    }
                }
            }
        }
        arr_81 [i_1] = ((var_18 ? (arr_33 [6] [0] [i_1] [i_1] [2]) : (arr_62 [i_1] [i_1])));
    }
    #pragma endscop
}

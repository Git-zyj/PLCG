/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        arr_9 [i_2 + 3] [i_0] = (2 >= 42653);
                        var_18 = (min(var_18, ((-6 ? -6 : 1536))));
                        var_19 -= (((-6 ^ 5028919311568055776) | (((var_14 & (arr_1 [i_0] [i_3]))))));
                        var_20 = arr_1 [3] [i_0];
                        arr_10 [i_3] [i_3] [i_0] [i_0] [i_0] [i_0] = (min(((((max(var_6, -889490159))) ? 9331 : (max(var_2, var_9)))), -var_16));
                    }
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((((arr_11 [i_0]) ? var_9 : (((var_14 ? 517260629 : var_16)))))) ? (var_12 | var_2) : (((min((!0), (var_10 && var_5))))));
                        arr_14 [i_4] [i_0] [i_0] [i_0] = ((var_0 & (min((var_10 == var_15), ((var_3 ? var_9 : var_13))))));
                        arr_15 [i_0] [i_0] [i_0] = (((((arr_7 [i_0] [i_0] [i_0] [i_2 - 1] [i_4]) ? var_3 : (arr_7 [i_0] [i_1] [i_0] [i_2] [i_4])))) ? var_16 : var_16);
                    }
                    arr_16 [i_0] [i_1] [3] [i_1] = (((min(var_1, 5028919311568055773)) + (((5028919311568055777 ? (arr_4 [i_0] [i_2 + 2] [i_2 - 1] [i_0]) : (arr_4 [i_0] [i_2 + 3] [i_2 + 2] [i_0]))))));
                }
                arr_17 [i_0] [i_0] [i_1] = (((((var_1 ^ (min(-6, 13417824762141495842))))) ? ((((!((max(15872, 24750))))))) : (((arr_5 [i_0] [i_0] [i_1]) ? ((14279868817150092621 ? 15729637924549244913 : 0)) : 619152997))));

                /* vectorizable */
                for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                {
                    var_21 = -var_7;
                    arr_21 [i_0] [i_5] [i_0] [i_0] = (((var_10 ? var_15 : (arr_5 [i_0] [i_5] [i_1]))) + var_2);
                    var_22 = (!var_9);
                    var_23 = ((var_2 ? var_10 : (arr_0 [i_5])));
                    var_24 = (max(var_24, ((((5028919311568055761 * var_3) ? (!60) : ((695193605 ^ (arr_18 [i_1] [i_1] [i_1] [i_1]))))))));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                {
                    var_25 = (((arr_12 [i_1] [i_1] [i_0] [i_0] [i_0] [i_0]) && (arr_12 [i_6] [i_6] [1] [i_0] [i_0] [i_0])));
                    var_26 = (min(var_26, -var_0));
                }
                for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                arr_30 [i_8] [i_0] [i_7] [i_8] = 13417824762141495842;
                                var_27 = ((~((((arr_28 [i_0]) != ((max(24954, var_0))))))));
                            }
                        }
                    }
                    arr_31 [i_0] [i_0] = ((805306368 == (max(5028919311568055773, var_14))));
                    var_28 = (max(var_28, ((min((min((var_16 ^ var_14), (max((arr_2 [i_7]), var_16)))), ((((arr_1 [i_0] [i_1]) < (arr_5 [18] [i_1] [i_7])))))))));
                }
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 25;i_12 += 1)
                        {
                            {
                                arr_40 [i_11] [i_11] [i_0] [i_0] [i_1] [i_0] = -30949;
                                var_29 = (min((max(1290600263, 13417824762141495839)), (((((min((arr_0 [i_11]), var_15))) / ((var_2 ? 1564301976 : (arr_27 [i_0] [5] [i_10] [i_10]))))))));
                                arr_41 [i_0] [i_1] = (((!var_16) ? (min(-var_6, var_6)) : -1564301977));
                                var_30 = (max(var_30, var_7));
                                arr_42 [i_0] [i_0] [i_10] = (max((((arr_34 [i_0] [i_10]) ? (~var_7) : (((var_4 || (arr_2 [i_0])))))), var_1));
                            }
                        }
                    }
                    var_31 ^= ((((~(arr_29 [i_0] [i_1] [i_10] [22] [20] [i_0]))) - (!var_14)));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {
                        for (int i_14 = 4; i_14 < 23;i_14 += 1)
                        {
                            {
                                var_32 = (max(9331, (min(-1290600272, 13417824762141495841))));
                                arr_48 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = arr_2 [i_0];
                                var_33 = (~-1290600264);
                                var_34 = 13417824762141495817;
                            }
                        }
                    }

                    for (int i_15 = 0; i_15 < 25;i_15 += 1)
                    {
                        var_35 = (15269707233074653548 || 0);
                        var_36 = (((((13417824762141495840 / 18014397972611072) < var_3))) + var_15);
                    }
                }
            }
        }
    }
    #pragma endscop
}

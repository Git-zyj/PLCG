/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 3; i_2 < 13;i_2 += 1)
                {

                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_0] = (~var_10);
                        arr_14 [i_0] [i_1] [i_2] [i_0] = ((-(var_19 & var_13)));
                        var_20 = -1224466945629338578;
                        var_21 ^= ((127 ? 1 : -22408));
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                    {
                        arr_17 [i_0] = (((((1 ? var_9 : 1))) ? (arr_7 [i_2] [i_2] [i_2] [i_2 - 1]) : var_19));
                        arr_18 [i_1] [i_0] [i_0] [i_1] = (~var_13);
                        arr_19 [i_0] [i_0] [i_2] [i_1] [0] [i_2] |= (5870239463894067090 >> 0);
                        arr_20 [i_0] [i_0] = (arr_3 [i_2]);

                        for (int i_5 = 1; i_5 < 12;i_5 += 1)
                        {
                            var_22 += ((65535 ? 2147483641 : var_11));
                            arr_23 [i_0] [i_1] [i_1] [i_1] [i_0] = (((arr_1 [i_4]) < var_4));
                            var_23 = (((1 || 905784127) < (var_6 >= var_14)));
                        }
                    }
                    for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                    {
                        var_24 = (((arr_24 [i_0] [i_1] [i_2] [i_2 - 3]) ? var_3 : (arr_24 [i_0] [i_1] [i_2] [i_2 + 2])));
                        arr_27 [9] [i_1] [i_0] [i_1] [1] [i_1] = ((var_13 || (((-(arr_7 [i_0] [i_0 - 1] [i_0] [i_0 - 1]))))));
                        arr_28 [i_2] [i_0] [i_1] [i_6] = (((11 ? -10149 : 9634295696875530791)));
                        arr_29 [i_0] [i_0] [i_0] [i_0] [i_6] = -14;
                    }
                    for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                    {
                        var_25 = ((var_16 != ((0 ? (arr_15 [i_0] [i_1] [i_0] [i_0]) : var_2))));
                        arr_33 [i_0] [i_1] [i_2 + 1] [i_0] [i_0] [i_0] = ((var_0 ? (~var_7) : ((var_16 ? 65520 : -1210735449))));

                        for (int i_8 = 1; i_8 < 12;i_8 += 1)
                        {
                            arr_37 [i_8] [i_8] [i_0] [i_2 - 2] [i_0] [i_0] [i_0] = (var_11 <= var_13);
                            arr_38 [i_0] [i_0] = (((arr_4 [i_0] [i_7]) - ((~(arr_2 [i_0])))));
                            var_26 = (-1210735449 ^ -282736566);
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                        {
                            arr_42 [i_0] = var_17;
                            var_27 = var_11;
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                        {
                            arr_45 [i_0] [i_0] [i_0] [i_0] [i_10] = var_10;
                            var_28 = ((((arr_35 [i_0] [i_1] [0] [i_1] [i_10]) ? (arr_6 [i_7] [i_7]) : var_16)));
                        }
                        for (int i_11 = 1; i_11 < 12;i_11 += 1)
                        {
                            arr_50 [i_0] [i_0] [i_2] [i_7] [i_11] = (((arr_15 [i_0] [i_1] [i_1] [i_11]) && var_16));
                            var_29 = (((4294967295 - 1) || (!var_5)));
                            var_30 = ((65534 != 36363) ? 18446744073709551585 : -6957613861749089600);
                        }
                        var_31 = (((((var_16 ? (arr_25 [6] [i_0] [1] [i_2] [i_7]) : (arr_49 [i_0])))) && (((arr_16 [i_0] [i_1] [i_2 + 1]) < var_15))));
                        var_32 = (max(var_32, ((((arr_10 [i_0] [i_1] [i_7]) ? ((22 ? var_13 : var_0)) : var_19)))));
                    }

                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        arr_54 [i_0] [i_1] [i_2] [i_0] [i_1] [i_0] = (arr_31 [i_0] [i_2 - 2] [i_0]);
                        var_33 = var_16;
                        arr_55 [i_0] [i_0] [i_1] [11] [i_0] [i_0] = (arr_43 [i_0]);

                        for (int i_13 = 0; i_13 < 15;i_13 += 1)
                        {
                            var_34 = (max(var_34, ((((((!(arr_25 [i_0] [i_1] [i_2] [i_12] [i_13])))) != ((var_5 ? -1210735454 : 14)))))));
                            var_35 = (arr_47 [i_13] [0] [i_2 + 2] [i_1] [i_0]);
                        }
                        for (int i_14 = 0; i_14 < 15;i_14 += 1)
                        {
                            var_36 = (arr_60 [i_14] [i_12] [i_1] [i_0]);
                            arr_62 [i_0] [i_0] = (-8290874268799317776 == 2933);
                            var_37 ^= (arr_11 [i_0] [i_0] [i_2] [i_2] [i_0] [i_12]);
                        }
                        var_38 |= (var_15 & var_0);
                    }
                    for (int i_15 = 0; i_15 < 15;i_15 += 1)
                    {
                        var_39 = 0;
                        var_40 = var_5;
                    }
                    for (int i_16 = 0; i_16 < 15;i_16 += 1)
                    {
                        arr_70 [i_0] [i_1] [i_0] [i_16] = ((var_10 || (arr_5 [i_2] [i_1] [2])));
                        arr_71 [i_0] = (((-1779951237 + 2147483647) >> (40 - 17)));
                        var_41 -= (-23649 ^ 0);
                    }
                    var_42 = (var_14 && 65517);
                }
                var_43 = (min(-53504525, (((var_5 | var_9) & 4294967295))));
            }
        }
    }
    var_44 += (var_2 && 65504);
    #pragma endscop
}

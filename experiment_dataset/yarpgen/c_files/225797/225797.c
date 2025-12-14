/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((var_2 * var_17) ? -var_12 : (((((var_4 ? var_8 : var_10))) ? var_17 : var_3))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = ((-(~var_4)));
                    var_20 = ((((min(((((arr_3 [i_0] [i_0]) ? (arr_7 [i_0] [i_0] [i_0] [i_0]) : var_6))), (((arr_2 [i_1] [i_1]) * (arr_1 [i_0])))))) ? (max(1, ((var_0 ? (arr_6 [i_1] [i_2]) : (arr_8 [i_0] [3]))))) : (arr_9 [i_0] [i_2] [i_2])));
                    arr_10 [i_0] [i_0] [i_0] = -5240526131460343575;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_21 *= var_4;
                                var_22 = ((1 ? ((((max(1252, 62))) ? var_10 : var_14)) : ((253 ? (arr_6 [i_2] [i_3 + 1]) : 1309776885))));
                                var_23 = ((((max((255 || 1), (min((arr_12 [i_3] [i_3] [i_2] [i_2] [i_1] [i_0]), var_0))))) || (max((arr_9 [i_3] [i_3 + 1] [i_1 + 2]), (arr_9 [i_4] [i_3 + 1] [i_1 + 2])))));
                                var_24 = (((((~(((var_17 + 2147483647) >> 1))))) | (((((arr_1 [i_0]) ? (arr_1 [i_0]) : var_13)) ^ ((var_10 ? var_1 : var_14))))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                    {
                        var_25 = (max((arr_9 [2] [i_1 + 1] [i_1 + 1]), 1252));
                        var_26 *= ((max((max(var_8, var_9)), var_5)));
                        var_27 |= (~21849);
                    }
                    for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                    {
                        var_28 = (arr_12 [i_1] [i_1] [i_1] [i_1 - 2] [i_1] [i_1]);

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            var_29 = var_6;
                            var_30 &= (((arr_11 [i_1 - 2] [i_7]) ? (arr_11 [i_1 - 1] [i_7]) : (arr_11 [i_1 - 1] [i_7])));
                        }
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            arr_26 [7] [i_0] [i_0] [i_0] = ((var_9 ? (((57613 ? (arr_6 [i_1 - 1] [i_1 - 1]) : 1))) : (arr_6 [i_1 + 2] [i_1 + 2])));
                            var_31 = (arr_18 [14] [i_0] [i_2] [14] [i_0] [i_0]);
                        }
                        var_32 = min((13430527895508418152 * 21850), ((min(var_12, (arr_3 [i_0] [i_2])))));
                    }
                    for (int i_9 = 3; i_9 < 20;i_9 += 1)
                    {
                        var_33 = var_3;

                        for (int i_10 = 4; i_10 < 21;i_10 += 1)
                        {
                            arr_34 [i_0] [i_0] = (((((((max(57582, var_15))) & -13885))) ? var_15 : ((~(arr_11 [i_0] [i_0])))));
                            var_34 -= ((21849 ? ((max(var_13, var_15))) : (max(-125, var_12))));
                            var_35 = var_7;
                        }
                        for (int i_11 = 3; i_11 < 18;i_11 += 1)
                        {
                            var_36 = ((((arr_33 [i_1 + 2]) / (arr_33 [i_1 - 1]))));
                            arr_38 [i_0] [1] [i_0] [i_0] [i_0] [i_0] = (((max((arr_24 [i_11] [i_9] [19] [i_0] [i_1 - 1] [i_0] [1]), 2280532286)) - ((((var_10 == (var_0 || var_8)))))));
                            arr_39 [i_0] [i_0] = (((((10976 ? 0 : 1248))) > (((arr_4 [i_0]) ? (arr_33 [i_0]) : 13430527895508418160))));
                            var_37 |= -18446744073709551609;
                        }
                    }
                }
            }
        }
        var_38 = (((((((var_2 ? var_12 : var_12))) ? ((min(var_14, var_17))) : (arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] [6]))) % ((((((arr_28 [i_0]) ? var_0 : var_7))) ? ((var_9 ? var_17 : var_4)) : 20324))));
    }
    for (int i_12 = 4; i_12 < 21;i_12 += 1)
    {
        var_39 -= ((-(var_6 ^ 43698)));
        var_40 = (((min((arr_41 [i_12 - 3]), (arr_42 [i_12 - 4]))) ? -var_4 : ((max((arr_41 [i_12 - 4]), (arr_42 [i_12 + 1]))))));
        var_41 = (min(((min((arr_42 [i_12 - 2]), var_12))), (min((arr_42 [i_12 - 3]), 2014435010))));
        var_42 = (arr_41 [i_12]);
    }
    #pragma endscop
}

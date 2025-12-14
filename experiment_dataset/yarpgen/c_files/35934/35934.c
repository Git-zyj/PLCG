/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_2] [i_3] = ((!((((((arr_2 [i_1] [i_1] [i_1]) != (arr_3 [i_1] [i_3])))) <= (arr_2 [i_1 + 2] [i_3 + 1] [i_3 - 1])))));
                            arr_11 [i_0] [i_2] [i_2] [i_2] = var_8;
                            arr_12 [i_2] [i_2] [13] [i_0] = ((((((var_8 - var_12) ? var_7 : (((arr_7 [i_0] [i_0] [i_1 - 3] [i_2] [i_3]) ? 252 : -253))))) && 252));
                            var_13 = (max(var_13, 0));
                        }
                    }
                }
                var_14 += ((((((((arr_9 [i_1 + 2] [i_0] [i_0] [i_0]) + var_4))) ? (((!(arr_7 [i_0] [i_0] [i_0] [i_0] [i_0])))) : var_1)) <= ((min(var_0, (!var_9))))));
                arr_13 [i_1] [i_1 - 3] = (min((min((arr_5 [i_0] [i_0] [i_0] [i_0]), var_5)), (((((5630332685278796636 ? (arr_3 [i_0] [i_1]) : var_7)) == (((((arr_0 [i_0]) > (arr_2 [i_0] [i_0] [i_1]))))))))));
                var_15 = (((((!128) && (((-(-127 - 1)))))) ? ((-(((arr_0 [11]) ? 120 : (arr_3 [3] [3]))))) : (~53289)));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 12;i_6 += 1)
            {
                {
                    arr_24 [i_6] [i_6 - 1] [12] [i_5] = (arr_17 [i_5]);
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            {
                                arr_32 [i_4] [i_5] [3] [i_5 + 2] [3] [i_8] = (((~-253) - ((-(arr_28 [i_6 - 2] [i_5] [i_6 - 2] [i_6 + 1] [i_5])))));
                                arr_33 [i_7] [i_5] [i_6 + 1] [i_6] [i_8] = ((-((9223372036854775807 % (arr_5 [i_5 + 1] [i_5 + 2] [i_6 - 2] [i_6 - 2])))));
                            }
                        }
                    }
                    var_16 = (max(var_16, ((((((((arr_20 [i_6 + 1] [i_4]) != var_11)))) < (-9223372036854775807 - 1))))));

                    for (int i_9 = 2; i_9 < 11;i_9 += 1)
                    {
                        var_17 = (((((((127 + (arr_29 [i_5] [i_5] [i_5] [i_4] [i_5] [i_4])))) ? (0 >= -64) : (((arr_6 [i_4] [9] [i_6 + 1]) ? 252 : var_10))))) ? 984 : var_5);
                        arr_37 [i_5] [i_5] [i_6] [i_5] [i_9] [i_9] = (((127 ? var_4 : (var_4 - 1311442333))));
                        arr_38 [i_4] [i_4] [i_4] [i_4] [i_4] [i_5] = ((1297780277 ? var_9 : (((arr_23 [i_6 + 1] [i_9 - 2] [10]) % (arr_23 [i_6 + 2] [i_9 + 2] [i_6 + 2])))));
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        var_18 = (max(var_18, (((~(((arr_19 [i_5] [i_6]) ? (arr_22 [i_4] [2] [2] [i_4]) : var_8)))))));
                        var_19 = var_7;
                        var_20 = (arr_40 [i_5 + 1] [i_5]);
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        var_21 = (arr_41 [i_4] [i_5] [i_6] [i_11] [i_11]);
                        arr_45 [i_4] &= (((-9223372036854775807 - 1) ? ((229 ? var_3 : var_7)) : var_0));
                        arr_46 [i_6] [i_5] = ((var_10 ? (((229 > (arr_19 [i_4] [i_5])))) : 9));
                    }
                }
            }
        }
    }
    var_22 = (min(((var_8 ? (var_11 != var_6) : 202)), (min(var_9, -20))));
    #pragma endscop
}

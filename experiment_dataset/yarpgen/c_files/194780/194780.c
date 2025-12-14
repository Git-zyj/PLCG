/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (~4279423638837194704);
    var_18 = 4279423638837194699;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [i_1] [i_1] = ((+((((arr_8 [i_2] [i_1] [i_0]) ? (arr_4 [i_1] [i_1] [i_1]) : 8646911284551352320)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_19 -= -67108832;
                                var_20 *= (max(-8274200509534077231, 4279423638837194702));
                                var_21 = (((((min((arr_8 [i_0] [i_1] [2]), var_2)) + 9223372036854775807)) << ((-299733153 ? 0 : (arr_8 [i_0] [i_1] [i_0])))));
                                var_22 = (16382 ? -8646911284551352316 : 73);
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        arr_17 [i_1] [i_2] [i_1] [i_1] = (~var_1);
                        arr_18 [1] [1] [i_2] [i_2] [i_1] [i_2] = (((arr_4 [i_1] [12] [i_1]) ^ ((((~(arr_13 [1] [i_1] [i_2]))) | (arr_14 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1] [i_5])))));
                        var_23 = (i_1 % 2 == 0) ? ((max((((!(9223372034707292160 & var_8)))), ((var_7 << (((arr_6 [i_0] [i_1] [i_1]) - 7307))))))) : ((max((((!(9223372034707292160 & var_8)))), ((var_7 << (((((arr_6 [i_0] [i_1] [i_1]) - 7307)) + 34332)))))));
                    }
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        arr_21 [i_1] [14] [i_2] [i_2] [i_2] [i_2] = (min(((-((3199231372 ? var_9 : var_13)))), ((min((48 ^ var_6), (arr_16 [i_0] [i_1] [i_1] [i_6]))))));
                        var_24 += ((-(((!(arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_6] [i_0]))))));
                        var_25 = (arr_2 [i_6]);
                        arr_22 [i_6] [i_2] [i_1] [i_1] [i_0] [i_0] = var_4;
                    }
                    for (int i_7 = 1; i_7 < 19;i_7 += 1)
                    {
                        arr_26 [i_0] [i_0] [i_1] [6] = (((max((16376 | 3), 14167320434872356916)) ^ (min(((-1883372405694569469 ? (arr_24 [i_0] [9] [i_2] [i_2] [3]) : 15778491141408759011)), var_7))));
                        arr_27 [i_0] [i_1] [i_1] [i_7] = var_6;
                        arr_28 [15] [i_1] [i_2] [i_2] [i_2] [3] = -15855;
                    }
                    var_26 = (max((((min(var_2, 1)))), 1545460651));
                }
            }
        }
    }
    #pragma endscop
}

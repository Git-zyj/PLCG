/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [8] = ((127 & (((max(var_2, (arr_3 [i_0])))))));
                arr_5 [16] [i_1] &= (max((arr_1 [i_0] [i_0]), var_15));
                arr_6 [i_0] [i_0] = (min((max(var_11, (((var_11 ? (arr_3 [i_0]) : var_1))))), ((((96 ? (-9223372036854775807 - 1) : (arr_1 [1] [i_1]))) ^ 34896))));

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_16 = (max((arr_0 [i_4 - 1]), (min(-905691415, var_10))));
                                var_17 += ((((min((arr_13 [i_4 - 2] [i_4 - 2] [i_4 - 1] [i_4 - 2] [i_4 - 1]), (arr_13 [i_4 + 2] [i_4] [i_4] [i_4] [i_4])))) ? var_12 : (!112)));
                                var_18 = 255;
                                var_19 = (min(var_19, ((var_2 ? (((-1608966751 && 0) ? (32767 || 4289907526) : 178)) : ((1608966750 << (((-20248 + 20266) - 18))))))));
                            }
                        }
                    }
                    arr_14 [i_0] [i_0] = -905691415;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                arr_20 [10] [10] [i_0] [10] [i_6] = (max((((254 ? (((arr_18 [21] [i_0] [i_1]) ? 14913 : -256)) : 905691415))), -var_4));
                                arr_21 [i_0] [i_0] [i_5] [i_0] [i_6] [i_2] = var_2;
                                arr_22 [5] [12] [i_2] [i_0] [i_6] = var_7;
                                arr_23 [16] [16] [i_5] [i_5] [9] [i_0] [9] = ((((arr_0 [i_2]) ? (arr_0 [i_0]) : (var_1 < 2022511454))));
                                var_20 = (905691415 % var_15);
                            }
                        }
                    }
                }
                var_21 = -1721849842;
            }
        }
    }
    var_22 = (56 ? ((((((16716 << (155 - 146)))) ? -32767 : ((min(155, 155)))))) : (max(-var_5, var_3)));
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            {
                arr_29 [8] = ((18185754349563824591 ? (-9223372036854775807 - 1) : ((((max(var_5, var_2))) ? -14914 : (arr_18 [i_7] [i_7] [i_7])))));

                /* vectorizable */
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    var_23 ^= ((-14914 ? (arr_1 [i_8] [i_7]) : var_8));
                    arr_34 [i_7] [4] = var_0;
                    arr_35 [i_7] [i_7] [i_7] [i_7] = (180 ? 57344 : 1391252867);
                    var_24 += (((arr_7 [i_7] [i_7] [i_8] [i_9]) > var_6));
                    arr_36 [0] [0] [1] = (((var_2 || 8) == -256));
                }
            }
        }
    }
    #pragma endscop
}

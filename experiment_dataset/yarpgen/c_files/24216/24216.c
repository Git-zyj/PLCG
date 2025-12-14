/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_12 = (min(var_12, (!2194137442)));
        var_13 = (min(var_13, (13035704050527248240 | 156)));
        var_14 &= ((~((~((5411040023182303374 - (arr_0 [i_0])))))));
        var_15 = (min((((arr_0 [i_0]) << (((arr_2 [i_0 - 2]) - 2841575036)))), (((arr_2 [i_0 - 2]) + 1))));
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    arr_12 [i_2] = ((((((((566162947 ? 5411040023182303354 : 131068))) ? ((min(var_3, 3720419360))) : (min((arr_6 [i_1]), (arr_11 [8] [i_2])))))) ? (min(-60, 1)) : ((max((var_10 % var_2), 0)))));
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            {
                                var_16 = ((var_9 ? var_3 : (arr_5 [i_1])));
                                var_17 = (arr_10 [i_1] [19]);
                            }
                        }
                    }
                }
            }
        }
        var_18 *= (1319563 == 37749);
        var_19 ^= 1;
    }
    for (int i_6 = 3; i_6 < 22;i_6 += 1)
    {
        var_20 *= (((arr_11 [i_6] [20]) ? 1 : var_3));
        var_21 = (((-(min((arr_11 [i_6] [2]), var_1)))));
        arr_22 [8] = ((!(arr_8 [1])));
    }
    var_22 = (max((((min(var_11, var_7)) * var_7)), ((((((var_0 ? var_2 : 1))) ? (var_0 % var_4) : ((min(var_3, var_9))))))));
    var_23 = (-var_2 >= var_10);
    #pragma endscop
}

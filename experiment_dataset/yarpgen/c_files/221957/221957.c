/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_20 = (min(var_20, (arr_1 [i_0])));
                                var_21 = (min(var_21, ((min((!var_7), var_5)))));
                                var_22 ^= (min(((4294967285 ? (((1 > (arr_6 [i_0])))) : (arr_0 [i_1 + 1] [i_1 - 1]))), 191));
                            }
                        }
                    }
                    arr_14 [i_1] = ((min(((var_9 ? 3307737379 : -1842900121991081)), (9223372036854775807 > 1842900121991097))));
                    arr_15 [i_1] = ((((min(16, -1842900121991093))) == (min(var_13, (-1842900121991074 + 1842900121991074)))));
                }
                arr_16 [i_1] [16] = 1842900121991076;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 3; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                {
                    var_23 += (min((arr_20 [i_7] [i_6] [i_5 + 3]), (min(((3700976605260215557 ? 1842900121991092 : 164)), ((max((arr_18 [i_7] [19]), (arr_24 [20] [i_5]))))))));
                    arr_26 [i_6] [i_7] [i_6] = (~(max((arr_23 [i_5] [5] [i_5 + 2]), (arr_17 [i_6]))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            {
                                arr_31 [i_5] [i_7] [i_5 - 2] [i_5] [1] [15] [12] = (37587 ? (((((arr_24 [i_7] [6]) && 19)) ? 7712209466482925587 : 3700976605260215557)) : ((((min((arr_20 [i_5] [12] [12]), var_9))) ? (((arr_27 [i_5] [i_5] [i_7] [i_8]) ? var_9 : var_7)) : (max((arr_20 [i_6] [1] [i_9]), 1842900121991076)))));
                                var_24 = max(((((min(4272993733, var_14))) - (max(8477373485192988500, 0)))), (-1990138017845029823 + 140));
                                arr_32 [i_9] [i_7] [i_7] [i_5 - 1] = ((16 ? (((arr_18 [i_7] [i_7]) ? (arr_29 [i_5 - 3] [0] [i_7] [0] [i_9] [i_9]) : (arr_25 [i_5 - 2] [i_6] [i_7]))) : (arr_29 [i_5 + 2] [i_6] [i_6] [i_7] [i_5 + 2] [i_9])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 18;i_11 += 1)
                        {
                            {
                                arr_37 [18] [i_6] [i_6] [i_7] [i_10] [i_11 + 3] [i_7] = 221;
                                arr_38 [4] [6] [i_7] [i_11] &= ((((6295717995497835406 ? 597996148 : (arr_17 [i_5 + 3])))) ? ((((arr_19 [i_5 - 1]) != (arr_19 [i_5 - 1])))) : (1842900121991073 == var_2));
                                arr_39 [i_5 + 1] [i_11] [i_6] [i_10] [i_5] [i_7] = min((((arr_22 [12] [12]) % 65024)), (min(492, var_14)));
                                arr_40 [i_7] [i_11] [3] [i_10] [i_7] [i_6] [i_7] = (arr_19 [i_6]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((var_7 ? var_11 : (var_7 || 602818516))));
    var_14 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_15 = (((((arr_7 [i_0] [i_0 + 2] [i_0] [i_3]) ? (arr_7 [i_0] [i_0 + 2] [i_2] [i_4]) : (arr_7 [i_0] [i_0 + 2] [i_2] [i_3]))) / (arr_7 [i_0] [i_0 + 1] [i_2] [i_3])));
                                var_16 = ((max((arr_6 [i_0 + 2] [i_0] [i_0 + 1]), (arr_10 [i_0 + 1] [i_0 - 1] [i_0] [i_0 + 2] [i_0 + 1]))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        arr_15 [i_0] [i_0] [i_5] [i_5] [i_0] [i_0] = var_9;
                        var_17 = ((((((arr_11 [i_1] [i_1] [i_1] [i_1] [i_1]) / (arr_0 [i_0] [i_5])))) ? ((((arr_0 [i_2] [i_5]) || (arr_7 [i_0 + 1] [i_1] [i_0 + 1] [i_0 + 1])))) : ((var_5 ? -602818517 : (arr_9 [i_0 + 1] [i_1] [i_2] [i_2] [i_1] [i_1])))));
                        arr_16 [i_5] = ((1325658527308373642 << (!var_3)));
                        var_18 *= ((arr_10 [i_0] [i_1] [i_5] [i_5] [i_5]) ? (~var_10) : (arr_2 [i_0 - 1] [i_5 - 2]));
                    }
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        arr_20 [i_6] [i_2] [i_1] = (((((var_3 ? var_3 : var_11))) ? ((((arr_17 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 2] [i_0 + 2]) || (arr_14 [i_0 + 2] [i_0 + 1] [i_0 - 1] [i_0 + 1])))) : (var_10 < -var_9)));
                        var_19 = ((((((min(-1188446137, (arr_5 [i_0 + 2] [i_0 + 2] [i_2] [1])))) ? (((1558733417 ? (arr_11 [i_6] [5] [i_2] [i_1] [i_0]) : 116))) : (max(10088344466154542471, (arr_18 [i_0] [5] [i_0]))))) ^ ((var_6 / (arr_5 [i_0 - 1] [i_0] [i_0] [i_0])))));
                    }
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        var_20 = ((min(var_2, (arr_4 [i_0]))));
                        var_21 = (((((((5838997807004722913 ? 17063 : 18446744073709551608))) ? 1325658527308373665 : ((max(602818516, -17064))))) - ((12607746266704828702 ? 3193204335676001215 : ((max(1, (arr_22 [i_0] [i_0]))))))));
                        var_22 = ((((arr_8 [i_1] [i_1] [i_0 + 2] [i_1] [i_2] [i_2]) | var_2)) ^ (min((arr_8 [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_7] [i_7] [i_0 + 2]), (arr_8 [i_0] [i_0] [i_0 + 2] [i_7] [i_0] [i_2]))));
                        arr_23 [i_0 + 1] [i_0 - 1] &= var_6;
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 14;i_9 += 1)
                        {
                            {
                                arr_31 [i_0] [i_0] [i_2] [i_0] [i_9] = (min(((max((arr_1 [i_0 + 2]), (arr_9 [i_0 + 2] [i_1] [i_1] [i_2] [i_8] [i_9])))), (((arr_8 [i_0 + 1] [14] [i_0 + 2] [9] [i_9 - 3] [i_9 + 1]) | var_12))));
                                var_23 = ((((arr_4 [i_0 + 2]) ? (arr_4 [i_0 + 1]) : (arr_4 [i_0 - 1]))) | (((602818516 ? 438239545287740122 : -1188446137))));
                            }
                        }
                    }
                    var_24 = (max(var_24, (--65535)));
                }
            }
        }
    }
    #pragma endscop
}

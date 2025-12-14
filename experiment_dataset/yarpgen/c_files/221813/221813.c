/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= var_7;
    var_21 = ((((var_18 == (((min(var_1, var_4)))))) ? (max((max(var_17, var_18)), var_11)) : (var_9 * var_1)));
    var_22 = (-(((3114176547085071974 | var_8) ? var_7 : (var_17 && var_12))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = -1806391591307406304;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_1] = (((((var_12 & (((((arr_3 [i_0]) && var_9))))))) / var_0));
                    arr_9 [i_1] [i_1] [i_2] [i_1] = (arr_7 [i_2 - 1] [i_1] [i_1] [i_1]);
                }
            }
        }
        var_23 = ((((((((~(arr_7 [0] [2] [14] [2]))) != -var_0)))) <= ((1704501032 ? ((13 ? (arr_6 [i_0] [8]) : var_4)) : ((((arr_5 [i_0]) ? 65522 : 14)))))));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        var_24 = ((!(var_13 | 32767)));
        var_25 = (min(var_25, (((((9 ? var_10 : (arr_10 [i_3] [i_3]))) << ((((1704501032 ? var_7 : (arr_11 [i_3]))) - 201)))))));
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                {
                    arr_21 [i_4] [i_5] [i_6] [i_5] = (19 / 12);
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 19;i_8 += 1)
                        {
                            {
                                var_26 = (max(var_26, ((((((-(((arr_11 [i_8 + 1]) / var_11))))) ? ((min(65526, 14))) : (((arr_16 [i_8 + 2] [i_8 + 2]) & (arr_16 [i_8 - 1] [i_8 - 1]))))))));
                                arr_27 [2] [i_5] [i_6] [i_7] [i_8 + 1] = ((~((-((var_19 ? 3 : (arr_16 [i_4] [i_4])))))));
                            }
                        }
                    }
                }
            }
        }
        arr_28 [i_4] = (arr_16 [i_4] [i_4]);
        var_27 = 2590466263;
        arr_29 [i_4] = ((((((((var_15 ? var_18 : var_14))) ? (arr_19 [i_4] [i_4] [i_4] [i_4]) : (arr_20 [i_4] [i_4] [i_4] [i_4])))) ? (arr_12 [i_4]) : 14));
        var_28 = ((((~(arr_15 [i_4]))) << (var_16 - 52228)));
    }
    #pragma endscop
}

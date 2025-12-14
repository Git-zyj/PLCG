/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= (((((((var_2 ? var_11 : var_0)) + var_6))) ? var_3 : var_9));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_15 = ((((((var_8 + var_11) < (var_5 / 51)))) * (((max(var_10, var_8))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_16 = ((+(((arr_9 [i_0] [i_2] [i_1] [i_3 + 1]) ? 30817 : var_10))));
                                var_17 += var_4;
                                var_18 = (min((arr_5 [i_1] [i_2] [i_1]), 70));
                                var_19 = (min(var_19, (((-9220220489689365155 ? (((arr_0 [i_3 - 1] [i_4 - 1]) ? var_7 : (arr_0 [i_3 + 3] [i_4 + 1]))) : ((((arr_3 [i_2 - 1] [i_2 - 1]) ? (arr_3 [i_2 - 1] [i_2 - 1]) : (arr_3 [i_2 + 1] [i_2 - 1])))))))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 7;i_5 += 1)
                    {
                        var_20 = (min(var_20, ((((arr_10 [i_2 + 1] [i_0] [i_0] [i_5 + 3]) ? (arr_10 [i_0] [i_0] [i_0] [i_2]) : (arr_10 [i_0] [i_5] [i_0] [i_0]))))));
                        var_21 += (((((var_12 ? (arr_10 [i_5] [i_0] [i_0] [i_0]) : 229))) ? 206 : (arr_1 [i_0] [i_2])));
                        var_22 = (((((arr_2 [i_2] [i_1]) * var_2)) / ((-(arr_4 [i_0] [i_1])))));
                        var_23 |= ((var_8 > (arr_14 [i_5 + 1] [i_2] [i_2 - 1] [i_2] [i_2 + 1])));
                    }
                    for (int i_6 = 1; i_6 < 9;i_6 += 1)
                    {
                        var_24 = var_4;
                        var_25 &= ((((42821 ^ (arr_12 [i_6 - 1] [i_6] [i_6 + 2] [i_6 + 1] [i_6 + 1]))) >> (((arr_12 [i_6 + 2] [i_6] [i_6 + 2] [i_6 - 1] [i_6 + 1]) - 3067797374))));
                    }
                }
            }
        }
    }
    #pragma endscop
}

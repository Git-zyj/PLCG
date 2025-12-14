/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_17 = ((~(-9223372036854775807 - 1)));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = (((((((-9223372036854775800 ? 65505 : 38733))) || (((var_5 & (arr_3 [i_0])))))) ? ((((((arr_2 [i_0]) ? 10646094313435551729 : 1)) >= (((~(arr_1 [i_0]))))))) : ((8 ? (var_0 || var_15) : 9))));

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        arr_10 [i_0] [13] [i_1] [i_3] = ((~(-9223372036854775807 - 1)));
                        arr_11 [i_1] [i_1] [i_2] [i_3] = (((((((9223372036854775807 ? var_1 : var_13)) / (max(129, var_16))))) | (((-9223372036854775800 + var_8) ? (var_11 * 7800649760273999881) : var_11))));
                    }
                    for (int i_4 = 2; i_4 < 16;i_4 += 1)
                    {
                        arr_14 [i_1] [i_2] [i_2] = (((max(((6 >> (var_7 - 33))), ((~(arr_1 [i_1 + 1]))))) >> ((((((max(var_10, (arr_9 [i_0] [13] [i_1] [i_0])))) ? var_8 : (arr_6 [i_0] [i_1 - 1] [i_1 - 1]))) - 113))));
                        var_19 = ((((17591917608960 ? 8766309244116652534 : 1091067740)) / ((max((~var_9), (max((arr_13 [i_0] [17] [i_2] [i_4]), 1)))))));

                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 17;i_5 += 1)
                        {
                            arr_17 [i_0] [i_1] [i_1 + 1] [i_2] [i_2] [i_1] [i_5] = ((9223372036854775799 ? (!var_12) : (arr_9 [i_0] [i_1] [i_1] [i_4])));
                            arr_18 [i_1] [i_1 - 1] [1] [i_1] [i_5] = ((-((7 ? -7025 : 1159035307))));
                        }
                        arr_19 [i_0] [i_1 + 1] [i_2] [i_1] [8] = var_8;
                    }
                    arr_20 [i_0] [i_1] = ((~(min(var_5, ((var_0 ? (arr_2 [1]) : var_14))))));
                }
            }
        }
    }
    var_20 = ((var_4 ? (((var_8 ? (-1 ^ var_7) : (var_6 > var_8)))) : (~var_3)));
    #pragma endscop
}

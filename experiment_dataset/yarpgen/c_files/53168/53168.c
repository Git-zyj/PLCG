/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((((var_15 ? var_5 : var_0))) || (((var_17 ? var_7 : var_15))))) || var_3));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_0 [i_0 + 1]) & (((~var_14) ? (arr_0 [i_0 - 1]) : (arr_2 [i_0] [i_0])))));
        arr_4 [2] = var_11;
        arr_5 [i_0] [1] = 194;
        arr_6 [i_0] [i_0] = (arr_1 [9]);
        arr_7 [i_0] = (-16 ? (arr_0 [i_0]) : ((((arr_2 [i_0] [9]) <= (arr_1 [i_0])))));
    }

    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    arr_16 [i_1] [i_1] [i_1] = ((((((arr_8 [15] [i_2]) ? (var_11 && var_11) : (((131469800724024051 >= (arr_9 [i_1]))))))) ? ((((((arr_11 [i_3] [i_3]) ? (arr_11 [2] [7]) : var_13))) ? (((min((arr_10 [i_1] [i_2]), (arr_10 [i_2] [i_3]))))) : ((var_12 ? var_16 : var_15)))) : (arr_13 [i_1] [i_2] [i_3])));
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_21 [i_1] [i_3] [6] = (((arr_8 [i_3] [i_2 - 1]) && ((min(((min(13560, var_7))), (((arr_14 [i_1] [0] [9]) ? (arr_17 [i_3] [i_2] [1]) : var_17)))))));
                                arr_22 [i_5] [i_1] = ((((((((arr_8 [i_2 - 1] [i_2 - 1]) + 2147483647)) << (var_2 - 1238579865)))) ? (max((arr_11 [i_2 + 1] [i_4 - 1]), (arr_12 [i_4 - 1] [i_4] [i_5]))) : -131469800724024021));
                            }
                        }
                    }
                    arr_23 [i_1] [1] [i_3] [i_3] = ((var_15 ? ((131469800724024073 ? 127 : -4852)) : (arr_11 [i_2 - 1] [i_2])));
                    arr_24 [i_1] [11] [i_1] [15] = ((15816 ? 15816 : 131469800724024049));
                }
            }
        }
        arr_25 [i_1] = ((var_11 | (arr_10 [15] [i_1])));
    }
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        arr_30 [i_6] = ((((((arr_29 [i_6]) ? ((var_12 ? 1962 : var_7)) : (var_4 > var_17)))) ? 1 : var_15));
        arr_31 [i_6] [12] = (((!var_14) ? var_6 : (min(-15799, (((arr_26 [1]) ? (arr_27 [1]) : var_2))))));
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] |= ((var_6 ? var_1 : (max(((min(-1113094446, var_11))), (arr_11 [i_1 - 1] [i_3 + 1] [i_3 + 1] [i_0] [i_3])))));
                                arr_14 [i_2] [i_2] = ((min(var_9, (arr_4 [i_0] [i_1 + 1] [i_2]))));
                                arr_15 [i_2] [15] [i_2] [15] [i_2] [15] = (21884 ^ 16256);
                            }
                        }
                    }
                }
                arr_16 [i_0] = ((((min(var_0, 16256))) ? ((max(60880, 116))) : (arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 1])));
                var_15 = 121;
            }
        }
    }
    var_16 = var_14;
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 7;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                {
                    arr_28 [i_5] = var_10;
                    arr_29 [i_5] [i_6 + 1] [i_6 - 1] = ((((max((~var_2), (var_0 ^ var_2)))) || (var_12 / var_1)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 1; i_8 < 9;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            {
                arr_35 [i_8] [i_9] = ((((min(49279, 255))) ? (((((max((arr_31 [i_8] [i_9]), var_10))) < (max(var_5, (arr_8 [i_9])))))) : var_11));
                arr_36 [i_8 + 2] = (((min(((var_11 ? var_2 : (arr_32 [i_8 + 2]))), var_4)) < (((((var_10 ? var_7 : var_0))) ? (min(var_5, var_8)) : ((min(-6116653319837173508, 49289)))))));
                arr_37 [i_8] |= ((((((min(var_10, 58638))) ? ((min(var_6, 15766))) : var_3)) / (((!49280) ? (((!(arr_7 [i_8] [i_9])))) : 9))));
            }
        }
    }
    #pragma endscop
}

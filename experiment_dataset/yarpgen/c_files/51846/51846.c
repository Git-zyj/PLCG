/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_1] [i_3] [i_4] = ((((min(var_9, var_4))) / ((21463 ? (arr_6 [i_1 - 1] [i_1 - 1] [i_0 - 2] [7]) : var_10))));
                                var_17 = (min(var_17, ((min((((arr_10 [i_1 + 2] [i_1 + 2] [i_1] [i_1] [i_1 + 2] [i_1] [i_1]) ? 90 : (arr_10 [i_1 + 2] [i_1 - 1] [i_1] [i_1] [i_1] [i_1] [10]))), (min((((1777268677 >= (arr_10 [i_0 - 1] [20] [i_2] [6] [i_4] [i_2] [i_2])))), (((arr_9 [i_1] [i_1] [i_2] [i_2] [i_2]) & (arr_7 [i_0]))))))))));
                            }
                        }
                    }
                    var_18 ^= (((((var_7 ? 1777268679 : var_9))) * (min(var_14, (arr_8 [i_0 + 1] [i_0])))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 1; i_5 < 9;i_5 += 1)
    {
        var_19 ^= ((arr_0 [i_5 - 1] [16]) / var_0);
        var_20 = (((arr_7 [i_5]) && (2517698627 != 2517698611)));
        var_21 = ((var_1 || (((var_3 ? var_4 : (arr_6 [i_5] [10] [0] [i_5 - 1]))))));
        var_22 ^= (10532 ? var_8 : (arr_8 [i_5 + 1] [i_5 + 1]));
    }
    for (int i_6 = 2; i_6 < 23;i_6 += 1)
    {
        arr_16 [i_6] [i_6 + 1] = (min((max(9223372036854775807, 0)), (arr_14 [i_6 - 1] [i_6 + 1])));
        /* LoopNest 2 */
        for (int i_7 = 3; i_7 < 23;i_7 += 1)
        {
            for (int i_8 = 4; i_8 < 22;i_8 += 1)
            {
                {
                    var_23 = -2540583915268222796;
                    var_24 = (max(var_24, 132));
                }
            }
        }
        var_25 = (max(4503599627354112, 1777268668));
        arr_22 [i_6 - 2] = ((((max(var_2, 116))) ? (min((max(var_14, (arr_17 [i_6]))), 1)) : (arr_21 [i_6] [1] [i_6])));
        arr_23 [i_6] = var_1;
    }
    #pragma endscop
}

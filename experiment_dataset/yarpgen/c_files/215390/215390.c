/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;
    var_16 = -92;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = (max(1, (max(var_12, -0))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_17 = var_10;

                        /* vectorizable */
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            var_18 *= var_10;
                            arr_13 [i_4] [i_0] [i_0] [i_1 - 1] [i_0] [i_0] [i_0] = (((arr_4 [i_0]) ? (arr_12 [i_0] [i_1 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1]) : var_9));
                        }
                        /* vectorizable */
                        for (int i_5 = 3; i_5 < 20;i_5 += 1)
                        {
                            arr_17 [i_0] [i_1 - 1] [i_1 - 1] [13] [i_3] [i_0] [i_5 - 3] = var_1;
                            arr_18 [5] [5] [i_1 - 1] [i_2] [i_3] [i_5] [i_0] = var_10;
                            arr_19 [1] [i_5 + 1] [12] [i_3] [16] [1] [1] |= (((var_0 ? -5428817523095409138 : (arr_10 [18]))));
                        }
                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((((arr_7 [i_1 - 1] [1] [i_1 - 1] [i_1 - 1]) ? (arr_7 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]) : 45)) / (min(32, (arr_7 [i_1 - 1] [i_1] [i_1] [i_1 - 1])))));
                            var_19 = ((80 ? ((9223372036854775807 ? ((2036709777 ? var_6 : 1)) : ((0 ? 39 : var_11)))) : (((arr_4 [i_0]) ? 0 : (arr_22 [i_1 - 1] [i_6 + 1] [i_0] [i_1 - 1] [i_3])))));
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 20;i_7 += 1)
    {
        arr_27 [i_7] = 13;
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 19;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 1;i_10 += 1)
                {
                    {
                        var_20 = (max(var_20, ((((arr_16 [i_7 + 1] [i_7 + 1] [i_7 - 1]) ? (((arr_24 [20] [i_8]) ? 123 : (arr_32 [i_10] [i_9] [i_8] [i_7]))) : (!var_2))))));

                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            arr_39 [i_7] [i_8] [i_8] [i_9] [i_11] = (arr_34 [i_8] [i_9] [i_10 - 1] [i_11]);
                            var_21 *= ((73 ? -22 : 9223372036854775807));
                        }
                        arr_40 [20] [i_9] [1] [i_10] = 131;
                        var_22 = 2036709782;
                    }
                }
            }
        }
        arr_41 [i_7] = (arr_34 [i_7] [i_7] [i_7 + 1] [i_7]);
    }
    #pragma endscop
}

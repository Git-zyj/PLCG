/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    var_15 += (min(21, 0));
                    var_16 = ((var_14 ? (((37106 << (((((arr_3 [i_2]) ? var_11 : -3358)) - 208))))) : var_3));
                    arr_7 [i_2] = (-(min((arr_3 [i_0]), (max(10292549170517828394, 3358)))));
                }
            }
        }
        arr_8 [i_0] [i_0] |= var_12;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        arr_12 [i_3] = (arr_1 [i_3]);
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                {
                    arr_19 [i_3] [i_3] [i_3] [i_3] = -22;
                    arr_20 [i_3] [i_3] = 28430;
                    var_17 = (arr_0 [i_4 - 2] [i_5]);
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            var_18 = (max(-var_6, ((1 ? -3358 : 3701564336))));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    {
                        var_19 = -3358;
                        arr_32 [i_6] [i_7] [i_8] [i_8] = var_1;

                        for (int i_10 = 0; i_10 < 0;i_10 += 1)
                        {
                            var_20 += (((((arr_33 [i_10 + 1] [i_7] [i_10 + 1] [i_10] [i_10 + 1] [i_10 + 1] [i_10 + 1]) ? (arr_28 [i_10 + 1] [13] [i_10 + 1] [i_10] [i_10 + 1] [i_10 + 1]) : (arr_34 [i_10 + 1] [i_10 + 1] [7] [14] [i_10 + 1]))) / (((~(((var_8 && (arr_10 [16] [16])))))))));
                            arr_35 [i_6] [i_6] [i_10] [i_9] [i_10] [i_6] = (((12 | 8192) ? (((arr_10 [i_10 + 1] [i_10 + 1]) ? ((~(arr_16 [12] [12] [i_9]))) : var_10)) : (((3347 == -4) + (arr_1 [i_6])))));
                            var_21 &= ((-(arr_14 [i_7] [i_10 + 1])));
                            var_22 = (arr_9 [i_7]);
                        }
                    }
                }
            }
            var_23 = (arr_1 [i_6]);
        }
        arr_36 [12] = ((!((((((arr_6 [i_6] [i_6] [4] [i_6]) + 9223372036854775807)) << (((((arr_6 [i_6] [12] [i_6] [i_6]) + 4001941960634945794)) - 56)))))));
        var_24 |= (arr_27 [1] [i_6]);
    }
    var_25 = ((((max(var_12, ((var_14 ? var_10 : var_6))))) >= (var_0 == var_13)));
    #pragma endscop
}

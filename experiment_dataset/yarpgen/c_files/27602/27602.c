/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_18 = (arr_0 [i_0 - 1]);
        var_19 = (arr_1 [i_0 - 2]);
        var_20 ^= ((3 ? (var_12 == 70) : ((~(arr_2 [i_0 - 2])))));
    }
    /* LoopNest 3 */
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    var_21 = (((~var_15) >> ((((arr_4 [i_2]) == (var_12 != var_14))))));
                    var_22 = ((!((min((var_7 - var_7), (arr_6 [i_1] [i_1 + 2] [i_2 + 2]))))));
                    var_23 -= ((~(((arr_9 [i_1 + 1] [i_2]) ? (arr_7 [i_1 + 1] [i_1 + 1] [i_1 + 2]) : (arr_7 [i_1 - 1] [i_1 - 1] [i_1 + 1])))));

                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_24 = ((-(arr_5 [i_4] [i_2 + 1])));
                            arr_16 [i_1] [i_2] [i_2] [i_2] [i_1] [i_1] [i_5] = (((((var_12 ? (arr_9 [18] [18]) : (arr_1 [i_4])))) ? var_4 : var_3));
                            var_25 = ((((((arr_13 [i_1 + 2] [i_2 + 1] [i_3] [i_3] [i_4] [i_5]) ? var_12 : (arr_0 [i_3])))) ? (arr_5 [i_2 + 1] [i_2 + 1]) : (((arr_5 [i_2 + 2] [i_3]) ? (arr_10 [i_1 + 2] [i_2] [i_3] [i_4] [9]) : var_3))));
                        }
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            arr_19 [i_1 + 1] [i_2] [i_2] [i_2] [i_2] [i_6] = (((((((arr_3 [i_1 + 2] [i_1 + 2]) + var_3)) != 89)) ? ((((((arr_0 [i_2]) >> (var_14 - 575907242223795209)))) ? (((arr_9 [i_1] [i_1]) ? (arr_0 [i_4]) : var_16)) : (arr_4 [i_1]))) : ((((arr_1 [i_1 - 1]) || -var_8)))));
                            var_26 = 70;
                        }
                        arr_20 [i_1 - 1] [i_2 + 3] [i_3] [i_4] &= (arr_13 [i_1] [i_3] [i_3] [i_2] [14] [i_4]);
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 2; i_7 < 10;i_7 += 1)
    {
        for (int i_8 = 3; i_8 < 11;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 12;i_9 += 1)
            {
                {
                    var_27 = (((~70) | (((arr_13 [i_8] [i_8 - 1] [i_8] [i_8] [i_8 + 1] [i_9 + 1]) ^ 196))));
                    arr_29 [i_7] [i_7] [i_8] [i_9] = (max((((((arr_10 [i_7] [i_7] [i_7] [i_7 - 2] [i_7]) ? (arr_22 [i_7]) : 78)) * (arr_14 [i_7] [i_8] [i_9] [i_9 - 2] [i_9]))), (((~(~var_13))))));
                    arr_30 [i_7] [i_7] [i_9] [i_7] = ((((max((arr_6 [i_8] [i_8] [i_9]), (arr_6 [i_8] [i_8 + 1] [i_8 + 1])))) != (((arr_15 [i_7] [i_7 + 3] [i_8 - 3] [i_7] [i_9 - 1] [i_7]) | ((var_0 & (arr_1 [i_7])))))));
                }
            }
        }
    }
    #pragma endscop
}

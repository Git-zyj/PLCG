/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34470
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = var_9;
        var_10 = ((((((~(arr_0 [i_0 - 1] [i_0 - 1]))) + 2147483647)) >> (var_7 + 53)));
        arr_3 [i_0] = (((((((var_4 | (arr_1 [i_0]))) & var_0))) ? ((~(arr_0 [i_0 - 1] [i_0 + 3]))) : (((var_8 + 2147483647) >> (((arr_1 [i_0 + 4]) - 82))))));
        arr_4 [i_0 + 4] [i_0 + 4] = ((((((var_3 + var_8) && (((57 ? 0 : -3)))))) << ((((var_0 + (var_4 / var_0))) + 49))));
    }
    for (int i_1 = 3; i_1 < 17;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            {
                                arr_16 [i_1] [i_1] [i_1] [i_2] [i_5] [i_2] |= ((var_3 ? ((((arr_10 [i_4 - 1]) >= ((min(var_1, var_4)))))) : (((((~(arr_6 [i_1] [2]))) > (((arr_6 [i_1] [i_1]) + (arr_8 [1] [i_4] [11]))))))));
                                arr_17 [i_1] [i_2] [7] [i_4] [i_5] = (!var_7);
                            }
                        }
                    }
                    var_11 = (i_1 % 2 == 0) ? (((((~(arr_8 [i_1 + 2] [i_1] [i_1 + 3]))) < (((((arr_6 [i_1 - 1] [i_1]) + 2147483647)) >> (((arr_13 [i_1 - 2] [i_1] [i_1 - 2] [i_1 + 3]) + 129))))))) : (((((~(arr_8 [i_1 + 2] [i_1] [i_1 + 3]))) < (((((arr_6 [i_1 - 1] [i_1]) + 2147483647)) >> (((((arr_13 [i_1 - 2] [i_1] [i_1 - 2] [i_1 + 3]) + 129)) - 240)))))));
                }
            }
        }
        var_12 = (max(var_12, (((!(((~-69) < ((~(arr_13 [i_1] [2] [i_1] [i_1]))))))))));
        arr_18 [i_1] [13] = ((var_9 ? ((var_1 ? var_7 : (arr_15 [i_1] [i_1 + 4] [i_1 - 1] [i_1] [i_1 + 2]))) : var_5));
        arr_19 [i_1] = (((((-(arr_14 [5] [i_1 + 4] [i_1] [i_1 - 2] [i_1])))) ? (((!(!var_5)))) : ((((arr_14 [i_1 + 1] [7] [20] [i_1 + 3] [i_1 + 3]) >= (((arr_9 [i_1] [15] [i_1 + 4] [i_1]) << (((arr_8 [i_1] [i_1] [9]) + 73)))))))));
    }

    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        var_13 = (max(var_13, (((var_3 << (((arr_15 [i_6] [i_6] [i_6] [i_6] [i_6]) + 65)))))));
        var_14 += (((arr_21 [i_6] [i_6]) ^ (arr_6 [i_6] [i_6])));
    }
    var_15 = (min(var_4, (((~var_7) | var_3))));
    var_16 = var_5;
    #pragma endscop
}

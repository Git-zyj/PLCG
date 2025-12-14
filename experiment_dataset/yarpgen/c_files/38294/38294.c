/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((max(var_8, var_1)) - (16383 & 17592051826688))) + (-19408 % 111)));
    var_11 = -19408;
    var_12 = 1;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_13 = 255;
        arr_2 [i_0] = (((max((~18446744073709535232), (arr_1 [i_0] [i_0]))) != (((-(max(var_5, (arr_0 [i_0]))))))));
        var_14 = (-9223372036854775807 - 1);
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_15 = (max((((~(((-2 < (arr_6 [i_1]))))))), ((-(arr_5 [i_1])))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    {
                        var_16 = (min(3292384490, (((5887935065441543587 >> (1002582806 - 1002582800))))));
                        arr_15 [i_1] [i_2] [i_3] [i_2] = ((+(((arr_9 [i_1] [i_2] [i_3 + 1] [i_4]) ? (arr_9 [i_1] [i_2] [i_1] [i_1]) : (arr_9 [i_1] [i_2] [i_3 - 3] [i_2])))));
                        arr_16 [i_1] [i_2] [i_2] [i_3 - 3] [i_1] [i_4] = (((0 % (((((arr_8 [i_1] [i_1]) >= var_2)))))));
                    }
                }
            }
        }
        arr_17 [i_1] &= (((arr_10 [i_1] [16] [i_1] [i_1]) >= ((((((arr_8 [i_1] [i_1]) * (arr_11 [10] [10])))) ? var_0 : (arr_9 [i_1] [0] [i_1] [i_1])))));
        arr_18 [i_1] = ((((arr_4 [i_1] [i_1]) + (arr_10 [i_1] [10] [i_1] [i_1]))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        arr_21 [i_5] [i_5] = (((arr_5 [i_5]) * (((var_3 ? (arr_10 [i_5] [16] [i_5] [i_5]) : (arr_20 [i_5]))))));
        arr_22 [i_5] = (((((50533 ? var_9 : (arr_4 [i_5] [i_5])))) ? (arr_13 [i_5] [i_5] [2] [i_5] [i_5]) : ((var_7 ? 0 : var_6))));
        arr_23 [i_5] [i_5] = (((arr_1 [i_5] [i_5]) && 1));
        arr_24 [i_5] = (arr_12 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]);
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 14;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [3] [i_1] [8] [i_0] = (((arr_1 [i_0] [13]) ? 9223372036854775807 : (((((9223372036854775807 ? 122 : (arr_0 [i_0])))) ? var_11 : (~var_10)))));
                        var_15 += (min(((2 ? 4 : -9223372036854775801)), (arr_2 [i_3] [i_0])));
                        arr_13 [i_0] [i_1] [14] [i_0] = 9223372036854775807;
                    }
                }
            }
        }
        var_16 = (max(var_16, ((max((min(((~(arr_6 [14]))), (((~(-32767 - 1)))))), (((max((arr_8 [i_0] [i_0]), (-32767 - 1))) - ((~(arr_8 [8] [i_0]))))))))));
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            {
                var_17 += (((~var_9) ? ((((max((arr_15 [2]), 17179869184))) ? ((var_7 ? (arr_16 [i_4] [i_5]) : var_5)) : (-32767 - 1))) : 0));
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 12;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            {
                                var_18 = (max(var_18, ((max((((arr_23 [i_7 + 3] [i_7 + 3] [4] [i_7 + 3] [i_7] [i_6]) ? ((9223372036854775807 ? var_11 : 9223372036854775807)) : (arr_24 [10] [i_7 - 3] [i_7 + 4] [i_7]))), ((((~93) ? (~44) : ((-32 | (arr_25 [12] [i_5] [i_8] [i_7] [i_8])))))))))));
                                var_19 = (((((var_1 ? var_9 : 0))) ? (((min((arr_14 [2]), 0)) - (arr_29 [i_7 - 2] [i_7] [i_7 + 2] [i_6] [i_5] [i_4]))) : 955388859));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 16;i_11 += 1)
                        {
                            {
                                var_20 = (min(((((arr_17 [i_11]) ? (arr_17 [i_4]) : (arr_17 [1])))), ((8 ? 255 : 955388859))));
                                var_21 |= (arr_29 [6] [3] [i_5] [10] [i_10] [4]);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 16;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 16;i_13 += 1)
                    {
                        {
                            var_22 = (max(0, ((18446744073709551611 ? (~9046610640113894138) : 255))));
                            var_23 |= 0;
                        }
                    }
                }
            }
        }
    }
    var_24 = (max(var_24, var_4));
    var_25 = (max(var_25, var_10));
    #pragma endscop
}

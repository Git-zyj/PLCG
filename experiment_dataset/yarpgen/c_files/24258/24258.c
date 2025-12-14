/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_16 ^= ((((var_13 ? (arr_5 [i_1] [i_3] [i_4]) : var_11)) / var_2));
                                var_17 = (max(var_17, 4));
                                var_18 -= 234;
                            }
                        }
                    }
                    var_19 = (max(var_19, ((((arr_6 [i_0] [i_1 + 1] [i_1 + 1] [i_1 + 1]) ? 32764 : 65521)))));

                    for (int i_5 = 3; i_5 < 7;i_5 += 1)
                    {
                        var_20 = (max(var_20, ((((arr_4 [i_1] [i_1] [i_5 - 3]) ? 0 : (arr_4 [i_1] [i_1 - 1] [i_5 - 1]))))));
                        var_21 = (max(var_21, (((-(arr_7 [i_5] [i_5 + 1] [i_5 + 2] [i_2]))))));
                    }
                    for (int i_6 = 4; i_6 < 9;i_6 += 1)
                    {
                        var_22 = (((((arr_11 [i_1]) ? 3981350580626621050 : 1)) | (arr_2 [i_0] [i_6 + 1])));
                        arr_19 [i_0] [i_1] [i_2] [2] = ((var_1 ? (arr_10 [i_1] [i_1 - 2] [i_0 - 1] [i_0] [i_0] [i_0 + 2]) : var_11));
                        arr_20 [4] [i_1] [i_2] [i_2] [i_0] = (((var_1 | 252) - (((arr_10 [i_0] [i_0] [5] [i_0] [i_0] [i_0]) ? (arr_3 [i_0]) : var_11))));
                    }
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        var_23 = ((~var_3) ? (arr_24 [i_0] [i_0] [i_1] [i_2] [i_7] [i_7]) : (arr_14 [i_0]));
                        arr_25 [i_0] [i_2] [i_7] = var_2;
                    }
                }
            }
        }
        arr_26 [i_0] [i_0] = (((112 && 32764) ? (arr_0 [i_0 - 1]) : (arr_15 [1] [i_0 - 1])));
        var_24 = (max(var_24, ((((var_1 > var_6) ? ((var_8 ? 4424 : var_6)) : (((var_1 < (arr_8 [i_0] [i_0])))))))));
    }
    var_25 = (max(var_25, ((((~var_6) ? (~227) : (((((var_2 * (-127 - 1)))) ? var_13 : 110)))))));
    #pragma endscop
}

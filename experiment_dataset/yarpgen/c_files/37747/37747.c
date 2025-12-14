/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_16 = -0;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_17 = ((((var_1 ? (arr_1 [i_1 - 1] [i_1]) : 0)) << (var_7 - 23987)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_18 ^= (((1 + 49735002783333420) ? (arr_6 [i_2]) : var_12));
                                arr_13 [i_0] [i_1] = 1;
                            }
                        }
                    }
                    arr_14 [i_1] [i_1] [i_1] = ((var_11 - (((32631 ? ((23470 ? var_2 : -21147)) : ((-5683 ? 0 : 8064)))))));
                    var_19 = (arr_6 [i_1]);
                    var_20 ^= var_10;
                }
            }
        }
        var_21 = ((~(arr_0 [i_0])));
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 18;i_7 += 1)
            {
                {
                    var_22 = (min(var_22, 32767));

                    for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
                    {
                        var_23 = ((!(arr_2 [i_6])));

                        for (int i_9 = 2; i_9 < 18;i_9 += 1)
                        {
                            arr_25 [i_9 - 2] [i_8] [i_7] [i_6] [i_6] [i_5] = ((~(arr_20 [i_9] [i_9] [i_9 - 1] [i_9])));
                            var_24 -= ((+((1 + (((-9223372036854775807 - 1) | 21164))))));
                        }
                        for (int i_10 = 2; i_10 < 18;i_10 += 1) /* same iter space */
                        {
                            arr_29 [i_5] [i_5] [i_5] [i_10] = (((((arr_1 [i_7 - 1] [i_7 - 1]) ? 1 : (arr_6 [i_6]))) << (((((var_9 ? 53 : var_8)) != (((-9223372036854775807 - 1) ? var_7 : 21128)))))));
                            var_25 = 1016;
                            var_26 ^= (arr_5 [i_6] [i_5] [i_5]);
                        }
                        for (int i_11 = 2; i_11 < 18;i_11 += 1) /* same iter space */
                        {
                            arr_34 [i_5] [i_6] [i_7] = (((((-1 ? -1033 : (arr_27 [i_5] [i_6] [i_7 + 1])))) & (arr_12 [i_6] [i_8] [i_7] [i_6] [i_6])));
                            arr_35 [i_5] [i_7 + 1] [1] = (arr_22 [i_7]);
                            arr_36 [i_5] [i_5] [i_5] [i_5] [i_5] = ((!(arr_2 [i_11])));
                        }
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 19;i_12 += 1) /* same iter space */
                    {
                        arr_39 [i_5] [i_6] [i_7 + 1] [i_12] = ((~(arr_10 [i_12] [i_5] [i_6] [i_5] [i_5] [i_5])));
                        var_27 = (min(var_27, (~1488438649)));
                        var_28 = arr_38 [i_12] [i_12] [i_7 - 1] [i_7 + 1] [i_6] [i_5];
                    }
                }
            }
        }
    }
    #pragma endscop
}

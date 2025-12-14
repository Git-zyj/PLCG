/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((((((arr_1 [i_0]) - (var_11 - var_8)))) ? (((arr_1 [1]) ? (arr_1 [i_0]) : (arr_1 [i_0]))) : (((arr_2 [i_0]) & -1558006766))));
        arr_5 [10] = (((((26 ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0])))) ? var_3 : ((var_5 ? (arr_3 [i_0]) : (arr_3 [i_0])))));
        var_14 |= ((15 ? var_1 : (((1 && 253) ? (arr_0 [i_0] [i_0]) : 5))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    arr_14 [i_1] [i_1] [i_1] = (((arr_8 [i_1]) ? ((237 ? (arr_8 [i_2]) : (arr_8 [i_2]))) : (255 ^ var_8)));
                    arr_15 [i_1] [i_2] [i_1] = ((var_13 ? ((((((arr_1 [14]) & (arr_10 [i_3])))) & (((arr_7 [i_1]) & 18446744073709551609)))) : ((max((-2147483647 - 1), (arr_1 [i_3]))))));
                    var_15 += min(((((((arr_1 [1]) * 233)) * ((10589 / (arr_6 [i_1])))))), ((+(((arr_10 [i_2]) / var_5)))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 2; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    {
                        arr_25 [i_1] [0] [0] [0] [i_1] = (((((var_5 ? (arr_19 [i_5 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1]) : var_2))) ? ((((arr_2 [i_4 - 2]) ? (arr_2 [i_4 - 2]) : (arr_19 [i_5 - 1] [i_4] [i_4 + 1] [i_4 + 1])))) : 11));

                        for (int i_7 = 3; i_7 < 16;i_7 += 1)
                        {
                            arr_29 [i_1] [i_4 + 1] [i_1] = ((947801851 & ((((~var_3) ? var_4 : ((~(arr_2 [i_5]))))))));
                            var_16 = (((arr_23 [i_1] [i_4 - 1] [i_4] [i_5 + 1] [i_5 - 1] [i_7 - 1]) ? (arr_13 [2]) : ((((((~(arr_2 [i_1]))) + 2147483647)) << (((arr_1 [i_6]) - 93))))));
                            var_17 = ((-((var_5 * (arr_19 [i_4 + 1] [i_4 + 2] [i_5 + 1] [i_7 + 1])))));
                        }
                    }
                }
            }
        }

        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            arr_34 [i_8] [i_1] = 1028;
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        {
                            arr_43 [i_1] [i_8] [i_1] [i_10] [14] = (((((var_9 ? (arr_38 [i_9]) : 10575))) ? (((arr_38 [i_9]) ? 64482 : (arr_38 [i_1]))) : (((arr_38 [i_1]) * (arr_38 [i_8])))));
                            arr_44 [i_1] [i_10] [10] [i_1] = (arr_18 [i_10]);
                        }
                    }
                }
            }
            arr_45 [0] [i_1] [i_1] = 222;
            var_18 *= var_1;
        }
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            var_19 *= (((((1 - var_12) ? (4294967287 + var_13) : (arr_40 [i_1] [6] [i_1] [i_1] [i_12] [i_12]))) / (((arr_47 [16]) | 15192438093195424382))));
            var_20 = ((64506 ? ((((33451 + 7453974225700725566) ? (((var_8 ? (arr_9 [1]) : var_8))) : (arr_22 [i_1] [i_1] [i_1] [i_1])))) : (((arr_17 [i_1] [i_12]) ? ((var_13 ? (arr_8 [i_1]) : var_5)) : ((((arr_22 [i_1] [i_1] [i_1] [4]) ? (arr_33 [i_1]) : 3005950160)))))));
        }
        var_21 = ((((((arr_12 [i_1] [i_1] [i_1] [i_1]) ? (arr_8 [i_1]) : (arr_8 [i_1])))) ? (arr_8 [i_1]) : (((arr_8 [i_1]) ? -71 : (arr_8 [i_1])))));
        arr_49 [i_1] = (((1006 * var_7) ? ((((arr_26 [i_1] [i_1]) / (arr_26 [i_1] [i_1])))) : (var_12 / var_9)));
    }
    var_22 = (((((var_10 && var_0) / ((var_12 ? var_3 : 167)))) * ((var_7 & (1031 | var_8)))));
    var_23 = ((((var_11 ? (((var_11 ? -1635664244 : 111))) : ((var_13 ? var_7 : var_5))))) ? var_10 : var_6);
    #pragma endscop
}

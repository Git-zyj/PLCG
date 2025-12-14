/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_10 = (~5645301604123078106);

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_11 = 8267009808635787068;
            var_12 = ((78398354 || ((((arr_1 [i_0] [i_1]) ? 5645301604123078117 : (arr_1 [i_1] [i_1]))))));
            var_13 = ((-var_5 ? ((min(8267009808635787070, var_4))) : ((-(max(18446744073709551615, 8267009808635787044))))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 14;i_4 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((((arr_3 [i_4] [i_0] [i_0]) ? 21051 : (arr_9 [i_0] [i_0] [i_0])))) ? (arr_7 [i_3 - 1] [i_3] [i_3]) : (arr_9 [i_3 - 1] [i_3] [i_0])));

                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            arr_16 [i_0] [i_0] [i_3] [i_3 + 1] [0] [i_0] = (((23758 ? 2271152976 : var_5)));
                            var_14 *= (((arr_1 [i_5 - 1] [i_5 - 1]) ? 4844 : var_6));
                            arr_17 [i_2] [i_2] [i_3] [i_4 + 1] [i_5 - 1] &= -0;
                            var_15 |= 2106909611;
                        }
                        for (int i_6 = 2; i_6 < 14;i_6 += 1)
                        {
                            arr_22 [i_3 + 1] [i_3] [i_3 + 1] [i_3] [i_0] = 0;
                            arr_23 [i_0] [i_0] [i_3] = (arr_8 [0]);
                        }
                        var_16 = ((((arr_19 [4] [i_3 + 1] [i_3 + 1] [i_4]) ^ 5645301604123078113)));
                        var_17 = ((!(((var_6 ? var_9 : var_4)))));
                        arr_24 [i_0] [i_0] = 2106909606;
                    }
                }
            }
            var_18 *= (!-2605513932559597913);
            var_19 *= (~-16452);
        }
    }

    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        arr_28 [i_7] = (max((-122 | -16452), (-2106909611 || -8267009808635787070)));
        arr_29 [i_7] [i_7] |= ((((min(12, ((495462249 ? (arr_1 [i_7] [i_7]) : (arr_10 [8] [14] [i_7] [14] [i_7])))))) ? ((max((arr_3 [i_7] [8] [4]), (arr_3 [i_7] [10] [i_7])))) : ((2101787149 ? var_1 : (((arr_1 [i_7] [i_7]) ? 1 : -3513))))));

        for (int i_8 = 3; i_8 < 10;i_8 += 1)
        {
            var_20 = -15580;
            var_21 += (arr_18 [i_8] [i_8 - 2] [i_8 - 2] [i_8] [i_8 - 1] [i_8 + 2] [i_8]);
        }
        arr_32 [i_7] [i_7] = ((((!((max((arr_20 [i_7] [i_7] [i_7] [i_7] [i_7]), 8267009808635787044))))) ? (-2147483647 - 1) : -1152163336));
        var_22 = 5645301604123078121;
    }
    #pragma endscop
}

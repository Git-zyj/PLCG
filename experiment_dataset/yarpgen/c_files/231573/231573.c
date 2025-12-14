/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, (((((((var_4 < 215) & ((max(var_0, var_0)))))) || ((max(((var_3 ? var_8 : var_3)), (((var_9 ? var_5 : var_5)))))))))));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                arr_8 [i_0 + 2] [i_0 + 2] = var_7;
                arr_9 [8] [i_1] [i_2] = 3831673929328504567;
                var_12 = (-(max((arr_2 [i_0 + 2]), 120)));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        {
                            var_13 ^= (min(1, ((((var_0 ? 1 : 1588)) > (max(29, 503316480))))));
                            arr_17 [i_2] [i_1] [i_2] [i_3] [i_3] [i_0] [i_1] = (((var_0 / (arr_10 [i_3]))) << (((((120 ? (arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4]) : (arr_7 [i_0] [13] [i_2] [i_3])))) - 3132987619)));
                        }
                    }
                }
                arr_18 [i_0] [i_1] [i_0] = 18279076215859321721;
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        {
                            var_14 += ((2803240540897537070 ? (arr_1 [i_0]) : var_2));
                            arr_26 [i_0] [0] [i_5] [i_6 + 4] [3] = (arr_23 [i_0] [i_0] [i_1] [i_5] [i_6] [i_7]);
                        }
                    }
                }
                var_15 = (((arr_24 [i_0 + 2] [10] [i_1] [10]) ^ (arr_13 [i_1 + 2] [i_5] [i_5])));
            }
            arr_27 [i_0] = 8371604179361107974;
            arr_28 [6] [i_1] = (((((((max((arr_14 [i_0 + 2]), 8371604179361107984))) ? var_0 : 67043328))) ? 0 : (((arr_10 [2]) >> 17))));
        }
        var_16 = (arr_21 [i_0] [i_0]);
        var_17 = (min((max((((-25857 ? 40 : 31410))), 18367284679578117095)), (!-11)));
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_18 = 8991675092934853570;
        var_19 = (max((((arr_30 [i_8]) ? var_9 : var_7)), var_2));

        /* vectorizable */
        for (int i_9 = 1; i_9 < 22;i_9 += 1)
        {
            var_20 = 69;
            arr_35 [i_8] [i_8] [i_8] = (i_8 % 2 == 0) ? (((var_9 << (((arr_32 [i_8]) - 3248527090))))) : (((var_9 << (((((arr_32 [i_8]) - 3248527090)) - 4042944378)))));
        }
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {
                    {
                        arr_43 [i_8] [i_10] [i_11] [i_8] [i_12] [i_12] |= (arr_42 [i_8] [i_10] [i_10] [i_12]);
                        arr_44 [i_8] [i_8] = (max((((-(!2686)))), (arr_34 [i_8])));
                    }
                }
            }
        }
        var_21 = arr_33 [21] [21] [i_8];
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= ((((~(!1))) % ((max(-49, var_5)))));

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0] = (((((max(255, (-32767 - 1)))) ? (arr_4 [i_0 - 1] [i_0] [i_0 - 1]) : (1365729702 / 24))));
                    var_18 = (min(var_18, 1));
                    var_19 *= ((((48692 ? (arr_2 [i_1]) : (arr_1 [i_1]))) | (((1 ? 1 : var_0)))));
                }
            }
        }

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_20 = (max((((((1 ? (arr_2 [i_0]) : var_3))) ? var_6 : (arr_1 [i_0]))), (((~(((arr_9 [i_0 - 1] [i_3]) ? (arr_4 [i_3] [i_0 - 1] [i_0]) : (arr_8 [i_0] [i_3]))))))));
            var_21 -= var_1;
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 21;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            var_22 &= (arr_5 [i_0 - 1] [i_0 - 1] [i_4] [16]);
                            arr_19 [i_5] [i_3] [0] [6] [i_0] [i_0 - 1] [i_5 + 1] = (-1040525531 > (((arr_1 [i_0]) ? -4294967282 : 120)));
                            var_23 ^= var_15;
                            var_24 = (max((((255 - (arr_15 [4] [i_3] [1] [i_4] [i_5] [19])))), (((arr_1 [i_0]) * 1))));
                            arr_20 [i_0] [i_0] [i_4] [i_5] [i_6] = 11890757390482169212;
                        }
                        arr_21 [i_0 - 1] [i_3] [i_0] [i_4] = ((53 ? 0 : 241));
                    }
                }
            }
            var_25 = (max(((((min(394409446, (arr_3 [i_0 - 1] [15])))) | 4149773749)), ((((15 > 246) / (~var_11))))));
        }
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            arr_25 [i_0] = ((~((max((arr_23 [1]), 71)))));
            var_26 = ((max(((989737266 ? 130 : 1040525534)), 1732)));
        }
        for (int i_8 = 1; i_8 < 22;i_8 += 1)
        {
            var_27 = (min(var_27, ((min((8 ^ 7), (arr_23 [i_0]))))));
            arr_29 [i_0] [i_0] [i_0] = max(((((((262143 ? (arr_23 [i_8]) : -64))) ? 136 : (arr_26 [i_0 - 1] [i_0] [i_0 + 1])))), (min(((((arr_8 [i_0] [5]) * -32761))), (arr_12 [i_0]))));

            /* vectorizable */
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                var_28 -= 16005;
                var_29 = ((((9 / (arr_31 [i_9]))) * var_3));
            }
        }
        var_30 ^= ((1 ? (126 ^ 3305230030) : var_14));
        var_31 = ((~((989737257 ? 989737257 : 63803))));
        var_32 &= -15863;
    }
    var_33 = var_2;
    #pragma endscop
}

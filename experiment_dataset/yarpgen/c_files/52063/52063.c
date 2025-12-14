/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_0] = ((+(((arr_3 [i_2] [2]) ? var_6 : ((14489125375649906032 ? 14489125375649906047 : 3957618698059645568))))));
                    var_19 = ((((min((arr_0 [i_0 + 2]), (arr_0 [i_0 - 1])))) ? (((max(var_2, 80)) >> (((max(32172, 9223372036854775807)) - 9223372036854775803)))) : (((arr_2 [i_0 - 1]) ? (arr_2 [i_0 - 2]) : (arr_2 [i_0 - 1])))));
                    arr_7 [i_0] [i_1] [i_2] [i_0] = (((arr_5 [i_0 - 1]) & ((((!3957618698059645584) ? ((min(33340, (arr_0 [i_0])))) : (!var_15))))));
                    arr_8 [7] [7] = (max((min(var_0, (arr_4 [3] [15] [i_2] [i_2]))), (min((arr_4 [17] [21] [i_0] [i_0]), (arr_0 [i_1])))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 4; i_3 < 9;i_3 += 1)
    {
        var_20 = (((arr_1 [i_3 - 3] [i_3 - 1]) << (((arr_10 [i_3 - 3] [i_3 - 1]) - 13776))));

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            arr_14 [i_4] = ((arr_9 [i_4] [i_3 - 2]) ? (arr_9 [i_3 - 4] [i_4]) : (arr_9 [i_3] [i_4]));
            var_21 *= ((((((arr_1 [i_4] [i_3]) + (arr_13 [i_4] [i_4] [i_3])))) ? (arr_9 [i_3 - 4] [4]) : (!-7420672138882338878)));
        }
        for (int i_5 = 2; i_5 < 6;i_5 += 1)
        {
            var_22 = (!(var_6 * var_18));
            arr_17 [i_5] = ((arr_2 [i_3 + 1]) / (arr_3 [i_5 - 1] [i_5 + 4]));
        }
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            arr_20 [i_3] = ((arr_0 [1]) ? (var_1 + -112) : (arr_11 [i_3 + 1] [i_3 + 1]));

            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                arr_23 [i_3] [i_3] [i_6] [i_7] = (((((176 ^ -19140) + 2147483647)) << (var_8 - 6341414695517213338)));
                var_23 = ((!(arr_16 [1] [i_3 - 4])));
                var_24 = (((arr_13 [i_3 - 3] [i_3 + 1] [2]) ? (arr_10 [i_3 - 2] [i_7]) : (arr_13 [i_3] [i_3 - 4] [i_3])));
            }
        }
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 10;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 9;i_11 += 1)
                    {
                        {
                            arr_34 [2] [2] [2] [3] [i_11 - 1] = ((((arr_31 [i_3 - 3] [i_3] [i_3] [i_3]) & (arr_10 [i_3] [i_8]))));
                            arr_35 [i_3] [i_8] [i_3] [i_3] [i_10] [i_10] [i_11] = ((~(arr_2 [i_3 - 1])));
                            arr_36 [7] [i_8] [i_8] [8] [0] = (((((5464 ? 2476 : 1423537975023230824))) ? ((var_6 ? var_7 : -5828850614829976301)) : (((var_4 ? (arr_12 [i_10] [i_10]) : (arr_10 [i_9] [9]))))));
                        }
                    }
                }
            }
            arr_37 [i_3] [i_8] = (((arr_29 [i_3] [i_3] [8] [i_3 - 2]) ? (arr_25 [i_3 + 1] [i_3]) : (arr_25 [1] [1])));
        }
    }
    #pragma endscop
}

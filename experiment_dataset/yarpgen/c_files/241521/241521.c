/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((2047 ? (((-2048 ? -50 : 2042))) : 3086524688));
        var_14 = ((3086524689 ? 255 : -41));
        var_15 = (88 != 21);
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_16 = ((((((arr_1 [i_1]) ? 5730703555020188640 : (arr_1 [i_1])))) ? ((((arr_3 [i_1]) ? (arr_4 [i_1] [1]) : (arr_1 [i_1])))) : 15504465882068932061));
        arr_7 [i_1] [i_1] = ((var_5 ? 64418 : 41));
        var_17 -= (arr_4 [i_1] [i_1]);
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 14;i_4 += 1)
            {
                {
                    var_18 *= (!15504465882068932061);
                    var_19 = (25093 > var_7);
                    var_20 = ((((arr_12 [i_3 - 1]) > (var_12 || 12894070572664475332))));
                }
            }
        }

        /* vectorizable */
        for (int i_5 = 1; i_5 < 15;i_5 += 1)
        {
            var_21 *= 3086524672;
            arr_19 [i_2] [i_2] [i_2] = 18366;
            arr_20 [i_2] [i_2] = (((arr_12 [i_5 - 1]) ? (((arr_9 [i_2]) ? -1390561570 : 2942278191640619564)) : (arr_12 [i_5 - 1])));
            var_22 = (((arr_16 [i_2] [i_5] [i_5 + 2]) ? (arr_18 [i_2] [i_5 - 1] [i_5 + 1]) : var_2));
        }
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            arr_25 [i_2] [i_2] [i_2] = (((((((7 ? 2045 : 31))) ? (((var_3 != (arr_17 [i_2] [4] [i_2])))) : var_4)) / (var_5 | var_5)));
            arr_26 [i_2] = (((((+((74 ? (arr_17 [13] [i_6] [i_6]) : 18446744073709551615))))) ? ((((~1390561569) <= (arr_18 [i_2] [i_6] [i_6])))) : 55144));
        }
        arr_27 [i_2] = (((var_10 > (arr_13 [i_2] [i_2]))));
    }
    var_23 = ((var_6 >> (var_0 + 9722)));
    var_24 = (max(var_24, (var_6 ^ -2147483626)));
    #pragma endscop
}

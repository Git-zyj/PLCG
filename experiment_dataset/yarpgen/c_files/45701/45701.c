/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (-9223372036854775807 - 1);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = min((1778252391 && 1), ((!(arr_1 [i_0]))));
        var_13 -= ((+(max((2963408843 << 29), 1))));
        arr_2 [i_0] = (((((((var_2 ? var_5 : 1))) ? 1 : (min((arr_0 [i_0]), (arr_1 [i_0]))))) ^ 1));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    var_14 = 1;
                    var_15 = (arr_6 [i_3]);
                    arr_12 [i_1] [i_1] [i_1] [i_1] = (((246 && (arr_10 [i_1] [i_1] [i_1]))));

                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 21;i_4 += 1)
                    {
                        var_16 = (max(var_16, ((((~1) ? (arr_7 [i_4 + 1] [i_4 + 1]) : (arr_9 [i_4 + 2] [i_4] [i_4] [i_4 - 1]))))));
                        var_17 = 1044480;
                        var_18 = 126;
                        var_19 = ((-2095104 ? (arr_3 [i_4 - 1]) : (arr_13 [i_1] [i_2] [i_4 - 1])));
                    }
                    for (int i_5 = 2; i_5 < 21;i_5 += 1)
                    {
                        arr_19 [2] [i_3] [i_1] [i_1] [i_1] |= ((((arr_16 [i_5 + 1] [i_5 + 1] [i_3] [18]) != 1)));
                        var_20 += 9;
                        arr_20 [i_2] [i_1] = ((+(((arr_13 [5] [i_5 - 1] [i_5 + 1]) ? ((var_3 ? 1 : var_4)) : 81))));
                        arr_21 [i_2] [i_2] [i_3] [i_3] = (arr_5 [i_5]);
                        arr_22 [i_2] [i_2] [i_2] [i_2] = var_9;
                    }

                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        var_21 ^= (arr_24 [i_2] [i_1] [i_3] [i_3] [i_2] [i_1]);
                        var_22 = max(1, (((50331648 ? ((min((arr_6 [i_1]), 254))) : var_1))));
                    }
                }
            }
        }
    }
    #pragma endscop
}

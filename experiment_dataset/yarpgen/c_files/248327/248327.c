/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [3] = ((((((((var_9 < (arr_0 [6])))) >> (((arr_0 [i_0]) + 20151))))) ? ((((((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_1 [11])))) ? (arr_1 [i_0]) : ((min((arr_0 [i_0]), 32767))))) : ((max(((((arr_0 [i_0]) || (arr_0 [i_0])))), (max(28217, (arr_0 [i_0]))))))));
        arr_3 [i_0] = (((((-28217 * 25212) ? ((max((arr_1 [i_0]), var_8))) : (arr_1 [i_0]))) / ((((((arr_0 [i_0]) * (arr_0 [i_0])))) ? (((arr_1 [i_0]) * (arr_1 [i_0]))) : ((25204 / (arr_1 [i_0])))))));
        var_13 -= arr_1 [i_0];

        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            var_14 = (min(var_14, ((((arr_6 [i_1 + 2] [i_1 + 1]) % (arr_5 [i_1] [i_1 - 2] [i_1]))))));
            arr_7 [i_0] = ((-(min(var_3, (((arr_4 [i_0] [i_1]) ? (arr_5 [i_1] [i_0] [i_0]) : (arr_1 [i_1 - 1])))))));
            arr_8 [i_0] [i_1] |= (25195 + -25212);
            arr_9 [i_0] [20] = arr_1 [i_1];
            arr_10 [i_1 - 2] = ((!((max(((((arr_5 [17] [3] [9]) && (arr_0 [i_0])))), 9780)))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            arr_13 [i_2] = -25212;

            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                var_15 += ((-29455 ? 25211 : -9777));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {
                            arr_23 [5] [i_2] = (((arr_18 [i_2] [i_3]) << (((arr_22 [i_2] [i_2]) + 25079))));
                            arr_24 [i_0] [i_2] [i_3] [6] [6] = (arr_12 [i_0]);
                            var_16 += (~-25227);
                        }
                    }
                }
                var_17 *= (896 * 25217);
                var_18 = ((~(arr_6 [i_2] [i_3])));
            }
        }
        arr_25 [i_0] |= (~18239);
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        arr_28 [i_6] [i_6] = ((~(arr_20 [i_6] [i_6] [i_6])));
        arr_29 [i_6] = (~-20);
        var_19 *= ((!(((-(arr_14 [i_6]))))));
    }
    var_20 = var_6;
    var_21 = var_10;
    #pragma endscop
}

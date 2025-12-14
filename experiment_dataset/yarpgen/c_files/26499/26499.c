/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_20 = (min(var_20, ((((~var_17) ? ((0 ? (arr_1 [i_0 - 2]) : (arr_0 [i_0 - 2] [i_0]))) : ((~(arr_1 [i_0 - 2]))))))));
        var_21 = (min((((!(((-(arr_0 [i_0] [i_0]))))))), (arr_1 [i_0 - 3])));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        var_22 = var_15;
        arr_6 [i_1] [i_1] = (arr_4 [i_1]);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 23;i_5 += 1)
                        {
                            {
                                arr_19 [i_1] [i_2] [i_3] [i_5] = (min((((arr_5 [i_5 + 2]) ? 6 : 1)), ((((arr_5 [i_5 - 1]) % (arr_5 [i_5 - 1]))))));
                                var_23 -= var_17;
                                var_24 = (min(var_24, ((((-((var_12 ? (arr_14 [i_1] [i_2] [i_3] [i_4] [i_5]) : (arr_5 [6])))))))));
                                var_25 = var_10;
                                arr_20 [i_1] [i_1] [i_5 - 2] [i_4] [i_4] = (!9096);
                            }
                        }
                    }
                    var_26 &= var_17;
                    arr_21 [i_1] [i_2] [i_2] [i_1] = (((min((arr_10 [i_1] [i_2] [i_3]), 13444))) ? (((~var_12) ? 14970739819428580265 : (((arr_10 [1] [i_2] [i_3]) ? (-127 - 1) : (arr_18 [i_1] [i_1] [i_2] [i_2] [11]))))) : (~9416));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
    {
        var_27 *= 44;
        var_28 = ((((var_8 != (arr_11 [i_6]))) ? (var_3 >> 1) : (arr_15 [i_6])));
        var_29 += (arr_13 [i_6] [i_6] [i_6]);
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        arr_27 [i_7] [i_7] = (var_8 ? (arr_17 [i_7] [i_7] [i_7] [i_7] [i_7]) : (arr_10 [i_7] [i_7] [i_7]));
        var_30 = (arr_8 [i_7]);
    }
    var_31 = (((max(4294967289, var_4)) / -var_11));
    var_32 = 6;
    #pragma endscop
}

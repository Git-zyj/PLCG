/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_18 = (max(var_18, ((max(((35 % (max(2147483647, 1856633375)))), (((-((min(-1, 0)))))))))));
        arr_4 [6] [i_0] = (((!15) ? ((max((arr_2 [i_0 + 1]), (arr_2 [i_0 + 1])))) : 1));
        arr_5 [2] |= 0;
        var_19 = ((((((262435416 ? 1 : 1)))) ? ((15266289749359488980 ? 8 : -1)) : (arr_1 [7])));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_11 [i_1 - 1] = ((var_6 / (arr_10 [i_1 - 2] [i_1 - 2] [i_1 - 1])));
            var_20 = ((1 ? 68719214592 : 25473));
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 0;i_6 += 1)
                        {
                            var_21 = (max(var_21, (-127 - 1)));
                            var_22 = (min(var_22, -var_7));
                            var_23 = (max(var_23, (68719214594 >= 1)));
                            var_24 = var_12;
                            arr_22 [i_1] [i_1 - 2] [i_1 - 2] [i_5] [i_5] [i_5] [i_6] = (((arr_18 [i_6 + 1] [i_5] [i_1 - 1] [i_5] [i_1]) ? var_14 : (arr_13 [i_1])));
                        }
                        for (int i_7 = 1; i_7 < 16;i_7 += 1)
                        {
                            var_25 = (arr_14 [9] [i_4] [i_7]);
                            var_26 += (arr_9 [i_1] [16]);
                            arr_25 [i_1] [i_5] = var_15;
                            arr_26 [19] [i_5] [i_5] [i_4] [i_5] [3] = (((((717059426 ? 1157 : -8))) ? var_3 : (((var_7 ? -2 : 6)))));
                            var_27 += ((2147483647 ? 31683 : 113));
                        }
                        var_28 = (min(var_28, 65531));
                        var_29 = (arr_8 [i_1] [i_1] [i_5]);
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 1; i_8 < 15;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            {
                var_30 += (max(-2706931543058701272, 35));
                var_31 = (max(var_31, ((max(var_8, ((1 | (arr_14 [i_8 - 1] [i_8] [i_8]))))))));
                arr_31 [i_9] [i_8 + 1] |= ((((arr_24 [i_8] [i_9] [i_8] [i_9] [i_8 + 1] [i_8] [i_8]) ? var_16 : (arr_24 [6] [i_9] [6] [i_8 - 1] [i_8 + 1] [i_9] [i_9]))));
            }
        }
    }
    #pragma endscop
}

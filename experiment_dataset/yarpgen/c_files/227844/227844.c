/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227844
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((var_5 ? var_1 : var_0)) / (((max(var_4, 7222)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_8 [i_1] [i_1] = (arr_6 [i_1] [i_1] [i_0]);
                arr_9 [i_0] [16] [i_0] |= ((((max(var_2, (arr_6 [i_0] [i_0] [i_0])))) ? -7223 : (min((arr_6 [i_1] [i_0] [i_0]), (arr_5 [i_1] [i_1] [i_0])))));
                var_11 = (max(var_11, -8178));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_15 [i_1] [i_1] [i_1] [i_1] = (((7341956357622729050 / (arr_2 [i_1]))));
                            arr_16 [i_0] [i_1] [19] [19] = (arr_3 [i_2]);
                            arr_17 [i_1] [i_2] [i_1] [i_1] = (var_2 || 7341956357622729050);
                        }
                    }
                }
                arr_18 [i_1] [22] [i_1] = (arr_6 [0] [i_1] [0]);
            }
        }
    }

    for (int i_4 = 2; i_4 < 9;i_4 += 1)
    {
        arr_22 [i_4] = var_9;
        arr_23 [i_4] = (arr_19 [i_4]);
        arr_24 [i_4] [i_4] = ((32767 ? (arr_14 [i_4 - 2] [i_4 + 1] [i_4] [i_4] [10] [i_4]) : (arr_14 [i_4 + 1] [i_4 + 1] [i_4] [i_4] [i_4] [i_4 + 1])));
    }
    for (int i_5 = 1; i_5 < 11;i_5 += 1)
    {
        arr_28 [i_5] |= (arr_0 [i_5]);
        var_12 += var_6;
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            arr_41 [4] [i_7] [5] [i_7] [i_7] [3] = (7212 >> 0);
                            arr_42 [7] [i_8] [i_7] [i_6] [i_5] = 3584933213037533888;
                            arr_43 [i_6] [i_8] [i_7] [i_5] [i_6] |= -7341956357622729050;
                            var_13 = var_3;
                        }
                        arr_44 [i_8] [i_7] [i_7] [i_5 + 1] = ((min((~var_6), var_3)));
                    }
                }
            }
        }
        var_14 = (max(var_14, (var_9 & 15476284616520679395)));
    }
    for (int i_10 = 2; i_10 < 11;i_10 += 1)
    {
        arr_47 [9] = -0;
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 12;i_12 += 1)
            {
                {
                    arr_56 [i_12] [i_12] [i_12] [i_12] = (((~-7212) ? (7212 <= 251) : var_5));
                    var_15 += (max((min(var_2, ((-7213 ^ (arr_14 [i_10 - 2] [i_10 - 2] [i_10] [i_11] [i_10 - 2] [i_12]))))), 7341956357622729050));
                }
            }
        }
        arr_57 [i_10] = ((((arr_14 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10 + 1]) ? 0 : (arr_14 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10 - 1]))));
    }
    #pragma endscop
}

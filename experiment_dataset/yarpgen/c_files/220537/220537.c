/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (arr_2 [i_0]);
        var_14 = var_2;
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_15 = (((((((arr_2 [i_1]) > (max(var_7, 2243793559)))))) == (max((arr_3 [i_1]), (arr_0 [i_1])))));
        arr_8 [i_1] = 2051173736;
        arr_9 [i_1] [i_1] = (((((96 << (((96 - var_7) + 31))))) ? -945 : (arr_2 [i_1])));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    arr_16 [i_2] [i_3 + 2] [i_4] = (arr_1 [i_3]);
                    arr_17 [i_2] [i_3] [i_4] [i_3] = ((((var_10 | (arr_11 [i_3 + 3]))) ^ (arr_14 [i_2] [i_2] [i_2] [i_2])));
                }
            }
        }
        arr_18 [i_2] = (min(((min((arr_15 [i_2] [i_2]), (96 ^ -7)))), var_10));
        var_16 = (arr_12 [i_2] [i_2]);

        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            arr_22 [i_2] [i_2] [i_2] = (arr_14 [i_5] [i_2] [i_2] [i_2]);
            var_17 = ((arr_15 [i_2] [i_2]) ? ((((arr_19 [i_2] [i_5]) ? (arr_0 [i_2]) : (arr_1 [10])))) : (max((arr_14 [i_2] [i_5] [i_5] [1]), (arr_0 [i_2]))));
            arr_23 [i_2] [i_5] [i_2] = (min((((var_7 / (arr_19 [i_2] [i_5])))), ((max(var_13, (var_4 / var_6))))));
            arr_24 [i_5] = -var_7;
        }
        for (int i_6 = 1; i_6 < 10;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    {
                        arr_32 [i_2] [i_6] [i_7] [i_8] = max(((var_5 & (arr_13 [i_6 - 1] [i_6 - 1] [i_7]))), (arr_11 [i_2]));
                        arr_33 [i_2] [i_6] [i_7] [i_8] = (((max(((var_5 << (var_2 + 13742))), (arr_12 [i_6 - 1] [i_6 + 1]))) | (arr_27 [i_2] [i_7])));
                        arr_34 [i_6] = (arr_15 [i_2] [i_6 + 3]);
                        var_18 = ((!(arr_31 [i_6] [i_6] [i_8])));
                        var_19 = ((+(min((((arr_15 [i_8] [6]) ? (arr_3 [i_6]) : 7)), var_6))));
                    }
                }
            }
            arr_35 [2] &= var_8;
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 25;i_9 += 1)
    {
        arr_38 [i_9] = ((!(arr_37 [i_9])));
        var_20 = var_7;
        /* LoopNest 2 */
        for (int i_10 = 1; i_10 < 24;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 25;i_11 += 1)
            {
                {
                    arr_44 [i_10 - 1] [i_9] = arr_42 [16] [i_10 + 1] [i_10 - 1] [i_11];
                    arr_45 [i_9] [i_9] [i_9] = ((((arr_39 [i_9]) > (arr_37 [i_9]))));
                }
            }
        }
    }
    var_21 = var_2;
    #pragma endscop
}

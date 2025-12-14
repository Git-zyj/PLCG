/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, (((((((127 * var_8) / var_6))) ? var_0 : 1)))));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_1] = 96;
                    arr_9 [i_1] [i_1] [i_1] [i_2] = (-33 || var_1);
                    var_12 ^= 32753;
                    var_13 = (!31);
                }
            }
        }
        arr_10 [i_0] = ((((((((-(arr_5 [i_0] [i_0 + 1])))) ? (((arr_5 [i_0] [i_0]) & var_10)) : var_8))) ? ((1 ? (arr_6 [3] [i_0 + 1]) : 1)) : var_6));
        var_14 = (((((-var_2 ? 92 : ((var_10 ? 107 : var_8))))) ? ((~((min(var_5, 25588))))) : (((arr_2 [1]) ? (arr_2 [0]) : (arr_2 [18])))));
    }
    for (int i_3 = 1; i_3 < 14;i_3 += 1)
    {
        var_15 = arr_2 [12];
        var_16 = (min(((var_10 >> (((arr_12 [i_3 - 1] [i_3]) + 30600)))), (((arr_12 [i_3 + 1] [i_3 + 1]) * (arr_12 [i_3 - 1] [i_3 + 2])))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        arr_16 [i_4] = (arr_6 [i_4] [i_4]);
        /* LoopNest 2 */
        for (int i_5 = 4; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 16;i_6 += 1)
            {
                {
                    arr_22 [i_4] [i_6] [i_4] [i_4] = (arr_19 [i_5 - 4] [i_6] [11]);
                    arr_23 [i_5] [7] [i_6] = var_0;
                    arr_24 [i_6] [0] [i_6] = (((arr_1 [i_5 + 1]) != var_3));

                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        arr_27 [i_4] [i_4] [i_4] [i_6] = -var_8;
                        arr_28 [17] [i_6] [i_6] [17] = (((arr_20 [i_5 + 1]) ? (arr_2 [i_6]) : 4294967294));
                    }
                    arr_29 [i_4] [i_5] [i_6] [i_6] = (arr_20 [i_6 + 1]);
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
    {
        var_17 -= (min(0, (~-117)));
        var_18 = (((((1 ? 12 : (arr_5 [i_8] [i_8])))) ? (arr_5 [i_8] [i_8]) : (((arr_5 [i_8] [i_8]) ^ (arr_5 [i_8] [i_8])))));
        var_19 -= (min(((max((arr_26 [i_8] [4] [i_8] [i_8] [i_8]), (((arr_25 [0] [i_8] [i_8] [2] [i_8] [i_8]) ? 223 : var_9))))), (((arr_3 [i_8]) ? (arr_25 [i_8] [i_8] [i_8] [0] [14] [14]) : var_5))));
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= (~1);

    /* vectorizable */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [i_1] = (((arr_6 [i_2 - 3] [i_1 - 1] [i_0 + 2]) != var_10));
                    arr_10 [i_0 + 1] |= (((arr_8 [i_1 + 2]) + (arr_8 [i_1 + 3])));
                    var_20 ^= (arr_3 [i_2] [i_1 + 3]);
                    var_21 = ((var_14 ? (((((arr_0 [i_0]) <= var_16)))) : (arr_6 [i_0 + 2] [i_1 - 1] [i_2 - 2])));
                }
            }
        }
        arr_11 [i_0] = ((arr_7 [i_0] [i_0 + 2]) ? (arr_6 [i_0 + 2] [i_0 + 2] [i_0 - 2]) : (arr_6 [i_0] [i_0 + 2] [i_0]));
        arr_12 [i_0] = (arr_6 [i_0] [i_0] [i_0 - 3]);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        arr_15 [i_3] [i_3] = var_11;
        var_22 = ((((arr_13 [i_3]) && -14999)));
        /* LoopNest 3 */
        for (int i_4 = 3; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    {
                        arr_25 [i_3] [i_3] [i_4 + 1] [i_5] [i_6] [i_6] = (var_8 <= (arr_16 [i_4 - 1] [i_4 - 1] [i_4 - 1]));
                        arr_26 [i_3] [1] [1] = arr_7 [i_4 - 2] [i_4];
                        var_23 = (min(var_23, (arr_19 [i_3] [i_4 - 1] [i_5] [i_6])));
                        arr_27 [i_3] [i_4 - 3] [i_4 - 3] [i_3] = (((arr_4 [i_4 - 2] [i_4 - 3]) % 1));
                    }
                }
            }
        }
    }

    for (int i_7 = 3; i_7 < 9;i_7 += 1)
    {
        arr_32 [i_7 - 1] = ((((((arr_30 [i_7] [i_7 - 3]) - (arr_30 [i_7 - 3] [i_7])))) || (((var_5 / (~var_14))))));
        /* LoopNest 3 */
        for (int i_8 = 1; i_8 < 7;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 10;i_10 += 1)
                {
                    {
                        var_24 = ((var_3 + (arr_4 [4] [i_8 - 1])));
                        arr_39 [i_7] [i_8 + 2] [i_8] [i_9] [9] = ((((((arr_37 [i_8] [1] [i_7 - 3] [i_8] [i_8 - 1]) ? (arr_37 [i_8] [i_7] [i_7 - 3] [i_8] [i_8 + 2]) : (arr_37 [i_8] [i_7] [i_7 + 1] [i_7] [i_8 - 1])))) ? (((arr_37 [i_8] [8] [i_7 - 1] [i_7 - 1] [i_8 - 1]) + -1)) : (((arr_37 [i_8] [i_8] [i_7 - 3] [0] [i_8 + 3]) ? var_9 : (arr_37 [i_8] [i_8] [i_7 - 3] [i_7] [i_8 + 2])))));
                        var_25 ^= (((-1551824596860659823 | 78) == (arr_13 [i_10])));
                        arr_40 [i_8] [i_9] &= (arr_31 [i_10]);
                    }
                }
            }
        }
        arr_41 [i_7] = (-1 - -1);
        var_26 = var_14;
    }
    var_27 = (((var_9 % ((var_15 ? var_3 : var_9)))));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [1] = (min((arr_1 [9] [i_0]), (arr_0 [4])));
        var_13 = ((((~((var_6 + (arr_1 [i_0] [i_0]))))) << ((((((arr_1 [i_0] [i_0]) && (arr_1 [i_0] [5])))) >> (((arr_0 [i_0]) - 41))))));
        var_14 = (((((!var_1) ? (((!(arr_1 [i_0] [i_0])))) : (((arr_0 [1]) >> (var_1 - 13))))) | (((!(arr_1 [i_0] [i_0]))))));
        var_15 = var_0;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 8;i_3 += 1)
                {
                    {
                        arr_12 [i_2] [i_2] [i_1] [i_2] [i_3] &= (min(107, (~78)));
                        var_16 = (min(var_16, (((~(arr_0 [i_3 - 2]))))));
                        var_17 = arr_4 [i_2] [i_2];
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
    {
        arr_15 [10] = -94;
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                {
                    var_18 += 127;
                    var_19 = (max(var_19, (max(var_9, var_7))));
                }
            }
        }
        var_20 = var_7;
    }
    for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
    {
        arr_26 [i_7] = (~var_3);
        var_21 = ((~((((123 ? -116 : -7))))));
    }
    for (int i_8 = 0; i_8 < 21;i_8 += 1)
    {
        arr_31 [i_8] = (max(var_7, ((-127 ? var_6 : ((((arr_30 [i_8]) && 112)))))));
        arr_32 [i_8] = var_2;

        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            var_22 = var_12;
            var_23 = var_9;
            var_24 = (((arr_29 [i_8] [0]) == (((26 / 7) * -1))));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 19;i_11 += 1)
                {
                    {
                        arr_42 [12] [i_8] [i_11] = (((arr_38 [i_11] [i_11 - 1] [i_11 - 1] [i_11 + 1] [i_11]) | var_9));
                        var_25 = (((var_9 ^ (arr_41 [i_11 + 2] [i_11 - 2] [i_11 + 2] [i_8] [i_11 - 1] [i_11 - 1]))));
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_12 = 1; i_12 < 19;i_12 += 1)
        {
            var_26 = -25;
            var_27 = (min(var_27, ((((((-98 ? 51 : 83))) || 16)))));
            var_28 &= (((var_11 ? 75 : (arr_35 [19] [19] [i_12 + 1]))));
        }
        var_29 = (((arr_36 [i_8] [i_8] [i_8]) ? (arr_34 [i_8] [4]) : ((~(arr_36 [i_8] [i_8] [5])))));
    }
    var_30 = (((((((var_7 ^ var_1) + 2147483647)) >> (var_2 - 48))) << ((((min(-64, 125))) + 73))));
    #pragma endscop
}

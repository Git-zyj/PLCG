/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_11 *= 1;
                        var_12 = ((-((((37195 ? 244 : 28341))))));
                        var_13 += (min(((var_8 ? (var_4 << 1) : (arr_7 [i_1 - 1] [i_1] [i_2]))), (min((((-83 + 2147483647) << (28331 - 28331))), 1))));
                        var_14 += -var_3;
                        arr_12 [i_2] [i_0] [i_0] [i_3] = ((+((-var_1 ? (((1 >> (((arr_3 [i_0] [i_0] [i_0]) - 2551722776))))) : var_0))));
                    }
                }
            }
        }
        var_15 += max((max((min(var_9, var_6)), 1)), ((min((min(1, var_6)), 1))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_16 *= (min(((-((11510627538809298721 ? var_7 : 185)))), ((min(-46, 1)))));
        arr_15 [i_4] |= (((-(((arr_5 [i_4] [i_4]) * 31923)))));
    }
    for (int i_5 = 3; i_5 < 15;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        arr_25 [i_6] [10] [i_7] [i_8] [i_7] = (arr_7 [i_5] [i_7] [i_6]);
                        var_17 += (min((((1 << (((arr_20 [i_6]) - 98))))), (var_10 >> 1)));
                    }
                }
            }
        }
        var_18 ^= (min((arr_13 [i_5 - 3]), (arr_20 [i_5])));
    }
    for (int i_9 = 2; i_9 < 22;i_9 += 1)
    {
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 22;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 22;i_12 += 1)
                {
                    {
                        arr_36 [i_9] [i_10] [i_11] [i_12] [i_11 - 1] = ((((!(arr_31 [i_9] [i_11] [i_11]))) ? ((-((var_2 ? var_8 : var_9)))) : (arr_30 [i_12 + 2] [i_11 + 1] [i_9 - 1])));
                        arr_37 [i_11] = ((((min((max(9, var_0)), (((var_2 && (arr_34 [i_9 - 1] [i_12 + 2] [i_11] [i_11]))))))) && (min((var_8 && var_10), (arr_32 [i_9] [i_10] [i_11 + 1])))));
                        var_19 *= (arr_26 [i_9 + 2] [i_12]);
                        var_20 = (min(var_20, -27716));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 24;i_13 += 1)
        {
            for (int i_14 = 2; i_14 < 23;i_14 += 1)
            {
                {
                    var_21 = (min(var_21, var_1));
                    var_22 = ((var_2 ? (max((min((arr_26 [i_9 - 2] [i_9]), var_2)), -var_0)) : ((((((min((arr_31 [2] [i_9] [16]), 1))) || (((var_10 ? 6936116534900252896 : 58402)))))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_15 = 3; i_15 < 12;i_15 += 1)
    {
        for (int i_16 = 2; i_16 < 12;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 13;i_17 += 1)
            {
                {
                    var_23 += var_6;
                    var_24 = var_9;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_18 = 1; i_18 < 16;i_18 += 1)
    {
        for (int i_19 = 1; i_19 < 1;i_19 += 1)
        {
            {
                var_25 = (min(var_25, (((var_2 ? (min(((~(arr_52 [i_19] [i_19] [i_19 - 1]))), (arr_49 [12]))) : (min((arr_28 [i_18 + 1] [i_18]), (arr_3 [i_18] [i_18] [1]))))))));
                arr_53 [i_18] = var_10;
            }
        }
    }
    #pragma endscop
}

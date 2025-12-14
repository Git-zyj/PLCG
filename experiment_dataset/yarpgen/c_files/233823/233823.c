/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = ((((!(arr_0 [i_0] [i_0]))) ? (((arr_1 [i_0] [i_0]) ? 36153 : (arr_1 [16] [i_0]))) : 18286));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] = (29380 < 36153);
                    var_12 = (max(var_12, (((+((max((arr_4 [i_0] [i_0]), (arr_4 [i_1 + 3] [i_0])))))))));
                    var_13 = ((((2323793863948705004 ? (arr_2 [i_1 + 3]) : (arr_2 [i_2]))) > var_2));
                    var_14 = ((((var_10 ? ((((arr_5 [i_1] [i_1]) ? var_5 : (arr_7 [5] [10] [2] [i_0])))) : (arr_8 [2]))) ^ (((((arr_1 [i_2] [i_0]) == (arr_4 [i_1 + 2] [i_1 - 1])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_15 = 62846;
                                arr_14 [i_1] = ((+(max((arr_8 [i_0]), -1))));
                                var_16 = ((!(arr_2 [i_0])));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        var_17 = (arr_15 [i_5]);
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 19;i_8 += 1)
                {
                    {
                        arr_28 [i_7] = (max(2323793863948705004, (((-(((arr_20 [6] [6]) << (((arr_18 [11]) - 14905)))))))));
                        var_18 = ((((!(arr_15 [1]))) ? (((arr_26 [15] [15] [i_8 - 1] [i_8 - 1] [i_8 - 1] [4]) ? (((var_2 ? (arr_15 [i_8]) : var_2))) : (max(var_3, -4)))) : (2323793863948704989 && 0)));
                    }
                }
            }
        }
    }
    for (int i_9 = 3; i_9 < 19;i_9 += 1)
    {
        var_19 = ((~(max((((arr_29 [i_9]) % var_2)), ((var_5 ? var_3 : 0))))));
        arr_31 [i_9] = 2314106559;
        arr_32 [2] |= ((var_7 & 2314106559) & (((arr_30 [12]) + (max(var_4, var_1)))));
    }
    var_20 = (max(var_20, ((((((~(~var_3)))) ? 2314106548 : var_6)))));
    #pragma endscop
}

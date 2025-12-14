/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
                    {
                        var_13 *= ((-(arr_8 [i_0] [i_1] [i_1] [7] [1])));
                        var_14 = (min(var_14, (6973078375449163907 || 536870904)));
                        arr_9 [i_1] [i_1] [i_1] [i_3] = ((~(arr_0 [i_0] [i_1])));
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                    {
                        arr_12 [i_0 + 2] [i_1] [i_2] [i_0 + 2] = ((((min(((var_12 ? (arr_6 [i_1] [12] [12] [i_4]) : (arr_3 [i_0] [i_0] [i_0]))), (arr_5 [i_0 + 3] [i_1] [i_0 - 3])))) ? (((!6973078375449163907) ? 34260 : (arr_6 [i_1] [i_1] [i_1] [8]))) : (((arr_4 [i_1] [i_1]) ? (((!(arr_10 [i_0] [i_1] [i_0])))) : 167))));
                        var_15 = var_6;
                        var_16 = ((((((((arr_4 [i_1] [i_1]) ? (arr_1 [i_0] [i_1]) : var_4))) % ((var_10 | (arr_3 [i_0 - 2] [i_0 - 1] [6]))))) | -1857293257428208953));
                        arr_13 [13] [i_1] [i_1] = ((((((((var_8 ? (arr_6 [i_1] [i_1] [i_2] [i_1]) : var_3))) <= ((var_5 >> (var_0 + 4994)))))) ^ (arr_0 [i_0 - 3] [i_0 - 3])));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_19 [5] [5] [i_1] [i_1] [i_2] [i_5] [i_6] = (max(0, (((arr_11 [i_0] [1] [i_2] [i_5] [i_5]) ? (((arr_18 [i_6] [i_1] [5] [i_5] [i_6 - 1]) ? (arr_10 [i_5] [i_1] [i_0 - 2]) : (arr_8 [i_0] [i_1] [i_2] [i_5] [i_6]))) : ((max((arr_8 [i_6 - 1] [i_0 + 2] [i_0 + 2] [i_1] [i_0 + 2]), var_8)))))));
                                arr_20 [i_0 + 1] [i_1] [i_1] [i_2] [i_2] [i_5] [i_6] = (arr_15 [i_0 - 2]);
                                var_17 |= (max(31297, (max((arr_0 [i_0 - 2] [i_0 + 1]), (arr_8 [i_0 + 1] [i_0 + 2] [i_0 - 1] [i_6 - 1] [i_6 - 1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = var_5;

    /* vectorizable */
    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {
        arr_23 [i_7] = (((((var_1 ? var_1 : (arr_21 [i_7])))) ? (arr_22 [i_7]) : var_9));
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    {
                        var_19 = var_6;
                        arr_34 [i_7] [i_7] [i_9] [i_10] = ((arr_33 [i_7] [i_7] [i_7]) != (arr_24 [i_9] [15]));
                        var_20 |= ((var_1 ? var_0 : ((((arr_22 [i_7]) ? (arr_33 [i_7] [i_10] [i_9]) : (arr_27 [i_7] [i_7]))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}

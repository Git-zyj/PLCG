/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0]) == (var_8 == var_8)));
        arr_3 [i_0] [i_0] = (((arr_0 [i_0]) << (var_14 - 416961947)));
        arr_4 [i_0] = var_16;
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        arr_7 [13] = ((((-2147483633 ? (arr_5 [i_1 + 2] [i_1 + 2]) : (arr_5 [i_1 + 2] [i_1 + 2])))) ? ((((256 >= (arr_5 [i_1] [i_1 - 1]))))) : (((arr_5 [i_1 + 1] [i_1 + 2]) - var_12)));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    arr_15 [13] [i_1 + 1] [i_1 + 1] [i_1] = (-(arr_8 [i_1] [i_1 + 2] [i_1 + 1]));
                    arr_16 [i_1] [i_1] [i_1 + 2] [9] = ((max((arr_1 [i_3]), (min(var_4, (arr_6 [i_1]))))));
                    /* LoopNest 2 */
                    for (int i_4 = 4; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 14;i_5 += 1)
                        {
                            {
                                arr_21 [i_2] [i_2] = (((max((arr_14 [i_5] [i_5 - 1] [i_4 - 2] [i_1 + 2]), (arr_14 [i_5] [i_5 - 1] [i_4 - 2] [i_1 + 2])))) ? ((var_11 ? ((var_1 ? var_4 : 1457675607)) : ((var_10 ? var_15 : var_10)))) : (var_15 && var_3));
                                arr_22 [i_5] [i_5] [i_2] [i_3] [i_4 - 2] [10] [i_5] = min(((((arr_12 [0] [i_5 - 1] [i_3] [i_1 + 2]) >= (arr_11 [i_1] [i_5 - 1])))), (((arr_13 [i_1] [i_5 - 1]) ? (arr_11 [5] [i_5 - 1]) : var_14)));
                            }
                        }
                    }
                    arr_23 [1] [1] = max((((((arr_6 [12]) * var_4)))), (arr_18 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 - 1]));
                }
            }
        }
    }
    var_17 = var_1;
    #pragma endscop
}

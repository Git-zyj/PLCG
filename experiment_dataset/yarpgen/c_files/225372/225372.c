/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (!var_15);
        arr_3 [i_0] = ((~(arr_0 [i_0])));
        arr_4 [6] = 31933;
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                arr_12 [i_2] [i_3] = (max(((17 ? (arr_5 [i_3]) : (arr_10 [i_1] [11] [i_2] [i_3]))), (min((arr_10 [10] [i_3] [10] [i_2]), (arr_10 [i_1] [i_2] [i_3] [i_3])))));
                var_19 |= (((arr_6 [i_2] [i_1]) ? (((33577 >> (((max(var_14, 10458720443114433479)) - 10458720443114433470))))) : (max((arr_1 [i_2]), (arr_11 [i_2] [i_2] [i_3] [4])))));
            }
            arr_13 [i_2] = 22074;
        }
        arr_14 [4] = (max((max((arr_8 [i_1] [i_1]), (min(var_17, (arr_0 [i_1]))))), ((((3596778195537545096 & (arr_0 [i_1]))) - (arr_10 [i_1] [i_1] [i_1] [i_1])))));
        arr_15 [10] = var_9;
        var_20 = ((-(min((min(-1731961366, (arr_1 [i_1]))), (((~(arr_9 [0]))))))));
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            {
                var_21 = ((var_10 ? var_4 : ((max(var_1, var_3)))));
                arr_22 [i_4] [i_4] = ((((((max(var_4, var_12))))) <= (min(((((arr_17 [i_5] [2]) < (arr_19 [i_4] [i_4] [i_4])))), (arr_18 [i_5] [i_4])))));
                var_22 &= (max((arr_21 [i_5]), (((((arr_16 [i_5]) + var_10))))));
                var_23 = (max((((0 * (arr_19 [i_4] [i_4] [i_5])))), (min((arr_19 [7] [i_4] [i_5]), (min(var_6, 929276528240450492))))));
                arr_23 [i_4] [i_4] = (min(((var_18 ? (arr_19 [i_4] [i_4] [i_4]) : (arr_19 [i_4] [i_4] [6]))), ((~(arr_21 [i_4])))));
            }
        }
    }
    #pragma endscop
}

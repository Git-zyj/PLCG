/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((var_4 & var_0) % ((var_8 ? var_2 : var_2))))) ? ((0 ? 127 : 20878)) : (-20878 && -8718)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_11 = (((arr_0 [i_0]) | (arr_1 [i_0] [i_0])));
        var_12 += (((arr_0 [1]) | ((-(arr_0 [i_0])))));
    }
    var_13 = ((var_9 ? (((((768 ? -8497282133803756148 : -78))) ? (var_2 - var_3) : (var_7 && var_0))) : ((((var_0 >= var_7) & ((var_6 << (var_5 - 20061))))))));

    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_4 [i_1] = (((((((arr_2 [i_1]) ? (arr_3 [0]) : (arr_3 [i_1]))))) ? (((((65535 ? 768 : -20878))) ? ((((arr_3 [i_1]) && (arr_3 [i_1])))) : (arr_2 [i_1]))) : (arr_2 [17])));
        var_14 = ((!(((arr_2 [i_1]) < (((arr_3 [i_1]) ? (arr_2 [10]) : (arr_3 [14])))))));
        var_15 = (((arr_2 [12]) | ((((((arr_3 [9]) + 2147483647)) << (((arr_2 [i_1]) - 9012)))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    {
                        arr_18 [12] [14] [10] [i_5] [i_5] |= (((((arr_2 [i_3]) + (arr_17 [i_3] [0]))) << (((((arr_16 [i_2] [i_5] [i_5] [i_3] [10] [1]) ? (arr_0 [i_4]) : (arr_17 [i_2] [8]))) + 1672057458))));
                        var_16 = (arr_8 [i_2] [7] [i_2]);
                        arr_19 [i_2] [i_3] [i_3] [i_2] = arr_15 [i_5] [i_4] [10] [6] [i_2];
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                {
                    var_17 = (min(var_17, ((((arr_2 [i_7]) || (arr_2 [i_6]))))));
                    var_18 = arr_9 [1] [i_6] [i_2];
                }
            }
        }
    }
    var_19 = (max(var_19, (((((((((var_5 ? var_9 : var_4))) ? (var_3 < var_9) : (var_1 - var_6)))) || (((((var_7 ? var_5 : var_9)) / ((var_3 << (var_5 - 20061)))))))))));
    #pragma endscop
}

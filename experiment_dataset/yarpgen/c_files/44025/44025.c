/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((var_4 ? -var_11 : var_9)) >= var_5));
    var_16 = var_7;

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0 - 2] = (((((min((((arr_0 [1] [i_0]) / -26)), ((~(arr_0 [i_0] [i_0]))))) + 2147483647)) << (((max(((var_8 ? (arr_2 [i_0 - 2] [i_0 - 2]) : var_8)), (arr_0 [i_0 + 1] [i_0 + 1]))) - 106))));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_9 [i_0 - 2] [i_1] [i_2] &= (min((arr_2 [i_1 - 2] [i_1 - 2]), ((-29666 ^ (((arr_4 [i_0 - 2] [i_0 - 2] [9]) ? var_3 : 29666))))));

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_17 = (((~((min(var_5, var_1))))));
                        arr_13 [i_0] [i_1] [i_2] [i_3] = (((((var_14 ? (((arr_1 [i_0]) ? var_3 : (arr_11 [i_3] [1] [i_0] [i_0]))) : ((min((arr_0 [i_1 + 1] [i_2]), (arr_2 [i_0] [i_0 - 1]))))))) ? ((((arr_7 [i_1] [i_1 + 2] [i_2] [i_3]) == (arr_7 [i_0] [i_1 + 3] [i_2] [i_3])))) : ((((arr_10 [i_0] [i_0 - 1] [i_0 + 1] [i_1] [i_1 - 2]) != (arr_5 [i_0] [4]))))));
                        var_18 = (((((arr_8 [i_0 + 1] [2] [i_0 - 2] [i_1 + 1]) + (arr_8 [i_0 - 1] [5] [i_0 + 1] [i_1 - 4]))) == ((~(arr_8 [i_0 - 2] [i_0] [i_0 - 2] [i_1 - 1])))));
                        arr_14 [9] [1] [9] = ((((max(-29666, 25))) ? (((arr_1 [i_0 - 2]) ? (arr_1 [i_0 - 2]) : (arr_1 [i_0 - 2]))) : (((!(arr_1 [i_0 + 1]))))));
                        arr_15 [i_3] [i_1 - 1] = (((arr_5 [i_3] [3]) ? ((min((arr_4 [i_0] [i_1] [1]), 31397))) : (arr_10 [i_3] [i_2] [i_0] [5] [i_0])));
                    }
                    for (int i_4 = 3; i_4 < 9;i_4 += 1)
                    {
                        var_19 = (arr_8 [i_4] [i_2] [i_1 + 1] [i_0]);
                        var_20 = ((((min((arr_17 [i_0 - 2] [i_1 - 1] [i_4 + 1]), (arr_0 [7] [i_1 - 3])))) ^ ((29666 ? -20 : 3))));
                    }
                }
            }
        }
    }
    for (int i_5 = 1; i_5 < 18;i_5 += 1)
    {
        var_21 = var_12;
        var_22 = ((((max((arr_20 [i_5] [2]), (max((arr_19 [i_5]), 3))))) ^ (arr_18 [i_5 + 2])));
        arr_21 [i_5 + 1] = (max(-29672, (arr_18 [i_5 + 1])));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                {
                    var_23 = (((arr_25 [i_8] [i_7] [i_6]) ? (arr_25 [i_6] [i_7] [i_6]) : (arr_25 [i_6] [i_7] [i_8])));
                    arr_29 [7] [4] [i_8] = (((arr_28 [i_6] [i_6]) + var_7));
                    arr_30 [i_6] [i_7] [i_6] [i_7] &= ((((((arr_24 [i_8]) ? var_12 : (arr_23 [i_7])))) ? (((var_2 == (arr_23 [i_6])))) : (((arr_25 [i_6] [i_7] [i_8]) ? (arr_25 [i_8] [i_7] [i_6]) : 32767))));
                }
            }
        }
        var_24 = (arr_24 [i_6]);
    }
    var_25 = (((((var_2 >= ((max(7, var_1)))))) - var_4));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((var_10 <= var_1) ? (max(var_6, var_11)) : ((1 ? var_3 : var_11)))) - 1));

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        arr_3 [8] [i_0] = (arr_1 [23]);
        arr_4 [i_0] = (-5416912519545837909 && 1);
        arr_5 [1] = ((-(((arr_2 [i_0] [i_0]) % 1))));
        arr_6 [i_0] [i_0] = (2098827281 ? (arr_0 [i_0]) : (arr_0 [9]));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    arr_17 [i_1] [i_1] [i_1] [i_1] |= (((max(2474843906, 15278608279723545638))) || var_11);
                    arr_18 [i_3] [i_3] [i_2] [i_1] = 2098827296;
                    arr_19 [i_2] = ((((((arr_12 [i_2 - 1]) | (arr_12 [i_2 + 1])))) ^ 2098827281));
                    arr_20 [i_2] = (max(((9223372036854775807 >> ((((2196140000 & (arr_11 [i_1] [i_1] [i_1]))) - 49)))), ((max(2147483632, -var_11)))));
                }
            }
        }
        arr_21 [3] [i_1] = (min((((((-(arr_10 [i_1])))) ? (arr_9 [i_1]) : -1)), var_10));
    }
    for (int i_4 = 3; i_4 < 11;i_4 += 1)
    {
        arr_24 [i_4] [i_4] = var_1;
        arr_25 [i_4] [10] = (((var_9 % (((arr_23 [i_4]) ^ var_13)))));

        for (int i_5 = 1; i_5 < 11;i_5 += 1)
        {
            arr_28 [1] [4] [i_4] = (((((1 <= var_0) ? (arr_12 [i_4 - 2]) : ((max(var_3, var_9))))) >> ((((((11668 || (arr_14 [0]))) ? var_11 : ((((arr_11 [11] [i_4 - 2] [11]) < var_12))))) + 2095052293))));
            arr_29 [i_4] [i_5] [i_5] &= (arr_7 [i_4 + 1]);
        }
        /* vectorizable */
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            arr_32 [i_6] [i_4] [i_4] = var_10;
            arr_33 [i_4] [i_6] [i_6 - 1] = var_10;
        }
    }
    #pragma endscop
}

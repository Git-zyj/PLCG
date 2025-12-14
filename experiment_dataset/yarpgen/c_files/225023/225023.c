/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 8646911284551352320;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    arr_9 [4] [i_1] [i_2] [i_2 - 1] = 81;
                    var_14 = var_6;
                    arr_10 [i_2] = (i_2 % 2 == 0) ? ((((((var_1 < (arr_8 [i_1] [i_1] [i_2] [i_1])))) << (((((arr_8 [i_1] [i_2] [i_2] [i_2]) ? (arr_8 [0] [i_0] [i_2] [0]) : var_2)) - 61303))))) : ((((((var_1 < (arr_8 [i_1] [i_1] [i_2] [i_1])))) << (((((((arr_8 [i_1] [i_2] [i_2] [i_2]) ? (arr_8 [0] [i_0] [i_2] [0]) : var_2)) - 61303)) + 44047)))));

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_15 = (min(var_15, ((min((arr_8 [i_3] [i_3] [i_3] [i_0]), ((var_12 ? ((min(var_9, 0))) : (((arr_6 [i_1] [i_1 - 3] [i_2 + 1] [i_2]) ? var_0 : 14)))))))));
                        var_16 = -2;
                        arr_13 [i_2] [i_2] [i_2] [i_0] = (min(10, -14));
                    }
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        arr_18 [i_2] [i_2] [i_2] [i_2] = 203;
                        var_17 = (min(((var_0 ? (arr_11 [i_1 - 3] [i_2 - 1] [1] [i_2 + 1] [i_2]) : 14)), (((arr_11 [i_1 - 3] [i_2 - 1] [i_4] [i_4] [i_4]) ^ (arr_2 [i_1 - 3] [i_2 - 1])))));
                    }
                }
            }
        }
    }
    var_18 = var_2;
    var_19 = (max(-15, var_3));
    #pragma endscop
}

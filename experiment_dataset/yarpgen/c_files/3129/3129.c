/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_15;
    var_19 = (max(var_19, (var_11 & 4611686018427387903)));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 = (min(var_20, (((~((var_9 ? (arr_1 [i_0]) : (arr_1 [i_0]))))))));
        var_21 = (max(var_21, (arr_1 [i_0])));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 6;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                {
                    var_22 = (((arr_7 [i_1 + 1] [i_1] [i_2 - 1]) ? ((var_4 ? (arr_7 [i_1 - 1] [i_1 + 1] [i_2 + 4]) : (arr_7 [i_1 - 1] [i_1 - 1] [i_2 + 1]))) : (((arr_7 [i_1 + 1] [i_2 - 3] [i_2 - 3]) ? (arr_7 [i_1 - 1] [i_1] [i_2 + 4]) : (arr_7 [i_1 - 1] [i_2] [i_2 + 2])))));
                    var_23 = ((((min(((22 ? (arr_0 [i_1]) : (arr_9 [i_1 - 1] [i_1 - 1] [i_3]))), (max(var_10, var_2))))) ? (((arr_7 [i_1] [i_1] [i_3]) + (arr_5 [i_1 + 1] [i_3]))) : ((var_5 ? (((!(arr_8 [i_2] [i_2] [i_2] [i_3])))) : ((((arr_2 [i_1]) >= (arr_9 [i_1] [i_2] [i_3]))))))));
                    var_24 = var_3;
                }
            }
        }
        arr_10 [i_1] = (((arr_9 [i_1] [i_1] [i_1]) != (arr_8 [2] [i_1 + 1] [i_1 + 1] [i_1 - 1])));
    }
    #pragma endscop
}

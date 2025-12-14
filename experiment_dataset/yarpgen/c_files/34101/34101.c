/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_17 = max((((arr_1 [i_0] [i_0]) ? (arr_4 [i_1 + 1] [i_1 + 1]) : (arr_3 [i_2]))), ((max((arr_2 [i_1 + 1]), (arr_9 [8] [8] [i_2])))));
                    arr_10 [8] [i_0] [i_0] [1] = ((!((max(var_6, (arr_3 [i_0]))))));
                    var_18 = (min(var_18, (arr_5 [10] [i_1 + 2] [i_2])));
                }
            }
        }
    }
    var_19 = var_6;
    var_20 += (max((((-var_9 ? ((var_8 >> (var_2 - 177281257))) : ((var_13 ? var_9 : var_14))))), (max(((max(var_1, var_12))), ((var_7 ? var_7 : var_10))))));
    #pragma endscop
}

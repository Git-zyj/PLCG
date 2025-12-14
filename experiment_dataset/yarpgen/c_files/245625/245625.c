/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_1] [1] [i_1] [i_1] = (min((((((!(arr_3 [i_1])))) % (~6399))), ((((~(arr_6 [11] [i_1] [i_2])))))));
                    var_15 = (max((((6396 << (var_4 - 12)))), (min((arr_6 [i_1] [10] [i_1]), (((arr_1 [i_1]) ? (arr_5 [i_0] [i_2]) : var_14))))));
                    var_16 = (arr_5 [i_0] [i_1]);
                    arr_9 [i_1] [i_1] [i_1] [i_1] = ((!(((((((arr_1 [i_1]) ? var_8 : var_9))) - (max(var_13, (arr_4 [i_1]))))))));
                }
            }
        }
    }
    var_17 = (((~((var_10 ? var_13 : 59137)))));
    #pragma endscop
}

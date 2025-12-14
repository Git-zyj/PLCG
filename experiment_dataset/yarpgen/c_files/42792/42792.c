/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] = ((((max((arr_0 [0] [i_1]), 3949426947))) ? ((((!(arr_5 [i_1]))))) : (((arr_4 [i_1] [i_1 - 1]) ? (arr_4 [i_1] [i_1 - 1]) : (arr_4 [i_1] [i_1 - 1])))));
                    arr_9 [i_1] [i_1] [i_2 - 1] = 2147479552;
                }
            }
        }
    }
    var_13 = ((((((2147479552 > var_2) ? (min(var_9, var_12)) : var_0))) ? var_3 : ((var_6 ? (min(2147479579, var_6)) : var_8))));
    #pragma endscop
}

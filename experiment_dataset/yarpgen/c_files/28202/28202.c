/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = (min(((219 < (((!(arr_5 [i_0] [i_1] [i_0])))))), 0));
                    arr_9 [i_0] [1] [i_2] &= (~0);
                }
            }
        }
    }
    var_17 = var_11;

    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_18 = (max(var_18, ((((var_3 | 5070) ? 109 : (((arr_13 [i_3]) & 65533)))))));
        var_19 = ((-(arr_12 [i_3])));
    }
    #pragma endscop
}

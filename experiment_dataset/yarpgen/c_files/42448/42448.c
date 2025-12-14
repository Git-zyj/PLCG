/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_17 ^= (max((((arr_7 [i_1 - 2] [i_1 - 1] [i_1 + 2]) ? var_5 : 4294967295)), ((2 ? (arr_0 [i_1 + 2] [i_1 + 2]) : var_9))));
                    var_18 = ((((((min(var_14, (arr_2 [9] [i_2]))) + (arr_1 [i_1 + 1])))) + ((((min(-2147483642, var_6))) ? -199 : (var_3 - 2)))));
                }
            }
        }
    }

    for (int i_3 = 2; i_3 < 18;i_3 += 1)
    {
        arr_10 [i_3] [19] = (min((max(((min(58720256, 2097136))), 12615344471851414511)), var_12));
        arr_11 [i_3 + 2] = ((((((arr_9 [i_3 - 1]) == (arr_9 [i_3 + 4])))) % ((((arr_9 [i_3 + 1]) <= 4294967277)))));
    }
    #pragma endscop
}

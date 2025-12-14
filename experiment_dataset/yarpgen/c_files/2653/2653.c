/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_11;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_15 = ((-(arr_0 [i_0])));
                    var_16 = (max((((arr_4 [i_0] [i_0] [i_2] [i_0]) + (min((arr_4 [i_0] [i_0] [i_0] [i_2]), -76)))), ((((arr_5 [i_1] [i_1]) ? (max(var_0, var_5)) : -4703)))));
                }
            }
        }
        arr_8 [1] = ((-82 && var_12) || (arr_7 [i_0] [i_0] [i_0]));
    }
    var_17 = var_1;
    var_18 = ((((min(173, -82))) ? var_5 : var_7));
    var_19 = ((var_11 ? (min(var_9, (!var_6))) : var_10));
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40431
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_11 *= var_3;
        var_12 = (min(var_12, ((max((arr_1 [i_0] [7]), (!var_2))))));
        var_13 += ((((((arr_2 [i_0]) & (arr_1 [i_0] [i_0])))) ? var_5 : ((var_5 ? (arr_0 [i_0] [i_0]) : (((!(arr_0 [6] [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_14 -= (((((min((arr_0 [i_1] [i_1]), ((var_9 / (arr_3 [i_1] [i_1]))))) + 2147483647)) << (((max((max((arr_1 [i_1] [i_1]), (arr_0 [i_1] [i_1]))), ((((arr_4 [i_1] [i_1]) == var_4))))) - 7402))));
        var_15 += (((max(var_0, (arr_4 [7] [7])))));
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_16 = (min(var_16, (((35248 ? ((var_8 ? 1 : (arr_9 [i_2 - 1] [i_2 - 1] [i_2 - 1]))) : var_2)))));
                var_17 += var_5;
                var_18 = (min(var_18, ((((((!((((arr_7 [i_2] [i_3]) ? 1 : var_10)))))) >= (arr_9 [i_2] [i_2] [1]))))));
            }
        }
    }
    #pragma endscop
}

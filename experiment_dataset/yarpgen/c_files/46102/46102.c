/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-(((0 && var_9) & (max(var_5, var_12))))));
    var_18 &= ((((max(var_7, var_12)) ? ((max(-105, var_0))) : var_10)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_19 = ((-(arr_4 [i_0] [8])));
                var_20 -= ((!(((arr_4 [i_1 - 2] [i_1]) <= (arr_4 [i_1 - 2] [i_1])))));
            }
        }
    }
    #pragma endscop
}

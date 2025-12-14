/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= (((((~var_4) ? (min(1515, 657352909)) : (((var_9 ? 130 : var_4)))))) ? var_3 : var_2);
    var_13 &= ((var_9 ? (min(var_0, var_1)) : var_5));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_14 = (((arr_0 [i_1 + 2] [i_1 + 2]) - (((arr_0 [i_1 + 3] [i_1 - 1]) + (arr_0 [i_1 + 2] [i_1 + 3])))));
                var_15 &= ((1 ? ((((arr_2 [i_1 + 3] [i_1 + 4] [i_1]) <= (arr_2 [i_1] [i_1 + 1] [i_1])))) : ((((min((arr_1 [i_0]), var_6))) - 1))));
            }
        }
    }
    var_16 += ((~(((~var_5) ? 130 : (!var_0)))));
    #pragma endscop
}

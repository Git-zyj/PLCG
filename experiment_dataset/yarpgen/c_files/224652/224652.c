/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_17 = (max(var_17, var_11));
                arr_6 [i_1] [i_1] [i_0] = (!(((-(arr_1 [0] [i_0 - 2])))));
                var_18 = ((min((arr_5 [i_0 + 1] [i_0 - 1] [i_0 - 2]), (arr_5 [i_0] [i_0 - 2] [i_0 - 1]))) / (((arr_5 [i_0] [i_0 - 2] [i_0 + 1]) / (arr_5 [i_0] [i_0 - 2] [i_0 - 1]))));
                var_19 = ((var_0 ? (min((arr_1 [i_0 - 2] [i_1]), (arr_4 [i_0 + 1] [i_0 + 1] [i_0 - 1]))) : ((min(((var_3 ? -35 : var_2)), 39579090)))));
            }
        }
    }
    var_20 -= (min(((((var_14 - var_15) <= (~29519)))), ((-((-21559 ? var_2 : var_13))))));
    #pragma endscop
}

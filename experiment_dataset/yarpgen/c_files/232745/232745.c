/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;
    var_12 = (((((var_10 / (((var_4 ? var_1 : var_5)))))) ? var_7 : var_1));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_13 = 0;
                var_14 = (min((arr_3 [i_0 - 1]), (((arr_3 [i_1 - 1]) ? (arr_3 [i_0 - 1]) : (arr_0 [i_1 - 2])))));
                arr_6 [i_0] [i_0] [i_0] = (((arr_2 [i_1 - 1]) != (((arr_4 [i_1 - 2] [i_0 - 2]) ? (arr_4 [i_1 - 2] [i_0 - 2]) : 32767))));
            }
        }
    }
    var_15 = (-1206765297 + (var_2 - var_9));
    #pragma endscop
}

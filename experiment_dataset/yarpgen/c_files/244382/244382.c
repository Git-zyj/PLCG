/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_19 -= (arr_0 [i_0 + 1]);
                var_20 = (max(var_20, ((((arr_0 [i_0]) - (((arr_4 [i_0] [i_0 - 1]) ? (max((arr_3 [i_0] [i_0] [i_1]), (arr_2 [i_1] [i_0]))) : (arr_2 [i_0] [i_1]))))))));
            }
        }
    }
    var_21 = (((var_8 ? (var_16 * var_9) : var_13)));
    var_22 = var_3;
    #pragma endscop
}

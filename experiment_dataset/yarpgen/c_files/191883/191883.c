/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191883
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_19 = (arr_2 [i_1 - 1]);
                var_20 = ((((min(((((arr_4 [i_0] [i_0] [i_0]) ? (arr_2 [i_0]) : var_2))), (min(112, (arr_3 [i_1] [i_0])))))) ? (arr_1 [i_0] [i_1 - 2]) : (max((arr_1 [i_0] [i_1 + 1]), ((var_16 ? 112 : var_14))))));
            }
        }
    }
    var_21 = var_13;
    #pragma endscop
}

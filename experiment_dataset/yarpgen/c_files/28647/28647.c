/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_20 = (min((max(-2633091942083438655, (arr_3 [i_0 + 2]))), (var_10 | var_13)));
                var_21 = -2633091942083438648;
            }
        }
    }
    var_22 = (min(var_22, ((max(((max(var_10, var_14))), (var_8 | var_12))))));
    #pragma endscop
}

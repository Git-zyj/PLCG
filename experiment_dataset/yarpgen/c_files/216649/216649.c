/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min((max(((var_1 ? var_0 : var_2)), ((max(var_8, 394553385))))), (min(((1 ? 166 : var_7)), var_2))));
    var_11 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_12 = (arr_3 [i_0]);
                var_13 = 166;
            }
        }
    }
    #pragma endscop
}

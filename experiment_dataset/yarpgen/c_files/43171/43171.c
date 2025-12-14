/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [12] [i_1] = var_0;
                var_18 = (!(arr_0 [i_1 - 2] [17]));
            }
        }
    }
    var_19 = (max(var_19, var_6));
    #pragma endscop
}

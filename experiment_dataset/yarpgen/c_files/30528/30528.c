/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_1, var_8));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_16 = (((arr_1 [i_1] [i_0]) ^ 45184));
                arr_6 [i_1] [i_1] [i_1] = (min((arr_0 [i_1 + 1]), (((var_6 / (arr_0 [i_1 - 1]))))));
            }
        }
    }
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 268173312;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_18 = -1210048504;
                var_19 = (min(var_19, (arr_3 [i_0])));
            }
        }
    }
    #pragma endscop
}

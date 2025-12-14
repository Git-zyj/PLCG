/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_15 = max(((867001980 & (arr_1 [i_1]))), (arr_1 [i_0]));
                arr_7 [i_0] [i_0] = (1 + 1);
            }
        }
    }
    var_16 = 289965711;
    #pragma endscop
}

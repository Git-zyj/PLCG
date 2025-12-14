/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= (!111);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_1] = (((-72 != -20424) + (arr_3 [i_1 - 1] [i_0 + 1])));
                arr_5 [i_0 - 2] = ((!(((var_3 ? (arr_2 [i_0 - 2] [i_0 - 2] [i_0 - 3]) : var_6)))));
            }
        }
    }
    #pragma endscop
}

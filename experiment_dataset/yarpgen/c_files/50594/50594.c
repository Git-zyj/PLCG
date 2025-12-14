/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_17 = (arr_2 [i_1] [i_1]);
                var_18 = (((-(arr_2 [7] [i_1]))));
            }
        }
    }
    var_19 = (27015 | 0);
    #pragma endscop
}

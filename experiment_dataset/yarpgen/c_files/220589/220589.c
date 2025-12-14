/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_11 -= 16085047189069369267;
                arr_5 [i_0] [15] = (arr_4 [i_0] [i_0] [i_0]);
            }
        }
    }
    #pragma endscop
}

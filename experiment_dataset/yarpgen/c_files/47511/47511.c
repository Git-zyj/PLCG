/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += ((129443164 ? 1533519922 : 1300863126));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [12] = var_4;
                    arr_9 [i_0] = var_11;
                }
            }
        }
    }
    #pragma endscop
}

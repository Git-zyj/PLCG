/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1 - 1] [i_0] [i_1 + 1] = 30386;
                    arr_7 [i_0] [i_1] [i_0] = 1769891158023187422;
                    var_11 = var_7;
                }
            }
        }
    }
    var_12 = (30386 ? 30031 : var_5);
    #pragma endscop
}

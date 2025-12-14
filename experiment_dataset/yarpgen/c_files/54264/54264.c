/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_1 - 4] [i_1] [i_0] = (arr_2 [i_0 - 1] [i_0 - 1] [i_1 + 1]);
                arr_6 [i_1] [3] = var_10;
            }
        }
    }
    var_17 = ((((min(var_0, var_7))) ? 1 : ((min(232, var_6)))));
    #pragma endscop
}

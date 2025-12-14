/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = min(((-var_6 + (var_3 >= var_8))), 122175058504713543);
    var_13 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [2] = (!122175058504713542);
                arr_6 [i_0] = (2725610195145301651 ? var_5 : -3289952665540255531);
            }
        }
    }
    var_14 = var_3;
    #pragma endscop
}

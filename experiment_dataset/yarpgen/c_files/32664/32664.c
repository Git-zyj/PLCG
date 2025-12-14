/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((min(-16, 31)) < (((0 <= 0) ? (max(-38, 65525)) : var_4))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_7 [1] = 21;
                arr_8 [i_0] [i_0] = 249;
            }
        }
    }
    #pragma endscop
}

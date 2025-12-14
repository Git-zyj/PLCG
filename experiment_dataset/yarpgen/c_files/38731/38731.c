/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_15;
    var_18 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0 + 1] [i_1] [i_0] = ((5 & ((max(32767, 9851)))));
                arr_6 [i_0] [i_0] [i_0] = ((min(5, 65535)));
            }
        }
    }
    #pragma endscop
}

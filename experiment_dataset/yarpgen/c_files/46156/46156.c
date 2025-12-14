/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46156
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_15 = (max(var_15, 0));
                arr_5 [i_1] [i_0] = (((max(((max(255, var_12))), 0)) >> (var_13 != 2)));
            }
        }
    }
    var_16 = var_8;
    #pragma endscop
}

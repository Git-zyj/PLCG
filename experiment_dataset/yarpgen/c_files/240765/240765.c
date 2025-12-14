/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, (!var_17)));
    var_21 = (((min((((var_3 ? 1 : 58088))), var_17))) || var_14);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_22 += 249;
                var_23 ^= -var_1;
            }
        }
    }
    #pragma endscop
}

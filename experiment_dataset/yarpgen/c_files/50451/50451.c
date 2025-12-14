/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_15 *= (((((max(var_0, 288230376151711743)) / 20689)) >= (arr_1 [i_1 - 1])));
                var_16 -= 288230376151711743;
                var_17 = ((min(var_1, (arr_4 [i_0] [i_1] [i_1]))));
            }
        }
    }
    var_18 &= var_9;
    var_19 = 2074396800;
    #pragma endscop
}

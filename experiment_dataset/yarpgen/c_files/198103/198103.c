/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_16 += (max(-0, 0));
                arr_6 [i_0] [i_0] [i_0] = (!-var_14);
            }
        }
    }
    var_17 = (((((min(65535, var_10))) >> (65516 - 65489))));
    #pragma endscop
}

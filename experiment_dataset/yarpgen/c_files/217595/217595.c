/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, ((((min(var_12, var_2)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_15 |= (min(-var_6, (min(-465675249796464735, (-2532836836726377402 ^ var_8)))));
                var_16 -= -var_9;
            }
        }
    }
    var_17 = ((-((-(!-2532836836726377402)))));
    #pragma endscop
}

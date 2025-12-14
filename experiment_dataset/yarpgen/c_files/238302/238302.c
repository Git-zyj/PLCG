/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_15 = (((arr_2 [i_0] [i_0]) ? (((max((arr_3 [i_0]), var_10)))) : 3879617064776948441));
                var_16 = (3879617064776948441 / 3879617064776948441);
            }
        }
    }
    #pragma endscop
}

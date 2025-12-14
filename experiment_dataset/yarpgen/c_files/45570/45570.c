/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_14 = (min((arr_1 [i_0] [i_0 + 1]), 978120856168010478));
                var_15 = var_13;
            }
        }
    }
    var_16 *= min(var_7, ((((max(var_11, var_9))) ? (-9223372036854775788 && var_10) : 7994679781979512890)));
    var_17 = var_10;
    #pragma endscop
}

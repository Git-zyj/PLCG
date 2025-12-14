/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_15;
    var_20 ^= var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_21 = 2029942839;
                arr_7 [i_1 + 1] = ((max(-1137858003, 11245818807810739670)));
            }
        }
    }
    var_22 = min(var_11, 41);
    #pragma endscop
}

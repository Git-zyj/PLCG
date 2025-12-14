/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -18779;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_11 = ((~(min(1280404825059699036, 18779))));
                var_12 *= (max((arr_3 [i_0 - 1]), ((2836513481772969186 ? -1 : 15610230591936582423))));
            }
        }
    }
    #pragma endscop
}

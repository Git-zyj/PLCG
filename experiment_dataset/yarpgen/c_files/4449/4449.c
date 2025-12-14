/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] [i_0] = ((!((max(-31020, (0 / 49369))))));
                var_10 = ((((((((49369 ? 16166 : 31003))) + ((-1 ? var_8 : var_5))))) ? (~16166) : (max((max(0, 5)), (!4026)))));
            }
        }
    }
    var_11 = ((max((11899475060881823053 || -552613070), (min(49350, var_3)))));
    #pragma endscop
}

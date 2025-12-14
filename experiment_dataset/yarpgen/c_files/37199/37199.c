/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_12 = (min(var_12, (~-1553332973)));
                arr_6 [i_1] [i_1] = (((arr_5 [i_1 - 1]) != ((min(-102, (min((arr_3 [16]), 34006)))))));
            }
        }
    }
    var_13 = (((((var_1 ? (max(48380, var_11)) : 2033))) & ((var_6 << (var_1 + 11894)))));
    #pragma endscop
}

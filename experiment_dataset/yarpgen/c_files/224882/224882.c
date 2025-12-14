/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_13 = (((((min(var_0, var_11))) ? (arr_4 [i_1 + 1] [i_1 - 2] [i_1 - 2]) : ((min(-1469166987, 1469166987))))));
                var_14 = var_8;
                arr_6 [10] [i_1] [i_1] = 32767;
            }
        }
    }
    var_15 = (min((max((var_1 ^ var_0), (min(562949953421311, 45)))), (~1469166986)));
    var_16 |= var_0;
    #pragma endscop
}

/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            {
                var_13 = max((!-var_3), -66);
                var_14 = (max((arr_4 [i_0] [i_1 - 4] [i_1 + 1]), ((!(arr_4 [i_0] [i_0] [i_0])))));
            }
        }
    }
    #pragma endscop
}

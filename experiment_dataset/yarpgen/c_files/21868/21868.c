/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max((max((min(var_1, var_10)), 1)), (-88 - var_15)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_18 = (max(var_18, ((-180255140 ? -31 : (6000993796202028899 / 4294967295)))));
                var_19 &= ((arr_1 [16]) - ((1944830863 ? (arr_0 [i_0]) : (arr_0 [i_0]))));
                var_20 = (var_13 >= 173);
            }
        }
    }
    #pragma endscop
}
